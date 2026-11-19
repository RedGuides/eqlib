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

#define __ClientDate                                               20261112u
#define __ExpectedVersionDate                                     "Nov 12 2026"
#define __ExpectedVersionTime                                     "12:09:09"
#define __ActualVersionDate_x                                      0x1409A0D50
#define __ActualVersionTime_x                                      0x1409A0D40
#define __ActualVersionBuild_x                                     0x140935DA0

// Memory Protection
#define __MemChecker0_x                                            0x1402D5540
#define __MemChecker1_x                                            0x1405B8AD0
#define __MemChecker4_x                                            0x1402A2760
#define __EncryptPad0_x                                            0x140D91FC0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140ECAB30
#define instEQZoneInfo_x                                           0x140ECAD24 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14023C9E0
#define __gfMaxZoomCameraDistance_x                                0x140937058
#define __gfMaxCameraDistance_x                                    0x140AE1308
#define __CurrentSocial_x                                          0x140C4D9C0 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D897A0
#define g_eqCommandStates_x                                        0x140D8A840
#define __CommandList_x                                            0x140D8AA70
#define __ScreenMode_x                                             0x140E124B4
#define __gWorld_x                                                 0x140EC55E8
#define __gpbCommandEvent_x                                        0x140EC30A0
#define __ServerHost_x                                             0x140EC3288
#define __Guilds_x                                                 0x140EC96E0
#define __MemCheckBitmask_x                                        0x140ECB08B
#define __MemCheckActive_x                                         0x140ECC7A5
#define __MouseEventTime_x                                         0x140F40118
#define DI8__MouseState_x                                          0x140F44398
#define __heqmain_x                                                0x140F46828
#define DI8__Mouse_x                                               0x140F46840
#define __HWnd_x                                                   0x140F46848
#define __Mouse_x                                                  0x140ECAB8C
#define DI8__Keyboard_x                                            0x140F442D0
#define __LoginName_x                                              0x140F46F1C
#define __CurrentMapLabel_x                                        0x140F5AA30
#define __LabelCache_x                                             0x140F5B600
#define __ChatFilterDefs_x                                         0x140A7B150
#define Teleport_Table_Size_x                                      0x140EC30A8
#define Teleport_Table_x                                           0x140EC35A0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EC5A70
#define pinstActiveBanker_x                                        0x140EC2FD0
#define pinstActiveCorpse_x                                        0x140EC2FC0
#define pinstActiveGMaster_x                                       0x140EC2FC8
#define pinstActiveMerchant_x                                      0x140EC2FB8
#define pinstAltAdvManager_x                                       0x140E13280
#define pinstCEverQuest_x                                          0x140F442F0
#define pinstCamActor_x                                            0x140E124A0
#define pinstCDBStr_x                                              0x140E12030
#define pinstCDisplay_x                                            0x140EC3080
#define pinstControlledPlayer_x                                    0x140EC3060
#define pinstCResolutionHandler_x                                  0x140F6BBA8
#define pinstCSidlManager_x                                        0x140F6CBA0
#define pinstCXWndManager_x                                        0x140F6CB98
#define instDynamicZone_x                                          0x140EC95A0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140EC95EE
#define instExpeditionName_x                                       0x140EC962E
#define pinstDZMember_x                                            0x140EC96B8
#define pinstDZTimerInfo_x                                         0x140EC96C0
#define pinstEqLogin_x                                             0x140F46860
#define instTribute_x                                              0x140D84DD0
#define pinstDeviceInputProxy_x                                    0x140ECAB8C
#define pinstEQSoundManager_x                                      0x140E13600
#define pinstEQSpellStrings_x                                      0x140DF6B70
#define pinstSGraphicsEngine_x                                     0x140F6BBC8
#define pinstLocalPC_x                                             0x140EC55D8
#define pinstLocalPlayer_x                                         0x140EC2FB0
#define pinstCMercenaryClientManager_x                             0x140F41A38
#define pinstModelPlayer_x                                         0x140EC2FE0
#define pinstRenderInterface_x                                     0x140F6BBE0
#define pinstSkillMgr_x                                            0x140F436F8
#define pinstSpawnManager_x                                        0x140F41DF0
#define pinstSpellManager_x                                        0x140F43760
#define pinstStringTable_x                                         0x140EC55E0
#define pinstSwitchManager_x                                       0x140EC2F30
#define pinstTarget_x                                              0x140EC3058
#define pinstTaskMember_x                                          0x140D84DC0 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140EC2FD8
#define instTributeActive_x                                        0x140D84DF9
#define pinstViewActor_x                                           0x140E12498
#define pinstWorldData_x                                           0x140EC55A0
#define pinstPlayerPath_x                                          0x140F41E18
#define pinstTargetIndicator_x                                     0x140F43810
#define EQObject_Top_x                                             0x140EC3088

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F57B90
#define pinstCContainerMgr_x                                       0x140E120C8
#define pinstCContextMenuManager_x                                 0x140F6C880
#define pinstCInvSlotMgr_x                                         0x140E120A8
#define pinstCItemDisplayManager_x                                 0x140F5A600
#define pinstCPopupWndManager_x                                    0x140F5AE90
#define pinstCSpellDisplayMgr_x                                    0x140F5B4E0
#define pinstCTaskManager_x                                        0x140C4DD00
#define pinstEQSuiteTextureLoader_x                                0x140D9B6E0
#define pinstItemIconCache_x                                       0x140F57EF0
#define pinstLootFiltersManager_x                                  0x140E11A78
#define pinstGFViewListener_x                                      0x140F6C058
#define pinstGF_x                                                  0x140DE7070


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14025E070
#define __CastRay_x                                                0x1402560C0
#define __CastRay2_x                                               0x140255DB0
#define __compress_block_x                                         0x14056E550
#define __ConvertItemTags_x                                        0x140256550
#define __CleanItemTags_x                                          0x14008EA50
#define __CreateCascadeMenuItems_x                                 0x14019B5D0
#define __decompress_block_x                                       0x1405B4150
#define __DoesFileExist_x                                          0x1405BD650
#define __EQGetTime_x                                              0x1405B9080
#define __ExecuteCmd_x                                             0x14022A9D0
#define __FixHeading_x                                             0x140676E10
#define __FlushDxKeyboard_x                                        0x14035AB00
#define __get_bearing_x                                            0x140260440
#define __get_melee_range_x                                        0x140260530
#define __GetAnimationCache_x                                      0x1403E17B0
#define __GetGaugeValueFromEQ_x                                    0x14052D2A0
#define __GetLabelFromEQ_x                                         0x14052E890
#define __GetXTargetType_x                                         0x140679300   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140676E90
#define __HelpPath_x                                               0x140F3FFE0   // Why?
#define __NewUIINI_x                                               0x14053A2F0   // Why?
#define __ProcessDeviceEvents_x                                    0x1402A2D60
#define __ProcessGameEvents_x                                      0x140297460
#define __ProcessKeyboardEvents_x                                  0x14035C2E0
#define __ProcessMouseEvents_x                                     0x140298BF0
#define __SaveColors_x                                             0x1401AB7B0
#define __STMLToText_x                                             0x1405CDEE0
#define __WndProc_x                                                0x1403591E0
#define CMemoryMappedFile__SetFile_x                               0x140825980
#define DrawNetStatus_x                                            0x1402E4AB0
#define Util__FastTime_x                                           0x1405B8420
#define __eq_delete_x                                              0x1406F02B8
#define __eq_new_x                                                 0x1406F0510
#define __CopyLayout_x                                             0x1402D1910
#define __ThrottleFrameRate_x                                      0x1402861E5
#define __ThrottleFrameRateEnd_x                                   0x1402861EB

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14036C2F0
#define CAAWnd__Update_x                                           0x14036C750
#define CAAWnd__UpdateSelected_x                                   0x14036DDA0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC2B0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400AC0A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A8450
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B4550

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B6A60
#define AltAdvManager__IsAbilityReady_x                            0x1401B6F40
#define AltAdvManager__GetAAById_x                                 0x1401B62F0
#define AltAdvManager__CanTrainAbility_x                           0x1401B60F0
#define AltAdvManager__CanSeeAbility_x                             0x1401B5E10

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400DB940
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DC800
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DCA50
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400F0FD0
#define CharacterZoneClient__CanUseItem_x                          0x1400F1590
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DD430
#define CharacterZoneClient__CastSpell_x                           0x1400DD4D0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400ED400
#define CharacterZoneClient__Cur_HP_x                              0x1400F2E10
#define CharacterZoneClient__Cur_Mana_x                            0x1400F2FD0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400E0930
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F9720
#define CharacterZoneClient__GetBaseSkill_x                        0x140108A10  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E1DD0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F08D0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400FAFB0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F9EA0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E1F50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D1400
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D32D0
#define CharacterZoneClient__GetHPRegen_x                          0x1400FA5D0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F2A60
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400FB150
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E1FD0
#define CharacterZoneClient__GetManaRegen_x                        0x1400FBE40
#define CharacterZoneClient__GetModCap_x                           0x1401035E0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E22D0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E24A0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D6980
#define CharacterZoneClient__HasSkill_x                            0x1400FEFE0
#define CharacterZoneClient__HitBySpell_x                          0x1400E2F10
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E6890
#define CharacterZoneClient__MakeMeVisible_x                       0x1401030C0
#define CharacterZoneClient__Max_Endurance_x                       0x1402FFC40  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x140103410
#define CharacterZoneClient__Max_Mana_x                            0x1402FFE60  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140103870
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E9ED0
#define CharacterZoneClient__SpellDuration_x                       0x1400EAC00
#define CharacterZoneClient__TotalEffect_x                         0x1400EC060
#define CharacterZoneClient__UseSkill_x                            0x140109A10


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038DEF0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140398D20
#define CBarterWnd__UpdateInventoryList_x                          0x140398790

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140394A00
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140393A50

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14039B7C0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140B00DE8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BF0F0
#define CChatWindowManager__InitContextMenu_x                      0x1403BF280
#define CChatWindowManager__FreeChatWindow_x                       0x1403BE0F0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C7600
#define CChatWindowManager__CreateChatWindow_x                     0x1403BDB20

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140112010

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C8670
#define CChatWindow__Clear_x                                       0x1403C9670
#define CChatWindow__WndNotification_x                             0x1403CA8E0
#define CChatWindow__AddHistory_x                                  0x1403C9180

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405FB940
#define CContextMenu__RemoveMenuItem_x                             0x1405FBD50
#define CContextMenu__RemoveAllMenuItems_x                         0x1405FBD20
#define CContextMenu__CheckMenuItem_x                              0x1405FBB90
#define CContextMenu__SetMenuItem_x                                0x1405FBD70
#define CContextMenu__AddSeparator_x                               0x1405FBAC0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405ED6E0
#define CContextMenuManager__RemoveMenu_x                          0x1405EDCC0
#define CContextMenuManager__PopupMenu_x                           0x1405EDA00
#define CContextMenuManager__Flush_x                               0x1405ED760
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D9060

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406CAE00
#define CChatService__GetFriendName_x                              0x1406CAE10

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405DE5A0
#define CComboWnd__Draw_x                                          0x1405DE6A0
#define CComboWnd__GetCurChoice_x                                  0x1405DE990  // unused
#define CComboWnd__GetListRect_x                                   0x1405DEA30
#define CComboWnd__InsertChoice_x                                  0x1405DED70
#define CComboWnd__SetColors_x                                     0x1405DF100
#define CComboWnd__SetChoice_x                                     0x1405DF0C0
#define CComboWnd__GetItemCount_x                                  0x1405DEA20
#define CComboWnd__GetCurChoiceText_x                              0x1405DE9D0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405DE960
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405DEE30

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D6D40
#define CContainerWnd__SetContainer_x                              0x1403D7EB0
#define CContainerWnd__vftable_x                                   0x140A15D70

// CDisplay
#define CDisplay__cameraType_x                                     0x140E12204
#define CDisplay__ZoneMainUI_x                                     0x140616440
#define CDisplay__PreZoneMainUI_x                                  0x1401A84C0
#define CDisplay__CleanGameUI_x                                    0x14019A690
#define CDisplay__GetClickedActor_x                                0x14019E8F0
#define CDisplay__GetUserDefinedColor_x                            0x14019F560
#define CDisplay__InitCharSelectUI_x                               0x14019F810
#define CDisplay__ReloadUI_x                                       0x1401AA9A0
#define CDisplay__RestartUI_x                                      0x14020E4D0
#define CDisplay__WriteTextHD2_x                                   0x1401B1960
#define CDisplay__TrueDistance_x                                   0x1401B1600
#define CDisplay__SetViewActor_x                                   0x1401ADF00
#define CDisplay__GetFloorHeight_x                                 0x14019EB50
#define CDisplay__ToggleScreenshotMode_x                           0x1401B10F0
#define CDisplay__RealRender_World_x                               0x1401A9D80

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140620900
#define CEditWnd__DrawCaret_x                                      0x140612070  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140612590
#define CEditWnd__GetCaretPt_x                                     0x140612830  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140612870
#define CEditWnd__GetDisplayString_x                               0x140612AD0
#define CEditWnd__GetHorzOffset_x                                  0x140612D20
#define CEditWnd__GetLineForPrintableChar_x                        0x140612E80
#define CEditWnd__GetSelStartPt_x                                  0x140613170  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140612FB0
#define CEditWnd__PointFromPrintableChar_x                         0x140613D30
#define CEditWnd__ReplaceSelection_x                               0x1406140F0
#define CEditWnd__SelectableCharFromPoint_x                        0x1406145B0
#define CEditWnd__SetEditable_x                                    0x140614850
#define CEditWnd__SetWindowText_x                                  0x140614880

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402872C0
#define CEverQuest__ClickedPlayer_x                                0x14027A320
#define CEverQuest__CreateTargetIndicator_x                        0x14027AC20
#define CEverQuest__DoTellWindow_x                                 0x140111D10 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140112600 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140289060
#define CEverQuest__dsp_chat_x                                     0x140111740 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402B4990
#define CEverQuest__Emote_x                                        0x1402899F0
#define CEverQuest__GetBodyTypeDesc_x                              0x14028A790
#define CEverQuest__GetClassDesc_x                                 0x14028A7F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14028ABC0
#define CEverQuest__GetDeityDesc_x                                 0x14028AE60
#define CEverQuest__GetLangDesc_x                                  0x14028B290
#define CEverQuest__GetRaceDesc_x                                  0x14028B630
#define CEverQuest__InterpretCmd_x                                 0x14028D270
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402A2DD0
#define CEverQuest__LMouseUp_x                                     0x14028ED80
#define CEverQuest__RightClickedOnPlayer_x                         0x1402A0170
#define CEverQuest__RMouseUp_x                                     0x140299820
#define CEverQuest__SetGameState_x                                 0x1402A5910
#define CEverQuest__UPCNotificationFlush_x                         0x1402AB310 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14028E960
#define CEverQuest__ReportSuccessfulHeal_x                         0x14029AC10
#define CEverQuest__ReportSuccessfulHit_x                          0x14029BA20

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403EC980

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400CAB80
#define CGuild__GetGuildName_x                                     0x1400CABC0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140413860

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C7000
#define CHotButton__SetCheck_x                                     0x1402C72D0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14042EDA0
#define CInvSlotMgr__MoveItem_x                                    0x140430080
#define CInvSlotMgr__SelectSlot_x                                  0x140432690

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14042A8B0
#define CInvSlot__SliderComplete_x                                 0x14042C2A0
#define CInvSlot__GetItemBase_x                                    0x140425C00
#define CInvSlot__UpdateItem_x                                     0x14042C770

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140434CD0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140456420
#define CItemDisplayWnd__UpdateStrings_x                           0x140459640
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140452CF0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140454620
#define CItemDisplayWnd__RequestConvertItem_x                      0x140455840

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140529D20
#define CSpellDisplayWnd__UpdateStrings_x                          0x14052BAB0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140567550

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14044F370

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x14052B8F0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015F290

// CLabel
#define CLabel__UpdateText_x                                       0x140460CE0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405E1F40
#define CListWnd__dCListWnd_x                                      0x1405E2380
#define CListWnd__vftable_x                                        0x140AFEF10
#define CListWnd__AddColumn_x                                      0x1405E2A10
#define CListWnd__AddColumn1_x                                     0x1405E2AB0
#define CListWnd__AddLine_x                                        0x1405E2C10
#define CListWnd__AddString_x                                      0x1405E31B0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405E3720
#define CListWnd__CalculateVSBRange_x                              0x1405E3A00
#define CListWnd__ClearSel_x                                       0x1405E3BA0
#define CListWnd__ClearAllSel_x                                    0x1405E3B40
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405E3C00
#define CListWnd__Compare_x                                        0x1405E3DC0
#define CListWnd__Draw_x                                           0x1405E4280
#define CListWnd__DrawColumnSeparators_x                           0x1405E4E10
#define CListWnd__DrawHeader_x                                     0x1405E4ED0
#define CListWnd__DrawItem_x                                       0x1405E55B0
#define CListWnd__DrawLine_x                                       0x1405E5F50
#define CListWnd__DrawSeparator_x                                  0x1405E6410
#define CListWnd__EnableLine_x                                     0x1405E6830
#define CListWnd__EnsureVisible_x                                  0x1405E6890
#define CListWnd__ExtendSel_x                                      0x1405E6990
#define CListWnd__GetColumnMinWidth_x                              0x1405E6D20
#define CListWnd__GetColumnWidth_x                                 0x1405E6DA0
#define CListWnd__GetCurSel_x                                      0x1405E6EA0
#define CListWnd__GetItemData_x                                    0x1405E7220
#define CListWnd__GetItemHeight_x                                  0x1405E7260
#define CListWnd__GetItemRect_x                                    0x1405E7490
#define CListWnd__GetItemText_x                                    0x1405E7730
#define CListWnd__GetSelList_x                                     0x1405E7990
#define CListWnd__GetSeparatorRect_x                               0x1405E7B80
#define CListWnd__InsertLine_x                                     0x1405E8FF0
#define CListWnd__RemoveLine_x                                     0x1405E9660
#define CListWnd__SetColors_x                                      0x1405E9A20
#define CListWnd__SetColumnJustification_x                         0x1405E9A40
#define CListWnd__SetColumnLabel_x                                 0x1405E9AC0
#define CListWnd__SetColumnWidth_x                                 0x1405E9C60
#define CListWnd__SetCurSel_x                                      0x1405E9D30
#define CListWnd__SetItemColor_x                                   0x1405E9FA0
#define CListWnd__SetItemData_x                                    0x1405EA040
#define CListWnd__SetItemText_x                                    0x1405EA280
#define CListWnd__Sort_x                                           0x1405EA690
#define CListWnd__ToggleSel_x                                      0x1405EA800
#define CListWnd__SetColumnsSizable_x                              0x1405E9CB0
#define CListWnd__SetItemWnd_x                                     0x1405EA3B0
#define CListWnd__GetItemWnd_x                                     0x1405E7920
#define CListWnd__SetItemIcon_x                                    0x1405EA080
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405E34F0
#define CListWnd__SetVScrollPos_x                                  0x1405EA5F0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404746C0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A63828
#define MapViewMap__Clear_x                                        0x140476380
#define MapViewMap__SetZoom_x                                      0x14047C820
#define MapViewMap__HandleLButtonDown_x                            0x140479320

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14049F4F0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A8050
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A8850
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404AE080
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404ACBB0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404B29F0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406A75B0
#define CPacketScrambler__hton_x                                   0x1406A75A0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14060B920
#define CSidlManagerBase__FindAnimation1_x                         0x14060B860
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14060BF60
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14060BD00
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14060AC60
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14060ABF0
#define CSidlManagerBase__CreateXWnd_x                             0x14060A250

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14051CB40
#define CSidlManager__CreateXWnd_x                                 0x14051CD00

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405CF950
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405CFA80
#define CSidlScreenWnd__ConvertToRes_x                             0x14061AC40 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405CFBF0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405CF110
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405CF1E0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405CF450
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405D02E0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405D0510
#define CSidlScreenWnd__GetChildItem_x                             0x1405D06B0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405D0900
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405DAB10 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405D0C70
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405D0FE0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405D18B0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405D22B0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F6BEF8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405D2930
#define CSidlScreenWnd__StoreIniVis_x                              0x1405D3120
#define CSidlScreenWnd__vftable_x                                  0x140AFE198
#define CSidlScreenWnd__WndNotification_x                          0x1405D3170

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140343990 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140343CC0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140343BF0
#define CSkillMgr__IsActivatedSkill_x                              0x140344080
#define CSkillMgr__IsCombatSkill_x                                 0x1403440C0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140343FF0
#define CSkillMgr__GetSkillLastUsed_x                              0x140343C40

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405EB170
#define CSliderWnd__SetValue_x                                     0x1405EB980
#define CSliderWnd__SetNumTicks_x                                  0x1405EB800

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140523410

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405F0140
#define CStmlWnd__CalculateHSBRange_x                              0x1405DA4C0
#define CStmlWnd__CalculateVSBRange_x                              0x1405F1060
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405F1AF0
#define CStmlWnd__ForceParseNow_x                                  0x1405F1B90
#define CStmlWnd__GetVisibleText_x                                 0x1405F2260
#define CStmlWnd__MakeStmlColorTag_x                               0x1405F3FF0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405F4030
#define CStmlWnd__SetSTMLText_x                                    0x1405FB0C0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405FB270
#define CStmlWnd__UpdateHistoryString_x                            0x1405FB610

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405EBD50
#define CTabWnd__DrawCurrentPage_x                                 0x1405EBDF0
#define CTabWnd__DrawTab_x                                         0x1405EC1C0
#define CTabWnd__GetTabRect_x                                      0x1405EC850
#define CTabWnd__InsertPage_x                                      0x1405ECB20
#define CTabWnd__RemovePage_x                                      0x1405ECDB0
#define CTabWnd__SetPage_x                                         0x1405ECF10
#define CTabWnd__UpdatePage_x                                      0x1405ED210

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140614CE0
#define CPageWnd__SetTabText_x                                     0x140614D50

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C40B0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C44E0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140602CB0
#define CTextureFont__DrawWrappedText1_x                           0x140602BB0
#define CTextureFont__DrawWrappedText2_x                           0x140602DE0
#define CTextureFont__GetTextExtent_x                              0x140603190
#define CTextureFont__GetHeight_x                                  0x140603150

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140619360

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405CC560

// CXStr
#define CXStr__gFreeLists_x                                        0x140D9B050
#define CXStr__gCXStrAccess_x                                      0x140F6BA58

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405D5B10
#define CXWnd__ClrFocus_x                                          0x1405D5E00
#define CXWnd__Destroy_x                                           0x1405D5F80
#define CXWnd__DoAllDrawing_x                                      0x1405D6080
#define CXWnd__DrawColoredRect_x                                   0x1405D6850
#define CXWnd__DrawTooltip_x                                       0x1405D7EC0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405D7F80
#define CXWnd__GetChildItem_x                                      0x1405D8890
#define CXWnd__GetChildWndAt_x                                     0x1405D8950
#define CXWnd__GetClientRect_x                                     0x1405D8C10
#define CXWnd__GetClientClipRect_x                                 0x1405D8AC0
#define CXWnd__GetRelativeRect_x                                   0x1405DA600
#define CXWnd__GetScreenClipRect_x                                 0x1405DA710
#define CXWnd__GetScreenRect_x                                     0x1405DA890
#define CXWnd__GetTooltipRect_x                                    0x1405DAA10
#define CXWnd__IsActive_x                                          0x1405DAFD0
#define CXWnd__IsDescendantOf_x                                    0x1405DB000
#define CXWnd__IsReallyVisible_x                                   0x1405DB070
#define CXWnd__IsType_x                                            0x1405DB0C0
#define CXWnd__Minimize_x                                          0x1405DB1C0
#define CXWnd__ProcessTransition_x                                 0x1405DC0D0
#define CXWnd__Resize_x                                            0x1405DC1E0
#define CXWnd__Right_x                                             0x1405DC280
#define CXWnd__SetFocus_x                                          0x1405DC640
#define CXWnd__SetFont_x                                           0x1405DC690
#define CXWnd__SetKeyTooltip_x                                     0x1405DC7A0
#define CXWnd__SetMouseOver_x                                      0x1405DC8F0
#define CXWnd__SetParent_x                                         0x1405DC970
#define CXWnd__StartFade_x                                         0x1405DCDA0
#define CXWnd__vftable_x                                           0x140AFE770
#define CXWnd__CXWnd_x                                             0x1405D4710
#define CXWnd__dCXWnd_x                                            0x1405D5040

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140620090

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405FCF40
#define CXWndManager__DrawCursor_x                                 0x1405FD220
#define CXWndManager__DrawWindows_x                                0x1405FD480
#define CXWndManager__GetKeyboardFlags_x                           0x1405FDAF0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405FDB30
#define CXWndManager__RemoveWnd_x                                  0x140601350

// CDBStr
#define CDBStr__GetString_x                                        0x140198810

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406B16C0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D92D0
#define CCharacterListWnd__EnterWorld_x                            0x1400D80D0
#define CCharacterListWnd__Quit_x                                  0x1400D92B0
#define CCharacterListWnd__UpdateList_x                            0x1400DA010

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14067DFC0
#define ItemBase__CreateItemTagString_x                            0x14067EA60
#define ItemBase__GetImageNum_x                                    0x1406811E0
#define ItemBase__GetItemValue_x                                   0x140682D10
#define ItemBase__IsEmpty_x                                        0x140684A90
#define ItemBase__IsKeyRingItem_x                                  0x140685220
#define ItemBase__ValueSellMerchant_x                              0x140689410
#define ItemClient__CanDrop_x                                      0x1402C97F0
#define ItemClient__CanGoInBag_x                                   0x1402C9930
#define ItemClient__CreateItemClient_x                             0x1402C9BC0
#define ItemClient__dItemClient_x                                  0x1402C9670

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B8710
#define EQ_LoadingS__Array_x                                       0x140D872B0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140695570
#define PcBase__GetCombatAbility_x                                 0x140695E00
#define PcBase__GetCombatAbilityTimer_x                            0x140695EE0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140696700
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406971D0
#define PcClient__AlertInventoryChanged_x                          0x1402ECE80
#define PcClient__GetConLevel_x                                    0x1402ED5D0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402EFCD0
#define PcClient__HasLoreItem_x                                    0x1402F0DA0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FD830
#define PcZoneClient__RemoveMyAffect_x                             0x140300DA0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022F4B0
#define EQGroundItemListManager__Add_x                             0x14022F660
#define EQGroundItemListManager__Clear_x                           0x14022F700
#define EQGroundItemListManager__Delete_x                          0x14022F7C0
#define EQGroundItemListManager__Instance_x                        0x14022F850

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14026B700

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140192F20

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140669860
#define PlayerBase__CanSee1_x                                      0x140669940
#define PlayerBase__GetVisibilityLineSegment_x                     0x140669E30
#define PlayerBase__HasProperty_x                                  0x14066A010
#define PlayerBase__IsTargetable_x                                 0x14066A0D0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030EC70
#define PlayerClient__GetPcClient_x                                0x140311790
#define PlayerClient__PlayerClient_x                               0x140306EF0
#define PlayerClient__SetNameSpriteState_x                         0x140314EC0
#define PlayerClient__SetNameSpriteTint_x                          0x140315E80
#define PlayerZoneClient__ChangeHeight_x                           0x140324C70
#define PlayerZoneClient__DoAttack_x                               0x140325980
#define PlayerZoneClient__GetLevel_x                               0x1403290A0
#define PlayerZoneClient__IsValidTeleport_x                        0x14026E470
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6D40

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031E120  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14031E1D0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031E2D0
#define PlayerManagerClient__CreatePlayer_x                        0x14031DBE0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140669390

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CEE00
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CE710
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CE780
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CED90  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402CEF20
#define KeypressHandler__HandleKeyUp_x                             0x1402CF040
#define KeypressHandler__SaveKeymapping_x                          0x1402CEC10  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406AF1C0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406A9790

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F6F30  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402FB8E0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FE910
#define PcZoneClient__RemovePetEffect_x                            0x140301080
#define PcZoneClient__HasAlternateAbility_x                        0x1402FF560
#define PcZoneClient__CanEquipItem_x                               0x1402F9BF0
#define PcZoneClient__GetItemByID_x                                0x1402FC8B0
#define PcZoneClient__RemoveBuffEffect_x                           0x140300C30
#define PcZoneClient__BandolierSwap_x                              0x1402ECF30

// Doors
#define EQSwitch__UseSwitch_x                                      0x140272FB0

// IconCache
#define IconCache__GetIcon_x                                       0x1403E17E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D5A80
#define CContainerMgr__CloseContainer_x                            0x1403D53A0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D5E20

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404DFC90

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402C0DC0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140468250
#define CLootWnd__RequestLootSlot_x                                0x1404692C0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E9210
#define EQ_Spell__SpellAffects_x                                   0x1401EA640
#define EQ_Spell__SpellAffectBase_x                                0x1401EA5A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E2630
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E25E0
#define EQ_Spell__IsSPAStacking_x                                  0x1401EA2B0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E9E60
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E9720

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C9690

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14053DB50
#define CTargetWnd__RefreshTargetBuffs_x                           0x14053D270
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14053CA70

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140545410  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018F9A0
#define CTaskManager__GetTaskStatus_x                              0x14018FAB0
#define CTaskManager__GetElementDescription_x                      0x14018F630

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E7490
#define EqSoundManager__PlayScriptMp3_x                            0x1401E61D0
#define EqSoundManager__SoundAssistPlay_x                          0x140348D70  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403490B0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405DDB40
#define CTextureAnimation__SetCurCell_x                            0x1405DDE50

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BEFB0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406C8650
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406C86D0
#define CharacterBase__IsExpansionFlag_x                           0x14020DB20

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403AFD10
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403B0760
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403B1D20

// messages
#define msg_spell_worn_off_x                                       0x1402255C0
#define msg_new_text_x                                             0x140220E00
#define __msgTokenTextParam_x                                      0x140217C90
#define msgTokenText_x                                             0x140217BA0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14034AAB0
#define SpellManager__GetSpellByGroupAndRank_x                     0x14034A9B0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406796E0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140461470

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403DA8F0
#define CCursorAttachment__IsOkToActivate_x                        0x1403DDD70
#define CCursorAttachment__RemoveAttachment_x                      0x1403DE020
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1406177C0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1406179C0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1406179D0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140159B80
#define CFindItemWnd__Update_x                                     0x14015A540
#define CFindItemWnd__PickupSelectedItem_x                         0x140153130

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140164750
#define LootFiltersManager__GetItemFilterData_x                    0x140165270
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140165B20
#define LootFiltersManager__SetItemLootFilter_x                    0x140165DD0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404C1A10

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403434D0
#define CResolutionHandler__UpdateResolution_x                     0x1405C20B0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403D1BC0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406CC990  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406CC880  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403FC010
#define CGroupWnd__UpdateDisplay_x                                 0x1403FB1A0

// ItemBase
#define ItemBase__IsLore_x                                         0x140685360
#define ItemBase__IsLoreEquipped_x                                 0x1406853F0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402E28E0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14026B840
#define EQPlacedItemManager__GetItemByGuid_x                       0x14026B7D0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14026B810

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033D6F0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012FA40
#define FactionManagerClient__HandleFactionMessage_x               0x14012FE20
#define FactionManagerClient__GetFactionStanding_x                 0x14012F140
#define FactionManagerClient__GetMaxFaction_x                      0x14012F210
#define FactionManagerClient__GetMinFaction_x                      0x14012F0C0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B63E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14013B530

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C19B0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C0B40
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C17D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C1750  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14034FE00

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405D37B0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008ADB0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140361790

// AchievementManager
#define AchievementManager__Instance_x                             0x1400942E0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406B2250
#define FreeToPlayClient__RestrictionInfo_x                        0x140B13C60

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140574970

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140867A58
#define CGFScreenWnd__CGFScreenWnd_x                               0x1400732B0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073440
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400735F0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
