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

#define __ClientDate                                               20261110u
#define __ExpectedVersionDate                                     "Nov 10 2026"
#define __ExpectedVersionTime                                     "08:57:48"
#define __ActualVersionDate_x                                      0x1409A0D50
#define __ActualVersionTime_x                                      0x1409A0D40
#define __ActualVersionBuild_x                                     0x140935DA0

// Memory Protection
#define __MemChecker0_x                                            0x1402D5690
#define __MemChecker1_x                                            0x1405B89E0
#define __MemChecker4_x                                            0x1402A28A0
#define __EncryptPad0_x                                            0x140D91FC0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140ECAB30
#define instEQZoneInfo_x                                           0x140ECAD24 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14023CAF0
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


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14025E1A0
#define __CastRay_x                                                0x1402561E0
#define __CastRay2_x                                               0x140255ED0
#define __compress_block_x                                         0x14056E460
#define __ConvertItemTags_x                                        0x140256670
#define __CleanItemTags_x                                          0x14008EA50
#define __CreateCascadeMenuItems_x                                 0x14019B600
#define __decompress_block_x                                       0x1405B4060
#define __DoesFileExist_x                                          0x1405BD560
#define __EQGetTime_x                                              0x1405B8F90
#define __ExecuteCmd_x                                             0x14022AAE0
#define __FixHeading_x                                             0x140676760
#define __FlushDxKeyboard_x                                        0x14035AB90
#define __get_bearing_x                                            0x140260570
#define __get_melee_range_x                                        0x140260660
#define __GetAnimationCache_x                                      0x1403E1760
#define __GetGaugeValueFromEQ_x                                    0x14052D1D0
#define __GetLabelFromEQ_x                                         0x14052E7C0
#define __GetXTargetType_x                                         0x140678C50   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406767E0
#define __HelpPath_x                                               0x140F3FFE0   // Why?
#define __NewUIINI_x                                               0x14053A220   // Why?
#define __ProcessDeviceEvents_x                                    0x1402A2EA0
#define __ProcessGameEvents_x                                      0x1402975A0
#define __ProcessKeyboardEvents_x                                  0x14035C370
#define __ProcessMouseEvents_x                                     0x140298D30
#define __SaveColors_x                                             0x1401AB7E0
#define __STMLToText_x                                             0x1405CDDF0
#define __WndProc_x                                                0x140359270
#define CMemoryMappedFile__SetFile_x                               0x140825440
#define DrawNetStatus_x                                            0x1402E4C30
#define Util__FastTime_x                                           0x1405B8330
#define __eq_delete_x                                              0x1406EFD68
#define __eq_new_x                                                 0x1406EFFC0
#define __CopyLayout_x                                             0x1402D1A50
#define __ThrottleFrameRate_x                                      0x140286325
#define __ThrottleFrameRateEnd_x                                   0x14028632B

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14036C370
#define CAAWnd__Update_x                                           0x14036C7D0
#define CAAWnd__UpdateSelected_x                                   0x14036DE20

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC280
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400AC070
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A8450
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B4520

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B6AA0
#define AltAdvManager__IsAbilityReady_x                            0x1401B6F80
#define AltAdvManager__GetAAById_x                                 0x1401B6330
#define AltAdvManager__CanTrainAbility_x                           0x1401B6130
#define AltAdvManager__CanSeeAbility_x                             0x1401B5E50

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400DB940
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DC800
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DCA50
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400F0FD0
#define CharacterZoneClient__CanUseItem_x                          0x1400F1590
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DD430
#define CharacterZoneClient__CastSpell_x                           0x1400DD4D0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400ED400
#define CharacterZoneClient__Cur_HP_x                              0x1400F2E20
#define CharacterZoneClient__Cur_Mana_x                            0x1400F2FE0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400E0930
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F9730
#define CharacterZoneClient__GetBaseSkill_x                        0x140108A20  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E1DD0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F08D0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400FAFC0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F9EB0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E1F50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D1410
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D32E0
#define CharacterZoneClient__GetHPRegen_x                          0x1400FA5E0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F2A70
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400FB160
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E1FD0
#define CharacterZoneClient__GetManaRegen_x                        0x1400FBE50
#define CharacterZoneClient__GetModCap_x                           0x1401035F0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E22D0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E24A0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D6980
#define CharacterZoneClient__HasSkill_x                            0x1400FEFF0
#define CharacterZoneClient__HitBySpell_x                          0x1400E2F10
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E6890
#define CharacterZoneClient__MakeMeVisible_x                       0x1401030D0
#define CharacterZoneClient__Max_Endurance_x                       0x1402FFD80  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x140103420
#define CharacterZoneClient__Max_Mana_x                            0x1402FFFA0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140103880
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E9ED0
#define CharacterZoneClient__SpellDuration_x                       0x1400EAC00
#define CharacterZoneClient__TotalEffect_x                         0x1400EC060
#define CharacterZoneClient__UseSkill_x                            0x140109A20


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038DF20

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140398D40
#define CBarterWnd__UpdateInventoryList_x                          0x1403987B0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140394A20
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140393A70

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14039B7D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140B00DE8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BF0A0
#define CChatWindowManager__InitContextMenu_x                      0x1403BF230
#define CChatWindowManager__FreeChatWindow_x                       0x1403BE0A0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C75B0
#define CChatWindowManager__CreateChatWindow_x                     0x1403BDAD0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140112020

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C8620
#define CChatWindow__Clear_x                                       0x1403C9630
#define CChatWindow__WndNotification_x                             0x1403CA8A0
#define CChatWindow__AddHistory_x                                  0x1403C9130

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405FB7C0
#define CContextMenu__RemoveMenuItem_x                             0x1405FBBD0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405FBBA0
#define CContextMenu__CheckMenuItem_x                              0x1405FBA10
#define CContextMenu__SetMenuItem_x                                0x1405FBBF0
#define CContextMenu__AddSeparator_x                               0x1405FB940

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405ED540
#define CContextMenuManager__RemoveMenu_x                          0x1405EDB20
#define CContextMenuManager__PopupMenu_x                           0x1405ED860
#define CContextMenuManager__Flush_x                               0x1405ED5C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D9010

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140683250
#define CChatService__GetFriendName_x                              0x1406CA8B0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405DE400
#define CComboWnd__Draw_x                                          0x1405DE500
#define CComboWnd__GetCurChoice_x                                  0x1405DE7F0  // unused
#define CComboWnd__GetListRect_x                                   0x1405DE890
#define CComboWnd__InsertChoice_x                                  0x1405DEBD0
#define CComboWnd__SetColors_x                                     0x1405DEF60
#define CComboWnd__SetChoice_x                                     0x1405DEF20
#define CComboWnd__GetItemCount_x                                  0x1405DE880
#define CComboWnd__GetCurChoiceText_x                              0x1405DE830  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405DE7C0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405DEC90

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D6CF0
#define CContainerWnd__SetContainer_x                              0x1403D7E60
#define CContainerWnd__vftable_x                                   0x140A15D70

// CDisplay
#define CDisplay__cameraType_x                                     0x140E12204
#define CDisplay__ZoneMainUI_x                                     0x140616320
#define CDisplay__PreZoneMainUI_x                                  0x1401A84F0
#define CDisplay__CleanGameUI_x                                    0x14019A6C0
#define CDisplay__GetClickedActor_x                                0x14019E920
#define CDisplay__GetUserDefinedColor_x                            0x14019F590
#define CDisplay__InitCharSelectUI_x                               0x14019F840
#define CDisplay__ReloadUI_x                                       0x1401AA9D0
#define CDisplay__RestartUI_x                                      0x14020E5C0
#define CDisplay__WriteTextHD2_x                                   0x1401B1990
#define CDisplay__TrueDistance_x                                   0x1401B1630
#define CDisplay__SetViewActor_x                                   0x1401ADF30
#define CDisplay__GetFloorHeight_x                                 0x14019EB80
#define CDisplay__ToggleScreenshotMode_x                           0x1401B1120
#define CDisplay__RealRender_World_x                               0x1401A9DB0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1406207E0
#define CEditWnd__DrawCaret_x                                      0x140611F30  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140612450
#define CEditWnd__GetCaretPt_x                                     0x1406126F0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140612730
#define CEditWnd__GetDisplayString_x                               0x140612990
#define CEditWnd__GetHorzOffset_x                                  0x140612BE0
#define CEditWnd__GetLineForPrintableChar_x                        0x140612D40
#define CEditWnd__GetSelStartPt_x                                  0x140613030  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140612E70
#define CEditWnd__PointFromPrintableChar_x                         0x140613BF0
#define CEditWnd__ReplaceSelection_x                               0x140613FB0
#define CEditWnd__SelectableCharFromPoint_x                        0x140614470
#define CEditWnd__SetEditable_x                                    0x140614710
#define CEditWnd__SetWindowText_x                                  0x140614740

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140287400
#define CEverQuest__ClickedPlayer_x                                0x14027A460
#define CEverQuest__CreateTargetIndicator_x                        0x14027AD60
#define CEverQuest__DoTellWindow_x                                 0x140111D20 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140112610 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402891A0
#define CEverQuest__dsp_chat_x                                     0x140111750 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402B4AD0
#define CEverQuest__Emote_x                                        0x140289B30
#define CEverQuest__GetBodyTypeDesc_x                              0x14028A8D0
#define CEverQuest__GetClassDesc_x                                 0x14028A930
#define CEverQuest__GetClassThreeLetterCode_x                      0x14028AD00
#define CEverQuest__GetDeityDesc_x                                 0x14028AFA0
#define CEverQuest__GetLangDesc_x                                  0x14028B3D0
#define CEverQuest__GetRaceDesc_x                                  0x14028B770
#define CEverQuest__InterpretCmd_x                                 0x14028D3B0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402A2F10
#define CEverQuest__LMouseUp_x                                     0x14028EEC0
#define CEverQuest__RightClickedOnPlayer_x                         0x1402A02B0
#define CEverQuest__RMouseUp_x                                     0x140299960
#define CEverQuest__SetGameState_x                                 0x1402A5A50
#define CEverQuest__UPCNotificationFlush_x                         0x1402AB450 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14028EAA0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14029AD50
#define CEverQuest__ReportSuccessfulHit_x                          0x14029BB60

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403EC940

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400CABE0
#define CGuild__GetGuildName_x                                     0x1400CAC20

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1404137A0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C7110
#define CHotButton__SetCheck_x                                     0x1402C73E0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14042ECF0
#define CInvSlotMgr__MoveItem_x                                    0x14042FFE0
#define CInvSlotMgr__SelectSlot_x                                  0x1404325D0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14042A7F0
#define CInvSlot__SliderComplete_x                                 0x14042C1E0
#define CInvSlot__GetItemBase_x                                    0x140425B40
#define CInvSlot__UpdateItem_x                                     0x14042C6C0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140434C10

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404563F0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404595F0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140452CF0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404545F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140455810

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140529C40
#define CSpellDisplayWnd__UpdateStrings_x                          0x14052B9D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140567460

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14044F390

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x14052B810

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015F2C0

// CLabel
#define CLabel__UpdateText_x                                       0x140460C90

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405E1DA0
#define CListWnd__dCListWnd_x                                      0x1405E21E0
#define CListWnd__vftable_x                                        0x140AFEF10
#define CListWnd__AddColumn_x                                      0x1405E2870
#define CListWnd__AddColumn1_x                                     0x1405E2910
#define CListWnd__AddLine_x                                        0x1405E2A70
#define CListWnd__AddString_x                                      0x1405E3010
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405E3580
#define CListWnd__CalculateVSBRange_x                              0x1405E3860
#define CListWnd__ClearSel_x                                       0x1405E3A10
#define CListWnd__ClearAllSel_x                                    0x1405E39B0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405E3A70
#define CListWnd__Compare_x                                        0x1405E3C30
#define CListWnd__Draw_x                                           0x1405E40F0
#define CListWnd__DrawColumnSeparators_x                           0x1405E4C80
#define CListWnd__DrawHeader_x                                     0x1405E4D40
#define CListWnd__DrawItem_x                                       0x1405E5420
#define CListWnd__DrawLine_x                                       0x1405E5DC0
#define CListWnd__DrawSeparator_x                                  0x1405E6280
#define CListWnd__EnableLine_x                                     0x1405E66A0
#define CListWnd__EnsureVisible_x                                  0x1405E6700
#define CListWnd__ExtendSel_x                                      0x1405E6800
#define CListWnd__GetColumnMinWidth_x                              0x1405E6B90
#define CListWnd__GetColumnWidth_x                                 0x1405E6C10
#define CListWnd__GetCurSel_x                                      0x1405E6D10
#define CListWnd__GetItemData_x                                    0x1405E7090
#define CListWnd__GetItemHeight_x                                  0x1405E70D0
#define CListWnd__GetItemRect_x                                    0x1405E7300
#define CListWnd__GetItemText_x                                    0x1405E75A0
#define CListWnd__GetSelList_x                                     0x1405E7800
#define CListWnd__GetSeparatorRect_x                               0x1405E79F0
#define CListWnd__InsertLine_x                                     0x1405E8E60
#define CListWnd__RemoveLine_x                                     0x1405E94D0
#define CListWnd__SetColors_x                                      0x1405E9890
#define CListWnd__SetColumnJustification_x                         0x1405E98B0
#define CListWnd__SetColumnLabel_x                                 0x1405E9930
#define CListWnd__SetColumnWidth_x                                 0x1405E9AD0
#define CListWnd__SetCurSel_x                                      0x1405E9BA0
#define CListWnd__SetItemColor_x                                   0x1405E9E10
#define CListWnd__SetItemData_x                                    0x1405E9EB0
#define CListWnd__SetItemText_x                                    0x1405EA0F0
#define CListWnd__Sort_x                                           0x1405EA500
#define CListWnd__ToggleSel_x                                      0x1405EA670
#define CListWnd__SetColumnsSizable_x                              0x1405E9B20
#define CListWnd__SetItemWnd_x                                     0x1405EA220
#define CListWnd__GetItemWnd_x                                     0x1405E7790
#define CListWnd__SetItemIcon_x                                    0x1405E9EF0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405E3350
#define CListWnd__SetVScrollPos_x                                  0x1405EA460

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140474690

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A63828
#define MapViewMap__Clear_x                                        0x140476350
#define MapViewMap__SetZoom_x                                      0x14047C7F0
#define MapViewMap__HandleLButtonDown_x                            0x1404792F0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14049F490  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A7FA0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A87B0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404ADFE0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404ACB00
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404B2950

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406A7050
#define CPacketScrambler__hton_x                                   0x1406A7040

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14060B7E0
#define CSidlManagerBase__FindAnimation1_x                         0x14060B720
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14060BE20
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14060BBC0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14060AB20
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14060AAB0
#define CSidlManagerBase__CreateXWnd_x                             0x14060A110

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14051CA40
#define CSidlManager__CreateXWnd_x                                 0x14051CC00

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405CF860
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405CF990
#define CSidlScreenWnd__ConvertToRes_x                             0x14061AB20 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405CFB10
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405CF020
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405CF0F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405CF360
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405D0200
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405D0430
#define CSidlScreenWnd__GetChildItem_x                             0x1405D05D0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405D0820
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405DA9E0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405D0B90
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405D0F00
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405D17D0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405D21D0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F6BEF8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405D2860
#define CSidlScreenWnd__StoreIniVis_x                              0x1405D3060
#define CSidlScreenWnd__vftable_x                                  0x140AFE198
#define CSidlScreenWnd__WndNotification_x                          0x1405D30B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140343A20 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140343D50 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140343C80
#define CSkillMgr__IsActivatedSkill_x                              0x140344110
#define CSkillMgr__IsCombatSkill_x                                 0x140344150
#define CSkillMgr__GetSkillTimerDuration_x                         0x140344080
#define CSkillMgr__GetSkillLastUsed_x                              0x140343CD0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405EAFE0
#define CSliderWnd__SetValue_x                                     0x1405EB7F0
#define CSliderWnd__SetNumTicks_x                                  0x1405EB670

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140523330

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405EFFA0
#define CStmlWnd__CalculateHSBRange_x                              0x1405DA3D0
#define CStmlWnd__CalculateVSBRange_x                              0x1405F0ED0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405F1970
#define CStmlWnd__ForceParseNow_x                                  0x1405F1A10
#define CStmlWnd__GetVisibleText_x                                 0x1405F20E0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405F3E70
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405F3EB0
#define CStmlWnd__SetSTMLText_x                                    0x1405FAF40
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405FB0F0
#define CStmlWnd__UpdateHistoryString_x                            0x1405FB490

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405EBBC0
#define CTabWnd__DrawCurrentPage_x                                 0x1405EBC60
#define CTabWnd__DrawTab_x                                         0x1405EC030
#define CTabWnd__GetTabRect_x                                      0x1405EC6B0
#define CTabWnd__InsertPage_x                                      0x1405EC980
#define CTabWnd__RemovePage_x                                      0x1405ECC10
#define CTabWnd__SetPage_x                                         0x1405ECD70
#define CTabWnd__UpdatePage_x                                      0x1405ED070

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140614BA0
#define CPageWnd__SetTabText_x                                     0x140614C10

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C40F0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C4520


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140602B70
#define CTextureFont__DrawWrappedText1_x                           0x140602A70
#define CTextureFont__DrawWrappedText2_x                           0x140602CA0
#define CTextureFont__GetTextExtent_x                              0x140603050
#define CTextureFont__GetHeight_x                                  0x140603010

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140619240

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405CC470

// CXStr
#define CXStr__gFreeLists_x                                        0x140D9B050
#define CXStr__gCXStrAccess_x                                      0x140F6BA58

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405D5A30
#define CXWnd__ClrFocus_x                                          0x1405D5D20
#define CXWnd__Destroy_x                                           0x1405D5EA0
#define CXWnd__DoAllDrawing_x                                      0x1405D5FA0
#define CXWnd__DrawColoredRect_x                                   0x1405D6770
#define CXWnd__DrawTooltip_x                                       0x1405D7E00
#define CXWnd__DrawTooltipAtPoint_x                                0x1405D7EC0
#define CXWnd__GetChildItem_x                                      0x1405D87D0
#define CXWnd__GetChildWndAt_x                                     0x1405D8880
#define CXWnd__GetClientRect_x                                     0x1405D8B30
#define CXWnd__GetClientClipRect_x                                 0x1405D89F0
#define CXWnd__GetRelativeRect_x                                   0x1405DA4F0
#define CXWnd__GetScreenClipRect_x                                 0x1405DA600
#define CXWnd__GetScreenRect_x                                     0x1405DA770
#define CXWnd__GetTooltipRect_x                                    0x1405DA8F0
#define CXWnd__IsActive_x                                          0x1402D5770
#define CXWnd__IsDescendantOf_x                                    0x1405DAEC0
#define CXWnd__IsReallyVisible_x                                   0x1405DAF30
#define CXWnd__IsType_x                                            0x1405DAF80
#define CXWnd__Minimize_x                                          0x1405DB080
#define CXWnd__ProcessTransition_x                                 0x1405DBF30
#define CXWnd__Resize_x                                            0x1405DC050
#define CXWnd__Right_x                                             0x1405DC0F0
#define CXWnd__SetFocus_x                                          0x1405DC4B0
#define CXWnd__SetFont_x                                           0x1405DC500
#define CXWnd__SetKeyTooltip_x                                     0x1405DC610
#define CXWnd__SetMouseOver_x                                      0x1405DC760
#define CXWnd__SetParent_x                                         0x1405DC7E0
#define CXWnd__StartFade_x                                         0x1405DCC10
#define CXWnd__vftable_x                                           0x140AFE770
#define CXWnd__CXWnd_x                                             0x1405D4650
#define CXWnd__dCXWnd_x                                            0x1405D4F80

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14061FF70

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405FCDC0
#define CXWndManager__DrawCursor_x                                 0x1405FD0A0
#define CXWndManager__DrawWindows_x                                0x1405FD300
#define CXWndManager__GetKeyboardFlags_x                           0x1405FD970
#define CXWndManager__HandleKeyboardMsg_x                          0x1405FD9B0
#define CXWndManager__RemoveWnd_x                                  0x1406011F0

// CDBStr
#define CDBStr__GetString_x                                        0x140198840

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406B1160

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D92D0
#define CCharacterListWnd__EnterWorld_x                            0x1400D80D0
#define CCharacterListWnd__Quit_x                                  0x1400D92B0
#define CCharacterListWnd__UpdateList_x                            0x1400DA010

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14067D8F0
#define ItemBase__CreateItemTagString_x                            0x14067E380
#define ItemBase__GetImageNum_x                                    0x140680AD0
#define ItemBase__GetItemValue_x                                   0x1406826C0
#define ItemBase__IsEmpty_x                                        0x140684460
#define ItemBase__IsKeyRingItem_x                                  0x140684BE0
#define ItemBase__ValueSellMerchant_x                              0x140688E90
#define ItemClient__CanDrop_x                                      0x1402C9920
#define ItemClient__CanGoInBag_x                                   0x1402C9A60
#define ItemClient__CreateItemClient_x                             0x1402C9CF0
#define ItemClient__dItemClient_x                                  0x1402C9790

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B8750
#define EQ_LoadingS__Array_x                                       0x140D872B0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140695010
#define PcBase__GetCombatAbility_x                                 0x1406958A0
#define PcBase__GetCombatAbilityTimer_x                            0x140695980
#define PcBase__GetItemContainedRealEstateIds_x                    0x1406961A0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140696C70
#define PcClient__AlertInventoryChanged_x                          0x1402ED000
#define PcClient__GetConLevel_x                                    0x1402ED750  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402EFE50
#define PcClient__HasLoreItem_x                                    0x1402F0F30
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FD9A0
#define PcZoneClient__RemoveMyAffect_x                             0x140300EE0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022F5C0
#define EQGroundItemListManager__Add_x                             0x14022F770
#define EQGroundItemListManager__Clear_x                           0x14022F810
#define EQGroundItemListManager__Delete_x                          0x14022F8D0
#define EQGroundItemListManager__Instance_x                        0x14022F960

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14026B840

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140192F80

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140669740
#define PlayerBase__CanSee1_x                                      0x140669820
#define PlayerBase__GetVisibilityLineSegment_x                     0x140669D10
#define PlayerBase__HasProperty_x                                  0x140669EF0
#define PlayerBase__IsTargetable_x                                 0x140669FB0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030EDB0
#define PlayerClient__GetPcClient_x                                0x1403118D0
#define PlayerClient__PlayerClient_x                               0x140307030
#define PlayerClient__SetNameSpriteState_x                         0x140315000
#define PlayerClient__SetNameSpriteTint_x                          0x140315FC0
#define PlayerZoneClient__ChangeHeight_x                           0x140324CD0
#define PlayerZoneClient__DoAttack_x                               0x1403259E0
#define PlayerZoneClient__GetLevel_x                               0x140329100
#define PlayerZoneClient__IsValidTeleport_x                        0x14026E5B0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6D70

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031E180  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14031E230  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031E330
#define PlayerManagerClient__CreatePlayer_x                        0x14031DC40
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140669270

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CEF40
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CE850
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CE8C0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CEED0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402CF060
#define KeypressHandler__HandleKeyUp_x                             0x1402CF180
#define KeypressHandler__SaveKeymapping_x                          0x1402CED50  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406AEC60  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406A9230

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F70A0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402FBA50
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FEA60
#define PcZoneClient__RemovePetEffect_x                            0x1403011C0
#define PcZoneClient__HasAlternateAbility_x                        0x1402FF6A0
#define PcZoneClient__CanEquipItem_x                               0x1402F9D60
#define PcZoneClient__GetItemByID_x                                0x1402FCA20
#define PcZoneClient__RemoveBuffEffect_x                           0x140300D70
#define PcZoneClient__BandolierSwap_x                              0x1402ED0B0

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402730F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403E1790

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D5A40
#define CContainerMgr__CloseContainer_x                            0x1403D5360
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D5DE0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404DFBD0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402C0F00

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140468210
#define CLootWnd__RequestLootSlot_x                                0x140469280

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E9280
#define EQ_Spell__SpellAffects_x                                   0x1401EA6B0
#define EQ_Spell__SpellAffectBase_x                                0x1401EA610
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E2630
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E25E0
#define EQ_Spell__IsSPAStacking_x                                  0x1401EA320
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E9ED0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E9790

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C96F0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14053DA70
#define CTargetWnd__RefreshTargetBuffs_x                           0x14053D190
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14053C990

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140545330  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018FA00
#define CTaskManager__GetTaskStatus_x                              0x14018FB10
#define CTaskManager__GetElementDescription_x                      0x14018F690

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E7500
#define EqSoundManager__PlayScriptMp3_x                            0x1401E6240
#define EqSoundManager__SoundAssistPlay_x                          0x140348E00  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140349140  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405DD9A0
#define CTextureAnimation__SetCurCell_x                            0x1405DDCB0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BF0F0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406C8100
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406C8180
#define CharacterBase__IsExpansionFlag_x                           0x14020DC10

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403AFCC0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403B0710
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403B1CD0

// messages
#define msg_spell_worn_off_x                                       0x1402256D0
#define msg_new_text_x                                             0x140220F10
#define __msgTokenTextParam_x                                      0x140217D90
#define msgTokenText_x                                             0x140217CA0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14034AB40
#define SpellManager__GetSpellByGroupAndRank_x                     0x14034AA40

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140679030

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140461420

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403DA8A0
#define CCursorAttachment__IsOkToActivate_x                        0x1403DDD20
#define CCursorAttachment__RemoveAttachment_x                      0x1403DDFD0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1406176A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1406178A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1406178B0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140159BA0
#define CFindItemWnd__Update_x                                     0x14015A560
#define CFindItemWnd__PickupSelectedItem_x                         0x140153150

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401647A0
#define LootFiltersManager__GetItemFilterData_x                    0x1401652D0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140165B80
#define LootFiltersManager__SetItemLootFilter_x                    0x140165E30

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404C1960

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140343560
#define CResolutionHandler__UpdateResolution_x                     0x1405C1FC0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403D1B80

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406CC430  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406CC320  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403FBF40
#define CGroupWnd__UpdateDisplay_x                                 0x1403FB0D0

// ItemBase
#define ItemBase__IsLore_x                                         0x140684D20
#define ItemBase__IsLoreEquipped_x                                 0x140684DB0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402E2A50

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14026B980
#define EQPlacedItemManager__GetItemByGuid_x                       0x14026B910
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14026B950

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033D770

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012FA70
#define FactionManagerClient__HandleFactionMessage_x               0x14012FE50
#define FactionManagerClient__GetFactionStanding_x                 0x14012F170
#define FactionManagerClient__GetMaxFaction_x                      0x14012F240
#define FactionManagerClient__GetMinFaction_x                      0x14012F0F0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B63B0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14013B580

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C19E0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C0B70
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C1800  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C1780  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14034FE90

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405D36F0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008ADB0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140361820

// AchievementManager
#define AchievementManager__Instance_x                             0x1400942E0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406B1CF0
#define FreeToPlayClient__RestrictionInfo_x                        0x140B13C60

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140574880

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140867A58
#define CGFScreenWnd__CGFScreenWnd_x                               0x1400732B0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073440
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400735F0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
