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

#define __ClientDate                                               20260825u
#define __ExpectedVersionDate                                     "Aug 25 2026"
#define __ExpectedVersionTime                                     "12:55:21"
#define __ActualVersionDate_x                                      0x140991DB8
#define __ActualVersionTime_x                                      0x140991DA8
#define __ActualVersionBuild_x                                     0x140D8A908

// Memory Protection
#define __MemChecker0_x                                            0x1402D28D0
#define __MemChecker1_x                                            0x1405ADD60
#define __MemChecker4_x                                            0x14029FB90
#define __EncryptPad0_x                                            0x140D6FC40

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EB85C0
#define instEQZoneInfo_x                                           0x140EB87B4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402323E0
#define __gfMaxZoomCameraDistance_x                                0x140928078
#define __gfMaxCameraDistance_x                                    0x140AD2214
#define __CurrentSocial_x                                          0x140C240E4 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D63970
#define g_eqCommandStates_x                                        0x140D64A10
#define __CommandList_x                                            0x140D64C50
#define __ScreenMode_x                                             0x140DFFE74
#define __gWorld_x                                                 0x140EB2C98
#define __gpbCommandEvent_x                                        0x140EB7010
#define __ServerHost_x                                             0x140EB31E8
#define __Guilds_x                                                 0x140EB7170
#define __MemCheckBitmask_x                                        0x140EB8B03
#define __MemCheckActive_x                                         0x140EBA21D
#define __MouseEventTime_x                                         0x140F2DB90
#define DI8__MouseState_x                                          0x140F31D78
#define __heqmain_x                                                0x140F34208
#define DI8__Mouse_x                                               0x140F34220
#define __HWnd_x                                                   0x140F34228
#define __Mouse_x                                                  0x140F34230
#define DI8__Keyboard_x                                            0x140F34250
#define __LoginName_x                                              0x140F349BC
#define __CurrentMapLabel_x                                        0x140F484F0
#define __LabelCache_x                                             0x140F490C0
#define __ChatFilterDefs_x                                         0x140A6C090
#define Teleport_Table_Size_x                                      0x140EB3008
#define Teleport_Table_x                                           0x140EB0A50

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EB3500
#define pinstActiveBanker_x                                        0x140EB2F30
#define pinstActiveCorpse_x                                        0x140EB2F20
#define pinstActiveGMaster_x                                       0x140EB2F28
#define pinstActiveMerchant_x                                      0x140EB2F18
#define pinstAltAdvManager_x                                       0x140E00CF8
#define pinstCEverQuest_x                                          0x140F34268
#define pinstCamActor_x                                            0x140DFFE60
#define pinstCDBStr_x                                              0x140DFFAB0
#define pinstCDisplay_x                                            0x140EB2FE0
#define pinstControlledPlayer_x                                    0x140EB2FC0
#define pinstCResolutionHandler_x                                  0x140F59668
#define pinstCSidlManager_x                                        0x140F5A660
#define pinstCXWndManager_x                                        0x140F5A658
#define instDynamicZone_x                                          0x140EB7030 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140EB707E
#define instExpeditionName_x                                       0x140EB70BE
#define pinstDZMember_x                                            0x140EB7148
#define pinstDZTimerInfo_x                                         0x140EB7150
#define pinstEqLogin_x                                             0x140F34300
#define instTribute_x                                              0x140D5C880
#define pinstDeviceInputProxy_x                                    0x140EB861C
#define pinstEQSoundManager_x                                      0x140E01080
#define pinstEQSpellStrings_x                                      0x140DE4630
#define pinstSGraphicsEngine_x                                     0x140F59698
#define pinstLocalPC_x                                             0x140EB2A80
#define pinstLocalPlayer_x                                         0x140EB2F10
#define pinstCMercenaryClientManager_x                             0x140F2F4B0
#define pinstModelPlayer_x                                         0x140EB2F40
#define pinstRenderInterface_x                                     0x140F596B0
#define pinstSkillMgr_x                                            0x140F31188
#define pinstSpawnManager_x                                        0x140F2F888
#define pinstSpellManager_x                                        0x140F311F8
#define pinstStringTable_x                                         0x140EB2A88
#define pinstSwitchManager_x                                       0x140EB09B0
#define pinstTarget_x                                              0x140EB2FB8
#define pinstTaskMember_x                                          0x140D5C870 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140EB2F38
#define instTributeActive_x                                        0x140D5C8A9
#define pinstViewActor_x                                           0x140DFFE58
#define pinstWorldData_x                                           0x140EB0A48
#define pinstPlayerPath_x                                          0x140F2F8B0
#define pinstTargetIndicator_x                                     0x140F312A8
#define EQObject_Top_x                                             0x140EB2FE8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F45640
#define pinstCContainerMgr_x                                       0x140E00098
#define pinstCContextMenuManager_x                                 0x140F5A340
#define pinstCInvSlotMgr_x                                         0x140E00078
#define pinstCItemDisplayManager_x                                 0x140F480C0
#define pinstCPopupWndManager_x                                    0x140F48950
#define pinstCSpellDisplayMgr_x                                    0x140F48FA0
#define pinstCTaskManager_x                                        0x140C257B0
#define pinstEQSuiteTextureLoader_x                                0x140D856F0
#define pinstItemIconCache_x                                       0x140F459A8
#define pinstLootFiltersManager_x                                  0x140DFF4F8
#define pinstGFViewListener_x                                      0x140F59B18


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14025CC20
#define __CastRay_x                                                0x140254C80
#define __CastRay2_x                                               0x140254970
#define __compress_block_x                                         0x140563890
#define __ConvertItemTags_x                                        0x140255110
#define __CleanItemTags_x                                          0x14008E6C0
#define __CreateCascadeMenuItems_x                                 0x14019B020
#define __decompress_block_x                                       0x1405A93E0
#define __DoesFileExist_x                                          0x1405B1DD0
#define __EQGetTime_x                                              0x1405AE310
#define __ExecuteCmd_x                                             0x140229880
#define __FixHeading_x                                             0x14066B430
#define __FlushDxKeyboard_x                                        0x140357C70
#define __get_bearing_x                                            0x14025EF30
#define __get_melee_range_x                                        0x14025F020
#define __GetAnimationCache_x                                      0x1403DE5F0
#define __GetGaugeValueFromEQ_x                                    0x140522640
#define __GetLabelFromEQ_x                                         0x140523C30
#define __GetXTargetType_x                                         0x14066D920   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14066B4B0
#define __HelpPath_x                                               0x140F2DA58   // Why?
#define __NewUIINI_x                                               0x140530150   // Why?
#define __ProcessDeviceEvents_x                                    0x1402A0190
#define __ProcessGameEvents_x                                      0x140294950
#define __ProcessKeyboardEvents_x                                  0x140359450
#define __ProcessMouseEvents_x                                     0x1402960B0
#define __SaveColors_x                                             0x1401AB1F0
#define __STMLToText_x                                             0x1405C2660
#define __WndProc_x                                                0x140356430
#define CMemoryMappedFile__SetFile_x                               0x1408186C0
#define DrawNetStatus_x                                            0x1402E1EA0
#define Util__FastTime_x                                           0x1405AD6B0
#define __eq_delete_x                                              0x1406E43C8
#define __eq_new_x                                                 0x1406E4620
#define __CopyLayout_x                                             0x1402CECA0
#define __ThrottleFrameRate_x                                      0x140283A73
#define __ThrottleFrameRateEnd_x                                   0x140283A79

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140369710
#define CAAWnd__Update_x                                           0x140369B70
#define CAAWnd__UpdateSelected_x                                   0x14036B1C0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ABF20
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400ABD10
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A80C0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B41C0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B6490
#define AltAdvManager__IsAbilityReady_x                            0x1401B6970
#define AltAdvManager__GetAAById_x                                 0x1401B5D20
#define AltAdvManager__CanTrainAbility_x                           0x1401B5B20
#define AltAdvManager__CanSeeAbility_x                             0x1401B5840

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400DB5C0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DC480
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DC6D0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400F0C70
#define CharacterZoneClient__CanUseItem_x                          0x1400F1230
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DD0B0
#define CharacterZoneClient__CastSpell_x                           0x1400DD150
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400ED0A0
#define CharacterZoneClient__Cur_HP_x                              0x1400F2A30
#define CharacterZoneClient__Cur_Mana_x                            0x1400F2BF0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400E05B0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F9340
#define CharacterZoneClient__GetBaseSkill_x                        0x14054E6F0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E1A50
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F0570
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400FABD0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F9AC0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E1BD0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D1090
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D2F60
#define CharacterZoneClient__GetHPRegen_x                          0x1400FA1F0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F2680
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400FACA0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E1C50
#define CharacterZoneClient__GetManaRegen_x                        0x1400FBA60
#define CharacterZoneClient__GetModCap_x                           0x140103190
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E1F50
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E2120
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D65E0
#define CharacterZoneClient__HasSkill_x                            0x1400FEC00
#define CharacterZoneClient__HitBySpell_x                          0x1400E2B90
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E6510
#define CharacterZoneClient__MakeMeVisible_x                       0x140102C70
#define CharacterZoneClient__Max_Endurance_x                       0x1402FCE10  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x140102FC0
#define CharacterZoneClient__Max_Mana_x                            0x1402FD030  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140103420
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E9B50
#define CharacterZoneClient__SpellDuration_x                       0x1400EA880
#define CharacterZoneClient__TotalEffect_x                         0x1400EBD00
#define CharacterZoneClient__UseSkill_x                            0x1401095E0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038B2A0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140396030
#define CBarterWnd__UpdateInventoryList_x                          0x140394F30

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140391D60
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140395670

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140398950

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AF1CD8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BBF30
#define CChatWindowManager__InitContextMenu_x                      0x1403BC0C0
#define CChatWindowManager__FreeChatWindow_x                       0x1403BAF30
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C4440
#define CChatWindowManager__CreateChatWindow_x                     0x1403BA960

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140111BE0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C54B0
#define CChatWindow__Clear_x                                       0x1403C64A0
#define CChatWindow__WndNotification_x                             0x1403C76F0
#define CChatWindow__AddHistory_x                                  0x1403C5FB0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405EFD80
#define CContextMenu__RemoveMenuItem_x                             0x1405F0190
#define CContextMenu__RemoveAllMenuItems_x                         0x1405F0160
#define CContextMenu__CheckMenuItem_x                              0x1405EFAE0
#define CContextMenu__SetMenuItem_x                                0x1405F01B0
#define CContextMenu__AddSeparator_x                               0x1405EFF00

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405E1B80
#define CContextMenuManager__RemoveMenu_x                          0x1405E2150
#define CContextMenuManager__PopupMenu_x                           0x1405E1E90
#define CContextMenuManager__Flush_x                               0x1405E1C00
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D5EA0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406BF2D0
#define CChatService__GetFriendName_x                              0x1406BF2E0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405D2A90
#define CComboWnd__Draw_x                                          0x1405D2B90
#define CComboWnd__GetCurChoice_x                                  0x1405D2E70  // unused
#define CComboWnd__GetListRect_x                                   0x1405D2F10
#define CComboWnd__InsertChoice_x                                  0x1405D3250
#define CComboWnd__SetColors_x                                     0x1405D35E0
#define CComboWnd__SetChoice_x                                     0x1405D35A0
#define CComboWnd__GetItemCount_x                                  0x1405D2F00
#define CComboWnd__GetCurChoiceText_x                              0x1405D2EB0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405D2E40
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405D3310

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D3B70
#define CContainerWnd__SetContainer_x                              0x1403D4CF0
#define CContainerWnd__vftable_x                                   0x140A06DA0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DFFBFC
#define CDisplay__ZoneMainUI_x                                     0x14060A8C0
#define CDisplay__PreZoneMainUI_x                                  0x1401A7F10
#define CDisplay__CleanGameUI_x                                    0x14019A0E0
#define CDisplay__GetClickedActor_x                                0x14019E340
#define CDisplay__GetUserDefinedColor_x                            0x14019EFB0
#define CDisplay__InitCharSelectUI_x                               0x14019F260
#define CDisplay__ReloadUI_x                                       0x1401AA3F0
#define CDisplay__RestartUI_x                                      0x14020DAF0
#define CDisplay__WriteTextHD2_x                                   0x1401B1390
#define CDisplay__TrueDistance_x                                   0x1401B1030
#define CDisplay__SetViewActor_x                                   0x1401AD930
#define CDisplay__GetFloorHeight_x                                 0x14019E5A0
#define CDisplay__ToggleScreenshotMode_x                           0x1401B0B20
#define CDisplay__RealRender_World_x                               0x1401A97D0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140614D80
#define CEditWnd__DrawCaret_x                                      0x140606460  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140606980
#define CEditWnd__GetCaretPt_x                                     0x140606C20  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140606C60
#define CEditWnd__GetDisplayString_x                               0x140606EC0
#define CEditWnd__GetHorzOffset_x                                  0x140607110
#define CEditWnd__GetLineForPrintableChar_x                        0x140607270
#define CEditWnd__GetSelStartPt_x                                  0x140607560  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1406073A0
#define CEditWnd__PointFromPrintableChar_x                         0x1406081A0
#define CEditWnd__ReplaceSelection_x                               0x140608550
#define CEditWnd__SelectableCharFromPoint_x                        0x140608A10
#define CEditWnd__SetEditable_x                                    0x140608CB0
#define CEditWnd__SetWindowText_x                                  0x140608CE0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140284B50
#define CEverQuest__ClickedPlayer_x                                0x140278B90
#define CEverQuest__CreateTargetIndicator_x                        0x140279490
#define CEverQuest__DoTellWindow_x                                 0x1401118E0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401121D0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140286540
#define CEverQuest__dsp_chat_x                                     0x140111310 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402B1D80
#define CEverQuest__Emote_x                                        0x140286ED0
#define CEverQuest__GetBodyTypeDesc_x                              0x140287CB0
#define CEverQuest__GetClassDesc_x                                 0x140287D10
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402880E0
#define CEverQuest__GetDeityDesc_x                                 0x140288380
#define CEverQuest__GetLangDesc_x                                  0x1402887B0
#define CEverQuest__GetRaceDesc_x                                  0x140288B50
#define CEverQuest__InterpretCmd_x                                 0x14028A790
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402A0200
#define CEverQuest__LMouseUp_x                                     0x14028C2A0
#define CEverQuest__RightClickedOnPlayer_x                         0x14029D5A0
#define CEverQuest__RMouseUp_x                                     0x140296C40
#define CEverQuest__SetGameState_x                                 0x1402A2CC0
#define CEverQuest__UPCNotificationFlush_x                         0x1402A8700 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14028BE80
#define CEverQuest__ReportSuccessfulHeal_x                         0x140298030
#define CEverQuest__ReportSuccessfulHit_x                          0x140298E50

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403E97C0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400CA830
#define CGuild__GetGuildName_x                                     0x1400CA870

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140410620

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C4E20
#define CHotButton__SetCheck_x                                     0x1402C4630

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14042A6F0
#define CInvSlotMgr__MoveItem_x                                    0x14042B280
#define CInvSlotMgr__SelectSlot_x                                  0x14042D590

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140427310
#define CInvSlot__SliderComplete_x                                 0x140428CE0
#define CInvSlot__GetItemBase_x                                    0x140422890
#define CInvSlot__UpdateItem_x                                     0x1404291C0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14042FA50

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404510A0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404542D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14044D990
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14044F2B0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404504C0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14051F0B0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140520E40

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14055C870

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14044A030

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x140520C80

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015ED40

// CLabel
#define CLabel__UpdateText_x                                       0x14045B8F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405D6420
#define CListWnd__dCListWnd_x                                      0x1405D6860
#define CListWnd__vftable_x                                        0x140AEFE00
#define CListWnd__AddColumn_x                                      0x1405D6EF0
#define CListWnd__AddColumn1_x                                     0x1405D6F90
#define CListWnd__AddLine_x                                        0x1405D70F0
#define CListWnd__AddString_x                                      0x1405D7690
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405D79D0
#define CListWnd__CalculateVSBRange_x                              0x1405D7EE0
#define CListWnd__ClearSel_x                                       0x1405D8080
#define CListWnd__ClearAllSel_x                                    0x1405D8020
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405D80E0
#define CListWnd__Compare_x                                        0x1405D82A0
#define CListWnd__Draw_x                                           0x1405D8760
#define CListWnd__DrawColumnSeparators_x                           0x1405D92F0
#define CListWnd__DrawHeader_x                                     0x1405D93B0
#define CListWnd__DrawItem_x                                       0x1405D9A90
#define CListWnd__DrawLine_x                                       0x1405DA430
#define CListWnd__DrawSeparator_x                                  0x1405DA8F0
#define CListWnd__EnableLine_x                                     0x1405DAD10
#define CListWnd__EnsureVisible_x                                  0x1405DAD70
#define CListWnd__ExtendSel_x                                      0x1405DAE60
#define CListWnd__GetColumnMinWidth_x                              0x1405DB1F0
#define CListWnd__GetColumnWidth_x                                 0x1405DB270
#define CListWnd__GetCurSel_x                                      0x1405DB370
#define CListWnd__GetItemData_x                                    0x1405DB6F0
#define CListWnd__GetItemHeight_x                                  0x1405DB730
#define CListWnd__GetItemRect_x                                    0x1405DB960
#define CListWnd__GetItemText_x                                    0x1405DBC00
#define CListWnd__GetSelList_x                                     0x1405DBE60
#define CListWnd__GetSeparatorRect_x                               0x1405DC050
#define CListWnd__InsertLine_x                                     0x1405DD4A0
#define CListWnd__RemoveLine_x                                     0x1405DDB10
#define CListWnd__SetColors_x                                      0x1405DDED0
#define CListWnd__SetColumnJustification_x                         0x1405DDEF0
#define CListWnd__SetColumnLabel_x                                 0x1405DDF70
#define CListWnd__SetColumnWidth_x                                 0x1405DE110
#define CListWnd__SetCurSel_x                                      0x1405DE1E0
#define CListWnd__SetItemColor_x                                   0x1405DE450
#define CListWnd__SetItemData_x                                    0x1405DE4F0
#define CListWnd__SetItemText_x                                    0x1405DE730
#define CListWnd__Sort_x                                           0x1405DEB40
#define CListWnd__ToggleSel_x                                      0x1405DECB0
#define CListWnd__SetColumnsSizable_x                              0x1405DE160
#define CListWnd__SetItemWnd_x                                     0x1405DE860
#define CListWnd__GetItemWnd_x                                     0x1405DBDF0
#define CListWnd__SetItemIcon_x                                    0x1405DE530
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405D6A70
#define CListWnd__SetVScrollPos_x                                  0x1405DEAA0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14046F2F0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A54848
#define MapViewMap__Clear_x                                        0x140470FB0
#define MapViewMap__SetZoom_x                                      0x140477450
#define MapViewMap__HandleLButtonDown_x                            0x140473F50

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404995A0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14049FF10
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A06E0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404A4020
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404A3320
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A84F0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14069BBB0
#define CPacketScrambler__hton_x                                   0x14069BBA0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405FFD40
#define CSidlManagerBase__FindAnimation1_x                         0x1405FFC80
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140600380
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140600120
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405FF080
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405FF010
#define CSidlManagerBase__CreateXWnd_x                             0x1405FE650

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140511F10
#define CSidlManager__CreateXWnd_x                                 0x1405120D0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405C40D0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405C4200
#define CSidlScreenWnd__ConvertToRes_x                             0x14060F0C0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405C4370
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405C3890
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405C3960
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405C3BD0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405C4A60
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405C4C90
#define CSidlScreenWnd__GetChildItem_x                             0x1405C4E30
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405C5080
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405CF020 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405C53F0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405C5760
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405C6020
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405C6A20
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F599B8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C70A0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C7890
#define CSidlScreenWnd__vftable_x                                  0x140AEF088
#define CSidlScreenWnd__WndNotification_x                          0x1405C78E0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140340BB0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140340EE0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140340E10
#define CSkillMgr__IsActivatedSkill_x                              0x1403412A0
#define CSkillMgr__IsCombatSkill_x                                 0x1403412E0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140341210
#define CSkillMgr__GetSkillLastUsed_x                              0x140340E60

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405DF620
#define CSliderWnd__SetValue_x                                     0x1405DFE30
#define CSliderWnd__SetNumTicks_x                                  0x1405DFCB0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1405187F0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405E45D0
#define CStmlWnd__CalculateHSBRange_x                              0x1405CEA00
#define CStmlWnd__CalculateVSBRange_x                              0x1405E54E0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405E5F50
#define CStmlWnd__ForceParseNow_x                                  0x1405E5560
#define CStmlWnd__GetVisibleText_x                                 0x1405E66B0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405E8430
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405E8470
#define CStmlWnd__SetSTMLText_x                                    0x1405EF500
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405EF6B0
#define CStmlWnd__UpdateHistoryString_x                            0x1405EFA50

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405E0200
#define CTabWnd__DrawCurrentPage_x                                 0x1405E02A0
#define CTabWnd__DrawTab_x                                         0x1405E0670
#define CTabWnd__GetTabRect_x                                      0x1405E0CF0
#define CTabWnd__InsertPage_x                                      0x1405E0FC0
#define CTabWnd__RemovePage_x                                      0x1405E1250
#define CTabWnd__SetPage_x                                         0x1405E13B0
#define CTabWnd__UpdatePage_x                                      0x1405E16B0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140609140
#define CPageWnd__SetTabText_x                                     0x140609800

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C3D80  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C41B0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F70E0
#define CTextureFont__DrawWrappedText1_x                           0x1405F6FE0
#define CTextureFont__DrawWrappedText2_x                           0x1405F7210
#define CTextureFont__GetTextExtent_x                              0x1405F75C0
#define CTextureFont__GetHeight_x                                  0x1405F7580

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14060D7E0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405C0CE0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D85060
#define CXStr__gCXStrAccess_x                                      0x140F59518

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405CA110
#define CXWnd__ClrFocus_x                                          0x1405CA3E0
#define CXWnd__Destroy_x                                           0x1405CA560
#define CXWnd__DoAllDrawing_x                                      0x1405CA660
#define CXWnd__DrawColoredRect_x                                   0x1405CAE20
#define CXWnd__DrawTooltip_x                                       0x1405CC490
#define CXWnd__DrawTooltipAtPoint_x                                0x1405CC550
#define CXWnd__GetChildItem_x                                      0x1405CCE40
#define CXWnd__GetChildWndAt_x                                     0x1405CCF00
#define CXWnd__GetClientRect_x                                     0x1405CD1A0
#define CXWnd__GetClientClipRect_x                                 0x1405CD070
#define CXWnd__GetRelativeRect_x                                   0x1405CEB20
#define CXWnd__GetScreenClipRect_x                                 0x1405CEC30
#define CXWnd__GetScreenRect_x                                     0x1405CEDA0
#define CXWnd__GetTooltipRect_x                                    0x1405CEF20
#define CXWnd__IsActive_x                                          0x1405CF4E0
#define CXWnd__IsDescendantOf_x                                    0x1405CF500
#define CXWnd__IsReallyVisible_x                                   0x1405CF570
#define CXWnd__IsType_x                                            0x1405CF5C0
#define CXWnd__Minimize_x                                          0x1405CF6C0
#define CXWnd__ProcessTransition_x                                 0x1405D05C0
#define CXWnd__Resize_x                                            0x1405D06E0
#define CXWnd__Right_x                                             0x1405D0780
#define CXWnd__SetFocus_x                                          0x1405D0B30
#define CXWnd__SetFont_x                                           0x1405D0B80
#define CXWnd__SetKeyTooltip_x                                     0x1405D0C90
#define CXWnd__SetMouseOver_x                                      0x1405D0DE0
#define CXWnd__SetParent_x                                         0x1405D0E60
#define CXWnd__StartFade_x                                         0x1405D1290
#define CXWnd__vftable_x                                           0x140AEF660
#define CXWnd__CXWnd_x                                             0x1405C8D10
#define CXWnd__dCXWnd_x                                            0x1405C9650

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140614510

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405F1370
#define CXWndManager__DrawCursor_x                                 0x1405F1650
#define CXWndManager__DrawWindows_x                                0x1405F18B0
#define CXWndManager__GetKeyboardFlags_x                           0x1405F1F20
#define CXWndManager__HandleKeyboardMsg_x                          0x1405F1F60
#define CXWndManager__RemoveWnd_x                                  0x1405F5770

// CDBStr
#define CDBStr__GetString_x                                        0x1401982A0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406A5BF0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D8F50
#define CCharacterListWnd__EnterWorld_x                            0x1400D7D50
#define CCharacterListWnd__Quit_x                                  0x1400D8F30
#define CCharacterListWnd__UpdateList_x                            0x1400D9C90

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140672600
#define ItemBase__CreateItemTagString_x                            0x140673080
#define ItemBase__GetImageNum_x                                    0x1406758B0
#define ItemBase__GetItemValue_x                                   0x1406772D0
#define ItemBase__IsEmpty_x                                        0x140679BB0
#define ItemBase__IsKeyRingItem_x                                  0x140679810
#define ItemBase__ValueSellMerchant_x                              0x14067DA10
#define ItemClient__CanDrop_x                                      0x1402C6B60
#define ItemClient__CanGoInBag_x                                   0x1402C6CA0
#define ItemClient__CreateItemClient_x                             0x1402C6F30
#define ItemClient__dItemClient_x                                  0x1402C69E0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B8140
#define EQ_LoadingS__Array_x                                       0x140D5ED60

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140689B70
#define PcBase__GetCombatAbility_x                                 0x14068A400
#define PcBase__GetCombatAbilityTimer_x                            0x14068A4E0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14068AD00
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14068B7D0
#define PcClient__AlertInventoryChanged_x                          0x1402EA1A0
#define PcClient__GetConLevel_x                                    0x1402EA8F0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402ECFD0
#define PcClient__HasLoreItem_x                                    0x1402EE0A0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FAA70
#define PcZoneClient__RemoveMyAffect_x                             0x1402FDF70

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022E360
#define EQGroundItemListManager__Add_x                             0x14022E510
#define EQGroundItemListManager__Clear_x                           0x14022E5B0
#define EQGroundItemListManager__Delete_x                          0x14022E670
#define EQGroundItemListManager__Instance_x                        0x14022E700

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140269FA0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401929B0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14065DC30
#define PlayerBase__CanSee1_x                                      0x14065DD10
#define PlayerBase__GetVisibilityLineSegment_x                     0x14065E200
#define PlayerBase__HasProperty_x                                  0x14065E3E0
#define PlayerBase__IsTargetable_x                                 0x14065E4A0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030BE90
#define PlayerClient__GetPcClient_x                                0x14030E9D0
#define PlayerClient__PlayerClient_x                               0x140304110
#define PlayerClient__SetNameSpriteState_x                         0x140312100
#define PlayerClient__SetNameSpriteTint_x                          0x1403130C0
#define PlayerZoneClient__ChangeHeight_x                           0x140321E00
#define PlayerZoneClient__DoAttack_x                               0x140322B10
#define PlayerZoneClient__GetLevel_x                               0x140326230
#define PlayerZoneClient__IsValidTeleport_x                        0x14026CD10
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6790

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031B2B0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14031B360  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031B460
#define PlayerManagerClient__CreatePlayer_x                        0x14031AD70
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14065D740

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CC190
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CBAA0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CBB10
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CC120  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402CC2B0
#define KeypressHandler__HandleKeyUp_x                             0x1402CC3D0
#define KeypressHandler__SaveKeymapping_x                          0x1402CBFA0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406A36F0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14069DCC0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F41E0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F8B20
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FBB30
#define PcZoneClient__RemovePetEffect_x                            0x1402FE250
#define PcZoneClient__HasAlternateAbility_x                        0x1402FC730
#define PcZoneClient__CanEquipItem_x                               0x1402F6E30
#define PcZoneClient__GetItemByID_x                                0x1402F9AF0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402FDE00
#define PcZoneClient__BandolierSwap_x                              0x1402EA250

// Doors
#define EQSwitch__UseSwitch_x                                      0x140271850

// IconCache
#define IconCache__GetIcon_x                                       0x1403DE620

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D28B0
#define CContainerMgr__CloseContainer_x                            0x1403D21D0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D2C50

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404D5150

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402BE160

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140462E70
#define CLootWnd__RequestLootSlot_x                                0x140463EC0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E8B10
#define EQ_Spell__SpellAffects_x                                   0x1401E9F40
#define EQ_Spell__SpellAffectBase_x                                0x1401E9EA0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E22B0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E2260
#define EQ_Spell__IsSPAStacking_x                                  0x1401E9BB0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E9760
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E9020

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C9380

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140532EE0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140532600
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140531E00

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14053A790  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018F440
#define CTaskManager__GetTaskStatus_x                              0x14018F550
#define CTaskManager__GetElementDescription_x                      0x14018F0D0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E6D90
#define EqSoundManager__PlayScriptMp3_x                            0x1401E5B20
#define EqSoundManager__SoundAssistPlay_x                          0x140345F90  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403462D0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405D2030
#define CTextureAnimation__SetCurCell_x                            0x1405D2340

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BC350

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406BCB60
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406BCBE0
#define CharacterBase__IsExpansionFlag_x                           0x14020D140

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403ACB50
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403AD5A0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403AEB60

// messages
#define msg_spell_worn_off_x                                       0x140224520
#define msg_new_text_x                                             0x14021FD10
#define __msgTokenTextParam_x                                      0x1402170E0
#define msgTokenText_x                                             0x140216FF0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140347D00
#define SpellManager__GetSpellByGroupAndRank_x                     0x140347C00

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14066DD00

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14045C080

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D7730
#define CCursorAttachment__IsOkToActivate_x                        0x1403DABB0
#define CCursorAttachment__RemoveAttachment_x                      0x1403DAE60
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14060BC40
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14060BE40
#define CEQSuiteTextureLoader__GetTexture_x                        0x14060BE50

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140159630
#define CFindItemWnd__Update_x                                     0x140159FF0
#define CFindItemWnd__PickupSelectedItem_x                         0x140152BE0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140164220
#define LootFiltersManager__GetItemFilterData_x                    0x140164D40
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401655F0
#define LootFiltersManager__SetItemLootFilter_x                    0x1401658A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404B6F40

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403406F0
#define CResolutionHandler__UpdateResolution_x                     0x1405B6830

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403CE9D0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406C0E50  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406C0D40  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403F8DD0
#define CGroupWnd__UpdateDisplay_x                                 0x1403F7F60

// ItemBase
#define ItemBase__IsLore_x                                         0x140679950
#define ItemBase__IsLoreEquipped_x                                 0x1406784C0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402DFCC0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14026A0E0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14026A070
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14026A0B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033A8D0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012F650
#define FactionManagerClient__HandleFactionMessage_x               0x14012FA30
#define FactionManagerClient__GetFactionStanding_x                 0x14012EE20
#define FactionManagerClient__GetMaxFaction_x                      0x14012EE20
#define FactionManagerClient__GetMinFaction_x                      0x14012ECD0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B6050

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14013B000

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C1390
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C0520
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C11B0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C1130  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14034D050

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405C7EE0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008AA20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14035EC00

// AchievementManager
#define AchievementManager__Instance_x                             0x140093F50

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406A6780
#define FreeToPlayClient__RestrictionInfo_x                        0x140B04200

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140569CB0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140858A38
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072EE0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073070
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140073220

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
