/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

#include "eqlib/Common.h"

#include "eqlib/game/CXWnd.h"
#include "eqlib/game/UITemplates.h"
#include "eqlib/graphics/GraphicsEngine.h"
#include "eqstd/list.h"
#include "eqstd/memory.h"
#include "eqstd/string.h"
#include "eqstd/unordered_map.h"
#include "eqstd/unordered_set.h"
#include "eqstd/utility.h"
#include "eqstd/vector.h"

namespace eqlib {

class CGFScreenWnd;

// How GameFace screens work
// -------------------------
// A CGFScreenWnd is an ordinary CSidlScreenWnd: the classic child windows are still created from
// the screen XML and remain the owners of all window state and logic. The HTML/JS view is a mirror
// of that state, kept in sync through a flat key/value model store owned by the GF singleton.
//
// Each mirrored window or control is described by a component. Components derive their model key
// prefix from their parent:
//
//     screen:  itemPath = ScreenID                         modelPrefix = "ScreenID."
//     child:   itemPath = parent.modelPrefix + name        modelPrefix = itemPath + "."
//
// so a model key looks like "QuantityWnd.QTYW_Slider.Value".
//
//   C++ -> JS: CGFScreenWnd's virtual overrides (Show, SetLocked, Minimize, Center, ...) write the
//              screen's model keys, and window code calls SyncToJS() on child components whenever it
//              changes the classic control. Changed keys are sent with the next eq_sync_js.
//   JS -> C++: events are dispatched by screen name to HandleJsEvent(), which pulls the JS value into
//              the classic control (SyncFromJS) and then calls the screen's regular WndNotification
//              with the classic child as the sender.

// Selects how UIComponent::Setup locates the classic window that a component targets.
enum class EComponentLookup : int
{
	Explicit = 0,                // the window is passed in directly (used for the screen itself)
	SidlChild = 1,               // CSidlScreenWnd::GetChildItem(name)
	Child = 2,                   // CXWnd::GetChildItem(name)
};

// Common identity of every component: the names that tie a classic window to its keys in the model.
struct [[offsetcomments]] UIComponentPath
{
/*0x00*/ eqstd::string name;           // child name, e.g. "QTYW_Slider", or the ScreenID for a screen
/*0x20*/ eqstd::string itemPath;       // parent.modelPrefix + name
/*0x40*/ eqstd::string modelPrefix;    // itemPath + "."
/*0x60*/

	const eqstd::string& GetItemPath() const { return itemPath; }
};

// Base of the components with virtual functions.
template <typename T>
class BaseComponent : public UIComponentPath
{
public:
	using XWndType = T;

	virtual eqstd::string GetTypeName() const { return "UIComponent"; }
	virtual void SyncFromJS() {}         // read this component's model keys into the target window
	virtual void SyncToJS() {}           // write the target window's state into the model

	T* GetTarget() const { return target; }
	bool IsValid() const { return !name.empty() && target != nullptr; }

/*0x00*/ // vftable
/*0x08*/ // UIComponentPath: name, itemPath, modelPrefix
/*0x68*/ CGFScreenWnd* parent;
/*0x70*/ T*            target;         // the classic window that this component mirrors
/*0x78*/ eqstd::string tooltip;        // last value written to "Tooltip"
/*0x98*/ CXPoint       eventPosition;  // position of the last JS event delivered to this component
/*0xa0*/
};

class [[offsetcomments]] UIComponent : public BaseComponent<CXWnd>
{
public:
	void Setup(CGFScreenWnd* parentScreenWnd, const eqstd::string& name, EComponentLookup lookup, CXWnd* wnd);
};

class UIStaticAnimationTemplate : public BaseComponent<CStaticAnimationTemplate>
{
public:
};

// Component for the screen itself.
class [[offsetcomments]] UIScreenComponent : public UIComponent
{
public:
	virtual eqstd::string GetTypeName() const override { return "UIScreen"; }

	// Example model properties: Visible, Opacity, ZClass, Locked, Minimized, BackgroundUseTexture,
	// BackgroundTintColor ("#rrggbb"), Movement ("Center", "Top", "Left", ...), IniState, PosX/PosY.

/*0xa0*/ uint8_t       opacity;        // last value written to "Opacity", starts at 0xff
/*0xa4*/
};

class [[offsetcomments]] UILabelComponent : public BaseComponent<CLabel>
{
public:
	virtual eqstd::string GetTypeName() const override { return "UILabel"; }
};

class [[offsetcomments]] UIGaugeComponent : public BaseComponent<CGaugeWnd>
{
public:
	virtual eqstd::string GetTypeName() const override { return "UIGauge"; }
};

class [[offsetcomments]] UIButtonComponent : public BaseComponent<CButtonWnd>
{
public:
	virtual eqstd::string GetTypeName() const override { return "UIButton"; }

	// Example model properties: Checked, HighlightColor

/*0xa0*/ uint32_t      highlightColor; // last value written to "HighlightColor" (ARGB)
/*0xa4*/
};

class [[offsetcomments]] UISliderComponent : public BaseComponent<CSliderWnd>
{
public:
	virtual eqstd::string GetTypeName() const override { return "UISlider"; }

	// Example model properties: Value
};

class [[offsetcomments]] UIEditComponent : public BaseComponent<CEditWnd>
{
public:
	virtual eqstd::string GetTypeName() const override { return "UIEdit"; }

	// Example model properties: Text, SetFocus, EditMode.
	// EditMode: 0 "Normal", 1 "Name", 2 "AlphaOnly", 3 "NumericOnly", 4 "AlphaNumOnly".
};

class [[offsetcomments]] UIListComponent : public BaseComponent<CListWnd>
{
public:
	virtual eqstd::string GetTypeName() const override { return "UIList"; }

	// Example model properties: Selected, Visible, ColumnsJustification
};

class [[offsetcomments]] UIComboComponent : public BaseComponent<CComboWnd>
{
public:
	virtual eqstd::string GetTypeName() const override { return "UICombo"; }

	// Example model properties: Selected, Choices
};

class [[offsetcomments]] UITabComponent : public BaseComponent<CTabWnd>
{
public:
	virtual eqstd::string GetTypeName() const override { return "UITab"; }

	// Example model properties: Index
};

class [[offsetcomments]] UIStmlComponent : public BaseComponent<CStmlWnd>
{
public:
	virtual eqstd::string GetTypeName() const override { return "UIStml"; }

	// Example model properties: Content, Color
};

// Inventory slot component
class [[offsetcomments]] UIInvSlotComponent : public UIComponentPath
{
public:
	CInvSlotWnd* GetTarget() const { return target; }
	bool IsValid() const { return !name.empty() && target != nullptr; }

	// Example model properties: Image, Quantity, CooldownValue, CooldownColor, PowerBarValue, PowerBarColor,
	// BackgroundTintColor, HighlightColor, Tooltip, ChargesEvolving, Enabled, Visible.

/*0x00*/ // UIComponentPath: name, itemPath, modelPrefix
/*0x60*/ CInvSlotWnd*  target;
/*0x68*/ int           quantity;              // "Quantity"; -2 = never sent, negative sends an empty value
/*0x6c*/ float         cooldown;              // "CooldownValue", remaining fraction (1 - progress); -1 = never sent
/*0x70*/ float         powerBar;              // "PowerBarValue"; -1 = never sent
/*0x74*/ uint32_t      cooldownColor;         // "CooldownColor"
/*0x78*/ uint32_t      powerBarColor;         // "PowerBarColor"
/*0x7c*/ uint32_t      backgroundTintColor;   // "BackgroundTintColor"
/*0x80*/ uint32_t      highlightColor;        // "HighlightColor"
/*0x88*/ eqstd::string tooltip;               // "Tooltip"
/*0xa8*/
};

// One UI event record. JS -> C++ events arrive '$'-separated with '@'-separated fields in the
// string argument of cpp_on_news_from_js; C++ -> JS events are sent flattened 6 strings at a time
// as the second argument of eq_sync_js.
struct [[offsetcomments]] GFJsEvent
{
/*0x00*/ eqstd::string dispatch;    // target screen name (e.g. "InventoryWindow"; "InvSlots" goes to CInvSlotMgr)
/*0x20*/ eqstd::string sender;      // item path of the component that raised the event (key into ChildComponents)
/*0x40*/ eqstd::string message;     // "EventLClick", "EventRButtonDown", "EventCloseBox", "EventWindowRectChanged", ...
/*0x60*/ eqstd::string modifiers;   // '|' separated: "Ctrl", "Shift", "Alt"
/*0x80*/ eqstd::string params;      // comma separated, e.g. "X,Y" for EventRButtonDown
/*0xa0*/ eqstd::string position;    // comma separated x,y
/*0xc0*/
};
static_assert(sizeof(GFJsEvent) == 0xc0);

// GFJsEvent::modifiers, parsed.
struct GFEventModifiers
{
	bool ctrl;
	bool shift;
	bool alt;
};

class [[offsetcomments]] CGFScreenWnd : public CSidlScreenWnd
{
public:
	// When the new UI engine is enabled, the constructor registers the screen with GF,
	// sets up WindowComponent for the screen and hides the classic window.
	EQLIB_OBJECT CGFScreenWnd(CXWnd* parent = nullptr, bool useClassicUI = true, const CXStr& screenName = CXStr());
	EQLIB_OBJECT CGFScreenWnd(CXWnd* parent, bool useClassicUI, const CXStr& screenName, int IniFlags, int IniVersion, const char* BlockName);
	EQLIB_OBJECT virtual ~CGFScreenWnd();

	// Calls component.Setup(this, name, lookup, nullptr) and registers it in ChildComponents by item path.
	// Derived constructors call this for every control they expose, after CreateChildrenFromSidl().
	void SetupComponent(UIComponent& component, const eqstd::string& name, EComponentLookup lookup);

	// Handles an event from JS: converts the message to a notification, calls SyncFromJS() on the
	// sending component and forwards to WndNotification(component target, notification, ...).
	// EventLClick on a sender that isn't a registered component goes to OnJsLClick.
	EQLIB_OBJECT virtual void HandleJsEvent(const GFJsEvent* event);

	// EventLClick on a sender that isn't one of this screen's components. No-op by default;
	// CGroupWnd uses it to target the clicked group member.
	EQLIB_OBJECT virtual void OnJsLClick(const eqstd::string& sender, const GFEventModifiers& modifiers, const CXPoint& position);

	using CXWnd::Center;
	EQLIB_OBJECT virtual void Center(const CXRect& rect);

/*0x2d0*/ UIScreenComponent                                 WindowComponent;
/*0x378*/ eqstd::unordered_map<eqstd::string, UIComponent*> ChildComponents;   // keyed by item path
/*0x3b8*/

	struct [[offsetcomments]] VirtualFunctionTable : public CSidlScreenWnd::VirtualFunctionTable
	{
	/*0x380*/ void* HandleJsEvent;
	/*0x388*/ void* OnJsLClick;
	/*0x390*/ void* Center;
	/*0x398*/
	};

	// Returns the current instance of this class's vftable. Might represent some other
	// inherited class (and not CSidlScreenWnd's)
	VirtualFunctionTable* GetVFTable()
	{
		if (this == nullptr) return nullptr;
		return *reinterpret_cast<VirtualFunctionTable**>(this);
	}

	void ReplaceVFTable(VirtualFunctionTable* table)
	{
		if (this == nullptr) return;
		*reinterpret_cast<VirtualFunctionTable**>(this) = table;
	}

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;
};

//----------------------------------------------------------------------------

EQLIB_VAR bool gbUseNewUIEngine;

template <typename Component, typename T = typename Component::XWndType>
T* GetNewUIEngineWindow(T* old, const Component& component)
{
	if (gbUseNewUIEngine)
	{
		return component.name.empty() ? nullptr : static_cast<T*>(component.target);
	}

	return old;
}


namespace cohtml {

//============================================================================
// IAllocator
//============================================================================

enum class MemTags
{
	Unknown = 0,
	Untagged,
	System,
	Logging,
	Loader,
	DOM,
	DOMStatic,
	Layout,
	CSS,
	CSSStatic,
	TaskSystemMemory,
	Display,
	Profiling,
	HTMLParser,
	TempAllocator,
	PoolAllocator,
	Dump,
	Script,
	XML,
	Server,
	Inspector,
	SVG,
	UnityPlugin,
	UriParser,
	Media,
	JSON,

	Count
};

class IAllocator
{
public:
	IAllocator();

	virtual void* Allocate(unsigned size, cohtml::MemTags memtag) = 0;
	virtual void* Reallocate(void* ptr, unsigned size, cohtml::MemTags memtag) = 0;
	virtual void Deallocate(void* ptr, cohtml::MemTags memtag) = 0;
	virtual void* AlignedAllocate(unsigned size, unsigned alignment, cohtml::MemTags memtag) = 0;
	virtual void AlignedDeallocate(void* ptr, cohtml::MemTags memtag) = 0;
	virtual void* VirtualAllocate(void* hint, unsigned size, int protection, int flags, cohtml::MemTags memtag) = 0;
	virtual bool VirtualFree(void* ptr, unsigned size, int flags, cohtml::MemTags memtag) = 0;
	virtual ~IAllocator();
};

//============================================================================
// IAsyncResourceHandler
//============================================================================

class IAsyncResourceRequest;
class IAsyncResourceResponse;
class IAsyncResourceStreamResponse;

//============================================================================

class IAsyncResourceHandler
{
public:
	IAsyncResourceHandler();
	virtual ~IAsyncResourceHandler();

	virtual void OnResourceRequest(const cohtml::IAsyncResourceRequest* request,
		cohtml::IAsyncResourceResponse* response) = 0;

	virtual void OnResourceStreamRequest(const cohtml::IAsyncResourceRequest* request,
		cohtml::IAsyncResourceStreamResponse* response) = 0;

	virtual void OnAbortResourceRequest(unsigned id) = 0;
};

//============================================================================
// IViewListener
//============================================================================

struct ScreenInfo
{
	uint32_t Width;
	uint32_t Height;
	uint32_t AvailableWidth;
	uint32_t AvailableHeight;
	uint32_t ColorDepth;
	uint32_t PixelDepth;
};

struct EventModifiersState
{
	bool shift;
	bool ctrl;
	bool alt;
	bool meta;
	bool numLock;
	bool capsLock;
};

struct EventMouseModifiersState
{
	bool left;
	bool middle;
	bool right;
	bool back;
	bool forward;
};

enum InterceptRequestStatus
{
	Allow,
	Restrict,
};

enum class EventAction
{
	ContinueHandling,
	InterruptHandling,
};

enum class InputEventPhase
{
	None,
	Capturing,
	AtTarget,
	Bubbling,
};

enum class TextInputControlType
{
	TextInput,
	Other,
};

enum class CursorTypes
{
	Alias,
	AllScroll,
	Auto,
	Cell,
	ContextMenu,
	ColResize,
	Copy,
	Crosshair,
	Default,
	EResize,
	EWResize,
	Grab,
	Grabbing,
	Help,
	Move,
	NResize,
	NEResize,
	NESWResize,
	NSResize,
	NWResize,
	NWSEResize,
	NoDrop,
	None,
	NotAllowed,
	Pointer,
	Progress,
	RowResize,
	SResize,
	SEResize,
	SWResize,
	Text,
	URL,
	VerticalText,
	WResize,
	Wait,
	ZoomIn,
	ZoomOut,
};

class INodeProxy;
struct TouchEventData;

// Data for a cohtml mouse event
struct MouseEventData
{
	enum EventType
	{
		MouseMove,
		MouseDown,
		MouseUp,
		MouseWheel,
		MouseLeave,
	};

	enum MouseButton
	{
		MouseLeft,
		MouseMiddle,
		MouseRight,
		ButtonBack,
		ButtonForward,
	};

	EventType type;
	MouseButton button;
	int x;
	int y;
	float wheelX;
	float wheelY;
	int deltaX;
	int deltaY;
	EventModifiersState modifiers;
	EventMouseModifiersState mouseModifiers;
};

// Data for a cohtml keyboard event
struct KeyEventData
{
	enum EventType
	{
		Unknown,
		KeyDown,
		KeyUp,
		Char,
	};

	enum EventLocation
	{
		Standard,
		Left,
		Right,
		Numpad,
	};

	int keyCode;
	EventType type;
	EventModifiersState modifiers;
	EventLocation location;
	bool isAutoRepeat;
	bool isNumPad;
	bool isSystemKey;
};

struct IClipboardData
{
	virtual void Set(const char* text, unsigned int lengthBytes) = 0;
	virtual ~IClipboardData() {}
};

class IClientSideSocket;
class ISocketListener;

class IViewListener
{
public:
	virtual ~IViewListener();
	virtual bool OnNavigateTo(const char* url);
	virtual cohtml::InterceptRequestStatus OnResourceRequestIntercepted(const char* url);
	virtual void OnScriptContextCreated();
	virtual void OnDOMBuilt();
	virtual void OnLoadFailed(const char* url, const char* error);
	virtual void OnFinishLoad(const char* url);
	virtual void OnReadyForBindings(); // overridden
	virtual void OnBindingsReleased(); // overridden
	virtual cohtml::ScreenInfo OnScreenInfoRequested();
	virtual cohtml::EventAction OnNodeTouched(const cohtml::INodeProxy* node,
		const cohtml::TouchEventData* event, void* userData, cohtml::InputEventPhase phase);
	virtual cohtml::EventAction OnNodeMouseEvent(const cohtml::INodeProxy* node,
		const cohtml::MouseEventData* event, void* userData, cohtml::InputEventPhase phase);
	virtual cohtml::EventAction OnNodeKeyEvent(const cohtml::INodeProxy* node,
		const cohtml::KeyEventData* event, void* userData, cohtml::InputEventPhase phase);
	virtual void OnAudioStreamCreated(int id, int bitDepth, int channels, float samplingRate);
	virtual void OnAudioStreamClosed(int id);
	virtual void OnAudioStreamPlay(int id);
	virtual void OnAudioStreamPause(int id);
	virtual void OnAudioDataReceived(int id, int samples, float** pcm, int channels);
	virtual void OnAudioStreamEnded(int id);
	virtual void OnAudioStreamVolumeChanged(int id, float volume);
	virtual void OnTextInputTypeChanged(cohtml::TextInputControlType type);
	virtual void OnCaretRectChanged(int x, int y, unsigned int width, unsigned int height);
	virtual void OnCursorChanged(cohtml::CursorTypes cursor, const char* url, const float* xHotSpot, const float* yHotSpot); // overridden
	virtual void OnClipboardTextSet(const char* text, unsigned int lengthBytes);
	virtual void OnClipboardTextGet(cohtml::IClipboardData*);
	virtual cohtml::IClientSideSocket* OnCreateWebSocket(cohtml::ISocketListener* listener, const char* url, const char** protocol, unsigned int protocolsCount);
};

//============================================================================
// ILogHandler
//============================================================================

namespace Logging {

enum Severity
{
	Trace,
	Debug,
	Info,
	Warning,
	Error,
	Critical,
	SeveritiesCount,
};

class ILogHandler
{
public:
	ILogHandler();
	virtual ~ILogHandler();

	virtual void WriteLog(cohtml::Logging::Severity, const char* message, size_t length) = 0;
};

// cohtml's internal logger, created by Library::Initialize from LibraryParams. Messages below
// MinSeverity are dropped before they reach the handler.
struct Logger
{
/*0x00*/ Severity               MinSeverity;
/*0x04*/ bool                   OwnsHandler;
/*0x08*/ ILogHandler*           Handler;
};

} // namespace Logging;

//============================================================================
// Initialization settings.
//============================================================================

struct LibraryParams
{
/*0x00*/ uint8_t                Unknown0x00[0x10];
/*0x10*/ Logging::Severity      LoggingSeverity;           // EQ passes Error
/*0x18*/ Logging::ILogHandler*  LogHandler;
};

struct SystemSettings
{
/*0x00*/ uint8_t                Unknown0x00[0x68];
/*0x68*/ int                    DebuggerPort;              // EQ passes -1
/*0x6c*/ bool                   EnableDebugger;            // starts the remote debugger on DebuggerPort
/*0x6d*/ bool                   AsynchronousResourceRequestCalls;
};

//============================================================================

class Binder;
class ImagesList;
class Property;
class ScriptCompiler;
class SystemCacheStats;
class System;
class SystemRenderer;
class TypeDescription;
class TypeInfo;
class View;
class ViewRenderer;
struct FontDescription;
struct GamepadState;
struct GamepadStateExtended;
struct GestureEventData;
struct SystemRendererSettings;
struct SystemRendererSettingsWithExternalRenderingLibrary;
struct Texture2D;                // renoir::Texture2D
struct UserFontDescription;
struct ViewSettings;

//----------------------------------------------------------------------------
// The cohtml interfaces EQ talks to across the DLL boundary.
//
// Slots were identified from the implementation vtables in cohtml.WindowsDesktop.dll and from eqgame's
// call sites. UnknownNNN slots have no known name; their comments describe what the implementation does.
//
// (EQ) marks slots that eqgame calls.

class Library
{
public:
/*0x00*/ virtual ~Library();
/*0x08*/ virtual System* CreateSystem(const SystemSettings& settings) = 0;  // (EQ)
/*0x10*/ virtual void StopWorkers() = 0;
/*0x18*/ virtual void Uninitialize(bool freeGlobalSdkMemory = false) = 0;   // (EQ)
/*0x20*/ virtual void* GetFeatureInterface(unsigned featureId) = 0;         // non-null for ids 4 and 5
/*0x28*/ virtual void ExecuteWork(int workType, int executionMode, unsigned taskFamilyId) = 0;
/*0x30*/ virtual void* ReservedMethod(void* command, void* data) = 0;       // only logs a profiling message in shipping builds
/*0x38*/ virtual void Unknown0x38() = 0;                                    // (uint64 n) n < 100000 -> rendering library
/*0x40*/ virtual ScriptCompiler* CreateScriptCompiler() = 0;
/*0x48*/ virtual void Unknown0x48() = 0;                                    // creates an object from the rendering library
/*0x50*/ virtual void Unknown0x50() = 0;                                    // creates an object from the rendering library
/*0x58*/ virtual void Unknown0x58() = 0;                                    // forwards to the rendering library
};

class System
{
public:
/*0x00*/ virtual unsigned GetId() = 0;
/*0x08*/ virtual void SetId(unsigned id) = 0;
/*0x10*/ virtual ~System();
/*0x18*/ virtual View* CreateView(const ViewSettings& settings) = 0;                       // (EQ)
/*0x20*/ virtual SystemCacheStats* GetSystemCacheStats() = 0;                             // release with SystemCacheStats::Release
/*0x28*/ virtual void ClearCachedUnusedImages() = 0;
/*0x30*/ virtual SystemRenderer* CreateSystemRenderer(const SystemRendererSettings& settings) = 0;  // (EQ)
/*0x38*/ virtual SystemRenderer* CreateSystemRendererWithExternalRenderingLibrary(
	const SystemRendererSettingsWithExternalRenderingLibrary& settings) = 0;              // settings are ignored
/*0x40*/ virtual void AddFontsFromFolder_DEPRECATED(const char* path) = 0;                // name tentative
/*0x48*/ virtual void RegisterFont(const char* url, const FontDescription& description, int useSDF) = 0;
/*0x50*/ virtual bool Unknown0x50(unsigned id) = 0;                                       // font, possibly unregister by id
/*0x60*/ virtual void AddUserFont(const char** imagesData, unsigned* imagesDataSize, unsigned imagesCount,
	const UserFontDescription& description) = 0;
/*0x58*/ virtual void AddUserFont(const void* userImages, unsigned imagesCount,           // IAsyncResourceResponse::UserImageData
	const UserFontDescription& description) = 0;
/*0x68*/ virtual bool Unknown0x68(const void* description) = 0;                           // font, removes a matching user font
/*0x70*/ virtual void SetDefaultFallbackFontName(const char* name) = 0;
/*0x78*/ virtual void Destroy() = 0;                                                      // (EQ)
/*0x80*/ virtual void Advance(double timeMilliseconds) = 0;
/*0x88*/ virtual void RegisterGamepad(unsigned id, const char* info, unsigned axesCount, unsigned buttonsCount, void* reserved) = 0;
/*0x90*/ virtual void UnregisterGamepad(unsigned id) = 0;
/*0x98*/ virtual void UpdateGamepadState(const GamepadState& state) = 0;
/*0xa0*/ virtual void UpdateGamepadStateExtended(const GamepadStateExtended& state) = 0;
/*0xa8*/ virtual void UserImagesChanged(const unsigned* images, unsigned count) = 0;
/*0xb0*/ virtual void PreloadAndCacheStylesheet(const char* url) = 0;
/*0xb8*/ virtual bool RemoveStylesheetCacheEntry(const char* url) = 0;
/*0xc0*/ virtual void ClearStylesheetCache() = 0;
/*0xc8*/ virtual void PreloadAndCacheHTML(const char* url) = 0;
/*0xd0*/ virtual bool RemoveHTMLCacheEntry(const char* url) = 0;
/*0xd8*/ virtual void ClearHTMLCache() = 0;
};

//----------------------------------------------------------------------------

struct ViewRendererSettings {};

class SystemRenderer {
public:
/*0x00*/ virtual ~SystemRenderer();
/*0x08*/ virtual ViewRenderer* CreateViewRenderer(View* owner, const ViewRendererSettings& settings) = 0;
/*0x10*/ virtual void Destroy() = 0;
/*0x18*/ virtual void RegisterRenderThread(void* /* renoir::RendererBackend* */ backend) = 0;
/*0x20*/ virtual void FreeRenderingResources() = 0;
};

//----------------------------------------------------------------------------
// Objects returned by the View/System debug calls. Each is released through its own Release().

// View::DebugDumpDOMTree / DebugDumpStackingContextTree
class DebugDump
{
public:
/*0x00*/ virtual void Release() = 0;

/*0x08*/ const char* dump;                     // points into the std::string that follows
};

// View::CaptureSingleDebugFrame and friends (.rend)
class FrameCapture
{
public:
/*0x00*/ virtual void Release() = 0;

/*0x08*/ const char* data;
/*0x10*/ uint64_t    size;
};

// View::DoPageCapture (.pcap)
class PageCapture
{
public:
/*0x00*/ virtual void Release() = 0;

/*0x08*/ const char* data;
/*0x10*/ uint64_t    size;
};

using FrameCaptureCallback = void(*)(void* userData, FrameCapture* capture);

// View::GetUsedImagesList
class ImagesList
{
public:
/*0x00*/ virtual const char* Next() = 0;       // null at the end
/*0x08*/ virtual void ResetIterator() = 0;
/*0x10*/ virtual void Release() = 0;
};

struct ImageData;                              // element is ~0x30 bytes

// SystemCacheStats::GetImageCacheStats (points 8 bytes into the SystemCacheStats object)
struct ImageCacheStats
{
/*0x00*/ ImageData* aliveImages;
/*0x08*/ unsigned   aliveImagesCount;
/*0x0c*/ unsigned   aliveTotalBytesUsed;
/*0x10*/ void*      orphanedImages;
/*0x18*/ unsigned   orphanedImagesCount;
/*0x1c*/ unsigned   orphanedBytesUsed;
};

// System::GetSystemCacheStats
class SystemCacheStats
{
public:
/*0x00*/ virtual ~SystemCacheStats();
/*0x08*/ virtual void Release() = 0;
/*0x10*/ virtual const ImageCacheStats* GetImageCacheStats() = 0;
};

//----------------------------------------------------------------------------

class ArgumentsBinder;

class IEventHandler {
public:
	virtual ~IEventHandler() {}
	virtual void Invoke(ArgumentsBinder* binder) = 0;
	virtual const void* GetTarget() = 0;
	virtual void SetTarget(void* target) = 0;
};

// Values crossing the binding layer in either direction. Implemented by cohtml (V8 binder).
class Binder
{
public:
/*0x000*/ virtual ~Binder();
/*0x010*/ virtual TypeDescription RegisterType(const char* name, void* object) = 0;
/*0x008*/ virtual TypeDescription RegisterType(const char* name, const void* object) = 0;
/*0x018*/ virtual void AddProperty(void* object, const Property& property) = 0;
/*0x020*/ virtual void AddMethod(const char* name, IEventHandler* handler) = 0;
/*0x028*/ virtual void BeginType() = 0;
/*0x038*/ virtual void ReadType() = 0;
/*0x030*/ virtual bool ReadType(const char* name) = 0;
/*0x040*/ virtual TypeInfo* GetTypeInfo() = 0;
/*0x048*/ virtual void EndType(void* object) = 0;
/*0x050*/ virtual void BeginEvent(const char* name, int argCount) = 0;             // (EQ)
/*0x058*/ virtual void EndEvent() = 0;                                             // (EQ)
/*0x060*/ virtual void BeginExposeObject() = 0;
/*0x068*/ virtual void SetAsGlobal(const char* name, void* object) = 0;
/*0x070*/ virtual void Unknown0x070(bool value) = 0;                               // sets a flag (+0x5D)
/*0x078*/ virtual bool Unknown0x078() = 0;                                         // returns that flag
/*0x080*/ virtual void SetMode(int mode) = 0;                                      // BindingMode: 0 value, 1 scoped, 2 type info, 3 (unknown)
/*0x088*/ virtual int GetMode() = 0;
/*0x090*/ virtual void Unknown0x090() = 0;                                         // clears the string Bind(const char*) records in mode 3
/*0x098*/ virtual bool BindObject(TypeInfo* type, void* object) = 0;
/*0x0a0*/ virtual void TypeName(const char* name) = 0;
/*0x0a8*/ virtual void PropertyName(const char* name) = 0;
/*0x0b0*/ virtual void BindUndefined() = 0;
/*0x0b8*/ virtual void BindNull() = 0;
/*0x140*/ virtual void Bind(bool value) = 0;
/*0x138*/ virtual void Bind(short value) = 0;
/*0x130*/ virtual void Bind(unsigned short value) = 0;
/*0x128*/ virtual void Bind(int value) = 0;
/*0x120*/ virtual void Bind(unsigned int value) = 0;
/*0x118*/ virtual void Bind(long long value) = 0;
/*0x110*/ virtual void Bind(unsigned long long value) = 0;
/*0x108*/ virtual void Bind(long value) = 0;
/*0x100*/ virtual void Bind(unsigned long value) = 0;
/*0x0f8*/ virtual void Bind(signed char value) = 0;
/*0x0f0*/ virtual void Bind(unsigned char value) = 0;
/*0x0e8*/ virtual void Bind(float value) = 0;
/*0x0e0*/ virtual void Bind(double value) = 0;
/*0x0d8*/ virtual void Bind(const char* value) = 0;                                // (EQ)
/*0x0d0*/ virtual void Bind(const wchar_t* value) = 0;
/*0x0c8*/ virtual void Bind(const char16_t* value) = 0;
/*0x0c0*/ virtual void Bind(const char32_t* value) = 0;
/*0x150*/ virtual void BindArray(const int* values, size_t count) = 0;
/*0x148*/ virtual void BindArray(const float* values, size_t count) = 0;
/*0x158*/ virtual bool TryBindArrayByRef(void* arr, void* elementBinder, void* elementReader,
	void* lengthGetter, void* elementGetter) = 0;                                    // (EQ)
/*0x160*/ virtual void ArrayBegin(size_t count) = 0;                               // (EQ)
/*0x168*/ virtual void ArrayEnd() = 0;                                             // (EQ)
/*0x170*/ virtual void MapBegin(size_t count) = 0;
/*0x178*/ virtual void MapEnd() = 0;
/*0x180*/ virtual void OnTypeBegin() = 0;
/*0x188*/ virtual void OnTypeEnd() = 0;
/*0x190*/ virtual void OnReadTypeBegin() = 0;
/*0x198*/ virtual void OnReadTypeEnd() = 0;
/*0x1a0*/ virtual void SkipValue() = 0;
/*0x1a8*/ virtual void ReadNull() = 0;
/*0x238*/ virtual void Read(bool& value) = 0;
/*0x230*/ virtual void Read(short& value) = 0;
/*0x228*/ virtual void Read(unsigned short& value) = 0;
/*0x220*/ virtual void Read(int& value) = 0;
/*0x218*/ virtual void Read(unsigned int& value) = 0;
/*0x210*/ virtual void Read(long long& value) = 0;
/*0x208*/ virtual void Read(unsigned long long& value) = 0;
/*0x200*/ virtual void Read(long& value) = 0;
/*0x1f8*/ virtual void Read(unsigned long& value) = 0;
/*0x1f0*/ virtual void Read(char& value) = 0;
/*0x1e8*/ virtual void Read(signed char& value) = 0;
/*0x1e0*/ virtual void Read(unsigned char& value) = 0;
/*0x1d8*/ virtual void Read(float& value) = 0;
/*0x1d0*/ virtual void Read(double& value) = 0;
/*0x1c8*/ virtual void Read(const char*& buffer, size_t& size) = 0;                // (EQ)
/*0x1c0*/ virtual void Read(const wchar_t*& buffer, size_t& size) = 0;
/*0x1b8*/ virtual void Read(const char16_t*& buffer, size_t& size) = 0;
/*0x1b0*/ virtual void Read(const char32_t*& buffer, size_t& size) = 0;
/*0x240*/ virtual bool ReadProperty(const char* name) = 0;
/*0x248*/ virtual void ReadAsString(const char*& buffer, size_t& size) = 0;
/*0x250*/ virtual size_t ReadArrayBegin() = 0;                                     // (EQ)
/*0x258*/ virtual void ReadArrayElement(size_t index) = 0;                         // (EQ)
/*0x260*/ virtual void ReadArrayEnd() = 0;                                         // (EQ)
/*0x268*/ virtual size_t ReadMapBegin() = 0;
/*0x270*/ virtual void ReadKeyValuePair() = 0;
/*0x278*/ virtual void ReadMapEnd() = 0;
/*0x280*/ virtual int PeekValueType() = 0;                                         // ValueType
};

// Arguments and result of an incoming call (IEventHandler::Invoke).
class ArgumentsBinder
{
public:
/*0x00*/ virtual ~ArgumentsBinder();
/*0x08*/ virtual Binder* GetArgument(int index) = 0;                               // (EQ)
/*0x10*/ virtual Binder* ResultBegin() = 0;
/*0x18*/ virtual void ResultEnd() = 0;
/*0x20*/ virtual void ResultVoid() = 0;                                            // (EQ) after a successful call
/*0x28*/ virtual int GetArgumentsCount() = 0;
/*0x30*/ virtual bool HasError() = 0;                                              // (EQ)
};

class View
{
public:
/*0x000*/ virtual ~View();
/*0x008*/ virtual void Destroy() = 0;
/*0x010*/ virtual void LoadURL(const char* url) = 0;
/*0x018*/ virtual void Reload() = 0;
/*0x020*/ virtual void UnloadDocument() = 0;                                       // (EQ) called when the UI is reloaded
/*0x028*/ virtual void ClearNavigationHistory() = 0;
/*0x030*/ virtual unsigned Advance(double timeMilliseconds) = 0;                   // (EQ) every frame
/*0x038*/ virtual unsigned GetId() = 0;
/*0x040*/ virtual unsigned GetTaskFamilyId() = 0;
/*0x048*/ virtual void Resize(unsigned width, unsigned height) = 0;
/*0x050*/ virtual void SetUserBackground(void* userTexture, const Texture2D& description) = 0;
/*0x058*/ virtual void SetGlobalBackdropFilterMask(void* texture, const Texture2D& description) = 0;  // name tentative
/*0x060*/ virtual void SetUserBackgroundOffset(float x, float y) = 0;
/*0x068*/ virtual void SetResolutionForRendering(unsigned width, unsigned height) = 0;
/*0x070*/ virtual unsigned GetWidth() = 0;
/*0x078*/ virtual unsigned GetHeight() = 0;
/*0x080*/ virtual void OnListenerLost() = 0;
/*0x088*/ virtual void EnableRendering(bool enable) = 0;
/*0x090*/ virtual void EnableImmediateLayout(bool enable) = 0;
/*0x098*/ virtual bool IsImmediateLayoutEnabled() = 0;
/*0x0a0*/ virtual void ContinuousRepaint(bool enable) = 0;
/*0x0a8*/ virtual void EnableUISurfacePartitioning(bool enable) = 0;
/*0x0b0*/ virtual void ShowPaintRectangles(bool enable) = 0;                       // stub in shipping builds
/*0x0b8*/ virtual void ShowElementAABBs(bool enable) = 0;
/*0x0c0*/ virtual void EmitRenderingMetadata(bool enable) = 0;
/*0x0c8*/ virtual bool SetAdditionalFontFallbacks(const char* fontFamilies) = 0;
/*0x0d0*/ virtual DebugDump* DebugDumpDOMTree(unsigned flags) = 0;                 // flags: 2 = styles, 4 = layout
/*0x0d8*/ virtual DebugDump* DebugDumpStackingContextTree() = 0;
/*0x0e0*/ virtual bool Unknown0x0e0() = 0;                                         // inspector attached? (tentative)
/*0x0e8*/ virtual void TouchEvent(const TouchEventData* events, unsigned count, bool* handled, void* userData) = 0;
/*0x0f0*/ virtual void GestureEvent(const GestureEventData& event, bool* handled, void* userData) = 0;
/*0x0f8*/ virtual void MouseEvent(const MouseEventData& event, bool* handled, void* userData) = 0;  // (EQ)
/*0x100*/ virtual void KeyEvent(const KeyEventData& event, bool* handled, void* userData) = 0;      // (EQ)
/*0x108*/ virtual bool IMESetComposition(const char* composition) = 0;
/*0x110*/ virtual bool IMEConfirmComposition(const char* composition) = 0;
/*0x118*/ virtual bool IMECancelComposition() = 0;
/*0x120*/ virtual float GetStartPanThreshold() = 0;
/*0x128*/ virtual void SetStartPanThreshold(float value) = 0;
/*0x130*/ virtual void SetUserAgent(const char* userAgent) = 0;
/*0x138*/ virtual ImagesList* GetUsedImagesList(int options) = 0;                  // options: 0 visible, 1 hidden, 2 styles
/*0x140*/ virtual void BeginCaptureDebugFrame(void* userData, FrameCaptureCallback callback, int mode) = 0;
/*0x148*/ virtual void EndCaptureDebugFrame() = 0;
/*0x150*/ virtual void CaptureSingleDebugFrame(void* userData, FrameCaptureCallback callback, int mode) = 0;
/*0x158*/ virtual void BeginCaptureBackendDebugFrame(void* userData, FrameCaptureCallback callback) = 0;
/*0x160*/ virtual void EndCaptureBackendDebugFrame() = 0;
/*0x168*/ virtual void SetupPageCapture() = 0;
/*0x170*/ virtual PageCapture* DoPageCapture() = 0;                                // requires SetupPageCapture
/*0x178*/ virtual void LoadPageCapture(const char* data, size_t size, bool useOriginalHTML) = 0;
/*0x180*/ virtual void CaptureSingleBackendDebugFrame(void* userData, FrameCaptureCallback callback) = 0;
/*0x188*/ virtual void GetCacheCountStats(unsigned cache, unsigned& filled, unsigned& capacity) = 0;  // cache: InternalCaches bit
/*0x190*/ virtual void GetCacheBytesStats(unsigned cache, unsigned& filled, unsigned& capacity) = 0;
/*0x198*/ virtual void QueueSetCacheCountSize(unsigned cache, unsigned capacity) = 0;
/*0x1a0*/ virtual void QueueSetCacheBytesSize(unsigned cache, unsigned capacity) = 0;
/*0x1a8*/ virtual void QueueClearCaches(unsigned caches) = 0;
/*0x1b0*/ virtual void* RegisterForEvent(const char* name, IEventHandler* handler) = 0;   // BoundEventHandle
/*0x1b8*/ virtual void UnregisterFromEvent(void* handle) = 0;
/*0x1c0*/ virtual void* BindCall(const char* name, IEventHandler* handler) = 0;   // (EQ) BoundEventHandle
/*0x1c8*/ virtual void UnbindCall(void* handle) = 0;
/*0x1d0*/ virtual void UnbindObject(const void* object) = 0;
/*0x1d8*/ virtual void DestroyExposedArray(void* array) = 0;
/*0x1e0*/ virtual bool IsReadyForBindings() = 0;
/*0x1e8*/ virtual const char* GetJSStackTrace(int maxFrames) = 0;                  // only meaningful while JS is running
/*0x1f0*/ virtual void ExecuteScript(const char* script) = 0;
/*0x1f8*/ virtual void AddInitialScript(const char* script) = 0;
/*0x200*/ virtual void ResetInitialScripts() = 0;
/*0x208*/ virtual void TerminateScriptExecution() = 0;
/*0x210*/ virtual void SetCustomSceneCompositor(void* compositor, void* viewMetadata) = 0;   // renoir::ISubLayerCompositor*
/*0x218*/ virtual void SetSceneCustomEffectRenderer(void* renderer, void* metadata) = 0;    // renoir::ICustomEffectRenderer*
/*0x220*/ virtual Binder* GetBinder() = 0;                                         // (EQ) null until bindings are ready
/*0x228*/ virtual bool SetMediaFeatureOverride(const char* name, const char* value) = 0;  // value null removes it
/*0x230*/ virtual void ClearMediaFeatureOverrides() = 0;
/*0x238*/ virtual void SynchronizeModels() = 0;
/*0x240*/ virtual void DestroyExposedInstanceOfType(void* object, TypeInfo* typeInfo) = 0;
/*0x248*/ virtual void UpdateWholeModelOfType(void* model, TypeInfo* typeInfo) = 0;
/*0x250*/ virtual void UnregisterModelOfType(void* model, TypeInfo* typeInfo) = 0;
/*0x258*/ virtual void RegisterModelOfType(const char* name, void* model, TypeInfo* typeInfo, void* bindFunc) = 0;
/*0x260*/ virtual void* ReservedMethod(void* command, void* data) = 0;
/*0x268*/ virtual void TriggerEvent(const char* name) = 0;                         // (EQ)
};

class ViewRenderer {
public:
};

//============================================================================

} // namespace cohtml

namespace GF {

//============================================================================

class LogHandler : public cohtml::Logging::ILogHandler
{
public:
	virtual void WriteLog(cohtml::Logging::Severity, const char* message, size_t length) override;
};

class Allocator : public cohtml::IAllocator
{
public:
	Allocator();
	virtual ~Allocator();

	virtual void* Allocate(unsigned size, cohtml::MemTags memtag) { return nullptr; }
	virtual void* Reallocate(void* ptr, unsigned size, cohtml::MemTags memtag) { return nullptr; }
	virtual void Deallocate(void* ptr, cohtml::MemTags memtag) {}
	virtual void* AlignedAllocate(unsigned size, unsigned alignment, cohtml::MemTags memtag) { return nullptr; }
	virtual void AlignedDeallocate(void* ptr, cohtml::MemTags memtag) {}
	virtual void* VirtualAllocate(void* hint, unsigned size, int protection, int flags, cohtml::MemTags memtag) { return nullptr; }
	virtual bool VirtualFree(void* ptr, unsigned size, int flags, cohtml::MemTags memtag) { return false; }
};

class FileSystem;

// cohtml::IAsyncResourceResponse::UserImageData as filled in by EQ. Describes an image that lives in a
// texture owned by the game's renderer: either a sub-image of a skin atlas or a render target.
// size: 0x48
struct [[offsetcomments]] UserImageData
{
/*0x00*/ uint32_t width;               // full texture size
/*0x04*/ uint32_t height;
/*0x08*/ uint32_t contentRectX;        // sub-rectangle used by this image
/*0x0c*/ uint32_t contentRectY;
/*0x10*/ uint32_t contentRectWidth;
/*0x14*/ uint32_t contentRectHeight;
/*0x18*/ uint32_t imageHandle;         // 0 for atlas images; AsyncResourceHandler::nextImageHandle for render targets
/*0x1c*/ uint32_t unknown0x1c;         // 0
/*0x20*/ uint32_t unknown0x20;         // always 1 (alpha/format ?)
/*0x24*/ uint32_t unknown0x24;         // 0
/*0x28*/ uint32_t unknown0x28;         // 0
/*0x2c*/ uint32_t unknown0x2c;
/*0x30*/ uint64_t textureId;           // texture id returned by CGameFaceRenderInterface (vfunc +0x68 / +0x70)
/*0x38*/ void*    nativeTexture;       // CGameFaceRenderInterface vfunc +0x90 (textureId)
/*0x40*/ uint64_t unknown0x40;         // 0
/*0x48*/
};

// One named rectangle inside an atlas texture.
// size: 0x30
struct [[offsetcomments]] UIAtlasSubImage
{
/*0x00*/ eqstd::string name;
/*0x20*/ int           left;
/*0x24*/ int           top;
/*0x28*/ int           width;
/*0x2c*/ int           height;
/*0x30*/
};

// One "textures" entry of a skin's assets/atlas.json. The image is decoded (renoir::Library::DecodeImageMemory),
// uploaded through CGameFaceRenderInterface and every sub-image is registered in AsyncResourceHandler::atlasImages.
// size: 0x88
struct [[offsetcomments]] UIAtlasTexture
{
/*0x00*/ eqstd::string imagePath;                      // "<skin>/assets/images/<item>"
/*0x20*/ eqstd::vector<UIAtlasSubImage>   subImages;   // includes frames generated from "ui-animations"
/*0x38*/ eqstd::shared_ptr<uint8_t>       pixels;      // decoded image, freed with renoir::Library::FreeDecodedImage
/*0x48*/ uint32_t      width;                          // renoir::ImageInfo, filled by DecodeImageMemory
/*0x4c*/ uint32_t      height;
/*0x50*/ uint8_t       imageInfo[0x38];                // rest of renoir::ImageInfo
/*0x88*/
};

// size: 0x38
struct [[offsetcomments]] UIAnimationFrame
{
/*0x00*/ eqstd::string texture;         // UIAtlasTexture key ("UI Texture is not registered" if missing)
/*0x20*/ int           left;
/*0x24*/ int           top;
/*0x28*/ int           width;
/*0x2c*/ int           height;
/*0x30*/ int           duration;
/*0x38*/
};

// One "ui-animations" entry of a skin's assets/atlas.json. With grid set, every frame rectangle is split
// into cellWidth x cellHeight cells (column major when vertical) which are added to the texture's sub-images.
// size: 0x48
struct [[offsetcomments]] UIAnimation
{
/*0x00*/ eqstd::string name;
/*0x20*/ bool          cycle;
/*0x21*/ bool          grid;
/*0x22*/ bool          vertical;
/*0x24*/ int           cellWidth;
/*0x28*/ int           cellHeight;
/*0x30*/ eqstd::vector<UIAnimationFrame> frames;
/*0x48*/
};

// Settings handed to EQ's HTML preprocessor (Gameface/HtmlParser.cpp) for every .html resource.
// size: 0x48
struct [[offsetcomments]] HtmlParserSettings
{
/*0x00*/ eqstd::unordered_set<eqstd::string> forbiddenNames;  // "script" and 43 inline event attributes ("onclick" .. "ontoggle"), lowercase
/*0x40*/ bool  dumpProcessedHtml;                             // writes "<name>_debug.<ext>" next to the file; always false
/*0x48*/
};

// Render target kinds for RenderCallback::AcquireUserImage. Index into a static {name, width, height} table.
enum UserImageKind : uint32_t
{
	UserImageKind_Unknown = 0,
	UserImageKind_ObjectView = 1,   // "object_view", 1024x1024: served for coui://object_view
};

// Serves coui:// requests. "file:///" and "https://" urls are ignored. Paths go through FileSystem redirects,
// then atlasImages; "object_view" returns the render target image; .html files run through the HtmlParser;
// everything else is read through FileSystem (checksum verified).
// size: 0x118
class [[offsetcomments]] AsyncResourceHandler : public cohtml::IAsyncResourceHandler
{
public:
	virtual ~AsyncResourceHandler() {}
	virtual void OnResourceRequest(const cohtml::IAsyncResourceRequest* request, cohtml::IAsyncResourceResponse* response) {}
	virtual void OnResourceStreamRequest(const cohtml::IAsyncResourceRequest* request, cohtml::IAsyncResourceStreamResponse* response) {}
	virtual void OnAbortResourceRequest(unsigned id) {}

/*0x000*/ // vftable
/*0x008*/ eqstd::unordered_map<eqstd::string, UserImageData> atlasImages;          // atlas sub-image path -> image
/*0x048*/ eqstd::vector<uint64_t> textures;                                        // atlas texture ids; released on device loss / reload
/*0x060*/ eqstd::vector<UIAtlasTexture> atlases;                                   // copied from the active skin on reload
/*0x078*/ eqstd::unordered_map<uint32_t, UserImageData> renderTargetImages;        // UserImageKind -> image
/*0x0b8*/ uint32_t nextImageHandle;                                                // last UserImageData::imageHandle handed out
/*0x0c0*/ CGameFaceRenderInterface* pGameFaceRenderInterface;
/*0x0c8*/ FileSystem* pFileSystem;                                                 // ViewListener::fileSystem
/*0x0d0*/ HtmlParserSettings  htmlParser;
/*0x118*/
};

// Gameface/FileSystem.cpp. Reads UI files and resolves skin overrides.
// size: 0x58
class [[offsetcomments]] FileSystem
{
public:
	// Path prefix replacement. An empty entry means "use the path unchanged".
	struct [[offsetcomments]] PathRedirect
	{
	/*0x00*/ eqstd::string from;
	/*0x20*/ eqstd::string to;
	/*0x40*/
	};

/*0x00*/ eqstd::unordered_map<eqstd::string, uint32_t> checksums;  // expected checksums: cohtml.js, index.html, index_choose.html, index_create.html, index.ts, eqconst.ts, eqengine.ts, eqevents.ts, index.css
/*0x40*/ eqstd::vector<PathRedirect> redirects;                    // tried in order; rebuilt by ViewListener reload
/*0x58*/
};

// Callbacks the game's renderer makes into GameFace. Registered with CGameFaceRenderInterface (vfunc +0x58).
// Names are inferred from behaviour.
class IRenderCallback
{
public:
/*0x00*/ virtual ~IRenderCallback() {}
/*0x08*/ virtual void Paint() = 0;                          // ViewRenderer::Paint(ViewListener::lastAdvanceResult, true)
/*0x10*/ virtual void OnDeviceLost() = 0;                   // frees view/system renderer resources, textures and renderTargetRefs
/*0x18*/ virtual void OnDeviceRestored() = 0;               // re-sizes the view, re-registers fonts, reloads atlases
/*0x20*/ virtual void* AcquireUserImage(uint32_t kind, void* nativeTexture) = 0; // UserImageKind; adds a renderTargetRefs reference
/*0x28*/ virtual void ReleaseUserImage(uint32_t kind) = 0;  // drops a reference, erases at 0
/*0x30*/ virtual void OnResize() = 0;                       // View resize + ViewRenderer render target from the render interface
};

class ViewListener;

// size: 0x20
class [[offsetcomments]] RenderCallback : public IRenderCallback
{
public:
	virtual void Paint() override;
	virtual void OnDeviceLost() override;
	virtual void OnDeviceRestored() override;
	virtual void* AcquireUserImage(uint32_t kind, void* nativeTexture) override;
	virtual void ReleaseUserImage(uint32_t kind) override;
	virtual void OnResize() override;

/*0x00*/ // vftable
/*0x08*/ ViewListener*              pViewListener;
/*0x10*/ CGameFaceRenderInterface*  pGameFaceRender;
/*0x18*/ CResourceManagerInterface* pResourceManager;   // also runs WorkJobs (vfunc +0x228)
/*0x20*/
};

// Receives OnReadyForBindings/OnBindingsReleased forwarded by GF::ViewListener. Implemented by GFSync.
class IBindingsListener
{
public:
/*0x00*/ virtual ~IBindingsListener() {}
/*0x08*/ virtual void OnReadyForBindings() = 0;
/*0x10*/ virtual void OnBindingsReleased() = 0;
};

// One cohtml work request (LibraryParams work callback). Submitted to CResourceManagerInterface vfunc +0x228;
// Execute calls Library vfunc +0x28 (execute work) and sets finished. Finished jobs are deleted by ViewListener::Update.
// size: 0x40
class [[offsetcomments]] WorkJob
{
public:
	virtual bool Execute() { return true; }
	virtual int Unknown0x08() { return 0; }
	virtual ~WorkJob() {}

/*0x00*/ // vftable
/*0x08*/ uint8_t                    jobData[0x20];     // job base class state ?
/*0x28*/ CResourceManagerInterface* pResourceManager;
/*0x30*/ cohtml::Library*           pLibrary;
/*0x38*/ bool                       finished;
/*0x40*/
};

// Gameface/Skin.cpp. Parsed "<root>/assets/atlas.json".
// size: 0xa0
class [[offsetcomments]] Skin
{
public:
/*0x00*/ eqstd::string  rootPath;                                       // e.g. "uiresources/default"; pages load from "coui://<rootPath>/index*.html"
/*0x20*/ eqstd::unordered_map<eqstd::string, UIAtlasTexture> textures;  // "textures" item -> atlas
/*0x60*/ eqstd::unordered_map<eqstd::string, UIAnimation> animations;   // "ui-animations"
/*0xa0*/
};

// Page loaded by ViewListener for uiMode.
enum UIMode : uint32_t
{
	UIMode_InGame = 0,             // index.html (DoMainLoop)
	UIMode_CharacterSelect = 1,    // index_choose.html (DoCharacterSelection)
	UIMode_CharacterCreate = 2,    // index_create.html (not set by this build)
	UIMode_None = 4,               // no page loaded (default; set when leaving char select / main loop)
};

// Render target reference for ViewListener::renderTargetRefs.
struct [[offsetcomments]] UserImageRef
{
/*0x00*/ uint32_t imageHandle;
/*0x04*/ int      refCount;
/*0x08*/
};

// size: 0x4b8 (operator new in InitializeGameFace)
class [[offsetcomments]] ViewListener : public cohtml::IViewListener
{
public:
	virtual void OnReadyForBindings() override;
	virtual void OnBindingsReleased() override;
	virtual void OnTextInputTypeChanged(cohtml::TextInputControlType type) override;
	virtual void OnCursorChanged(cohtml::CursorTypes cursor, const char* url, const float* xHotSpot, const float* yHotSpot) override;

/*0x000*/ // vftable
/*0x008*/ cohtml::Library*                  pLibrary;
/*0x010*/ cohtml::System*                   pSystem;
/*0x018*/ cohtml::SystemRenderer*           pSystemRenderer;
/*0x020*/ cohtml::ViewRenderer*             pViewRenderer;
/*0x028*/ cohtml::View*                     pView;
/*0x030*/ LogHandler                        logHandler;
/*0x038*/ Allocator                         allocator;
/*0x040*/ AsyncResourceHandler              resourceHandler;
/*0x158*/ FileSystem                        fileSystem;
/*0x1b0*/ RenderCallback                    renderCallback;
/*0x1d0*/ eqstd::list<WorkJob*>             pendingWork;         // jobs created by the cohtml work callback, until finished
/*0x1e0*/ eqstd::unordered_map<uint32_t, UserImageRef> renderTargetRefs; // UserImageKind -> handle/refcount; System::UserImagesChanged every Update
/*0x220*/ uint32_t                          lastAdvanceResult;   // View::Advance() frame id, painted by RenderCallback::Paint
/*0x228*/ uint64_t                          lastTickTime;
/*0x230*/ IBindingsListener*                pBindingsListener;   // GFSync; OnReadyForBindings/OnBindingsReleased are forwarded here
/*0x238*/ double                            uiScale;             // /ui scale, Options UiScale; default 1.0
/*0x240*/ Skin                              baseSkin;            // loaded from baseSkinPath
/*0x2e0*/ Skin                              overrideSkin;        // loaded from skinName when it differs from baseSkinPath
/*0x380*/ Skin                              activeSkin;          // baseSkin merged with overrideSkin; atlases and page root come from here
/*0x420*/ eqstd::string                     skinName;            // override skin directory ("Setting new UI engine skin to %s", /loadskin)
/*0x440*/ bool                              reloadPending;       // reload overrideSkin on the next reload
/*0x448*/ eqstd::string                     baseSkinPath;        // "uiresources/default", set from CEverQuest::ProcessGame
/*0x468*/ bool                              reloadBaseSkin;      // reload baseSkin on the next reload
/*0x46c*/ uint32_t                          uiMode;              // UIMode; set from DoCharacterSelection/DoMainLoop, then reload (default UIMode_None)
/*0x470*/ bool                              keyboardCaptured;    // key events are swallowed while set
/*0x474*/ cohtml::CursorTypes               cursor;              // OnCursorChanged; None (22) when not over a GameFace element
/*0x478*/ bool                              mouseCaptured;
/*0x480*/ uint64_t                          keyRepeatTime;
/*0x488*/ uint64_t                          keyRepeatKey;        // wParam
/*0x490*/ bool                              keyRepeating;
/*0x491*/ bool                              keyRepeatInitialDelay;
/*0x494*/ uint32_t                          keyRepeatMsg;        // WM_KEYDOWN/WM_KEYUP
/*0x498*/ double                            double_498;          // 1.0 from the constructor; no other references found
/*0x4a0*/ uint64_t                          u64_4a0[3];          // zeroed by the constructor; no other references found
/*0x4b8*/
};

// Key/value model shared with JS (ut.Model[key]). Keys look like "InventoryWindow.Visible" or "InvSlot23.Quantity";
// values are strings. Written by UIComponent helpers and the gauge/label updater; read by components in SyncFromJS.
// size: 0xa8
class [[offsetcomments]] ModelStore
{
public:
/*0x00*/ eqstd::unordered_map<eqstd::string, eqstd::string> values;                    // current model
/*0x40*/ eqstd::vector<eqstd::pair<eqstd::string, eqstd::string>> pendingToJS;         // changed pairs, sent as eq_sync_js arg 1 then cleared
/*0x58*/ eqstd::vector<eqstd::pair<eqstd::string, eqstd::string>> pendingFromJS;       // pairs from cpp_on_news_from_js, applied by ReadJSAndSync
/*0x70*/ eqstd::string keysSentEachFrameRaw;                                           // cached values["System.KeysSentEachFrame"]
/*0x90*/ eqstd::vector<eqstd::string> keysSentEachFrame;                               // split on '|': GAUGETYPE_* / LABELTYPE_* keys refreshed every frame
/*0xa8*/
};

// Owns the four bindings (cpp_js_is_ready, cpp_on_news_from_js, eq_request_js_news, eq_sync_js).
// size: 0x68
class [[offsetcomments]] GFSync : public IBindingsListener
{
public:
	virtual void OnReadyForBindings() override;   // sets bindingsInitialized, binds cpp_js_is_ready / cpp_on_news_from_js
	virtual void OnBindingsReleased() override;   // clears bindingsInitialized and cppJsReady

/*0x00*/ // vftable
/*0x08*/ ModelStore* pModel;                              // GF::Manager::model
/*0x10*/ bool bindingsInitialized;                        // m_bBindingsInitialized: set by OnReadyForBindings
/*0x14*/ int cppJsReady;                                  // IsCppJsReady(): set after cpp_js_is_ready and the first full sync
/*0x18*/ eqstd::vector<GFJsEvent> incomingEvents;         // appended by cpp_on_news_from_js
/*0x30*/ eqstd::vector<GFJsEvent> dispatchingEvents;      // swapped from incomingEvents by GF::InternalDispatchEventsFromJS
/*0x48*/ int jsNewsReceived;                              // cleared before eq_request_js_news, 1 once JS answered
/*0x50*/ eqstd::vector<GFJsEvent> outgoingEvents;         // C++ -> JS, sent as eq_sync_js arg 2 then cleared
/*0x68*/
};

// EQ's GF object (g_pGF), created by GF::Init. Updated once per frame on the main thread
// (GF::Update: SyncAndWriteJS, ReadJSAndSync, gauge/label refresh, InternalDispatchEventsFromJS).
// size: 0x250
class [[offsetcomments]] Manager
{
public:
/*0x000*/ eqstd::unordered_map<eqstd::string, int>            gaugeTypes;     // "GAUGETYPE_HP" -> 1 .. (GF::ToGaugeType)
/*0x040*/ eqstd::unordered_map<eqstd::string, int>            labelTypes;     // "LABELTYPE_NAME" -> 1 .. (GF::ToLabelType)
/*0x080*/ eqstd::unordered_map<eqstd::string, int>            eventTypes;     // "EventLClick" -> window notification (GF::ToWNType)
/*0x0c0*/ ModelStore                                          model;
/*0x168*/ GFSync                                              sync;
/*0x1d0*/ eqstd::unordered_map<eqstd::string, CSidlScreenWnd*> windowsByName; // registered by UpdateBindings(false)
/*0x210*/ eqstd::unordered_map<CSidlScreenWnd*, eqstd::string> windowNames;
/*0x250*/
};

} // namespace GF

extern GF::ViewListener* g_pViewListener;

} // namespace eqlib
