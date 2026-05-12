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

#include "eqlib/game/Constants.h"
#include "eqlib/game/Containers.h"
#include "eqlib/game/CXStr.h"
#include "eqlib/game/UI.h"
#include "eqlib/game/UITypes.h"

#include <dinput.h>

namespace eqlib {

//----------------------------------------------------------------------------

// Types used by the frontend a.k.a. eqmain.dll

class [[offsetcomments]] LoginController
{
public:
	EQLIB_OBJECT LoginController(HINSTANCE hInstance, HWND hWnd);
	EQLIB_OBJECT ~LoginController();

	EQLIB_OBJECT void Startup();
	EQLIB_OBJECT void Shutdown();
	EQLIB_OBJECT void GiveTime();

	EQLIB_OBJECT int ProcessKeyboardEvents();
	EQLIB_OBJECT int ProcessMouseEvents();

/*0x00*/ IDirectInput8A*          pDI;
/*0x08*/ IDirectInputDevice8A*    pDIKeyboard;
/*0x10*/ IDirectInputDevice8A*    pDIMouse;
/*0x18*/ HWND                     hWnd;
/*0x20*/ HINSTANCE                hInstance;
/*0x28*/ bool                     bIsKeyboardActive;
/*0x29*/ bool                     bIsMouseActive;
/*0x2c*/ uint32_t                 Unknown0x18;
/*0x30*/ int                      LastInputKey;
/*0x34*/
};

class CLoginViewManager
{
public:
	EQLIB_OBJECT int HandleLButtonUp(CXPoint&);
};

class LoginServerAPI
{
public:
	EQLIB_OBJECT unsigned int JoinServer(int serverID, void* userdata = 0, int timeoutseconds = 10);
};

namespace EQLS {

struct [[offsetcomments]] Date
{
/*0x00*/ int8_t    Hours;
/*0x01*/ int8_t    Minutes;
/*0x02*/ int8_t    Seconds;
/*0x03*/ int8_t    Month;
/*0x04*/ int8_t    Day;
/*0x06*/ int16_t   Year;
/*0x08*/ CXStr     Unknown0x08;
/*0x10*/ CXStr     Unknown0x0c;
/*0x18*/ CXStr     Unknown0x10;
/*0x20*/ int64_t   TimeStamp;
/*0x28*/
};

enum eServerStatus : uint32_t
{
	eServerStatus_Down           = 1,
	eServerStatus_Locked         = 4,
	eServerStatus_PopulationLow  = 0x10,
	eServerStatus_PopulationHigh = 0x20,

};

struct [[offsetcomments]] EQClientServerData
{
/*0x00*/ ServerID      ID;
/*0x08*/ CXStr         ServerName;
/*0x10*/ CXStr         HostName;
/*0x18*/ CXStr         ServerIP;
/*0x20*/ int           ExternalPort;
/*0x24*/ int           InternalPort;
/*0x28*/ Date          DateCreated;
/*0x50*/ int           Flags;             // 0x100 = all access
/*0x54*/ int           ServerType;        // uninitialized
/*0x58*/ CXStr         LanguageCode;
/*0x60*/ CXStr         CountryCode;
/*0x68*/ CXStr         RuleSet;
/*0x70*/ CXStr         Description;
/*0x78*/ eServerStatus StatusFlags;
/*0x7c*/ int           PopulationRanking; // not populated
/*0x80*/ int           Expansion;
/*0x84*/ int           TrueBoxStatus;     // 0 = no, 1 = yes, 2 = relaxed
/*0x88*/
};

class [[offsetcomments]] LoginServerCallback
{
public:
	virtual void OnConnect() {}
	virtual void OnConnectionTerminated(bool clientSide) {}
	virtual void OnCallback(void*, void*) {}
	virtual void OnHandshake(bool, int, CXStr, CXStr) {}
	virtual void OnPlayerLogin(bool, int, CXStr, void*, void*) {}
	virtual void OnGetServerList(bool, int, CXStr, void*, void*) {}
	virtual void OnJoinServer(bool, int, CXStr, int, void*) {}
	virtual void OnJoinChat(bool, int, CXStr, CXStr&, int, CXStr&, CXStr&, CXStr&, CXStr&, int, void*) {}
	virtual void OnSetGMList(void*) {}
	virtual void OnModifyGMList(void*, void*) {}
	virtual void OnJoinAdminChannel(bool, int, CXStr, CXStr&, CXStr, void*) {}
	virtual void OnCommandResult(bool, int, CXStr, CXStr, void*) {}
	virtual void OnCommandExecute(uint32_t, int, uint32_t, CXStr, void*) {}
	virtual void OnServerChatMessageList(void*, void*) {}
	virtual void OnServerChatSTLookupList(void*, void*) {}
	virtual void OnSetBanner(CXStr&) {}
	virtual void OnReconnectToChat(CXStr&, int, CXStr&, CXStr&, CXStr&, CXStr&, bool, void*) {}
	virtual void OnBoot(CXStr) {}
	virtual void JoinServer(void*) {}
	virtual void OnSetGameFeatures(void*) {}
	virtual void OnKickMyPlayerReply(bool, int, CXStr, void*) {}
};

class [[offsetcomments]] ChannelServerHandler
{
public:
	virtual void Channel_VirtualFunction1(bool) {}
	virtual void Channel_VirtualFunction2(void*) {}
	// more virtuals ...
};

struct [[offsetcomments]] EQDevice
{
/*0x00*/ char Name[0x40];
/*0x40*/
};

struct [[offsetcomments]] EQLogin
{
/*0x000*/ EQDevice  Devices[0x10];
/*0x400*/ int       NumDevices;
/*0x408*/ HWND      hEQWnd;
/*0x410*/ int       ReturnCode; // -1 = failed login
/*0x414*/ char      Login[0x80];
/*0x494*/ char      PW[0x80];
/*0x514*/ char      PW2[0x80];
/*0x594*/ char      ServerLong[0x80];
/*0x614*/ int       ServerPort;
/*0x618*/ char      AccountKey[0x80];
/*0x698*/ int       ActiveDeviceIndex;
/*0x69c*/ char      LastZoneEntered[0x20];
/*0x6bc*/ char      StationName[0x20];
/*0x6dc*/ char      ExeName[0x20];
/*0x6fc*/ char      CommandLine[0x1c0];
/*0x8bc*/ char      ServerShort[0x80];
/*0x93c*/ char      Session[0x40];
/*0x97c*/ char      Character[0x40];
/*0x9bc*/ // more...
};

} // namespace EQLS

struct [[offsetcomments]] IniKeyValuePair
{
/*0x00*/ CXStr            key;
/*0x08*/ CXStr            value;
/*0x10*/ const char*      valueStr;
/*0x18*/ int              hashVal;
/*0x20*/ IniKeyValuePair* next;
/*0x28*/
};

struct [[offsetcomments]] IniFileSection
{
/*0x00*/ HashTable<IniKeyValuePair*> values;
/*0x18*/ int              numValues;
/*0x20*/ CXStr            section;
/*0x28*/ int              hashVal;
/*0x30*/ IniKeyValuePair* firstKeyValue;
/*0x38*/ IniKeyValuePair* lastKeyValue;
/*0x40*/ IniFileSection*  nextSection;
/*0x48*/
};

class [[offsetcomments]] IniFileWrapper
{
public:
	virtual ~IniFileWrapper() {}

/*0x08*/ HashTable<IniFileSection*> sections;
/*0x20*/ int              numSections;
/*0x28*/ IniFileSection*  firstSection;
/*0x30*/ IniFileSection*  lastSection;
/*0x38*/ bool             dirty;
/*0x3c*/
};

struct [[offsetcomments]] TimeCheck
{
/*0x00*/ int64_t    lastTimeChecked;
/*0x08*/ int64_t    elapsedTime;
/*0x10*/
};

// LoginClient
class [[offsetcomments]] LoginClient : public EQLS::LoginServerCallback,
	public EQLS::ChannelServerHandler
{
public:
	struct Host
	{
		CXStr Name;
		int   Port;
	};

/*0x010*/ EQLS::EQLogin*          pLoginData;
/*0x018*/ DoublyLinkedList<Host*> Hosts;
/*0x050*/ Host*                   pHost;
/*0x058*/ bool                    bRetryConnect;
/*0x060*/ IniFileWrapper          hostIniFile;
/*0x0a0*/ IniFileWrapper          systemMacrosIniFile;
/*0x0e0*/ IniFileWrapper          userMacrosIniFile;
/*0x120*/ TimeCheck               timeCheck;
/*0x130*/ CXStr                   LoginName;
/*0x138*/ CXStr                   Password;
/*0x140*/ CXStr                   LoginNameCopy;
/*0x148*/ CXStr                   PasswordCopy;
/*0x150*/ CXStr                   AccountKey;
/*0x158*/ int                     accountId;
/*0x160*/ EQLS::EQClientServerData* selectedServer;
/*0x168*/ int                     displayDeviceIndex;
/*0x16c*/ bool                    isLoggingIn;
/*0x170*/ uint32_t                unknown1;
/*0x174*/ uint32_t                unknown2;
/*0x178*/ DoublyLinkedList<EQLS::EQClientServerData*> ServerList;
/*0x1b0*/ EQLS::EQClientServerData QuickConnectServer;
/*0x238*/
};

namespace eqmain {


//============================================================================
// CXWnd
//============================================================================

constexpr size_t CXWnd_size = 0x258; // @sizeof(CXWnd, eqmain) :: 2026-04-14 (live) @ 0x1800d9d8b
constexpr size_t CXWnd_vftable_size = 0x2D0;

class [[offsetcomments]] CXWnd
	: public TListNode<CXWnd>   // node in list of siblings
	, public TList<CXWnd>       // list of children
{
public:
	//----------------------------------------------------------------------------
	EQLIB_OBJECT virtual bool IsValid() const { return ValidCXWnd; }
	EQLIB_OBJECT virtual ~CXWnd() {}
	EQLIB_OBJECT virtual int DrawNC() const { return 0; }
	EQLIB_OBJECT virtual int Draw() { return 0; }
	EQLIB_OBJECT virtual int PostDraw() { return 0; }
	EQLIB_OBJECT virtual int DrawCursor(const CXPoint& mousePos, const CXRect& clip, bool& drawn) { return 0; }
	EQLIB_OBJECT virtual int DrawChildItem(const CXWnd* child, void* item) const { return 0; }
	EQLIB_OBJECT virtual int DrawCaret() const { return 0; }
	EQLIB_OBJECT virtual int DrawBackground() const { return 0; }
	EQLIB_OBJECT virtual int DrawTooltip(const CXWnd* wnd) const { return 0; }
	EQLIB_OBJECT virtual int DrawTooltipAtPoint(const CXPoint& pos, const CXStr& tooltip = {}) const { return 0; }
	EQLIB_OBJECT virtual CXRect GetMinimizedRect() const { return CXRect(); }
	EQLIB_OBJECT virtual int DrawTitleBar(const CXRect& rect) const { return 0; }
	EQLIB_OBJECT virtual HCURSOR GetCursorToDisplay() const { return nullptr; }
	EQLIB_OBJECT virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleLButtonUp(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleLButtonHeld(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleLButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleRButtonUp(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleRButtonHeld(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleRButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleWheelButtonDown(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleWheelButtonUp(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleMouseMove(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleWheelMove(const CXPoint& pos, int scroll, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleKeyboardMsg(uint32_t message, uint32_t flags, bool down) { return 0; }
	EQLIB_OBJECT virtual int HandleMouseLeave() { return 0; }
	EQLIB_OBJECT virtual int OnDragDrop(SDragDropInfo* info) { return 0; }
	EQLIB_OBJECT virtual HCURSOR GetDragDropCursor(SDragDropInfo* info) const { return nullptr; }
	EQLIB_OBJECT virtual bool QueryDropOK(SDragDropInfo* info) const { return false; }
	EQLIB_OBJECT virtual int OnClickStick(CClickStickInfo* info, uint32_t flags, bool unk) { return 0; }
	EQLIB_OBJECT virtual HCURSOR GetClickStickCursor(CClickStickInfo* info) const { return nullptr; }
	EQLIB_OBJECT virtual bool QueryClickStickDropOK(CClickStickInfo* info) const { return false; }
	EQLIB_OBJECT virtual int WndNotification(CXWnd* sender, uint32_t message, void* data = nullptr) { return 0; }
	EQLIB_OBJECT virtual void OnWndNotification() {}
	EQLIB_OBJECT virtual void Activate() { Show(true); }
	EQLIB_OBJECT virtual void Deactivate() { Show(false); }
	EQLIB_OBJECT bool IsActive() const { return bActive; }
	EQLIB_OBJECT virtual int OnShow() { return 0; }
	EQLIB_OBJECT virtual int OnMove(const CXRect& rect) { return 0; }
	EQLIB_OBJECT virtual int OnResize(int w, int h) { return 0; }
	EQLIB_OBJECT virtual int OnBeginMoveOrResize() { return 0; }
	EQLIB_OBJECT virtual int OnCompleteMoveOrResize() { return 0; }
	EQLIB_OBJECT virtual int OnMinimizeBox() { return 0; }
	EQLIB_OBJECT bool IsMinimized() const { return Minimized; }
	EQLIB_OBJECT void SetMinimized(bool bValue) { Minimized = bValue; }
	EQLIB_OBJECT virtual int OnMaximizeBox() { return 0; }
	EQLIB_OBJECT bool IsMaximized() const { return bMaximized; }
	EQLIB_OBJECT virtual int OnTileBox() { return 0; }
	EQLIB_OBJECT bool IsTiled() const { return bTiled; }
	EQLIB_OBJECT virtual int OnTile() { return 0; }
	EQLIB_OBJECT virtual int OnSetFocus(CXWnd* old) { return 0; }
	EQLIB_OBJECT virtual int OnKillFocus(CXWnd* old) { return 0; }
	EQLIB_OBJECT virtual int OnProcessFrame() { return 0; }
	EQLIB_OBJECT virtual int OnVScroll(EScrollCode code, int pos) { return 0; }
	EQLIB_OBJECT virtual int OnHScroll(EScrollCode code, int pos) { return 0; }
	EQLIB_OBJECT virtual int OnBroughtToTop() { return 0; }
	EQLIB_OBJECT virtual int OnActivate(CXWnd* old) { return 0; }
	EQLIB_OBJECT virtual int Show(bool show = true, bool bringToTop = true, bool updateLayout = true) { return 0; }
	EQLIB_OBJECT virtual bool AboutToShow() { return false; }
	EQLIB_OBJECT virtual bool AboutToHide() { return false; }
	EQLIB_OBJECT virtual int RequestDockInfo(EDockAction action, CXWnd* wnd, CXRect* rect) { return 0; }
	EQLIB_OBJECT virtual CXStr GetTooltip() const { return Tooltip; }
	EQLIB_OBJECT void SetTooltip(const CXStr& Value) { Tooltip = Value; }
	EQLIB_OBJECT virtual void ClickThroughMenuItemTriggered() {}
	EQLIB_OBJECT virtual int HitTest(const CXPoint& pos, int* result) const { return 0; }
	EQLIB_OBJECT virtual CXRect GetHitTestRect(int code) const { return CXRect(); }
	EQLIB_OBJECT virtual CXRect GetInnerRect() const { return CXRect(); }
	EQLIB_OBJECT virtual CXRect GetClientRect() const { return CXRect(); }
	EQLIB_OBJECT virtual CXRect GetClientClipRect() const { return CXRect(); }
	EQLIB_OBJECT virtual CXSize GetMinSize(bool withBorder = true) const { return CXSize(); }
	EQLIB_OBJECT virtual CXSize GetMaxSize(bool withBorder = true) const { return CXSize(); }
	EQLIB_OBJECT virtual CXSize GetUntileSize() const { return Location.GetSize(); }
	EQLIB_OBJECT virtual bool IsPointTransparent(const CXPoint& point) const { return false; }
	EQLIB_OBJECT virtual bool ShouldProcessChildrenFrames() const { return IsVisible() && !IsMinimized(); }
	EQLIB_OBJECT virtual bool ShouldProcessControllerFrame() const { return IsVisible() && !IsMinimized(); }
	EQLIB_OBJECT virtual void SetDrawTemplate(CXWndDrawTemplate* drawTemplate) { DrawTemplate = drawTemplate; }
	EQLIB_OBJECT virtual int UpdateGeometry(const CXRect& rect, bool updateLayout = true, bool forceUpdateLayout = false,
		bool completeMoveOrResize = false, bool moveAutoStretch = false) { return 0; }
	EQLIB_OBJECT virtual int Move(const CXPoint& point) { return 0; }
	EQLIB_OBJECT virtual void SetWindowText(const CXStr& text) { WindowText = text; }
	EQLIB_OBJECT CXStr GetWindowText() const { return WindowText; }
	EQLIB_OBJECT virtual CXWnd* GetChildWndAt(const CXPoint& pos, bool, bool) const { return nullptr; }
	EQLIB_OBJECT virtual CScreenPieceTemplate* GetSidlPiece(const CXStr& screenId, bool top = true) const { return nullptr; }
	EQLIB_OBJECT virtual const CXStr* GetWindowName() const { return nullptr; }
	EQLIB_OBJECT virtual int SetVScrollPos(int pos) { return 0; }
	EQLIB_OBJECT virtual int SetHScrollPos(int pos) { return 0; }
	EQLIB_OBJECT virtual int AutoSetVScrollPos(CXRect rect) { return 0; }
	EQLIB_OBJECT virtual int AutoSetHScrollPos(CXRect rect) { return 0; }
	EQLIB_OBJECT virtual void SetAttributesFromSidl(CParamScreenPiece* screenPiece) {}
	EQLIB_OBJECT virtual void OnReloadSidl() {}
	EQLIB_OBJECT virtual bool HasActivatedFirstTimeAlert() const { return false; }
	EQLIB_OBJECT virtual void SetHasActivatedFirstTimeAlert(bool) {}
	EQLIB_OBJECT virtual const CXSize& GetMinClientSize() const { return MinClientSize; }
	EQLIB_OBJECT void SetMinClientSize(const CXSize& pt) { MinClientSize = pt; }
	EQLIB_OBJECT virtual const CXSize& GetMaxClientSize() const { return MaxClientSize; }
	EQLIB_OBJECT virtual CEditWnd* GetActiveEditWnd() const { return nullptr; }
	EQLIB_OBJECT virtual void UpdateLayout(bool finish = false) {};

	void SetClientRectDirty(bool dirty);
	bool IsClientRectDirty() const { return bClientRectChanged; }
	bool IsClientClipRectDirty() const { return bClientClipRectChanged; }
	bool IsScreenClipRectDirty() const { return bScreenClipRectChanged; }

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
	EQLIB_OBJECT int Minimize(bool);
	EQLIB_OBJECT bool IsReallyVisible() const;
	EQLIB_OBJECT int DoAllDrawing() const;
	EQLIB_OBJECT int DrawChildren() const;
	EQLIB_OBJECT void Center();
	EQLIB_OBJECT void Right();
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
	//EQLIB_OBJECT void Bottom();
	//EQLIB_OBJECT void BringChildWndToTop(CXWnd*);
	//EQLIB_OBJECT void Left();
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

	void SetClickThrough(bool bValue) { bClickThrough = bValue; }

	void SetMaximizable(bool bValue) { bMaximizable = bValue; }

	CTextureFont* GetFont() const { return pFont; }

	void SetEscapable(bool bValue) { bEscapable = bValue; }
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

	COLORREF GetBGColor() const { return BGColor; }
	void SetBGColor(COLORREF Value) { BGColor = Value; }
	void SetBGColor(mq::MQColor Value) { BGColor = Value.ToARGB(); }

	void SetDisabledBackground(COLORREF Value) { DisabledBackground = Value; }
	COLORREF GetDisabledBackground() const { return DisabledBackground; }

	bool IsEnabled() const { return Enabled; }
	void SetEnabled(bool bValue) { Enabled = bValue; }

	uint32_t GetWindowStyle() const { return WindowStyle; }
	void SetWindowStyle(uint32_t Value) { WindowStyle = Value; }
	void AddStyle(uint32_t Value) { WindowStyle |= Value; }
	void RemoveStyle(uint32_t Value) { WindowStyle &= ~Value; }

	void SetClipToParent(bool bValue) { bClipToParent = bValue; }
	void SetUseInLayoutHorizontal(bool bValue) { bUseInLayoutHorizontal = bValue; }
	void SetUseInLayoutVertical(bool bValue) { bUseInLayoutVertical = bValue; }

	void SetZLayer(int Value) { ZLayer = Value; }
	int GetZLayer() const { return ZLayer; }

	CXWndDrawTemplate* GetDrawTemplate() const { return DrawTemplate; }

	void SetActive(bool bValue) { bActive = bValue; }

	void SetLocked(bool bValue) { Locked = bValue; }
	bool IsLocked() const { return Locked; }

	void SetFades(bool bValue) { Fades = bValue; }
	bool GetFades() const { return Fades; }

	void SetFaded(bool bValue) { Faded = bValue; }
	bool GetFaded() const { return Faded; }

	void SetFadeDelay(int Value) { FadeDelay = Value; }
	int GetFadeDelay() const { return FadeDelay; }

	void SetBGType(uint32_t Value) { BGType = Value; }
	uint32_t GetBGType() const { return BGType; }

	void SetFadeDuration(uint32_t Value) { FadeDuration = Value; }
	uint32_t GetFadeDuration() const { return FadeDuration; }

	void SetAlpha(uint8_t Value) { Alpha = Value; }
	uint8_t GetAlpha() const { return Alpha; }

	void SetFadeToAlpha(uint8_t Value) { FadeToAlpha = Value; }
	uint8_t GetFadeToAlpha() const { return FadeToAlpha; }

	void SetData(int64_t Value) { Data = Value; }
	int64_t GetData() const { return Data; }

	void SetClickThroughMenuItemStatus(bool bValue) { bClickThroughMenuItemStatus = bValue; }
	 void SetShowClickThroughMenuItem(bool bValue) { bShowClickThroughMenuItem = bValue; }

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

	EQLIB_OBJECT CXStr GetXMLName() const;
	EQLIB_OBJECT CXStr GetTypeName() const;

	void Refade()
	{
		Faded = true;
		LastTimeMouseOver = 0;
	}

	struct [[offsetcomments]] VirtualFunctionTable
	{
	/*0x000*/ void* IsValid;
	/*0x008*/ void* Destructor;
	/*0x010*/ void* DrawNC;
	/*0x018*/ void* Draw;
	/*0x020*/ void* PostDraw;
	/*0x028*/ void* DrawCursor;
	/*0x030*/ void* DrawChildItem;
	/*0x038*/ void* DrawCaret;
	/*0x040*/ void* DrawBackground;
	/*0x048*/ void* DrawTooltip;
	/*0x050*/ void* DrawTooltipAtPoint;
	/*0x058*/ void* GetMinimizedRect;
	/*0x060*/ void* DrawTitleBar;
	/*0x068*/ void* GetCursorToDisplay;
	/*0x070*/ void* HandleLButtonDown;
	/*0x078*/ void* HandleLButtonUp;
	/*0x080*/ void* HandleLButtonHeld;
	/*0x088*/ void* HandleLButtonUpAfterHeld;
	/*0x090*/ void* HandleRButtonDown;
	/*0x098*/ void* HandleRButtonUp;
	/*0x0a0*/ void* HandleRButtonHeld;
	/*0x0a8*/ void* HandleRButtonUpAfterHeld;
	/*0x0b0*/ void* HandleWheelButtonDown;
	/*0x0b8*/ void* HandleWheelButtonUp;
	/*0x0c0*/ void* HandleMouseMove;
	/*0x0c8*/ void* HandleWheelMove;
	/*0x0d0*/ void* HandleKeyboardMsg;
	/*0x0d8*/ void* HandleMouseLeave;
	/*0x0e0*/ void* OnDragDrop;
	/*0x0e8*/ void* GetDragDropCursor;
	/*0x0f0*/ void* QueryDropOK;
	/*0x0f8*/ void* OnClickStick;
	/*0x100*/ void* GetClickStickCursor;
	/*0x108*/ void* QueryClickStickDropOK;
	/*0x110*/ void* WndNotification;
	/*0x118*/ void* OnWndNotification;
	/*0x120*/ void* Activate;
	/*0x128*/ void* Deactivate;
	/*0x130*/ void* OnShow;
	/*0x138*/ void* OnMove;
	/*0x140*/ void* OnResize;
	/*0x148*/ void* OnBeginMoveOrResize;
	/*0x150*/ void* OnCompleteMoveOrResize;
	/*0x158*/ void* OnMinimizeBox;
	/*0x160*/ void* OnMaximizeBox;
	/*0x168*/ void* OnTileBox;
	/*0x170*/ void* OnTile;
	/*0x178*/ void* OnSetFocus;
	/*0x180*/ void* OnKillFocus;
	/*0x188*/ void* OnProcessFrame;
	/*0x190*/ void* OnVScroll;
	/*0x198*/ void* OnHScroll;
	/*0x1a0*/ void* OnBroughtToTop;
	/*0x1a8*/ void* OnActivate;
	/*0x1b0*/ void* Show;
	/*0x1b8*/ void* AboutToShow;
	/*0x1c0*/ void* AboutToHide;
	/*0x1c8*/ void* RequestDockInfo;
	/*0x1d0*/ void* GetTooltip;
	/*0x1d8*/ void* ClickThroughMenuItemTriggered;
	/*0x1e0*/ void* HitTest;
	/*0x1e8*/ void* GetHitTestRect;
	/*0x1f0*/ void* GetInnerRect;
	/*0x1f8*/ void* GetClientRect;
	/*0x200*/ void* GetClientClipRect;
	/*0x208*/ void* GetMinSize;
	/*0x210*/ void* GetMaxSize;
	/*0x218*/ void* GetUntileSize;
	/*0x220*/ void* IsPointTransparent;
	/*0x228*/ void* ShouldProcessChildrenFrames;
	/*0x230*/ void* ShouldProcessControllerFrame;
	/*0x238*/ void* SetDrawTemplate;
	/*0x240*/ void* UpdateGeometry;
	/*0x248*/ void* Move;
	/*0x250*/ void* SetWindowText;
	/*0x258*/ void* GetChildWndAt;
	/*0x260*/ void* GetSidlPiece;
	/*0x268*/ void* GetWindowName;
	/*0x270*/ void* SetVScrollPos;
	/*0x278*/ void* SetHScrollPos;
	/*0x280*/ void* AutoSetVScrollPos;
	/*0x288*/ void* AutoSetHScrollPos;
	/*0x290*/ void* SetAttributesFromSidl;
	/*0x298*/ void* OnReloadSidl;
	/*0x2a0*/ void* HasActivatedFirstTimeAlert;
	/*0x2a8*/ void* SetHasActivatedFirstTimeAlert;
	/*0x2b0*/ void* GetMinClientSize;
	/*0x2b8*/ void* GetMaxClientSize;
	/*0x2c0*/ void* GetActiveEditWnd;
	/*0x2c8*/ void* UpdateLayout;
	/*0x2d0*/
	};

// @start: CXWnd Members
/*0x030*/ bool               bMaximized;                              // OnTileBox, BringToTop verified at 0x030
/*0x031*/ bool               Unknown0x031;
/*0x032*/ bool               bUseInLayoutVertical;                    // Cezero layout, not assembly verified
/*0x033*/ bool               bNeedsSaving;                            // INI: StoreIniInfo clears, LoadIniInfo sets
/*0x034*/ bool               Fades;                                   // INI 'Fades', Blink func, DoAllDrawing
/*0x038*/ uint32_t           BlinkFadeDuration;                       // Ctor, Blink function
/*0x03c*/ bool               bRightAnchoredToLeft;                    // GetRelativeRect pairs with RightOffset(0x250)
/*0x040*/ int                VScrollMax;                              // Ctor init 100, DrawNC, DrawBackground2
/*0x044*/ int                HScrollMax;                              // Ctor init 100, DrawNC
/*0x048*/ uint8_t            FadeToAlpha;                             // INI 'Alpha' reads 0x049 not 0x048
/*0x049*/ uint8_t            Alpha;                                   // INI 'Alpha'=0x049
/*0x04a*/ bool               Unknown0x04A;                            // Copy functions confirm bool exists, name unverified
/*0x04b*/ bool               Unknown0x04B;                            // Copy functions confirm bool exists, name unverified
/*0x04c*/ int                bAction;                                 // Copy functions confirm bool exists
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
/*0x0c4*/ uint32_t           BlinkStartTick;                          // MISSING: Blink function GetTickCount()-[rbx+0xC4]
/*0x0c8*/ COLORREF           CRNormal;                                // Ctor 0xFFC0C0C0, DrawTitleBar
/*0x0cc*/ uint32_t           LastBlinkFadeRefreshTime;                // Blink fade refresh timer
/*0x0d0*/ bool               bClickThroughMenuItemStatus;             // Ctor, Cezero placement
/*0x0d1*/ bool               Unknown0x0D1;                            // Alignment or unnamed bool
/*0x0d4*/ CXRect             ClipRectClient;                          // Ctor zeros, GetClientClipRect reads 4 ints
/*0x0e4*/ bool               bHCenterTooltip;                         // Ctor true
/*0x0e5*/ bool               bFullyScreenClipped;                     // Screen clip recalc: set when ClipRectScreen all -1
/*0x0e6*/ bool               Unknown0x0E6;                            // Not verified, relies on zero-fill
/*0x0e7*/ bool               bUseInLayoutHorizontal;                  // Not verified, relies on zero-fill
/*0x0e8*/ CXStr              DataStr;                                 // CXStr (dtor cleans), identified as DataStr
/*0x0f0*/ int                BottomOffset;                            // GetRelativeRect pairs with bBottomAnchoredToTop(0x221)
/*0x0f4*/ CXSize             MaxClientSize;                           // GetMaxClientSize vtable returns lea[rcx+0xF4]
/*0x0fc*/ bool               bLeftAnchoredToLeft;                     // GetRelativeRect, UpdateGeometry
/*0x0fd*/ uint8_t            UnknownPad0x0FD[3];                      // MSVC alignment to 0x100
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
/*0x150*/ CXWnd*             FocusProxy;                              // Ctor
/*0x158*/ uint8_t            TargetAlpha;                             // Ctor 0xFF, StartFade, Show
/*0x15c*/ uint32_t           BlinkFadeStartTime;                      // Blink function
/*0x160*/ CLayoutStrategy*   pLayoutStrategy;                         // Ctor
/*0x168*/ CXStr              XMLToolTip;                              // Ctor
/*0x170*/ int                LeftOffset;                              // GetRelativeRect, UpdateGeometry
/*0x174*/ bool               bShowBorder;                             // INI 'Border', ctor true
/*0x178*/ uint32_t           FadeDelay;                               // INI 'Delay', ctor 0x7D0, Blink mouse-over
/*0x17c*/ bool               Enabled;                                 // Ctor true, DoAllDrawing
/*0x180*/ int                DeleteCount;                             // Ctor
/*0x184*/ bool               bMarkedForDelete;                        // Ctor
/*0x185*/ bool               bTopAnchoredToTop;                       // GetRelativeRect pairs with TopOffset(0x1C8)
/*0x186*/ bool               bCaptureTitle;                           // OnKillFocus vtable reads, iluvseq identified
/*0x187*/ uint8_t            FadeAlpha;                               // INI 'FadeToAlpha'=0x187
/*0x188*/ bool               Unlockable;                              // SetLocked vtable guards with [rcx+0x188] (assembly verified)
/*0x189*/ bool               bIsTransitioning;                        // Ctor false
/*0x18a*/ bool               bEscapableLocked;                        // Cezero placement (was at 0x0D0, no assembly proof either way)
/*0x18b*/ bool               bKeepOnScreen;
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
/*0x1f0*/ uint32_t           BlinkDuration;                           // Blink func compares elapsed vs [rbx+0x1F0]
/*0x1f4*/ int                BlinkStartTimer;                         // Blink mouse-over timer, Show
/*0x1f8*/ int                ParentAndContextMenuArrayIndex;          // Ctor -1
/*0x1fc*/ uint32_t           WindowStyle;                             // DoAllDrawing, GetRelativeRect, DrawNC
/*0x200*/ int64_t            Data;                                    // User data storage, only 8-byte-aligned 8-byte gap in struct
/*0x208*/ bool               bBringToTopWhenClicked;                  // Ctor true
/*0x20c*/ uint32_t           BackgroundDrawType;                      // Credit: Cezero
/*0x210*/ ControllerBase*    pController;                             // Blink function, OnSetFocus/OnKillFocus
/*0x218*/ CXWnd*             ParentWindow;                            // GetRelativeRect, Blink, DrawTitleBar, SetParent
/*0x220*/ bool               bIsParentOrContextMenuWindow;            // Ctor
/*0x221*/ bool               bBottomAnchoredToTop;                    // GetRelativeRect pairs with BottomOffset(0x0F0), UpdateGeometry
/*0x222*/ bool               bTiled;                                  // iluvseq placement
/*0x224*/ int                BlinkState;                              // Blink function toggles 0/1, sets -1
/*0x228*/ int                VScrollPos;                              // DrawNC, SetVScrollPos
/*0x22c*/ CXRect             ClientRect;                              // Ctor, GetClientRect
/*0x23c*/ bool               bScreenClipRectChanged;                  // Ctor true, DoAllDrawing, UpdateGeometry
/*0x240*/ CXStr              Tooltip;                                 // SetTooltip/GetTooltip vtable. NOT bAction+bools
/*0x248*/ uint32_t           BlinkFadeFreq;                           // Ctor 0x32(50), Blink fade freq check
/*0x24c*/ uint32_t           FadeDuration;                            // INI 'Duration', Blink mouse-over, StartFade
/*0x250*/ int                RightOffset;                             // GetRelativeRect pairs with bRightAnchoredToLeft(0x03C)
/*0x254*/ bool               bUsesClassicUI;                          // Ctor from param, DoAllDrawing
/*0x255*/ bool               bMouseOverEvent;                         // Ctor false, Blink function
/*0x258*/
// @end: CXWnd Members
};

SIZE_CHECK(CXWnd, CXWnd_size);
SIZE_CHECK2(CXWnd_vftable, CXWnd::VirtualFunctionTable, CXWnd_vftable_size);

class CStmlWnd : public CXWnd
{
public:
/*0x260*/ CXStr              STMLText;
};

class [[offsetcomments]] CEditBaseWnd : public CXWnd
{
public:
/*0x258*/ eTextAlign   eAlign = eta_Left;
/*0x25c*/ int          StartPos = 0;
/*0x260*/ int          EndPos = 0;
/*0x264*/ int          MaxChars = -1;
/*0x268*/ int          MaxBytesUTF8 = -1;
/*0x270*/ CXStr        InputText;
/*0x278*/ int          TagPrintableStarts[EDITWND_MAX_TAGS];
/*0x2a0*/ int          TagPrintableEnds[EDITWND_MAX_TAGS];
/*0x2c8*/ int          TagOriginalStarts[EDITWND_MAX_TAGS];
/*0x2f0*/ int          TagOriginalEnds[EDITWND_MAX_TAGS];
/*0x318*/ int          TagDynamicSize[EDITWND_MAX_TAGS];
/*0x340*/ int          TagCodes[EDITWND_MAX_TAGS];
/*0x368*/ CXStr        TagStrings[EDITWND_MAX_TAGS];
/*0x3b8*/ int          TagCount;
/*0x3bc*/ uint32_t     EditStyle;
/*0x3c0*/
};

class [[offsetcomments]] CListWnd : public CXWnd
{
public:
/*0x258*/ int                 Unknown0x1f0;
/*0x260*/ ArrayClass<SListWndLine> ItemsArray;
/*0x278*/ ArrayClass<SListWndColumn> Columns;
/*0x290*/ int                 CurSel;
/*0x294*/ int                 CurCol;
/*0x298*/
	CXStr GetItemText(int row, int col)
	{
		if (row < 0 || row >= ItemsArray.Count)
			return CXStr();

		auto& line = ItemsArray[row];
		if (col < 0 || col >= line.Cells.Count)
			return CXStr();

		return line.Cells[col].Text;
	}
};

} // namespace eqmain

//----------------------------------------------------------------------------

} // namespace eqlib
