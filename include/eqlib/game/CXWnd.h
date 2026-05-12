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
#include "eqlib/SizeChecks.h"

#include "eqlib/game/Containers.h"
#include "eqlib/game/CXStr.h"
#include "eqlib/game/UIHelpers.h"
#include "eqlib/game/UITemplates.h"
#include "eqlib/game/UITextures.h"
#include "eqlib/game/UITypes.h"
#include "eqlib/game/XMLData.h"

#include "mq/base/Color.h"

namespace eqlib {

class CEditWnd;
class CRadioGroup;
class CSidlManagerBase;
class CTextureFont;
class CTextObjectInterface;

// Message types for WndNotifications
enum eWndNotification
{
	XWM_LCLICK                       = 1,
	XWM_LMOUSEUP                     = 2,
	XWM_RCLICK                       = 3,
	XWM_LDBLCLICK                    = 4,
	XWM_RDBLCLICK                    = 5,
	XWM_HITENTER                     = 6,
	XWM_TAB                          = 7,
	XWM_SHIFTTAB                     = 8,
	XWM_QMARKBOX                     = 9,
	XWM_CLOSE                        = 10,
	XWM_CHILDCLOSED                  = 11,
	XWM_TOOLTIP                      = 12,
	XWM_REQUESTINFO                  = 13,
	XWM_NEWVALUE                     = 14,
	XWM_COLUMNCLICK                  = 15,
	XWM_SORTREQUEST                  = 16,
	XWM_LISTBOX_EDIT_UPDATE          = 17,
	XWM_CLICKSTICKSTART              = 18,
	XWM_IS_LINK_ACTIVE               = 19,
	XWM_MENUSELECT                   = 20,
	XWM_MOUSEOVER                    = 21,
	XWM_HISTORY                      = 22,
	XWM_LCLICKHOLD                   = 23,
	XWM_RCLICKHOLD                   = 24,
	XWM_LBUTTONUPAFTERHELD           = 25,
	XWM_RBUTTONUPAFTERHELD           = 26,
	XWM_LINK                         = 27,
	XWM_FINDERITEMOPEN               = 28,
	XWM_MAXIMIZEBOX                  = 29,
	XWM_TITLEBAR                     = 30,
	XWM_ACHIEVEMENTLINK              = 31,
	XWM_NOTSURE32                    = 32,
	XWM_DIALOGRESPONSELINK           = 33,
	XWM_SPELL_LINK                   = 34,
	XWM_FOCUS                        = 35,
	XWM_LOSTFOCUS                    = 36,
	XWM_RELOAD_FROM_SIDL             = 37,
	XWM_ACTIVATE                     = 38,
	XWM_SLIDER_COMPLETE              = 39,
	XWM_SLIDER_COMPLEX_EX            = 40,
	XWM_COLORPICKER_COMPLETE         = 41,
	XWM_TEXTENTRY_COMPLETE           = 42,
	XWM_FILESELECTION_COMPLETE       = 43,
	XWM_ICONSELECTION_COMPLETE       = 44,
	XWM_RELOAD_INI                   = 45,
	XWM_THUMBTRACK                   = 46,
	XWM_SELITEM_DOWN                 = 47,
	XWM_FIRST_USER                   = 48,
	XWM_RSELITEM_DOWN                = 49,
	XWM_OUTPUT_TEXT                  = 50,
	XWM_COMMANDLINK                  = 51,
	XWM_RAIDINVITE_LINK              = 52,
	XWM_FACTION_LINK                 = 53,

	XWM_USER_DEFINED                 = 1000,
};


// Defines for CXWnd WindowStyle
#define CWS_VSCROLL                              0x00000001
#define CWS_HSCROLL                              0x00000002
#define CWS_TITLE                                0x00000004
#define CWS_CLOSE                                0x00000008
#define CWS_TILEBOX                              0x00000010
#define CWS_MINIMIZE                             0x00000020
#define CWS_BORDER                               0x00000040
#define CWS_RELATIVERECT                         0x00000080
#define CWS_AUTOSTRETCHV                         0x00000100
#define CWS_RESIZEALL                            0x00000200
#define CWS_TRANSPARENT                          0x00000400
#define CWS_USEMYALPHA                           0x00000800
#define CWS_DOCKING                              0x00001000
#define CWS_TOOLTIP_NODELAY                      0x00002000
#define CWS_FRAMEWND                             0x00004000
#define CWS_NOHITTEST                            0x00008000
#define CWS_QMARK                                0x00010000
#define CWS_NOMOVABLE                            0x00020000
#define CWS_MAXIMIZE                             0x00040000
#define CWS_AUTOVSCROLL                          0x00080000
#define CWS_AUTOHSCROLL                          0x00100000
#define CWS_CLIENTMOVABLE                        0x00200000
#define CWS_AUTOSTRETCH                          0x00400000
#define CWS_TRANSPARENTCONTROL                   0x00800000
#define CWS_RESIZEBORDER                         CWS_BORDER | CWS_RESIZEALL

#define ToggleBit(field, bit)                    ((field) ^= (bit));
#define BitOn(field, bit)                        ((field) |= (bit));
#define BitOff(field, bit)                       ((field) &= (~bit));
#define BitSet(field, bit)                       ((field) |= (1 << bit));
#define BitClear(field, bit)                     ((field) &= (~(1 << bit)));
// End CXWnd WindowStyle Defines

// For use with CXWndManager
enum eKeyboardFlags {
	KeyboardFlags_Shift = 0x01,
	KeyboardFlags_Ctrl  = 0x02,
	KeyboardFlags_LAlt  = 0x04,
	KeyboardFlags_RAlt  = 0x08,

	KeyboardFlags_Alt   = KeyboardFlags_LAlt | KeyboardFlags_RAlt,
};

// CXWndManager will send mouse clicks as keyboard events
constexpr int EQ_KEYBOARD_EVENT_MB3 = 240;
constexpr int EQ_KEYBOARD_EVENT_MB4 = 242;
constexpr int EQ_KEYBOARD_EVENT_MB5 = 241;

enum EScrollCode
{
	ScrollCodeUp,
	ScrollCodeUpContinue,
	ScrollCodeDown,
	ScrollCodeDownContinue,
	ScrollCodeAbsolute,
	ScrollCodePageUp,
	ScrollCodePageDown
};

enum EWndRuntimeType
{
	WRT_WND = 0,
	WRT_LISTWND,
	WRT_EDITWND,
	WRT_TREEWND,
	WRT_PAGEWND,
	WRT_TABWND,
	WRT_HOTKEYWND,
	WRT_EDITHOTKEYWND,
	WRT_RANGESLIDERWND,
	WRT_STMLWND,
	WRT_BROWSERWND,
	WRT_MODALMESSAGEWND,
	WRT_CHECKBOXWND,
	WRT_SIDLSCREENWND,
	WRT_SLIDERWND,
	WRT_LABEL,
	WRT_BUTTON,
	WRT_GAUGE,
	WRT_COMBOBOX,
	WRT_CHATWND,
	WRT_HELPWND,
};
EQLIB_API const char* EWndRuntimeTypeToString(EWndRuntimeType type);


using EDockAction = uint32_t;

//----------------------------------------------------------------------------

struct [[offsetcomments]] SDragDropInfo
{
/*0x00*/ bool       m_rightMouse;
/*0x08*/ CXWnd*     sourceWnd;
/*0x10*/ CXWnd*     targetWnd;
/*0x18*/ CXPoint    sourcePos;
/*0x20*/ CXPoint    targetPos;
/*0x28*/ int        message;
/*0x30*/ uintptr_t  data;
/*0x38*/
};

class [[offsetcomments]] CClickStickInfo
{
	CClickStickInfo() = default;
	virtual ~CClickStickInfo() {}

/*0x08*/ CXWnd*     sourceWnd;
/*0x10*/ CXWnd*     targetWnd;
/*0x18*/ CXPoint    sourcePos;
/*0x20*/ CXPoint    targetPos;
/*0x28*/ int        message;
/*0x30*/ uintptr_t  data;
/*0x38*/
};

class CLayoutStrategy
{
public:
	~CLayoutStrategy() {}
	virtual bool LayoutChildren(CXWnd* wnd) {}
};

class CursorClass
{
public:
	enum { eNumCursors = 7 };

	enum eCursorTypes
	{
		eArrow,
		eMove,
		eBeam,
		eNorthEastSouthWest,
		eNorthWestSouthEast,
		eNorthSouth,
		eEastWest
	};

	enum eDisplayMode
	{
		eNormal,
		eScreenShot
	};

	const char*    CursorName[eNumCursors];
	HCURSOR        CursorList[eNumCursors];
	bool           bScreenShotMode;
};

//============================================================================
// CXWnd
//============================================================================

constexpr size_t CXWnd_size = 0x258; // @sizeof(CXWnd) :: 2026-04-30 (live) @ 0x1405d7b76
constexpr size_t CXWnd_vftable_size = 0x348;

class [[offsetcomments]] CXWnd
	: public TListNode<CXWnd>   // node in list of siblings
	, public TList<CXWnd>       // list of children
{
public:
	EQLIB_OBJECT CXWnd(CXWnd* parent = nullptr, uint32_t id = 0, CXRect rect = {}, bool useClassicUI = true);

	//----------------------------------------------------------------------------
	EQLIB_OBJECT virtual bool IsValid() const { return ValidCXWnd; }
	EQLIB_OBJECT virtual ~CXWnd();
	EQLIB_OBJECT virtual const char* GetWndClassName() const { return "CXWnd"; }
	EQLIB_OBJECT virtual int DrawNC() const;
	EQLIB_OBJECT virtual int Draw() { return 0; }
	EQLIB_OBJECT virtual int PostDraw() { return 0; }
	EQLIB_OBJECT virtual int DrawCursor(const CXPoint& mousePos, const CXRect& clip, bool& drawn);
	EQLIB_OBJECT virtual int DrawChildItem(const CXWnd* child, void* item) const { return 0; }
	EQLIB_OBJECT virtual int DrawCaret() const { return 0; }
	EQLIB_OBJECT virtual int DrawBackground() const;
	EQLIB_OBJECT virtual int DrawTooltip(const CXWnd* wnd) const;
	EQLIB_OBJECT virtual int DrawTooltipAtPoint(const CXPoint& pos, const CXStr& tooltip = {}) const;
	EQLIB_OBJECT virtual CXRect GetMinimizedRect() const;
	EQLIB_OBJECT virtual int DrawTitleBar(const CXRect& rect) const;
	EQLIB_OBJECT virtual void SetZLayer(int Value);
	int GetZLayer() const { return ZLayer; }
	EQLIB_OBJECT virtual HCURSOR GetCursorToDisplay() const;
	EQLIB_OBJECT virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleLButtonUp(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleLButtonHeld(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleLButtonUpAfterHeld(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleRButtonUp(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleRButtonHeld(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleRButtonUpAfterHeld(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleWheelButtonDown(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleWheelButtonUp(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleMouseMove(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleWheelMove(const CXPoint& pos, int scroll, uint32_t flags);
	EQLIB_OBJECT virtual int HandleKeyboardMsg(uint32_t message, uint32_t flags, bool down);
	EQLIB_OBJECT virtual int HandleMouseLeave();
	EQLIB_OBJECT virtual int OnDragDrop(SDragDropInfo* info);
	EQLIB_OBJECT virtual HCURSOR GetDragDropCursor(SDragDropInfo* info) const;
	EQLIB_OBJECT virtual bool QueryDropOK(SDragDropInfo* info) const;
	EQLIB_OBJECT virtual int OnClickStick(CClickStickInfo* info, uint32_t flags, bool unk);
	EQLIB_OBJECT virtual HCURSOR GetClickStickCursor(CClickStickInfo* info) const;
	EQLIB_OBJECT virtual bool QueryClickStickDropOK(CClickStickInfo* info) const;
	EQLIB_OBJECT virtual int WndNotification(CXWnd* sender, uint32_t message, void* data = nullptr);
	EQLIB_OBJECT virtual void OnWndNotification();
	EQLIB_OBJECT virtual void Activate() { Show(true); }
	EQLIB_OBJECT virtual void Deactivate() { Show(false); }
	EQLIB_OBJECT bool IsActive() const { return bActive; }
	EQLIB_OBJECT virtual int OnShow();
	EQLIB_OBJECT virtual int OnMove(const CXRect& rect);
	EQLIB_OBJECT virtual int OnResize(int w, int h);
	EQLIB_OBJECT virtual int OnBeginMoveOrResize();
	EQLIB_OBJECT virtual int OnCompleteMoveOrResize();
	EQLIB_OBJECT virtual int OnMinimizeBox();
	EQLIB_OBJECT bool IsMinimized() const { return Minimized; }
	EQLIB_OBJECT void SetMinimized(bool bValue) { Minimized = bValue; }
	EQLIB_OBJECT virtual int OnMaximizeBox();
	EQLIB_OBJECT bool IsMaximized() const { return bMaximized; }
	EQLIB_OBJECT virtual int OnTileBox();
	EQLIB_OBJECT bool IsTiled() const { return bTiled; }
	EQLIB_OBJECT virtual int OnTile() { return 0; }
	EQLIB_OBJECT virtual int OnSetFocus(CXWnd* old);
	EQLIB_OBJECT virtual int OnKillFocus(CXWnd* old);
	EQLIB_OBJECT virtual int OnProcessFrame();
	EQLIB_OBJECT virtual int OnVScroll(EScrollCode code, int pos);
	EQLIB_OBJECT virtual int OnHScroll(EScrollCode code, int pos);
	EQLIB_OBJECT virtual int OnBroughtToTop() { return 0; }
	EQLIB_OBJECT virtual int OnActivate(CXWnd* old) { return 0; }
	EQLIB_OBJECT virtual int Show(bool show = true, bool bringToTop = true, bool updateLayout = true);
	EQLIB_OBJECT virtual bool AboutToShow();
	EQLIB_OBJECT virtual bool AboutToHide();
	EQLIB_OBJECT virtual int RequestDockInfo(EDockAction action, CXWnd* wnd, CXRect* rect) { return 0; }
	EQLIB_OBJECT virtual CXStr GetTooltip() const { return Tooltip; }
	EQLIB_OBJECT virtual void ClickThroughMenuItemTriggered();
	EQLIB_OBJECT virtual void SetLocked(bool bValue) { if (Unlockable) Locked = bValue; }
	bool IsLocked() const { return Locked; }
	EQLIB_OBJECT virtual int HitTest(const CXPoint& pos, int* result) const;
	EQLIB_OBJECT virtual CXRect GetHitTestRect(int code) const;
	EQLIB_OBJECT virtual CXRect GetInnerRect() const;
	EQLIB_OBJECT virtual CXRect GetClientRect() const { return GetClientRectNonVirtual(); }
	EQLIB_OBJECT virtual CXRect GetClientClipRect() const;
	EQLIB_OBJECT virtual CXSize GetMinSize(bool withBorder = true) const;
	EQLIB_OBJECT virtual CXSize GetMaxSize(bool withBorder = true) const;
	EQLIB_OBJECT virtual CXSize GetUntileSize() const { return Location.GetSize(); }
	EQLIB_OBJECT virtual bool IsPointTransparent(const CXPoint& point) const { return false; }
	EQLIB_OBJECT virtual bool ShouldProcessChildrenFrames() const { return IsVisible() && !IsMinimized(); }
	EQLIB_OBJECT virtual bool ShouldProcessControllerFrame() const { return IsVisible() && !IsMinimized(); }
	EQLIB_OBJECT virtual void SetDrawTemplate(CXWndDrawTemplate* drawTemplate) { DrawTemplate = drawTemplate; }
	EQLIB_OBJECT virtual void SetBGType(uint32_t Value) { BGType = Value; }
	uint32_t GetBGType() const { return BGType; }
	EQLIB_OBJECT virtual void SetBGColor(COLORREF Value) { BGColor = Value; }
	COLORREF GetBGColor() const { return BGColor; }
	void SetBGColor(mq::MQColor Value) { SetBGColor(static_cast<COLORREF>(Value.ToARGB())); }
	EQLIB_OBJECT virtual int UpdateGeometry(const CXRect& rect, bool updateLayout = true, bool forceUpdateLayout = false,
		bool completeMoveOrResize = false, bool moveAutoStretch = false);
	EQLIB_OBJECT virtual int Move(const CXPoint& point);
	EQLIB_OBJECT virtual int Minimize(bool);
	EQLIB_OBJECT virtual void SetWindowText(const CXStr& text) { WindowText = text; }
	CXStr GetWindowText() const { return WindowText; }
	EQLIB_OBJECT virtual void SetTooltip(const CXStr& Value) { Tooltip = Value; }
	EQLIB_OBJECT virtual void Center();
	EQLIB_OBJECT virtual void CenterVertically();
	EQLIB_OBJECT virtual void CenterHorizontally();
	EQLIB_OBJECT virtual void Top(bool center = true);
	EQLIB_OBJECT virtual void Bottom(bool center = true);
	EQLIB_OBJECT virtual void Right(bool center = true);
	EQLIB_OBJECT virtual void Left(bool center = true);
	EQLIB_OBJECT virtual int MoveToCursor();
	EQLIB_OBJECT virtual CXWnd* GetChildWndAt(const CXPoint& pos, bool, bool) const;
	EQLIB_OBJECT virtual CScreenPieceTemplate* GetSidlPiece(const CXStr& screenId, bool top = true) const;
	EQLIB_OBJECT virtual const CXStr* GetWindowName() const { return nullptr; }
	EQLIB_OBJECT virtual int SetVScrollPos(int pos);
	EQLIB_OBJECT virtual int SetHScrollPos(int pos);
	EQLIB_OBJECT virtual int AutoSetVScrollPos(CXRect rect);
	EQLIB_OBJECT virtual int AutoSetHScrollPos(CXRect rect);
	EQLIB_OBJECT virtual void SetAttributesFromSidl(CParamScreenPiece* screenPiece);
	EQLIB_OBJECT virtual void OnReloadSidl() {}
	EQLIB_OBJECT virtual bool HasActivatedFirstTimeAlert() const {  return false; }
	EQLIB_OBJECT virtual void SetHasActivatedFirstTimeAlert(bool) {}
	EQLIB_OBJECT virtual const CXSize& GetMinClientSize() const { return MinClientSize; }
	EQLIB_OBJECT void SetMinClientSize(const CXSize& pt) { MinClientSize = pt; }
	EQLIB_OBJECT virtual const CXSize& GetMaxClientSize() const { return MaxClientSize; }
	EQLIB_OBJECT virtual CEditWnd* GetActiveEditWnd() const { return nullptr; }
	EQLIB_OBJECT virtual void UpdateLayout(bool finish = false);

	// De-virtualized to support calling from login.
	EQLIB_OBJECT CXRect GetClientRectNonVirtual() const;

	void SetClientRectDirty(bool dirty);
	bool IsClientRectDirty() const { return bClientRectChanged; }
	bool IsClientClipRectDirty() const { return bClientClipRectChanged; }
	bool IsScreenClipRectDirty() const { return bScreenClipRectChanged; }
	DEPRECATE("CGetWindowText: Use GetWindowText() instead") CXStr CGetWindowText() const { return GetWindowText(); }
	DEPRECATE("CSetWindowText: Use SetWindowText() instead") void CSetWindowText(const CXStr& text) { SetWindowText(text); }
	DEPRECATE("Use SetWindowText instead of SetWindowTextA") void SetWindowTextA(const CXStr& text) { this->SetWindowText(text); }

	// Renamed Move -> UpdateLayout to avoid having two virtuals with the same name. This just exists for backwards compatibility.
	inline int Move(const CXRect& rect, bool updateLayout = true, bool forceUpdateLayout = false,
		bool completeMoveOrResize = false, bool moveAutoStretch = false)
	{
		return UpdateGeometry(rect, updateLayout, forceUpdateLayout, completeMoveOrResize, moveAutoStretch);
	}
public:
	// functions we have offsets for
	EQLIB_OBJECT bool IsType(EWndRuntimeType eType) const;
	EQLIB_OBJECT CXWnd* SetFocus();
	EQLIB_OBJECT void ClrFocus();
	EQLIB_OBJECT int Destroy();
	EQLIB_OBJECT int ProcessTransition();
	EQLIB_OBJECT void BringToTop(bool bRecurse = true);
	EQLIB_OBJECT void StartFade(unsigned char, uint32_t);
	EQLIB_OBJECT bool IsReallyVisible() const;
	EQLIB_OBJECT int DoAllDrawing() const;
	EQLIB_OBJECT int DrawChildren() const;
	EQLIB_OBJECT CXRect GetScreenClipRect() const;
	EQLIB_OBJECT bool IsDescendantOf(CXWnd const*) const;
	EQLIB_OBJECT const CTAFrameDraw* GetBorderFrame() const;
	EQLIB_OBJECT CXRect GetScreenRect() const;
	EQLIB_OBJECT int Resize(int Width, int Height, bool bUpdateLayout = true, bool bCompleteMoveOrResize = false, bool bMoveAutoStretch = false);
	EQLIB_OBJECT CXWnd* SetParent(CXWnd*, bool);
	EQLIB_OBJECT void SetMouseOver(bool);
	EQLIB_OBJECT void SetKeyTooltip(int, int);
	EQLIB_OBJECT int SetFont(CTextureFont*);

	EQLIB_OBJECT static void DrawColoredRect(const CXRect& rect, COLORREF color, const CXRect& clipRect);

	//EQLIB_OBJECT bool HasFocus() const;
	//EQLIB_OBJECT const CButtonDrawTemplate* GetCloseBoxTemplate() const;
	//EQLIB_OBJECT const CButtonDrawTemplate* GetMinimizeBoxTemplate() const;
	//EQLIB_OBJECT const CButtonDrawTemplate* GetTileBoxTemplate() const;
	//EQLIB_OBJECT const CTAFrameDraw* GetTitlebarHeader() const;
	//EQLIB_OBJECT CXRect GetRelativeRect() const;
	//EQLIB_OBJECT CXWnd* GetChildWndAt(CXPoint*, int, int) const;
	//EQLIB_OBJECT int DrawCloseBox() const;
	//EQLIB_OBJECT int DrawHScrollbar(int, int, int) const;
	//EQLIB_OBJECT int DrawMinimizeBox() const;
	//EQLIB_OBJECT int DrawTileBox() const;
	//EQLIB_OBJECT int DrawVScrollbar(int, int, int) const;
	//EQLIB_OBJECT int GetWidth() const;
	//EQLIB_OBJECT void BringChildWndToTop(CXWnd*);
	//EQLIB_OBJECT void SetFirstChildPointer(CXWnd*);
	//EQLIB_OBJECT void SetLookLikeParent();
	//EQLIB_OBJECT void SetNextSibPointer(CXWnd*);

	// -----------------------------------------------------------------------

	EQLIB_OBJECT UIType GetType() const;
	EQLIB_OBJECT CXMLData* GetXMLData() const;
	EQLIB_OBJECT CXMLData* GetXMLData(CXMLDataManager* dataMgr) const;
	EQLIB_OBJECT CXWnd* GetChildItem(const CXStr&);
	EQLIB_OBJECT CXWnd* GetChildItem(CXMLDataManager* dataMgr, const CXStr&);

	bool IsVisible() const { return dShow; }
	void SetVisible(bool bValue) { dShow = bValue; }

	void SetMaximizable(bool bValue) { bMaximizable = bValue; }

	CTextureFont* GetFont() const { return pFont; }

	void SetEscapable(bool bValue) { CloseOnESC = bValue; }
	void SetEscapableLocked(bool bValue) { bEscapableLocked = bValue; }

	CXWnd* GetParentWindow() const { return ParentWindow; }
	CXWnd* GetParent() const { return ParentWindow; }
	void SetParentWindow(CXWnd* pWnd) { ParentWindow = pWnd; };

	const CXWnd* GetFirstChildWnd() const { return GetFirstNode(); }
	CXWnd* GetFirstChildWnd() { return GetFirstNode(); }
	const CXWnd* GetNextSiblingWnd() const { return GetNext(); }
	CXWnd* GetNextSiblingWnd() { return GetNext(); }

	int GetVScrollMax() const { return VScrollMax; }
	int GetVScrollPos() const { return VScrollPos; }
	int GetHScrollMax() const { return HScrollMax; }
	int GetHScrollPos() const { return HScrollPos; }

	bool IsMouseOver() const { return MouseOver; }

	CXRect GetLocation() const { return Location; }
	void SetLocation(const CXRect& r) { Location = r; }

	CXRect GetOldLocation() { return OldLocation; }

	void SetNeedsSaving(bool bValue) { bNeedsSaving = bValue; }

	void SetClientRectChanged(bool bValue) { bClientRectChanged = bValue; }

	void SetDisabledBackground(COLORREF Value) { DisabledBackground = Value; }
	COLORREF GetDisabledBackground() const { return DisabledBackground; }

	// DisabledBackground at 0x084, BackgroundDrawType at 0x20C

	bool IsEnabled() const { return Enabled; }
	void SetEnabled(bool bValue) { Enabled = bValue; }

	uint32_t GetWindowStyle() const { return WindowStyle; }
	void SetWindowStyle(uint32_t Value) { WindowStyle = Value; }
	void AddStyle(uint32_t Value) { WindowStyle |= Value; }
	void RemoveStyle(uint32_t Value) { WindowStyle &= ~Value; }

	void SetClipToParent(bool bValue) { bClipToParent = bValue; }
	void SetUseInLayoutHorizontal(bool bValue) { bUseInLayoutHorizontal = bValue; }
	void SetUseInLayoutVertical(bool bValue) { bUseInLayoutVertical = bValue; }

	CXWndDrawTemplate* GetDrawTemplate() const { return DrawTemplate; }

	void SetActive(bool bValue) { bActive = bValue; }

	void SetFades(bool bValue) { Fades = bValue; }
	bool GetFades() const { return Fades; }

	void SetFaded(bool bValue) { Faded = bValue; }
	bool GetFaded() const { return Faded; }

	void SetFadeDelay(int Value) { FadeDelay = Value; }
	int GetFadeDelay() const { return FadeDelay; }

	void SetFadeDuration(uint32_t Value) { FadeDuration = Value; }
	uint32_t GetFadeDuration() const { return FadeDuration; }

	void SetAlpha(uint8_t Value) { Alpha = Value; }
	uint8_t GetAlpha() const { return Alpha; }

	void SetFadeToAlpha(uint8_t Value) { FadeToAlpha = Value; }
	uint8_t GetFadeToAlpha() const { return FadeToAlpha; }

	void SetData(int64_t Value) { Data = Value; }
	int64_t GetData() const { return Data; }

	DEPRECATE("Use GetClickThrough instead of GetClickable")
	bool GetClickable() const { return bClickThrough; }
	DEPRECATE("Use SetClickThrough instead of SetClickable")
	void SetClickable(bool bValue) { bClickThrough = bValue; }

	bool GetClickThrough() const { return bClickThrough; }
	void SetClickThrough(bool bValue) { bClickThrough = bValue; }

	void SetShowClickThroughMenuItem(bool bValue) { bShowClickThroughMenuItem = bValue; }
	bool GetShowClickThroughMenuItem() const { return bShowClickThroughMenuItem; }

	void SetBottomAnchoredToTop(bool bValue) { bBottomAnchoredToTop = bValue; }
	void SetLeftAnchoredToLeft(bool bValue) { bLeftAnchoredToLeft = bValue; }
	void SetRightAnchoredToLeft(bool bValue) { bRightAnchoredToLeft = bValue; }
	void SetTopAnchoredToTop(bool bValue) { bTopAnchoredToTop = bValue; }

	void SetOffsets(const CXRect& rect)
	{
		TopOffset = rect.top;
		BottomOffset = rect.bottom;
		LeftOffset = rect.left;
		RightOffset = rect.right;
	}

	void SetTopOffset(int Value) { TopOffset = Value; }
	int GetTopOffset() const { return TopOffset; }

	void SetBottomOffset(int Value) { BottomOffset = Value; }
	int GetBottomOffset() const { return BottomOffset; }

	void SetLeftOffset(int Value) { LeftOffset = Value; }
	int GetLeftOffset() const { return LeftOffset; }

	void SetRightOffset(int Value) { RightOffset = Value; }
	int GetRightOffset() const { return RightOffset; }

	int GetXMLIndex() const { return XMLIndex; }

	void SetXMLTooltip(const CXStr& Value) { XMLToolTip = Value; }
	CXStr GetXMLTooltip() const { return XMLToolTip; }

	void SetCRNormal(mq::MQColor Value) { CRNormal = Value.ToARGB(); }
	void SetCRNormal(COLORREF Value) { CRNormal = Value; }

	void SetBringToTopWhenClicked(bool bValue) { bBringToTopWhenClicked = bValue; }

	bool GetNeedsSaving() const { return bNeedsSaving; }
	int GetParentAndContextMenuArrayIndex() const { return ParentAndContextMenuArrayIndex; }

	EQLIB_OBJECT CXStr GetXMLName() const;
	EQLIB_OBJECT CXStr GetTypeName() const;

	EQLIB_OBJECT std::string_view GetXMLNameSv() const;
	EQLIB_OBJECT std::string_view GetTypeNameSv() const;

	int ParentWndNotification(CXWnd* sender, uint32_t message, void* data) const
	{
		if (pController)
		{
			pController->WndNotification(sender, message, data);
		}

		if (ParentWindow)
		{
			return ParentWindow->WndNotification(sender, message, data);
		}

		return 0;
	}

	void Refade()
	{
		Faded = true;
		LastTimeMouseOver = 0;
	}

	struct [[offsetcomments]] VirtualFunctionTable
	{
		FORCE_SYMBOLS;

	/*0x000*/ void* IsValid;
	/*0x008*/ void* Destructor;
	/*0x010*/ void* GetWndClassName;
	/*0x018*/ void* DrawNC;
	/*0x020*/ void* Draw;
	/*0x028*/ void* PostDraw;
	/*0x030*/ void* DrawCursor;
	/*0x038*/ void* DrawChildItem;
	/*0x040*/ void* DrawCaret;
	/*0x048*/ void* DrawBackground;
	/*0x050*/ void* DrawTooltip;
	/*0x058*/ void* DrawTooltipAtPoint;
	/*0x060*/ void* GetMinimizedRect;
	/*0x068*/ void* DrawTitleBar;
	/*0x070*/ void* SetZLayer;
	/*0x078*/ void* GetCursorToDisplay;
	/*0x080*/ void* HandleLButtonDown;
	/*0x088*/ void* HandleLButtonUp;
	/*0x090*/ void* HandleLButtonHeld;
	/*0x098*/ void* HandleLButtonUpAfterHeld;
	/*0x0a0*/ void* HandleRButtonDown;
	/*0x0a8*/ void* HandleRButtonUp;
	/*0x0b0*/ void* HandleRButtonHeld;
	/*0x0b8*/ void* HandleRButtonUpAfterHeld;
	/*0x0c0*/ void* HandleWheelButtonDown;
	/*0x0c8*/ void* HandleWheelButtonUp;
	/*0x0d0*/ void* HandleMouseMove;
	/*0x0d8*/ void* HandleWheelMove;
	/*0x0e0*/ void* HandleKeyboardMsg;
	/*0x0e8*/ void* HandleMouseLeave;
	/*0x0f0*/ void* OnDragDrop;
	/*0x0f8*/ void* GetDragDropCursor;
	/*0x100*/ void* QueryDropOK;
	/*0x108*/ void* OnClickStick;
	/*0x110*/ void* GetClickStickCursor;
	/*0x118*/ void* QueryClickStickDropOK;
	/*0x120*/ void* WndNotification;
	/*0x128*/ void* OnWndNotification;
	/*0x130*/ void* Activate;
	/*0x138*/ void* Deactivate;
	/*0x140*/ void* OnShow;
	/*0x148*/ void* OnMove;
	/*0x150*/ void* OnResize;
	/*0x158*/ void* OnBeginMoveOrResize;
	/*0x160*/ void* OnCompleteMoveOrResize;
	/*0x168*/ void* OnMinimizeBox;
	/*0x170*/ void* OnMaximizeBox;
	/*0x178*/ void* OnTileBox;
	/*0x180*/ void* OnTile;
	/*0x188*/ void* OnSetFocus;
	/*0x190*/ void* OnKillFocus;
	/*0x198*/ void* OnProcessFrame;
	/*0x1a0*/ void* OnVScroll;
	/*0x1a8*/ void* OnHScroll;
	/*0x1b0*/ void* OnBroughtToTop;
	/*0x1b8*/ void* OnActivate;
	/*0x1c0*/ void* Show;
	/*0x1c8*/ void* AboutToShow;
	/*0x1d0*/ void* AboutToHide;
	/*0x1d8*/ void* RequestDockInfo;
	/*0x1e0*/ void* GetTooltip;
	/*0x1e8*/ void* ClickThroughMenuItemTriggered;  // called from CContextMenuManagerBase::HandleWindowMenuCommands
	/*0x1f0*/ void* SetLocked;
	/*0x1f8*/ void* HitTest;
	/*0x200*/ void* GetHitTestRect;
	/*0x208*/ void* GetInnerRect;
	/*0x210*/ void* GetClientRect;
	/*0x218*/ void* GetClientClipRect;
	/*0x220*/ void* GetMinSize;
	/*0x228*/ void* GetMaxSize;
	/*0x230*/ void* GetUntileSize;
	/*0x238*/ void* IsPointTransparent;
	/*0x240*/ void* ShouldProcessChildrenFrames;
	/*0x248*/ void* ShouldProcessControllerFrame;
	/*0x250*/ void* SetDrawTemplate;
	/*0x258*/ void* SetBGType;
	/*0x260*/ void* SetBGColor;
	/*0x268*/ void* UpdateGeometry;
	/*0x270*/ void* Move;
	/*0x278*/ void* Minimize;
	/*0x280*/ void* SetWindowText;
	/*0x288*/ void* SetTooltip;
	/*0x290*/ void* Center;
	/*0x298*/ void* CenterVertically;
	/*0x2a0*/ void* CenterHorizontally;
	/*0x2a8*/ void* Top;
	/*0x2b0*/ void* Bottom;
	/*0x2b8*/ void* Right;
	/*0x2c0*/ void* Left;
	/*0x2c8*/ void* MoveToCursor;
	/*0x2d0*/ void* GetChildWndAt;
	/*0x2d8*/ void* GetSidlPiece;
	/*0x2e0*/ void* GetWindowName;
	/*0x2e8*/ void* SetVScrollPos;
	/*0x2f0*/ void* SetHScrollPos;
	/*0x2f8*/ void* AutoSetVScrollPos;
	/*0x300*/ void* AutoSetHScrollPos;
	/*0x308*/ void* SetAttributesFromSidl;
	/*0x310*/ void* OnReloadSidl;
	/*0x318*/ void* HasActivatedFirstTimeAlert;
	/*0x320*/ void* SetHasActivatedFirstTimeAlert;
	/*0x328*/ void* GetMinClientSize;
	/*0x330*/ void* GetMaxClientSize;
	/*0x338*/ void* GetActiveEditWnd;
	/*0x340*/ void* UpdateLayout;
	/*0x348*/
	};

	// Returns the current instance of this class's vftable. Might represent some other
	// inherited class (and not CXWnd's)
	inline VirtualFunctionTable* GetVFTable()
	{
		if (this == nullptr) return nullptr;
		return *reinterpret_cast<VirtualFunctionTable**>(this);
	}

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;

	// Always allocate using custom eq allocators
	EQLIB_OBJECT static void* operator new(std::size_t sz);
	EQLIB_OBJECT static void* operator new[](std::size_t sz);
	EQLIB_OBJECT static void operator delete(void* ptr);
	EQLIB_OBJECT static void operator delete[](void* ptr);

// @start: CXWnd Members
/*0x030*/ bool               bMaximized;                              // OnTileBox, BringToTop verified at 0x030
/*0x031*/ bool               bIsTransitioning;                        // Checked and set CXWndManager function
/*0x032*/ bool               bUseInLayoutVertical;                    // Cezero layout, not assembly verified
/*0x033*/ bool               bNeedsSaving;                            // INI: StoreIniInfo clears, LoadIniInfo sets
/*0x034*/ bool               Fades;                                   // INI 'Fades', Blink func, DoAllDrawing
/*0x038*/ uint32_t           BlinkDuration;                           //
/*0x03c*/ bool               bRightAnchoredToLeft;                    // GetRelativeRect pairs with RightOffset(0x250)
/*0x040*/ int                VScrollMax;                              // Ctor init 100, DrawNC, DrawBackground2
/*0x044*/ int                HScrollMax;                              // Ctor init 100, DrawNC
/*0x048*/ uint8_t            FadeAlpha;                               // Current alpha value mid-transition
/*0x049*/ uint8_t            Alpha;                                   // INI 'Alpha'=0x049
/*0x04a*/ bool               Unknown0x04A;                            // Copy functions confirm bool exists, name unverified
/*0x04b*/ bool               Unknown0x04B;                            // Copy functions confirm bool exists, name unverified
/*0x04c*/ int                bAction;                                 // TODO verify
/*0x050*/ CTextureFont*      pFont;                                   // Ctor, SetAttributesFromSidl
/*0x058*/ CTextObjectInterface* pTipTextObject;                       // Ctor, SetAttributesFromSidl
/*0x060*/ COLORREF           BGColor;                                 // INI 'BGTint', DoAllDrawing, SetBGColor vtable
/*0x064*/ uint8_t            StartAlpha;                              // StartFade copies Alpha(0x48)->0x64
/*0x065*/ bool               bEnableShowBorder;                       // Ctor, LoadIniInfo
/*0x066*/ bool               bActive;                                 // Ctor, OnShow, Show
/*0x067*/ bool               Faded;                                   // Ctor init true, Blink mouse-over
/*0x068*/ CXRect             ClipRectScreen;                          // Ctor zeros 16 bytes
/*0x078*/ CTextureAnimation* IconTextureAnim;                         // Ctor, DrawTitleBar
/*0x080*/ uint32_t           TransitionStartTick;                     // ProcessTransition, Minimize, StartFade
/*0x084*/ COLORREF           DisabledBackground;                      // INI 'DBGTint', ctor 0xFFFFFFFF, DoAllDrawing(!Enabled)
/*0x088*/ CXRect             IconRect;                                // DrawTitleBar reads 4 ints 0x088/0x08C/0x090/0x094. NOT int64_t Data
/*0x098*/ bool               bClickThroughToBackground;               // Ctor
/*0x099*/ bool               dShow;                                   // INI 'Show'(indirect), DoAllDrawing, Blink
/*0x09a*/ bool               Locked;                                  // INI 'Locked', SetLocked vtable
/*0x0a0*/ CStaticTintedBlendAnimationTemplate* TitlePiece2;           // Ctor, DrawTitleBar reads at 0x0A0
/*0x0a8*/ uint8_t            bResizableMask;                          // Ctor 0xFF, GetCursorToDisplay
/*0x0b0*/ CTextObjectInterface* pTextObject;                          // Ctor, SetAttributesFromSidl
/*0x0b8*/ bool               Minimized;                               // INI 'Minimized', Minimize, DoAllDrawing
/*0x0bc*/ int                ZLayer;                                  // Ctor, SetZLayer vtable
/*0x0c0*/ bool               bClientClipRectChanged;                  // Ctor true, GetClientClipRect, SetScrollPos
/*0x0c4*/ uint32_t           BlinkFadeStartTime;                      //
/*0x0c8*/ COLORREF           CRNormal;                                // Ctor 0xFFC0C0C0, DrawTitleBar
/*0x0cc*/ uint32_t           LastBlinkFadeRefreshTime;                // Blink fade refresh timer
/*0x0d0*/ bool               bClickThroughMenuItemStatus;             // Ctor, Cezero placement
/*0x0d1*/ bool               Unknown0x0D1;                            // Alignment or unnamed bool
/*0x0d4*/ CXRect             ClipRectClient;                          // Ctor zeros, GetClientClipRect reads 4 ints
/*0x0e4*/ bool               bHCenterTooltip;                         // Ctor true
/*0x0e5*/ bool               bFullyScreenClipped;                     // Screen clip recalc: set when ClipRectScreen all -1
/*0x0e6*/ bool               Unknown0x0E6;                            // Not bKeepOnScreen — bKeepOnScreen is at 0x18B per Resize function match
/*0x0e7*/ bool               bUseInLayoutHorizontal;                  // TODO verify
/*0x0e8*/ CXStr              DataStr;                                 // CXStr (dtor cleans), identified as DataStr
/*0x0f0*/ int                BottomOffset;                            // GetRelativeRect pairs with bBottomAnchoredToTop(0x221)
/*0x0f4*/ CXSize             MaxClientSize;                           // GetMaxClientSize vtable returns lea[rcx+0xF4]
/*0x0fc*/ bool               bLeftAnchoredToLeft;                     // GetRelativeRect, UpdateGeometry
/*0x100*/ uint32_t           LastTimeMouseOver;                       // Separate from LastBlinkFadeRefreshTime at 0x0CC
/*0x104*/ int                Transition;                              // ProcessTransition, Minimize sets 1/2, StartFade sets 4
/*0x108*/ int                managerArrayIndex;                       // Ctor -1
/*0x110*/ CStaticTintedBlendAnimationTemplate* TitlePiece;            // Ctor, DrawTitleBar
/*0x118*/ int                HScrollPos;                              // SetHScrollPos, scroll handler
/*0x11c*/ bool               bShowClickThroughMenuItem;               // Ctor
/*0x120*/ uint32_t           TransitionDuration;                      // Minimize sets 0x7D, StartFade
/*0x124*/ uint32_t           XMLIndex;                                // Ctor from param
/*0x128*/ CXRect             TransitionRect;                          // Minimize writes 4 ints
/*0x138*/ bool               bEscapable;                              // INI 'Escapable', ctor word 0x0101
/*0x139*/ bool               bMaximizable;                            // Ctor word 0x0101, Minimize checks
/*0x140*/ CXWndDrawTemplate* DrawTemplate;                            // SetDrawTemplate vtable, ctor LEA
/*0x148*/ bool               MouseOver;                               // Show, ctor
/*0x149*/ bool               bCaptureTitle;                           // Ctor only
/*0x150*/ CXWnd*             FocusProxy;                              // Ctor
/*0x158*/ uint8_t            TargetAlpha;                             // Ctor 0xFF, StartFade, Show
/*0x15c*/ uint32_t           BlinkStartTimer;                         // When the Blink transition started
/*0x160*/ CLayoutStrategy*   pLayoutStrategy;                         // Ctor
/*0x168*/ CXStr              XMLToolTip;                              // Ctor
/*0x170*/ int                LeftOffset;                              // GetRelativeRect, UpdateGeometry
/*0x174*/ bool               bShowBorder;                             // INI 'Border', ctor true
/*0x178*/ uint32_t           FadeDelay;                               // INI 'Delay', ctor 0x7D0, Blink mouse-over
/*0x17c*/ bool               Enabled;                                 // Ctor true, DoAllDrawing
/*0x180*/ int                DeleteCount;                             // Ctor
/*0x184*/ bool               bMarkedForDelete;                        // Ctor
/*0x185*/ bool               bTopAnchoredToTop;                       // GetRelativeRect pairs with TopOffset(0x1C8)
/*0x186*/ bool               Unknown0x186;                            //
/*0x187*/ uint8_t            FadeToAlpha;                             // INI key 'FadeToAlpha' reads/writes this offset
/*0x188*/ bool               Unlockable;                              // SetLocked vtable guards with [rcx+0x188] (assembly verified)
/*0x189*/ bool               Unknown0x189;                            //
/*0x18a*/ bool               bEscapableLocked;                        // Cezero placement (was at 0x0D0, no assembly proof either way)
/*0x18b*/ bool               bKeepOnScreen;                           // Binary verified: Resize function match March 0x106→April 0x18B
/*0x18c*/ CXRect             Location;                                // INI location, ctor from param, GetRelativeRect, UpdateGeometry
/*0x19c*/ bool               bClientRectChanged;                      // GetClientRect checks/clears, Show/SetScrollPos set
/*0x19d*/ bool               ValidCXWnd;                              // IsValid vtable reads [rcx+0x19D]
/*0x1a0*/ CXStr              WindowText;                              // SetWindowText vtable adds 0x1A0. THE real WindowText
/*0x1a8*/ uint32_t           BGType;                                  // INI 'BGType', SetBGType vtable, DoAllDrawing switch
/*0x1ac*/ CXSize             MinClientSize;                           // GetMinClientSize vtable returns lea[rcx+0x1AC]
/*0x1b4*/ bool               bClickThrough;                           // INI 'ClickThrough'
/*0x1b5*/ bool               bClipToParent;                           // GetClientClipRect
/*0x1b8*/ CXRect             OldLocation;                             // INI restore rect, Minimize
/*0x1c8*/ int                TopOffset;                               // GetRelativeRect pairs with bTopAnchoredToTop(0x185)
/*0x1d0*/ ArrayClass2<uint32_t> RuntimeTypes;                         // Ctor, all 6 sub-fields verified
/*0x1f0*/ uint32_t           BlinkStartTick;                          //
/*0x1f4*/ int                BlinkFadeFreq;                           //
/*0x1f8*/ int                ParentAndContextMenuArrayIndex;          // Ctor -1
/*0x1fc*/ uint32_t           WindowStyle;                             // DoAllDrawing, GetRelativeRect, DrawNC
/*0x200*/ int64_t            Data;                                    // User data storage, only 8-byte-aligned 8-byte gap in struct
/*0x208*/ bool               bBringToTopWhenClicked;                  // Ctor true
/*0x20c*/ uint32_t           BackgroundDrawType;                      // Credit: Cezero
/*0x210*/ ControllerBase*    pController;                             // Blink function, OnSetFocus/OnKillFocus
/*0x218*/ CXWnd*             ParentWindow;                            // GetRelativeRect, Blink, DrawTitleBar, SetParent
/*0x220*/ bool               bIsParentOrContextMenuWindow;            // Ctor
/*0x221*/ bool               bBottomAnchoredToTop;                    // GetRelativeRect pairs with BottomOffset(0x0F0), UpdateGeometry
/*0x222*/ bool               bTiled;                                  // TODO verify
/*0x224*/ int                BlinkState;                              // Blink function toggles 0/1, sets -1
/*0x228*/ int                VScrollPos;                              // DrawNC, SetVScrollPos
/*0x22c*/ CXRect             ClientRect;                              // Ctor, GetClientRect
/*0x23c*/ bool               bScreenClipRectChanged;                  // Ctor true, DoAllDrawing, UpdateGeometry
/*0x240*/ CXStr              Tooltip;                                 // SetTooltip/GetTooltip vtable. NOT bAction+bools
/*0x248*/ uint32_t           BlinkFadeDuration;                       //
/*0x24c*/ uint32_t           FadeDuration;                            // INI 'Duration', Blink mouse-over, StartFade
/*0x250*/ int                RightOffset;                             // GetRelativeRect pairs with bRightAnchoredToLeft(0x03C)
/*0x254*/ bool               bUsesClassicUI;                          // Ctor from param, DoAllDrawing
/*0x255*/ bool               bMouseOverEvent;                         // Ctor false, Blink function
/*0x258*/
// @end: CXWnd Members

	// Backward-compatibility aliases
	ALT_MEMBER_ALIAS(bool, bEscapable, CloseOnESC);
	ALT_MEMBER_ALIAS_DEPRECATED(bool, bEnableShowBorder, bBorder, "Use bEnableShowBorder instead of bBorder");
	ALT_MEMBER_ALIAS_DEPRECATED(bool, bShowBorder, bBorder2, "Use bShowBorder instead of bBorder2");
	ALT_MEMBER_ALIAS(bool, bClickThrough, Clickable);

	// Data is a direct int64_t member at 0x200
	// DataStr is a direct CXStr member at 0x0E8
	// Both are real members — no reinterpret_cast or aliases needed

	// Backward-compat aliases for renamed members
};

inline namespace deprecated {
	using CXWND DEPRECATE("Use CXWnd instead of CXWND") = CXWnd;
	using PCXWND DEPRECATE("Use CXWnd* instead of PCXWND") = CXWnd*;
}

SIZE_CHECK(CXWnd, CXWnd_size);
SIZE_CHECK2(CXWnd_vftable, CXWnd::VirtualFunctionTable, CXWnd_vftable_size);

//============================================================================
// CSidlScreenWnd
//============================================================================

enum eIniFlags
{
	eIniFlag_None                    = 0,
	eIniFlag_Position                = 0x0001,
	eIniFlag_Size                    = 0x0002,
	eIniFlag_Font                    = 0x0004,
	eIniFlag_Alpha                   = 0x0008,
	eIniFlag_Color                   = 0x0010,
	eIniFlag_Visibility              = 0x0100,
	eIniFlag_FirstTimeVisibility     = 0x0200,
	eIniFlag_MinMaxState             = 0x0400,
	eIniFlag_All                     = 0xffffffff
};

constexpr size_t CSidlScreenWnd_size = 0x2C0; // @sizeof(CSidlScreenWnd) :: 2026-04-30 (live) @ 0x1405f7481
constexpr size_t CSidlScreenWnd_vftable_size = 0x380;

class [[offsetcomments]] CSidlScreenWnd : public CXWnd
{
public:
	//EQLIB_OBJECT CSidlScreenWnd(CXWnd* parent, uint32_t id, const CXRect& rect, const CXStr& Screen);                           // CSidlScreenWnd__CSidlScreenWnd
	EQLIB_OBJECT CSidlScreenWnd(CXWnd* parent, const CXStr& Screen, int IniFlags, int IniVersion = 1, const char* BlockName = nullptr, bool useClassicUI = true); // CSidlScreenWnd__CSidlScreenWnd1
	EQLIB_OBJECT CSidlScreenWnd(CXWnd* parent = nullptr, const CXStr& Screen = CXStr(), bool useClassicUI = true);                // CSidlScreenWnd__CSidlScreenWnd2
	EQLIB_OBJECT virtual ~CSidlScreenWnd();

	//----------------------------------------------------------------------------
	// virtuals that are overwritten
	EQLIB_OBJECT virtual const char* GetWndClassName() const { return "CSidlScreenWnd"; }
	EQLIB_OBJECT virtual int OnResize(int width, int height) override;
	EQLIB_OBJECT virtual int DrawBackground() const override;
	EQLIB_OBJECT virtual int WndNotification(CXWnd* wnd, uint32_t message, void* data) override;
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int OnShow() override;
	EQLIB_OBJECT virtual CScreenPieceTemplate* GetSidlPiece(const CXStr& screenId, bool topLevel = true) const override;
	EQLIB_OBJECT virtual const CXStr* GetWindowName() const override;
	EQLIB_OBJECT virtual bool HasActivatedFirstTimeAlert() const override;
	EQLIB_OBJECT virtual void SetHasActivatedFirstTimeAlert(bool) override;

	//----------------------------------------------------------------------------
	// new virtuals
	EQLIB_OBJECT virtual void Unknown0x330(const char* pUnkA, bool bUnkB);
	EQLIB_OBJECT virtual int OnZone();
	EQLIB_OBJECT virtual int OnPreZone();
	EQLIB_OBJECT virtual void LoadIniInfo();
	EQLIB_OBJECT virtual void StoreIniInfo();
	EQLIB_OBJECT virtual CSidlScreenWnd* AsSidlScreenWnd();
	EQLIB_OBJECT virtual bool GetScreenWndType();

	//----------------------------------------------------------------------------
	// data members
/*0x258*/ bool                         bControlsCreated;
/*0x260*/ CXStr                        SidlText;
/*0x268*/ CScreenTemplate*             SidlPiece;
/*0x270*/ ArrayClass<CRadioGroup*>     RadioGroup;
/*0x288*/ bool                         bInitVisibility;
/*0x289*/ bool                         bVisibleBeforeResize;
/*0x28c*/ int                          IniFlags;
/*0x290*/ CXStr                        IniStorageName;
/*0x298*/ int                          IniVersion;
/*0x29c*/ int                          LastResX;
/*0x2a0*/ int                          LastResY;
/*0x2a4*/ bool                         bLastResFullscreen;
/*0x2a8*/ int                          ContextMenuID;
/*0x2b0*/ CXWnd*                       pFirstVScrollChild;
/*0x2b8*/ int                          ContextMenuTipID;
/*0x2bc*/ bool                         bHasActivatedFirstTimeAlert;
/*0x2c0*/

	//----------------------------------------------------------------------------
	// functions that we provide offsets for
	//EQLIB_OBJECT CXWnd* GetChildItem(const CXStr&, bool bDebug);
	EQLIB_OBJECT int DrawSidlPiece(CScreenPieceTemplate*, const CXRect&, const CXRect&) const;
	EQLIB_OBJECT void CalculateHSBRange();
	EQLIB_OBJECT void CalculateVSBRange();
	EQLIB_OBJECT void CreateChildrenFromSidl(DWORD = 0);
	EQLIB_OBJECT void EnableIniStorage(int, char*);
	EQLIB_OBJECT void Init(int, const CXStr&, int, int, int);
	EQLIB_OBJECT void LoadIniListWnd(CListWnd*, char*);
	EQLIB_OBJECT void StoreIniVis();
	EQLIB_OBJECT int ConvertToRes(int, int, int, int);
	EQLIB_OBJECT void LoadSidlScreen();

	//----------------------------------------------------------------------------
	//EQLIB_OBJECT void Init(CXWnd*, uint32_t, const CXRect&, const CXStr&, int, char*);
	//EQLIB_OBJECT void SetScreen(const CXStr&);
	//EQLIB_OBJECT void AddButtonToRadioGroup(const CXStr&, CButtonWnd*);
	//EQLIB_OBJECT CXRect GetSidlPieceRect(CScreenPieceTemplate*, const CXRect&) const;
	//EQLIB_OBJECT void StoreIniListWnd(CListWnd const*, char*);

	struct [[offsetcomments]] VirtualFunctionTable : public CXWnd::VirtualFunctionTable
	{
	/*0x348*/ void* Unknown0x330;
	/*0x350*/ void* OnZone;
	/*0x358*/ void* OnPreZone;
	/*0x360*/ void* LoadIniInfo;
	/*0x368*/ void* StoreIniInfo;
	/*0x370*/ void* AsSidlScreenWnd;
	/*0x378*/ void* GetScreenWndType;
	/*0x380*/
	};

	// Returns the current instance of this class's vftable. Might represent some other
	// inherited class (and not CSidlScreenWnd's)
	inline VirtualFunctionTable* GetVFTable()
	{
		if (this == nullptr) return nullptr;
		return *reinterpret_cast<VirtualFunctionTable**>(this);
	}

	inline void ReplaceVFTable(VirtualFunctionTable* table)
	{
		if (this == nullptr) return;
		*reinterpret_cast<VirtualFunctionTable**>(this) = table;
	}

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;
};

SIZE_CHECK(CSidlScreenWnd, CSidlScreenWnd_size);
SIZE_CHECK2(CSidlScreenWnd_vftable, CSidlScreenWnd::VirtualFunctionTable, CSidlScreenWnd_vftable_size);

inline namespace deprecated {
	using CSIDLWND DEPRECATE("Use CSidlScreenWnd instead of CSIDLWND") = CSidlScreenWnd;
	using PCSIDLWND DEPRECATE("Use CSidlScreenWnd* instead of PCSIDLWND") = CSidlScreenWnd*;
}

//============================================================================
// CXWndManager
//============================================================================

enum EWndManagerMode
{
	WndManagerModeNormal,
	WndManagerModeMoving,
	WndManagerModeSizingLeft,
	WndManagerModeSizingTop,
	WndManagerModeSizingRight,
	WndManagerModeSizingBottom,
	WndManagerModeSizingTopLeft,
	WndManagerModeSizingTopRight,
	WndManagerModeSizingBottomLeft,
	WndManagerModeSizingBototmRight,
	WndManagerModeVScrollUp,
	WndManagerModeVScrollPageUp,
	WndManagerModeVScrollPageDown,
	WndManagerModeVScrollDown,
	WndManagerModeVScrollAbsolute,
	WndManagerModeHScrollLeft,
	WndManagerModeHScrollRight,
	WndManagerModeHScrollAbsolute,
	WndManagerModeHScrollPageLeft,
	WndManagerModeHScrollPageRight,
	WndManagerModeTyping,
	WndManagerModeFrameButton,
	WndManagerModeDragDrop,
	WndManagerModeUnknown23,
	WndManagerModeUnknown24,
};

class [[offsetcomments]] CXWndManager
{
public:
	CXWndManager(CSidlManagerBase* sidlManager, HWND* wnd, CXPoint point);
	virtual ~CXWndManager();

	//----------------------------------------------------------------------------
	// virtuals

	virtual bool CanSendMouseMessage(CXWnd* wnd) const;
	virtual bool CanSendKeyboardMessage(CXWnd* wnd) const;
	virtual bool CanDraw(CXWnd* wnd) const;
	virtual ControllerBase* CreateController(CXStr controller, int type);

	//----------------------------------------------------------------------------
	// defined methods

	EQLIB_OBJECT int DrawCursor() const;
	EQLIB_OBJECT int DrawWindows() const;
	EQLIB_OBJECT uint32_t GetKeyboardFlags() const;
	EQLIB_OBJECT int HandleKeyboardMsg(uint32_t, bool);
	EQLIB_OBJECT int RemoveWnd(CXWnd*);

	CTextureFont* GetFont(int FontIndex) const
	{
		if (FontIndex < FontsArray.GetCount())
		{
			return FontsArray[FontIndex];
		}

		return nullptr;
	}
	int GetNumFonts() const { return FontsArray.GetCount(); }
	int GetFontIndex(CTextureFont* pFont)
	{
		for (int i = 0; i < FontsArray.GetCount(); ++i)
		{
			if (pFont == FontsArray[i])
				return i;
		}
		return -1;
	}

	inline const CursorClass* GetCursorClass() const { return &CC; }

	//----------------------------------------------------------------------------
	// methods

	//EQLIB_OBJECT bool IsAllValid();
	//EQLIB_OBJECT bool IsWindowActive(const CXWnd*) const;
	//EQLIB_OBJECT bool IsWindowMovingOrSizing(CXWnd*) const;
	//EQLIB_OBJECT bool IsWindowPieceDown(const CXWnd*, int) const;
	//EQLIB_OBJECT bool OkayToSendMouseMessage(CXWnd*) const;
	//EQLIB_OBJECT const CTextureAnimation* GetCursorToDisplay() const;
	//EQLIB_OBJECT CTextureFont* GetFont(CXStr);
	//EQLIB_OBJECT CXWnd* FindWnd(CXPoint, int*) const;
	//EQLIB_OBJECT CXWnd* GetFirstChildWnd(CXWnd const*) const;
	//EQLIB_OBJECT CXWnd* GetFocusWnd() const;
	//EQLIB_OBJECT CXWnd* GetNextSib(CXWnd const*) const;
	//EQLIB_OBJECT CXWnd* SetFocusWnd(CXWnd*);
	//EQLIB_OBJECT int ActivateWnd(CXWnd*);
	//EQLIB_OBJECT int AddFont(CTextureFont*);
	//EQLIB_OBJECT int AddWnd(CXWnd*);
	//EQLIB_OBJECT int HandleLButtonDown(const CXPoint&);
	//EQLIB_OBJECT int HandleLButtonHeld(const CXPoint&);
	//EQLIB_OBJECT int HandleLButtonUp(const CXPoint&);
	//EQLIB_OBJECT int HandleLButtonUpAfterHeld(const CXPoint&);
	//EQLIB_OBJECT int HandleMouseMove(const CXPoint&);
	//EQLIB_OBJECT int HandleRButtonDown(const CXPoint&);
	//EQLIB_OBJECT int HandleRButtonHeld(const CXPoint&);
	//EQLIB_OBJECT int HandleRButtonUp(const CXPoint&);
	//EQLIB_OBJECT int HandleRButtonUpAfterHeld(const CXPoint&);
	//EQLIB_OBJECT int HandleWheelMove(int);
	//EQLIB_OBJECT int NotifyAllWindows(CXWnd*, uint32_t, void*);
	//EQLIB_OBJECT int OnWindowCloseBox(CXWnd*);
	//EQLIB_OBJECT int OnWindowMinimizeBox(CXWnd*);
	//EQLIB_OBJECT int OnWindowTileBox(CXWnd*);
	//EQLIB_OBJECT int ProcessFrame();
	//EQLIB_OBJECT uint32_t GetDisplayWidth() const;
	//EQLIB_OBJECT uint32_t GetGlobalFadeDuration() const;
	//EQLIB_OBJECT unsigned char GetGlobalAlpha() const;
	//EQLIB_OBJECT unsigned char GetGlobalFadeToAlpha() const;
	//EQLIB_OBJECT unsigned long GetGlobalFadeDelay() const;
	//EQLIB_OBJECT void BringWndToTop(CXWnd*, bool);
	//EQLIB_OBJECT void CheckInvalidateLastFoundWnd();
	//EQLIB_OBJECT void CleanupWindows();
	//EQLIB_OBJECT void DestroyAllWindows();
	//EQLIB_OBJECT void FlushKeyboardFlags();
	//EQLIB_OBJECT void OnWindowShown(CXWnd*, bool);
	//EQLIB_OBJECT void SetGlobalAlpha(unsigned char);
	//EQLIB_OBJECT void SetGlobalFadeDelay(unsigned long);
	//EQLIB_OBJECT void SetGlobalFadeDuration(uint32_t);
	//EQLIB_OBJECT void SetGlobalFadeToAlpha(unsigned char);
	//EQLIB_OBJECT void SetSystemFont(CTextureFont*);
	//EQLIB_OBJECT void UpdateChildAndSiblingInfo();
	//EQLIB_OBJECT int DestroyWnd(CXWnd* wnd);

	//----------------------------------------------------------------------------
	// data members

/*0x008*/ ArrayClass<CXWnd*>           pWindows;
/*0x020*/ ArrayClass<CXWnd*>           ParentAndContextMenuWindows;
/*0x038*/ ArrayClass<CXWnd*>           TransitionWindows;
/*0x050*/ ArrayClass<CXWnd*>           PendingDeletionWindows;
/*0x068*/ uint32_t                     TypematicKey;
/*0x06c*/ uint32_t                     LastKeyDownTime;
/*0x070*/ uint32_t                     LastMouseClickTime;           // when mouse was last clicked
/*0x074*/ uint32_t                     MouseMoveTimeStamp;           // when mouse was last moved
/*0x078*/ int                          StrokesSent;
/*0x07c*/ int                          ToolTipHitTest;               // this is really an enum //0 outside 1 transparent 2 client 3 minimizebox 4 tilebox 5 qmark 6 maxbox 7 closebox 8 titlebar 9 vscrollup 10 vscrolldown 11 vscroll thumb 12 vscroll pgup 13 vscroll pgdn 14 hscroll left 15 hscroll right 16 hscroll thumb 17 hscroll pgup 18 hscroll pgdn 19 border left 20 border top 21 border right 22 border bottom 23 border topleft 24 border topright 25 border bott left 26 bott right 27 left top 28 left bott 29 right top 30 right bott 31 no hit
/*0x080*/ CXWnd*                       LastClickedWindow;
/*0x088*/ CXWnd*                       MainWindow;
/*0x090*/ CXWnd*                       FocusWindow;                  // when you select a window its pointer shows up here
/*0x098*/ CXWnd*                       CurrDraggedWindow;            // when you drag a window its pointer shows up here
/*0x0a0*/ CXWnd*                       ActiveWindow;
/*0x0a8*/ CXWnd*                       LastMouseOver;                // Current window pointer is over if this is 0 we are above MAIN Window
/*0x0b0*/ CXWnd*                       Tooltip;                      // Last Tooltip to show?
/*0x0b8*/ ArrayClass<CXWnd*>           GlobalFocusWindows;
/*0x0d0*/ bool                         bReadingLog;
/*0x0d1*/ bool                         bSidlManagerOwner;
/*0x0d4*/ int                          CaptureCount;
/*0x0d8*/ bool                         bMouseMoveRelative;
/*0x0dc*/ CXPoint                      MousePoint;
/*0x0e4*/ bool                         bCapsLock;
/*0x0e5*/ bool                         KeyboardFlags[4];
/*0x0e9*/ bool                         bChatMessage;
/*0x0ea*/ bool                         bDrawWindows;
/*0x0eb*/ uint8_t                      MouseMoveFlags;
/*0x0ec*/ EWndManagerMode              ManagerMode;
/*0x0f0*/ int                          DecorButtonHitTest;
/*0x0f4*/ CXPoint                      MoveResize;
/*0x100*/ SDragDropInfo                DragDropInfo;
/*0x138*/ CClickStickInfo              ClickStickInfo;
/*0x170*/ int                          Unknown0x100;
/*0x174*/ bool                         bModal;
/*0x178*/ uint32_t                     TTCheckTimer;
/*0x17c*/ int                          Flags;
/*0x180*/ CXStr                        ClipText;
/*0x188*/ uint32_t                     ScreenExtentX;
/*0x18c*/ uint32_t                     ScreenExtentY;
/*0x190*/ ArrayClass<CTextureFont*>    FontsArray;
/*0x1a8*/ CTextureFont*                pSystemFont;
/*0x1b0*/ bool                         bToggleWindowMode;
/*0x1b8*/ HWND*                        pGlobalHwnd;
/*0x1c0*/ CXPoint                      StoredMousePos;               // last position Mouse was at before we moved it
/*0x1c8*/ bool                         bManagerDeletionPending;
/*0x1d0*/ CursorClass                  CC;
/*0x248*/ bool                         bUseNewUIEngine;
/*0x24c*/

	inline bool IsShiftKey() const { return KeyboardFlags[0]; }
	inline bool IsCtrlKey() const { return KeyboardFlags[1]; }
	inline bool IsAltKey() const { return KeyboardFlags[2] | KeyboardFlags[3]; }
};

//============================================================================
// CEQXWndManager
//============================================================================

constexpr size_t CEQXWndManager_size = 0x298; // @sizeof(CEQXWndManager) :: 2026-04-30 (live) @ 0x14019f855

class [[offsetcomments]] CEQXWndManager : public CXWndManager
{
public:
	CEQXWndManager(CSidlManagerBase* sidlManager);
	virtual ~CEQXWndManager();

	//----------------------------------------------------------------------------
	// virtual overrides
	virtual bool CanSendMouseMessage(CXWnd* wnd) const override;
	virtual bool CanSendKeyboardMessage(CXWnd* wnd) const override;
	virtual bool CanDraw(CXWnd* wnd) const override;
	virtual ControllerBase* CreateController(CXStr controller, int type) override;

	EQLIB_OBJECT ControllerManager* GetControllerManager()
	{
		return &ControllerMgr;
	}

	//----------------------------------------------------------------------------
	// data members

/*0x250*/ ControllerFactory DefaultControllerFactory;
/*0x270*/ ControllerManager ControllerMgr;
/*0x298*/
};

SIZE_CHECK(CEQXWndManager, CEQXWndManager_size);

inline namespace deprecated {
	using CXWNDMGR DEPRECATE("Use CEQXWndManager instead of CXWNDMGR") = CEQXWndManager;
	using PCXWNDMGR DEPRECATE("Use CEQXWndManager* instead of PCXWNDMGR") = CEQXWndManager*;
}

//----------------------------------------------------------------------------

} // namespace eqlib
