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

//
// eqgame.exe offsets
//

#define __ClientDate                                               20260709u
#define __ExpectedVersionDate                                     "Jul  9 2026"
#define __ExpectedVersionTime                                     "12:42:52"
#define __ActualVersionDate_x                                      0x140990BE8
#define __ActualVersionTime_x                                      0x140990BD8
#define __ActualVersionBuild_x                                     0x140855870

// Memory Protection
#define __MemChecker0_x                                            0x1402D2250
#define __MemChecker1_x                                            0x1405AD120
#define __MemChecker4_x                                            0x14029F480
#define __EncryptPad0_x                                            0x140D6EC40

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EB75C0
#define instEQZoneInfo_x                                           0x140EB77B4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140231E50
#define __gfMaxZoomCameraDistance_x                                0x140926F18
#define __gfMaxCameraDistance_x                                    0x140AD0C64
#define __CurrentSocial_x                                          0x140C230E4 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D62970
#define g_eqCommandStates_x                                        0x140D63A10
#define __CommandList_x                                            0x140D63C50
#define __ScreenMode_x                                             0x140DFEE7C
#define __gWorld_x                                                 0x140EB1CA0
#define __gpbCommandEvent_x                                        0x140EB1FF8
#define __ServerHost_x                                             0x140EB21E8
#define __Guilds_x                                                 0x140EB6180
#define __MemCheckBitmask_x                                        0x140EB7B03
#define __MemCheckActive_x                                         0x140EB921D
#define __MouseEventTime_x                                         0x140F2CB98
#define DI8__MouseState_x                                          0x140F30D78
#define __heqmain_x                                                0x140F33208
#define DI8__Mouse_x                                               0x140F33220
#define __HWnd_x                                                   0x140F33228
#define __Mouse_x                                                  0x140F33230
#define DI8__Keyboard_x                                            0x140F33250
#define __LoginName_x                                              0x140F339BC
#define __CurrentMapLabel_x                                        0x140F474F0
#define __LabelCache_x                                             0x140F480C0
#define __ChatFilterDefs_x                                         0x140A6ABC0
#define Teleport_Table_Size_x                                      0x140EB2084
#define Teleport_Table_x                                           0x140EAFA40

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EB2510
#define pinstActiveBanker_x                                        0x140EB1F28
#define pinstActiveCorpse_x                                        0x140EB1F18
#define pinstActiveGMaster_x                                       0x140EB1F20
#define pinstActiveMerchant_x                                      0x140EB1F10
#define pinstAltAdvManager_x                                       0x140DFFCF8
#define pinstCEverQuest_x                                          0x140F33268
#define pinstCamActor_x                                            0x140DFEE60
#define pinstCDBStr_x                                              0x140DFEAB0
#define pinstCDisplay_x                                            0x140EB1FD8
#define pinstControlledPlayer_x                                    0x140EB1FB8
#define pinstCResolutionHandler_x                                  0x140F58668
#define pinstCSidlManager_x                                        0x140F59660
#define pinstCXWndManager_x                                        0x140F59658
#define instDynamicZone_x                                          0x140EB6040 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140EB608E
#define instExpeditionName_x                                       0x140EB60CE
#define pinstDZMember_x                                            0x140EB6158
#define pinstDZTimerInfo_x                                         0x140EB6160
#define pinstEqLogin_x                                             0x140F33300
#define instTribute_x                                              0x140D5B880
#define pinstDeviceInputProxy_x                                    0x140EB761C
#define pinstEQSoundManager_x                                      0x140E00080
#define pinstEQSpellStrings_x                                      0x140DE3630
#define pinstSGraphicsEngine_x                                     0x140F58698
#define pinstLocalPC_x                                             0x140EB1A78
#define pinstLocalPlayer_x                                         0x140EB1D08
#define pinstCMercenaryClientManager_x                             0x140F2E4A8
#define pinstModelPlayer_x                                         0x140EB1F38
#define pinstRenderInterface_x                                     0x140F586B0
#define pinstSkillMgr_x                                            0x140F30188
#define pinstSpawnManager_x                                        0x140F2E888
#define pinstSpellManager_x                                        0x140F301F8
#define pinstStringTable_x                                         0x140EB1A80
#define pinstSwitchManager_x                                       0x140EAF9B0
#define pinstTarget_x                                              0x140EB1FB0
#define pinstTaskMember_x                                          0x140D5B870 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140EB1F30
#define instTributeActive_x                                        0x140D5B8A9
#define pinstViewActor_x                                           0x140DFEE58
#define pinstWorldData_x                                           0x140EB1A40
#define pinstPlayerPath_x                                          0x140F2E8B0
#define pinstTargetIndicator_x                                     0x140F302A8
#define EQObject_Top_x                                             0x140EB1FE0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F44640
#define pinstCContainerMgr_x                                       0x140DFF090
#define pinstCContextMenuManager_x                                 0x140F59340
#define pinstCInvSlotMgr_x                                         0x140DFF070
#define pinstCItemDisplayManager_x                                 0x140F470C0
#define pinstCPopupWndManager_x                                    0x140F47950
#define pinstCSpellDisplayMgr_x                                    0x140F47FA0
#define pinstCTaskManager_x                                        0x140C247B0
#define pinstEQSuiteTextureLoader_x                                0x140D846F0
#define pinstItemIconCache_x                                       0x140F449A8
#define pinstLootFiltersManager_x                                  0x140DFE4F8
#define pinstGFViewListener_x                                      0x140F58B18


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14025C670
#define __CastRay_x                                                0x1402546E0
#define __CastRay2_x                                               0x1402543D0
#define __compress_block_x                                         0x140562C50
#define __ConvertItemTags_x                                        0x140254B70
#define __CleanItemTags_x                                          0x14008E6A0
#define __CreateCascadeMenuItems_x                                 0x14019ABC0
#define __decompress_block_x                                       0x1405A87A0
#define __DoesFileExist_x                                          0x1405B1190
#define __EQGetTime_x                                              0x1405AD6D0
#define __ExecuteCmd_x                                             0x140229330
#define __FixHeading_x                                             0x14066A4C0
#define __FlushDxKeyboard_x                                        0x140357450
#define __get_bearing_x                                            0x14025E980
#define __get_melee_range_x                                        0x14025EA70
#define __GetAnimationCache_x                                      0x1403DD960
#define __GetGaugeValueFromEQ_x                                    0x140521A60
#define __GetLabelFromEQ_x                                         0x140523040
#define __GetXTargetType_x                                         0x14066C9B0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14066A540
#define __HelpPath_x                                               0x140F2CA60   // Why?
#define __NewUIINI_x                                               0x14052EAA0   // Why?
#define __ProcessDeviceEvents_x                                    0x14029FA80
#define __ProcessGameEvents_x                                      0x140294230
#define __ProcessKeyboardEvents_x                                  0x140358C30
#define __ProcessMouseEvents_x                                     0x1402959A0
#define __SaveColors_x                                             0x1401AAD50
#define __STMLToText_x                                             0x1405C1A20
#define __WndProc_x                                                0x140355C10
#define CMemoryMappedFile__SetFile_x                               0x140817250
#define DrawNetStatus_x                                            0x1402E17C0
#define Util__FastTime_x                                           0x1405ACA70
#define __eq_delete_x                                              0x1406E2F48
#define __eq_new_x                                                 0x1406E31A0
#define __CopyLayout_x                                             0x1402CE610
#define __ThrottleFrameRate_x                                      0x140283363
#define __ThrottleFrameRateEnd_x                                   0x140283369

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140368C10
#define CAAWnd__Update_x                                           0x140369070
#define CAAWnd__UpdateSelected_x                                   0x14036A6C0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B3740
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400ABDD0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A8180
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B40A0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B6010
#define AltAdvManager__IsAbilityReady_x                            0x1401B64F0
#define AltAdvManager__GetAAById_x                                 0x1401B58A0
#define AltAdvManager__CanTrainAbility_x                           0x1401B56A0
#define AltAdvManager__CanSeeAbility_x                             0x1401B53C0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400DB440
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DC300
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DC550
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400F0B10
#define CharacterZoneClient__CanUseItem_x                          0x1400F10D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DCF30
#define CharacterZoneClient__CastSpell_x                           0x1400DCFD0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400ECF40
#define CharacterZoneClient__Cur_HP_x                              0x1400F28C0
#define CharacterZoneClient__Cur_Mana_x                            0x1400F2A80
#define CharacterZoneClient__FindAffectSlot_x                      0x1400E0430
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F91D0
#define CharacterZoneClient__GetBaseSkill_x                        0x140108470  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E18D0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F0410
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400FAA60
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F9950
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E1A50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D0F10
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D2DE0
#define CharacterZoneClient__GetHPRegen_x                          0x1400FA080
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F2510
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400FAC00
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E1AD0
#define CharacterZoneClient__GetManaRegen_x                        0x1400FB8F0
#define CharacterZoneClient__GetModCap_x                           0x140103040
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E1DD0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E1FA0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D6460
#define CharacterZoneClient__HasSkill_x                            0x1400FEA90
#define CharacterZoneClient__HitBySpell_x                          0x1400E2A10
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E6390
#define CharacterZoneClient__MakeMeVisible_x                       0x140102B20
#define CharacterZoneClient__Max_Endurance_x                       0x1402FC790  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x140102E70
#define CharacterZoneClient__Max_Mana_x                            0x1402FC9B0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1401032D0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E99F0
#define CharacterZoneClient__SpellDuration_x                       0x1400EA720
#define CharacterZoneClient__TotalEffect_x                         0x1400EBBA0
#define CharacterZoneClient__UseSkill_x                            0x140109490


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038A790

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140395510
#define CBarterWnd__UpdateInventoryList_x                          0x140394F80

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140391240
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403902B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140397D80

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AF0728

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BB2C0
#define CChatWindowManager__InitContextMenu_x                      0x1403BB450
#define CChatWindowManager__FreeChatWindow_x                       0x1403BA2C0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C37D0
#define CChatWindowManager__CreateChatWindow_x                     0x1403B9CF0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140111AA0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C4840
#define CChatWindow__Clear_x                                       0x1403C5850
#define CChatWindow__WndNotification_x                             0x1403C6AC0
#define CChatWindow__AddHistory_x                                  0x1403C5350

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405EF210
#define CContextMenu__RemoveMenuItem_x                             0x1405EF620
#define CContextMenu__RemoveAllMenuItems_x                         0x1405EF5F0
#define CContextMenu__CheckMenuItem_x                              0x1405EF460
#define CContextMenu__SetMenuItem_x                                0x1405EF640
#define CContextMenu__AddSeparator_x                               0x1405EF390

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405E0FA0
#define CContextMenuManager__RemoveMenu_x                          0x1405E1570
#define CContextMenuManager__PopupMenu_x                           0x1405E12B0
#define CContextMenuManager__Flush_x                               0x1405E1020
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D5220

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140675A20
#define CChatService__GetFriendName_x                              0x1406BD7D0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405D1EB0
#define CComboWnd__Draw_x                                          0x1405D1FB0
#define CComboWnd__GetCurChoice_x                                  0x1405D22A0  // unused
#define CComboWnd__GetListRect_x                                   0x1405D2340
#define CComboWnd__InsertChoice_x                                  0x1405D2670
#define CComboWnd__SetColors_x                                     0x1405D2A00
#define CComboWnd__SetChoice_x                                     0x1405D29C0
#define CComboWnd__GetItemCount_x                                  0x1405D2330
#define CComboWnd__GetCurChoiceText_x                              0x1405D22E0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405D2270
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405D2730

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D2F10
#define CContainerWnd__SetContainer_x                              0x140432F90
#define CContainerWnd__vftable_x                                   0x140A05A10

// CDisplay
#define CDisplay__cameraType_x                                     0x140DFEC1C
#define CDisplay__ZoneMainUI_x                                     0x140609C30
#define CDisplay__PreZoneMainUI_x                                  0x1401A7AB0
#define CDisplay__CleanGameUI_x                                    0x140199C80
#define CDisplay__GetClickedActor_x                                0x14019DEE0
#define CDisplay__GetUserDefinedColor_x                            0x14019EB50
#define CDisplay__InitCharSelectUI_x                               0x14019EE00
#define CDisplay__ReloadUI_x                                       0x1401A9F60
#define CDisplay__RestartUI_x                                      0x14020D560
#define CDisplay__WriteTextHD2_x                                   0x1401B0EF0
#define CDisplay__TrueDistance_x                                   0x1401B0B90
#define CDisplay__SetViewActor_x                                   0x1401AD490
#define CDisplay__GetFloorHeight_x                                 0x14019E140
#define CDisplay__ToggleScreenshotMode_x                           0x1401B0680
#define CDisplay__RealRender_World_x                               0x1401A9340

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1406140F0
#define CEditWnd__DrawCaret_x                                      0x1406058C0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140605DE0
#define CEditWnd__GetCaretPt_x                                     0x140606080  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1406060C0
#define CEditWnd__GetDisplayString_x                               0x140606320
#define CEditWnd__GetHorzOffset_x                                  0x140606570
#define CEditWnd__GetLineForPrintableChar_x                        0x1406066D0
#define CEditWnd__GetSelStartPt_x                                  0x1406069C0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140606800
#define CEditWnd__PointFromPrintableChar_x                         0x140607580
#define CEditWnd__ReplaceSelection_x                               0x140607940
#define CEditWnd__SelectableCharFromPoint_x                        0x140607E00
#define CEditWnd__SetEditable_x                                    0x1406080A0
#define CEditWnd__SetWindowText_x                                  0x1406080D0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140284440
#define CEverQuest__ClickedPlayer_x                                0x1402785F0
#define CEverQuest__CreateTargetIndicator_x                        0x140278EF0
#define CEverQuest__DoTellWindow_x                                 0x1401117A0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140112090 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140285E30
#define CEverQuest__dsp_chat_x                                     0x1401111D0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402B1670
#define CEverQuest__Emote_x                                        0x1402867C0
#define CEverQuest__GetBodyTypeDesc_x                              0x1402875A0
#define CEverQuest__GetClassDesc_x                                 0x140287600
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402879D0
#define CEverQuest__GetDeityDesc_x                                 0x140287C70
#define CEverQuest__GetLangDesc_x                                  0x1402880A0
#define CEverQuest__GetRaceDesc_x                                  0x140288440
#define CEverQuest__InterpretCmd_x                                 0x14028A080
#define CEverQuest__LeftClickedOnPlayer_x                          0x14029FAF0
#define CEverQuest__LMouseUp_x                                     0x14028BB90
#define CEverQuest__RightClickedOnPlayer_x                         0x14029CE90
#define CEverQuest__RMouseUp_x                                     0x140296530
#define CEverQuest__SetGameState_x                                 0x1402A25B0
#define CEverQuest__UPCNotificationFlush_x                         0x1402A7FF0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14028B770
#define CEverQuest__ReportSuccessfulHeal_x                         0x140297920
#define CEverQuest__ReportSuccessfulHit_x                          0x140298740

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403E8B00

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400CA6C0
#define CGuild__GetGuildName_x                                     0x1400CA700

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x14040F9D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C3C90
#define CHotButton__SetCheck_x                                     0x1402C3F60

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140429B00
#define CInvSlotMgr__MoveItem_x                                    0x14042A690
#define CInvSlotMgr__SelectSlot_x                                  0x14042C9E0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140426710
#define CInvSlot__SliderComplete_x                                 0x1404280E0
#define CInvSlot__GetItemBase_x                                    0x140421C90
#define CInvSlot__UpdateItem_x                                     0x1404285B0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14042EEA0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404505A0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404537F0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14044CE40
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14044E780
#define CItemDisplayWnd__RequestConvertItem_x                      0x14044F9B0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14051E4D0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140520260

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14055BC30

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404494C0

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x1405200A0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015E9B0

// CLabel
#define CLabel__UpdateText_x                                       0x14045ADF0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405D5840
#define CListWnd__dCListWnd_x                                      0x1405D5C80
#define CListWnd__vftable_x                                        0x140AEE850
#define CListWnd__AddColumn_x                                      0x1405D6310
#define CListWnd__AddColumn1_x                                     0x1405D63B0
#define CListWnd__AddLine_x                                        0x1405D6510
#define CListWnd__AddString_x                                      0x1405D6AB0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405D7020
#define CListWnd__CalculateVSBRange_x                              0x1405D7300
#define CListWnd__ClearSel_x                                       0x1405D74B0
#define CListWnd__ClearAllSel_x                                    0x1405D7450
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405D7510
#define CListWnd__Compare_x                                        0x1405D76D0
#define CListWnd__Draw_x                                           0x1405D7B90
#define CListWnd__DrawColumnSeparators_x                           0x1405D8720
#define CListWnd__DrawHeader_x                                     0x1405D87E0
#define CListWnd__DrawItem_x                                       0x1405D8EC0
#define CListWnd__DrawLine_x                                       0x1405D9860
#define CListWnd__DrawSeparator_x                                  0x1405D9D20
#define CListWnd__EnableLine_x                                     0x1405DA140
#define CListWnd__EnsureVisible_x                                  0x1405DA1A0
#define CListWnd__ExtendSel_x                                      0x1405DA2A0
#define CListWnd__GetColumnMinWidth_x                              0x1405DA630
#define CListWnd__GetColumnWidth_x                                 0x1405DA6B0
#define CListWnd__GetCurSel_x                                      0x1405DA7B0
#define CListWnd__GetItemData_x                                    0x1405DAB30
#define CListWnd__GetItemHeight_x                                  0x1405DAB70
#define CListWnd__GetItemRect_x                                    0x1405DADA0
#define CListWnd__GetItemText_x                                    0x1405DB040
#define CListWnd__GetSelList_x                                     0x1405DB2A0
#define CListWnd__GetSeparatorRect_x                               0x1405DB490
#define CListWnd__InsertLine_x                                     0x1405DC900
#define CListWnd__RemoveLine_x                                     0x1405DCF70
#define CListWnd__SetColors_x                                      0x1405DD330
#define CListWnd__SetColumnJustification_x                         0x1405DD350
#define CListWnd__SetColumnLabel_x                                 0x1405DD3D0
#define CListWnd__SetColumnWidth_x                                 0x1405DD570
#define CListWnd__SetCurSel_x                                      0x1405DD640
#define CListWnd__SetItemColor_x                                   0x1405DD8B0
#define CListWnd__SetItemData_x                                    0x1405DD950
#define CListWnd__SetItemText_x                                    0x1405DDB90
#define CListWnd__Sort_x                                           0x1405DDFA0
#define CListWnd__ToggleSel_x                                      0x1405DE110
#define CListWnd__SetColumnsSizable_x                              0x1405DD5C0
#define CListWnd__SetItemWnd_x                                     0x1405DDCC0
#define CListWnd__GetItemWnd_x                                     0x1405DB230
#define CListWnd__SetItemIcon_x                                    0x1405DD990
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405D6DF0
#define CListWnd__SetVScrollPos_x                                  0x1405DDF00

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14046E7A0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A53430
#define MapViewMap__Clear_x                                        0x140470460
#define MapViewMap__SetZoom_x                                      0x140476900
#define MapViewMap__HandleLButtonDown_x                            0x140473400

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140498980  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14049F2F0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14049FAD0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404A33F0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404A26F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A7890

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14069AA90
#define CPacketScrambler__hton_x                                   0x14069AA80

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405FF1D0
#define CSidlManagerBase__FindAnimation1_x                         0x1405FF110
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405FF810
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405FF5B0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405FE510
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405FE4A0
#define CSidlManagerBase__CreateXWnd_x                             0x1405FDAE0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140511340
#define CSidlManager__CreateXWnd_x                                 0x140511500

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405C35B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405C3490
#define CSidlScreenWnd__ConvertToRes_x                             0x14060E430 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405C3730
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405C2C50
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405C2D20
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405C2F90
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405C3E20
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405C4050
#define CSidlScreenWnd__GetChildItem_x                             0x1405C41F0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405C4440
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405CE460 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405C47B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405C4AF0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405C53B0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405C5DB0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F589B8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C6440
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C6C30
#define CSidlScreenWnd__vftable_x                                  0x140AEDAD8
#define CSidlScreenWnd__WndNotification_x                          0x1405C6C80

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403403D0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140340700 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140340630
#define CSkillMgr__IsActivatedSkill_x                              0x140340AC0
#define CSkillMgr__IsCombatSkill_x                                 0x140340B00
#define CSkillMgr__GetSkillTimerDuration_x                         0x140340A30
#define CSkillMgr__GetSkillLastUsed_x                              0x140340680

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405DEA50
#define CSliderWnd__SetValue_x                                     0x1405DF260
#define CSliderWnd__SetNumTicks_x                                  0x1405DF0E0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140517C20

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405E39F0
#define CStmlWnd__CalculateHSBRange_x                              0x1405CDE20
#define CStmlWnd__CalculateVSBRange_x                              0x1405E4920
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405E53C0
#define CStmlWnd__ForceParseNow_x                                  0x1405E5460
#define CStmlWnd__GetVisibleText_x                                 0x1405E5B30
#define CStmlWnd__MakeStmlColorTag_x                               0x1405E78C0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405E7900
#define CStmlWnd__SetSTMLText_x                                    0x1405EE990
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405EEB40
#define CStmlWnd__UpdateHistoryString_x                            0x1405EEEE0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405DF610
#define CTabWnd__DrawCurrentPage_x                                 0x1405DF6B0
#define CTabWnd__DrawTab_x                                         0x1405DFA80
#define CTabWnd__GetTabRect_x                                      0x1405E0110
#define CTabWnd__InsertPage_x                                      0x1405E03E0
#define CTabWnd__RemovePage_x                                      0x1405E0670
#define CTabWnd__SetPage_x                                         0x1405E07D0
#define CTabWnd__UpdatePage_x                                      0x1405E0AD0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140608500
#define CPageWnd__SetTabText_x                                     0x140608570

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C3BD0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C4000


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F6540
#define CTextureFont__DrawWrappedText1_x                           0x1405F6440
#define CTextureFont__DrawWrappedText2_x                           0x1405F6670
#define CTextureFont__GetTextExtent_x                              0x1405F6A20
#define CTextureFont__GetHeight_x                                  0x1405F69E0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14060CB50

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405C00A0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D84060
#define CXStr__gCXStrAccess_x                                      0x140F58518

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405C9480
#define CXWnd__ClrFocus_x                                          0x1405C9770
#define CXWnd__Destroy_x                                           0x1405C98F0
#define CXWnd__DoAllDrawing_x                                      0x1405C99F0
#define CXWnd__DrawColoredRect_x                                   0x1405CA1C0
#define CXWnd__DrawTooltip_x                                       0x1405CB850
#define CXWnd__DrawTooltipAtPoint_x                                0x1405CB910
#define CXWnd__GetChildItem_x                                      0x1405CC220
#define CXWnd__GetChildWndAt_x                                     0x1405CC2E0
#define CXWnd__GetClientRect_x                                     0x1405CC590
#define CXWnd__GetClientClipRect_x                                 0x1405CC450
#define CXWnd__GetRelativeRect_x                                   0x1405CDF50
#define CXWnd__GetScreenClipRect_x                                 0x1405CE060
#define CXWnd__GetScreenRect_x                                     0x1405CE1E0
#define CXWnd__GetTooltipRect_x                                    0x1405CE360
#define CXWnd__IsActive_x                                          0x1405CE920
#define CXWnd__IsDescendantOf_x                                    0x1405CE950
#define CXWnd__IsReallyVisible_x                                   0x1405CE9B0
#define CXWnd__IsType_x                                            0x1405CEA00
#define CXWnd__Minimize_x                                          0x1405CEAF0
#define CXWnd__ProcessTransition_x                                 0x1405CF9E0
#define CXWnd__Resize_x                                            0x1405CFB00
#define CXWnd__Right_x                                             0x1405CFBA0
#define CXWnd__SetFocus_x                                          0x1405CFF50
#define CXWnd__SetFont_x                                           0x1405CFFA0
#define CXWnd__SetKeyTooltip_x                                     0x1405D00B0
#define CXWnd__SetMouseOver_x                                      0x1405D0200
#define CXWnd__SetParent_x                                         0x1405D0280
#define CXWnd__StartFade_x                                         0x1405D06C0
#define CXWnd__vftable_x                                           0x140AEE0B0
#define CXWnd__CXWnd_x                                             0x1405C80B0
#define CXWnd__dCXWnd_x                                            0x1405C89C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140613880

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405F07E0
#define CXWndManager__DrawCursor_x                                 0x1405F0AC0
#define CXWndManager__DrawWindows_x                                0x1405F0D20
#define CXWndManager__GetKeyboardFlags_x                           0x1405F1370
#define CXWndManager__HandleKeyboardMsg_x                          0x1405F13B0
#define CXWndManager__RemoveWnd_x                                  0x1405F4BD0

// CDBStr
#define CDBStr__GetString_x                                        0x140197E40

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406A40E0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D8DD0
#define CCharacterListWnd__EnterWorld_x                            0x1400D7BD0
#define CCharacterListWnd__Quit_x                                  0x1400D8DB0
#define CCharacterListWnd__UpdateList_x                            0x1400D9B10

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140671610
#define ItemBase__CreateItemTagString_x                            0x1406720A0
#define ItemBase__GetImageNum_x                                    0x1406747B0
#define ItemBase__GetItemValue_x                                   0x140676370
#define ItemBase__IsEmpty_x                                        0x140678060
#define ItemBase__IsKeyRingItem_x                                  0x140678770
#define ItemBase__ValueSellMerchant_x                              0x14067C900
#define ItemClient__CanDrop_x                                      0x1402C64E0
#define ItemClient__CanGoInBag_x                                   0x1402C6610
#define ItemClient__CreateItemClient_x                             0x1402C68A0
#define ItemClient__dItemClient_x                                  0x1402C6350

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B7CC0
#define EQ_LoadingS__Array_x                                       0x140D5DD60

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140688A80
#define PcBase__GetCombatAbility_x                                 0x140689310
#define PcBase__GetCombatAbilityTimer_x                            0x1406893F0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140689C10
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14068A6E0
#define PcClient__AlertInventoryChanged_x                          0x1402E9AB0
#define PcClient__GetConLevel_x                                    0x1402EA200  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402EC8E0
#define PcClient__HasLoreItem_x                                    0x1402ED9B0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FA3A0
#define PcZoneClient__RemoveMyAffect_x                             0x1402FD8F0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022DDD0
#define EQGroundItemListManager__Add_x                             0x14022DF80
#define EQGroundItemListManager__Clear_x                           0x14022E020
#define EQGroundItemListManager__Delete_x                          0x14022E0E0
#define EQGroundItemListManager__Instance_x                        0x14022E170

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140269A00

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140192590

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14065CFA0
#define PlayerBase__CanSee1_x                                      0x14065D080
#define PlayerBase__GetVisibilityLineSegment_x                     0x14065D570
#define PlayerBase__HasProperty_x                                  0x14065D750
#define PlayerBase__IsTargetable_x                                 0x14065D810
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030B810
#define PlayerClient__GetPcClient_x                                0x14030E350
#define PlayerClient__PlayerClient_x                               0x140303A90
#define PlayerClient__SetNameSpriteState_x                         0x140311A80
#define PlayerClient__SetNameSpriteTint_x                          0x140312A40
#define PlayerZoneClient__ChangeHeight_x                           0x140321680
#define PlayerZoneClient__DoAttack_x                               0x140322390
#define PlayerZoneClient__GetLevel_x                               0x140325AB0
#define PlayerZoneClient__IsValidTeleport_x                        0x14026C770
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6330

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031AB50  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14031AC00  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031AD00
#define PlayerManagerClient__CreatePlayer_x                        0x14031A610
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14065CAB0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CBB00
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CB410
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CB480
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CBA90  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402CBC20
#define KeypressHandler__HandleKeyUp_x                             0x1402CBD40
#define KeypressHandler__SaveKeymapping_x                          0x1402CB910  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406A1BE0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14069C1B0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F3B00  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F8440
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FB490
#define PcZoneClient__RemovePetEffect_x                            0x1402FDBD0
#define PcZoneClient__HasAlternateAbility_x                        0x1402FC0B0
#define PcZoneClient__CanEquipItem_x                               0x1402F6750
#define PcZoneClient__GetItemByID_x                                0x1402F9420
#define PcZoneClient__RemoveBuffEffect_x                           0x1402FD780
#define PcZoneClient__BandolierSwap_x                              0x1402E9B60

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402712B0

// IconCache
#define IconCache__GetIcon_x                                       0x1403DD990

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D1C60
#define CContainerMgr__CloseContainer_x                            0x1403D1580
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D2000

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404D4530

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402BDA50

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140462350
#define CLootWnd__RequestLootSlot_x                                0x1404633A0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E85A0
#define EQ_Spell__SpellAffects_x                                   0x1401E99D0
#define EQ_Spell__SpellAffectBase_x                                0x1401E9930
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E2130
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E20E0
#define EQ_Spell__IsSPAStacking_x                                  0x1401E9640
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E91F0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E8AB0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C91D0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1405322E0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140531A00
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140531210

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140539B80  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018F010
#define CTaskManager__GetTaskStatus_x                              0x14018F120
#define CTaskManager__GetElementDescription_x                      0x14018ECA0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E6820
#define EqSoundManager__PlayScriptMp3_x                            0x1401E55B0
#define EqSoundManager__SoundAssistPlay_x                          0x1403457B0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140345AF0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405D1480
#define CTextureAnimation__SetCurCell_x                            0x1405D1790

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BBC40

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406BB060
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406BB0E0
#define CharacterBase__IsExpansionFlag_x                           0x14020CBB0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403ABEF0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403AC940
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403ADEF0

// messages
#define msg_spell_worn_off_x                                       0x140223FD0
#define msg_new_text_x                                             0x14021F7D0
#define __msgTokenTextParam_x                                      0x140216B60
#define msgTokenText_x                                             0x140216A70

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140347520
#define SpellManager__GetSpellByGroupAndRank_x                     0x140347420

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14066CD90

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14045B580

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D6AB0
#define CCursorAttachment__IsOkToActivate_x                        0x1403D9F20
#define CCursorAttachment__RemoveAttachment_x                      0x1403DA1D0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14060AFB0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14060B1B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x14060B1C0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140159220
#define CFindItemWnd__Update_x                                     0x140159BE0
#define CFindItemWnd__PickupSelectedItem_x                         0x140152870

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140163E90
#define LootFiltersManager__GetItemFilterData_x                    0x1401649C0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140165270
#define LootFiltersManager__SetItemLootFilter_x                    0x140165520

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404B6320

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14033FF10
#define CResolutionHandler__UpdateResolution_x                     0x1405B5BF0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403CDDA0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406BF340  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406BF230  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403F8170
#define CGroupWnd__UpdateDisplay_x                                 0x1403F7300

// ItemBase
#define ItemBase__IsLore_x                                         0x1406788B0
#define ItemBase__IsLoreEquipped_x                                 0x140678940

#define MultipleItemMoveManager__ProcessMove_x                     0x1402DF600

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140269B40
#define EQPlacedItemManager__GetItemByGuid_x                       0x140269AD0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140269B10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033A120

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012F4B0
#define FactionManagerClient__HandleFactionMessage_x               0x14012F890
#define FactionManagerClient__GetFactionStanding_x                 0x14012EC80
#define FactionManagerClient__GetMaxFaction_x                      0x14012EC80
#define FactionManagerClient__GetMinFaction_x                      0x14012EB30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B5F20

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14013AE60

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C0E10
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401BFFA0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C0C30  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C0BB0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14034C830

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405C7280

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008AA00

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14035E0F0

// AchievementManager
#define AchievementManager__Instance_x                             0x140093F30

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406A4C70
#define FreeToPlayClient__RestrictionInfo_x                        0x140B02C50

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140569070

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140857A18
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072ED0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073060
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140073210

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
