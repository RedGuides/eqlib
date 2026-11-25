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

#define __ClientDate                                               20261119u
#define __ExpectedVersionDate                                     "Nov 19 2026"
#define __ExpectedVersionTime                                     "14:30:36"
#define __ActualVersionDate_x                                      0x1409A8BD0
#define __ActualVersionTime_x                                      0x1409A8BC0
#define __ActualVersionBuild_x                                     0x14093DBF0

// Memory Protection
#define __MemChecker0_x                                            0x1402DB9E0
#define __MemChecker1_x                                            0x1405C0A20
#define __MemChecker4_x                                            0x1402A8BF0
#define __EncryptPad0_x                                            0x140D9AFC0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140ED3BD0
#define instEQZoneInfo_x                                           0x140ED3DC4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140239830
#define __gfMaxZoomCameraDistance_x                                0x14093EEA8
#define __gfMaxCameraDistance_x                                    0x140AE91C8
#define __CurrentSocial_x                                          0x140C569C0 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D92790
#define g_eqCommandStates_x                                        0x140D93830
#define __CommandList_x                                            0x140D93A60
#define __ScreenMode_x                                             0x140E1B544
#define __gWorld_x                                                 0x140ECE700
#define __gpbCommandEvent_x                                        0x140ECC1B8
#define __ServerHost_x                                             0x140ECC3A8
#define __Guilds_x                                                 0x140ED2780
#define __MemCheckBitmask_x                                        0x140ED412B
#define __MemCheckActive_x                                         0x140ED5845
#define __MouseEventTime_x                                         0x140F491B8
#define DI8__MouseState_x                                          0x140F4D450
#define __heqmain_x                                                0x140F4F8E0
#define DI8__Mouse_x                                               0x140F4F8F8
#define __HWnd_x                                                   0x140F4F900
#define __Mouse_x                                                  0x140ED3C2C
#define DI8__Keyboard_x                                            0x140F4D380
#define __LoginName_x                                              0x140F4FFCC
#define __CurrentMapLabel_x                                        0x140F63CA0
#define __LabelCache_x                                             0x140F64870
#define __ChatFilterDefs_x                                         0x140A83010
#define Teleport_Table_Size_x                                      0x140ECC244
#define Teleport_Table_x                                           0x140ECC6D0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140ECEB10
#define pinstActiveBanker_x                                        0x140ECC0E8
#define pinstActiveCorpse_x                                        0x140ECC0D8
#define pinstActiveGMaster_x                                       0x140ECC0E0
#define pinstActiveMerchant_x                                      0x140ECC0D0
#define pinstAltAdvManager_x                                       0x140E1C320
#define pinstCEverQuest_x                                          0x140F4D3A0
#define pinstCamActor_x                                            0x140E1B530
#define pinstCDBStr_x                                              0x140E1B0C0
#define pinstCDisplay_x                                            0x140ECC198
#define pinstControlledPlayer_x                                    0x140ECC178
#define pinstCResolutionHandler_x                                  0x140F74E18
#define pinstCSidlManager_x                                        0x140F75908
#define pinstCXWndManager_x                                        0x140F75900
#define instDynamicZone_x                                          0x140ED2640 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140ED268E
#define instExpeditionName_x                                       0x140ED26CE
#define pinstDZMember_x                                            0x140ED2758
#define pinstDZTimerInfo_x                                         0x140ED2760
#define pinstEqLogin_x                                             0x140F4F910
#define instTribute_x                                              0x140D8DDD0
#define pinstDeviceInputProxy_x                                    0x140ED3C2C
#define pinstEQSoundManager_x                                      0x140E1C6A0
#define pinstEQSpellStrings_x                                      0x140DFFC00
#define pinstSGraphicsEngine_x                                     0x140F74E38
#define pinstLocalPC_x                                             0x140ECE6F0
#define pinstLocalPlayer_x                                         0x140ECC0C8
#define pinstCMercenaryClientManager_x                             0x140F4AAE8
#define pinstModelPlayer_x                                         0x140ECC0F8
#define pinstRenderInterface_x                                     0x140F74E50
#define pinstSkillMgr_x                                            0x140F4C7A8
#define pinstSpawnManager_x                                        0x140F4AEA0
#define pinstSpellManager_x                                        0x140F4C810
#define pinstStringTable_x                                         0x140ECE6F8
#define pinstSwitchManager_x                                       0x140ECBFD0
#define pinstTarget_x                                              0x140ECC170
#define pinstTaskMember_x                                          0x140D8DDC0 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140ECC0F0
#define instTributeActive_x                                        0x140D8DDF9
#define pinstViewActor_x                                           0x140E1B528
#define pinstWorldData_x                                           0x140ECC6B8
#define pinstPlayerPath_x                                          0x140F4AEC8
#define pinstTargetIndicator_x                                     0x140F4C8C0
#define EQObject_Top_x                                             0x140ECC1A0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F60E00
#define pinstCContainerMgr_x                                       0x140E1B170
#define pinstCContextMenuManager_x                                 0x140F75BB0
#define pinstCInvSlotMgr_x                                         0x140E1B150
#define pinstCItemDisplayManager_x                                 0x140F63870
#define pinstCPopupWndManager_x                                    0x140F64100
#define pinstCSpellDisplayMgr_x                                    0x140F64750
#define pinstCTaskManager_x                                        0x140C56D00
#define pinstEQSuiteTextureLoader_x                                0x140DA4730
#define pinstItemIconCache_x                                       0x140F61160
#define pinstLootFiltersManager_x                                  0x140E1AB08
#define pinstGFViewListener_x                                      0x140F75AB8
#define pinstGF_x                                                  0x140DF0100


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402644C0
#define __CastRay_x                                                0x14025C450
#define __CastRay2_x                                               0x14025C140
#define __compress_block_x                                         0x140574C30
#define __ConvertItemTags_x                                        0x14025C8E0
#define __CleanItemTags_x                                          0x140094020
#define __CreateCascadeMenuItems_x                                 0x1401A1300
#define __decompress_block_x                                       0x1405BA830
#define __DoesFileExist_x                                          0x1405C4500
#define __EQGetTime_x                                              0x1405C0110
#define __ExecuteCmd_x                                             0x140230BE0
#define __FixHeading_x                                             0x14067CC30
#define __FlushDxKeyboard_x                                        0x140360FD0
#define __get_bearing_x                                            0x140266890
#define __get_melee_range_x                                        0x140266980
#define __GetAnimationCache_x                                      0x1403E7BF0
#define __GetGaugeValueFromEQ_x                                    0x1405339A0
#define __GetLabelFromEQ_x                                         0x140534F90
#define __GetXTargetType_x                                         0x14067F120   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14067CCB0
#define __HelpPath_x                                               0x140F49080   // Why?
#define __NewUIINI_x                                               0x1405409F0   // Why?
#define __ProcessDeviceEvents_x                                    0x1402A91F0
#define __ProcessGameEvents_x                                      0x14029D8E0
#define __ProcessKeyboardEvents_x                                  0x1403627B0
#define __ProcessMouseEvents_x                                     0x14029F080
#define __SaveColors_x                                             0x1401B15A0
#define __STMLToText_x                                             0x1405F26B0
#define __WndProc_x                                                0x14035F6A0
#define CMemoryMappedFile__SetFile_x                               0x14082BB80
#define DrawNetStatus_x                                            0x1402EAF50
#define Util__FastTime_x                                           0x1405BEB00
#define __eq_delete_x                                              0x1406F64A8
#define __eq_new_x                                                 0x1406F6700
#define __CopyLayout_x                                             0x1402D7DD0
#define __ThrottleFrameRate_x                                      0x14028C663
#define __ThrottleFrameRateEnd_x                                   0x14028C669

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140372790
#define CAAWnd__Update_x                                           0x140372BF0
#define CAAWnd__UpdateSelected_x                                   0x140374240

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B1750
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400B1540
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400AD930
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B99F0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401BC850
#define AltAdvManager__IsAbilityReady_x                            0x1401BCD30
#define AltAdvManager__GetAAById_x                                 0x1401BC0E0
#define AltAdvManager__CanTrainAbility_x                           0x1401BBEE0
#define AltAdvManager__CanSeeAbility_x                             0x1401BBC00

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400E0DB0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400E1C70
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400E1EC0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400F6430
#define CharacterZoneClient__CanUseItem_x                          0x1400F69F0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400E28A0
#define CharacterZoneClient__CastSpell_x                           0x1400E2940
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400F2890
#define CharacterZoneClient__Cur_HP_x                              0x1400F8280
#define CharacterZoneClient__Cur_Mana_x                            0x1400F8440
#define CharacterZoneClient__FindAffectSlot_x                      0x1400E5DA0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400FEB90
#define CharacterZoneClient__GetBaseSkill_x                        0x14010DE80  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E7240
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F5D30
#define CharacterZoneClient__GetCursorItemCount_x                  0x140100420
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400FF310
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E73C0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D6890
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D8760
#define CharacterZoneClient__GetHPRegen_x                          0x1400FFA40
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F7ED0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1401005C0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E7440
#define CharacterZoneClient__GetManaRegen_x                        0x1401012B0
#define CharacterZoneClient__GetModCap_x                           0x140108A50
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E7740
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E7910
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400DBE00
#define CharacterZoneClient__HasSkill_x                            0x140104450
#define CharacterZoneClient__HitBySpell_x                          0x1400E8380
#define CharacterZoneClient__IsStackBlocked_x                      0x1400EBD00
#define CharacterZoneClient__MakeMeVisible_x                       0x140108530
#define CharacterZoneClient__Max_Endurance_x                       0x140306110  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x140108880
#define CharacterZoneClient__Max_Mana_x                            0x140306330  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140108CE0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400EF360
#define CharacterZoneClient__SpellDuration_x                       0x1400F0090
#define CharacterZoneClient__TotalEffect_x                         0x1400F14F0
#define CharacterZoneClient__UseSkill_x                            0x14010EE80


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403942A0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14039F110
#define CBarterWnd__UpdateInventoryList_x                          0x14039EB80

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14039ADF0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140399E40

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403A1BA0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140B08CB0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403C5530
#define CChatWindowManager__InitContextMenu_x                      0x1403C56C0
#define CChatWindowManager__FreeChatWindow_x                       0x1403C4530
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403CDA40
#define CChatWindowManager__CreateChatWindow_x                     0x1403C3F60

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140117490

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403CEAB0
#define CChatWindow__Clear_x                                       0x1403CFAC0
#define CChatWindow__WndNotification_x                             0x1403D0D30
#define CChatWindow__AddHistory_x                                  0x1403CF5C0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140607B00
#define CContextMenu__RemoveMenuItem_x                             0x140607F10
#define CContextMenu__RemoveAllMenuItems_x                         0x140607EE0
#define CContextMenu__CheckMenuItem_x                              0x140607D50
#define CContextMenu__SetMenuItem_x                                0x140607F30
#define CContextMenu__AddSeparator_x                               0x140607C80

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405F9890
#define CContextMenuManager__RemoveMenu_x                          0x1405F9E70
#define CContextMenuManager__PopupMenu_x                           0x1405F9BB0
#define CContextMenuManager__Flush_x                               0x1405F9910
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403DF4A0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406D0FD0
#define CChatService__GetFriendName_x                              0x1406D0FE0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405F5E10
#define CComboWnd__Draw_x                                          0x1405F5F10
#define CComboWnd__GetCurChoice_x                                  0x1405F61F0  // unused
#define CComboWnd__GetListRect_x                                   0x1405F6290
#define CComboWnd__InsertChoice_x                                  0x1405F65D0
#define CComboWnd__SetColors_x                                     0x1405F6960
#define CComboWnd__SetChoice_x                                     0x1405F6920
#define CComboWnd__GetItemCount_x                                  0x1405F6280
#define CComboWnd__GetCurChoiceText_x                              0x1405F6230  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405F61C0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405F6690

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403DD190
#define CContainerWnd__SetContainer_x                              0x1403DE2F0  // was 0x140438EF0 (that is an item bane-damage text builder). Real fn takes a 3rd bool arg (r9b).
#define CContainerWnd__vftable_x                                   0x140A1DC10

// CDisplay
#define CDisplay__cameraType_x                                     0x140E1B294
#define CDisplay__ZoneMainUI_x                                     0x14061CAA0
#define CDisplay__PreZoneMainUI_x                                  0x1401AE2B0
#define CDisplay__CleanGameUI_x                                    0x1401A03C0
#define CDisplay__GetClickedActor_x                                0x1401A4620
#define CDisplay__GetUserDefinedColor_x                            0x1401A5320
#define CDisplay__InitCharSelectUI_x                               0x1401A55D0
#define CDisplay__ReloadUI_x                                       0x1401B0790
#define CDisplay__RestartUI_x                                      0x140213F10
#define CDisplay__WriteTextHD2_x                                   0x1401B7760
#define CDisplay__TrueDistance_x                                   0x1401B7400
#define CDisplay__SetViewActor_x                                   0x1401B3D10
#define CDisplay__GetFloorHeight_x                                 0x1401A4850
#define CDisplay__ToggleScreenshotMode_x                           0x1401B6EF0
#define CDisplay__RealRender_World_x                               0x1401AFB70

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140626F60
#define CEditWnd__DrawCaret_x                                      0x1406186C0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140618BE0
#define CEditWnd__GetCaretPt_x                                     0x140618E80  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140618EC0
#define CEditWnd__GetDisplayString_x                               0x140619120
#define CEditWnd__GetHorzOffset_x                                  0x140619370
#define CEditWnd__GetLineForPrintableChar_x                        0x1406194D0
#define CEditWnd__GetSelStartPt_x                                  0x1406197C0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140619600
#define CEditWnd__PointFromPrintableChar_x                         0x14061A380
#define CEditWnd__ReplaceSelection_x                               0x14061A740
#define CEditWnd__SelectableCharFromPoint_x                        0x14061AC00
#define CEditWnd__SetEditable_x                                    0x14061AEA0
#define CEditWnd__SetWindowText_x                                  0x14061AED0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14028D740
#define CEverQuest__ClickedPlayer_x                                0x140280770
#define CEverQuest__CreateTargetIndicator_x                        0x140281070
#define CEverQuest__DoTellWindow_x                                 0x140117190 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140117A80 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14028F4E0
#define CEverQuest__dsp_chat_x                                     0x140116BC0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402BAE20
#define CEverQuest__Emote_x                                        0x14028FE70
#define CEverQuest__GetBodyTypeDesc_x                              0x140290C10
#define CEverQuest__GetClassDesc_x                                 0x140290C70
#define CEverQuest__GetClassThreeLetterCode_x                      0x140291040
#define CEverQuest__GetDeityDesc_x                                 0x1402912E0
#define CEverQuest__GetLangDesc_x                                  0x140291710
#define CEverQuest__GetRaceDesc_x                                  0x140291AB0
#define CEverQuest__InterpretCmd_x                                 0x1402936F0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402A9260
#define CEverQuest__LMouseUp_x                                     0x140295200
#define CEverQuest__RightClickedOnPlayer_x                         0x1402A6600
#define CEverQuest__RMouseUp_x                                     0x14029FCB0
#define CEverQuest__SetGameState_x                                 0x1402ABDA0
#define CEverQuest__UPCNotificationFlush_x                         0x1402B17A0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140294DE0
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402A10A0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402A1EB0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403F2DD0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400D0030
#define CGuild__GetGuildName_x                                     0x1400D0070

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140419CC0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402CD480
#define CHotButton__SetCheck_x                                     0x1402CD750

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140435250
#define CInvSlotMgr__MoveItem_x                                    0x140436540
#define CInvSlotMgr__SelectSlot_x                                  0x140438B80

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140430D50
#define CInvSlot__SliderComplete_x                                 0x140432740
#define CInvSlot__GetItemBase_x                                    0x14042C090
#define CInvSlot__UpdateItem_x                                     0x140432C10

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14043B1D0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14045CA50
#define CItemDisplayWnd__UpdateStrings_x                           0x14045FCC0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404592E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14045AC20
#define CItemDisplayWnd__RequestConvertItem_x                      0x14045BE60

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140530420
#define CSpellDisplayWnd__UpdateStrings_x                          0x1405321B0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14056DC30

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140455960

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x140531FF0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140164F80

// CLabel
#define CLabel__UpdateText_x                                       0x140467370

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405E8820
#define CListWnd__dCListWnd_x                                      0x1405E8C60
#define CListWnd__vftable_x                                        0x140B06960
#define CListWnd__AddColumn_x                                      0x1405E92F0
#define CListWnd__AddColumn1_x                                     0x1405E9390
#define CListWnd__AddLine_x                                        0x1405E94F0
#define CListWnd__AddString_x                                      0x1405E9A90
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405EA000
#define CListWnd__CalculateVSBRange_x                              0x1405EA2E0
#define CListWnd__ClearSel_x                                       0x1405EA490
#define CListWnd__ClearAllSel_x                                    0x1405EA430
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405EA4F0
#define CListWnd__Compare_x                                        0x1405EA6B0
#define CListWnd__Draw_x                                           0x1405EAB70
#define CListWnd__DrawColumnSeparators_x                           0x1405EB700
#define CListWnd__DrawHeader_x                                     0x1405EB7C0
#define CListWnd__DrawItem_x                                       0x1405EBE90
#define CListWnd__DrawLine_x                                       0x1405EC830
#define CListWnd__DrawSeparator_x                                  0x1405ECCF0
#define CListWnd__EnableLine_x                                     0x1405ED110
#define CListWnd__EnsureVisible_x                                  0x1405ED170
#define CListWnd__ExtendSel_x                                      0x1405ED270
#define CListWnd__GetColumnMinWidth_x                              0x1405ED600
#define CListWnd__GetColumnWidth_x                                 0x1405ED680
#define CListWnd__GetCurSel_x                                      0x1405ED780
#define CListWnd__GetItemData_x                                    0x1405EDB00
#define CListWnd__GetItemHeight_x                                  0x1405EDB40
#define CListWnd__GetItemRect_x                                    0x1405EDD70
#define CListWnd__GetItemText_x                                    0x1405EE010
#define CListWnd__GetSelList_x                                     0x1405EE270
#define CListWnd__GetSeparatorRect_x                               0x1405EE460
#define CListWnd__InsertLine_x                                     0x1405EF8B0
#define CListWnd__RemoveLine_x                                     0x1405EFF20
#define CListWnd__SetColors_x                                      0x1405F02E0
#define CListWnd__SetColumnJustification_x                         0x1405F0300
#define CListWnd__SetColumnLabel_x                                 0x1405F0380
#define CListWnd__SetColumnWidth_x                                 0x1405F0520
#define CListWnd__SetCurSel_x                                      0x1405F05F0
#define CListWnd__SetItemColor_x                                   0x1405F0860
#define CListWnd__SetItemData_x                                    0x1405F0900
#define CListWnd__SetItemText_x                                    0x1405F0B40
#define CListWnd__Sort_x                                           0x1405F0F50
#define CListWnd__ToggleSel_x                                      0x1405F10C0
#define CListWnd__SetColumnsSizable_x                              0x1405F0570
#define CListWnd__SetItemWnd_x                                     0x1405F0C70
#define CListWnd__GetItemWnd_x                                     0x1405EE200
#define CListWnd__SetItemIcon_x                                    0x1405F0940
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405E9DD0
#define CListWnd__SetVScrollPos_x                                  0x1405F0EB0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14047AD50

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A6B6E8
#define MapViewMap__Clear_x                                        0x14047CA10
#define MapViewMap__SetZoom_x                                      0x140482EB0
#define MapViewMap__HandleLButtonDown_x                            0x14047F9B0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404A5B70  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404AE700
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404AEF10
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404B4740
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404B3270
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404B90A0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406AB020
#define CPacketScrambler__hton_x                                   0x1406AB010

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140611F70
#define CSidlManagerBase__FindAnimation1_x                         0x140611EB0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1406125B0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140612350
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1406112B0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140611240
#define CSidlManagerBase__CreateXWnd_x                             0x140610880

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140523230
#define CSidlManager__CreateXWnd_x                                 0x1405233F0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405E21E0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405E2300
#define CSidlScreenWnd__ConvertToRes_x                             0x1406212A0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405E2480
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405E19A0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405E1A70
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405E1CE0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405E2B70
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405E2DA0
#define CSidlScreenWnd__GetChildItem_x                             0x1405E2F40
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405E3190
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405D9570 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405E3500
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405E3870
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405E4140
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405E4B40
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F75868
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405E51D0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405E59C0
#define CSidlScreenWnd__vftable_x                                  0x140B064F0
#define CSidlScreenWnd__WndNotification_x                          0x1405E5A10

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140349E50 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14034A180 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14034A0B0
#define CSkillMgr__IsActivatedSkill_x                              0x14034A540
#define CSkillMgr__IsCombatSkill_x                                 0x14034A580
#define CSkillMgr__GetSkillTimerDuration_x                         0x14034A4B0
#define CSkillMgr__GetSkillLastUsed_x                              0x14034A100

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405F7320
#define CSliderWnd__SetValue_x                                     0x1405F7B30
#define CSliderWnd__SetNumTicks_x                                  0x1405F79B0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140529AF0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405FC2F0
#define CStmlWnd__CalculateHSBRange_x                              0x1405FD190
#define CStmlWnd__CalculateVSBRange_x                              0x1405FD210
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405FDCB0
#define CStmlWnd__ForceParseNow_x                                  0x1405FDD50
#define CStmlWnd__GetVisibleText_x                                 0x1405FE420
#define CStmlWnd__MakeStmlColorTag_x                               0x1406001B0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1406001F0
#define CStmlWnd__SetSTMLText_x                                    0x140607280
#define CStmlWnd__StripFirstSTMLLines_x                            0x140607430
#define CStmlWnd__UpdateHistoryString_x                            0x1406077D0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405F7F00
#define CTabWnd__DrawCurrentPage_x                                 0x1405F7FA0
#define CTabWnd__DrawTab_x                                         0x1405F8370
#define CTabWnd__GetTabRect_x                                      0x1405F8A00
#define CTabWnd__InsertPage_x                                      0x1405F8CD0
#define CTabWnd__RemovePage_x                                      0x1405F8F60
#define CTabWnd__SetPage_x                                         0x1405F90C0
#define CTabWnd__UpdatePage_x                                      0x1405F93C0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14061B330
#define CPageWnd__SetTabText_x                                     0x14061B3A0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C9550  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C9980


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140609310
#define CTextureFont__DrawWrappedText1_x                           0x140609210
#define CTextureFont__DrawWrappedText2_x                           0x140609440
#define CTextureFont__GetTextExtent_x                              0x1406097F0
#define CTextureFont__GetHeight_x                                  0x1406097B0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14061F9C0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405D2C40

// CXStr
#define CXStr__gFreeLists_x                                        0x140DA40A0
#define CXStr__gCXStrAccess_x                                      0x140F74CC8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405D4590
#define CXWnd__ClrFocus_x                                          0x1405D4880
#define CXWnd__Destroy_x                                           0x1405D4A00
#define CXWnd__DoAllDrawing_x                                      0x1405D4B10
#define CXWnd__DrawColoredRect_x                                   0x1405D52E0
#define CXWnd__DrawTooltip_x                                       0x1405D6970
#define CXWnd__DrawTooltipAtPoint_x                                0x1405D6A30
#define CXWnd__GetChildItem_x                                      0x1405D7330
#define CXWnd__GetChildWndAt_x                                     0x1405D73E0
#define CXWnd__GetClientRect_x                                     0x1405D7690
#define CXWnd__GetClientClipRect_x                                 0x1405D7550
#define CXWnd__GetRelativeRect_x                                   0x1405D9070
#define CXWnd__GetScreenClipRect_x                                 0x1405D9180
#define CXWnd__GetScreenRect_x                                     0x1405D92F0
#define CXWnd__GetTooltipRect_x                                    0x1405D9470
#define CXWnd__IsActive_x                                          0x1405D9A30
#define CXWnd__IsDescendantOf_x                                    0x1405D9A60
#define CXWnd__IsReallyVisible_x                                   0x1405D9AD0
#define CXWnd__IsType_x                                            0x1405D9B20
#define CXWnd__Minimize_x                                          0x1405D9C20
#define CXWnd__ProcessTransition_x                                 0x1405DAAD0
#define CXWnd__Resize_x                                            0x1405DABE0
#define CXWnd__Right_x                                             0x1405DAC80
#define CXWnd__SetFocus_x                                          0x1405DB030
#define CXWnd__SetFont_x                                           0x1405DB080
#define CXWnd__SetKeyTooltip_x                                     0x1405DB170
#define CXWnd__SetMouseOver_x                                      0x1405DB2C0
#define CXWnd__SetParent_x                                         0x1405DB340
#define CXWnd__StartFade_x                                         0x1405DB780
#define CXWnd__vftable_x                                           0x140B06008
#define CXWnd__CXWnd_x                                             0x1405D3190
#define CXWnd__dCXWnd_x                                            0x1405D3AC0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1406266F0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405DCCF0
#define CXWndManager__DrawCursor_x                                 0x1405DCFD0
#define CXWndManager__DrawWindows_x                                0x1405DD230
#define CXWndManager__GetKeyboardFlags_x                           0x1405DD8A0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405DD8E0
#define CXWndManager__RemoveWnd_x                                  0x1405E1110

// CDBStr
#define CDBStr__GetString_x                                        0x14019E550

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14068F5B0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400DE750
#define CCharacterListWnd__EnterWorld_x                            0x1400DD550
#define CCharacterListWnd__Quit_x                                  0x1400DE730
#define CCharacterListWnd__UpdateList_x                            0x1400DF490

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140683E00
#define ItemBase__CreateItemTagString_x                            0x1406848C0
#define ItemBase__GetImageNum_x                                    0x140687060
#define ItemBase__GetItemValue_x                                   0x140688B80
#define ItemBase__IsEmpty_x                                        0x14068A910
#define ItemBase__IsKeyRingItem_x                                  0x14068B0B0
#define ItemBase__ValueSellMerchant_x                              0x14068F290
#define ItemClient__CanDrop_x                                      0x1402CFCA0
#define ItemClient__CanGoInBag_x                                   0x1402CFDE0
#define ItemClient__CreateItemClient_x                             0x1402D0070
#define ItemClient__dItemClient_x                                  0x1402CFB10

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401BE500
#define EQ_LoadingS__Array_x                                       0x140D902A0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140698F00
#define PcBase__GetCombatAbility_x                                 0x140699790
#define PcBase__GetCombatAbilityTimer_x                            0x140699870
#define PcBase__GetItemContainedRealEstateIds_x                    0x14069A090
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14069AB60
#define PcClient__AlertInventoryChanged_x                          0x1402F3320
#define PcClient__GetConLevel_x                                    0x1402F3A70  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402F6170
#define PcClient__HasLoreItem_x                                    0x1402F7250
#define PcZoneClient__GetItemRecastTimer_x                         0x140303CE0
#define PcZoneClient__RemoveMyAffect_x                             0x140307270

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x1402356D0
#define EQGroundItemListManager__Add_x                             0x140235880
#define EQGroundItemListManager__Clear_x                           0x140235920
#define EQGroundItemListManager__Delete_x                          0x1402359E0
#define EQGroundItemListManager__Instance_x                        0x140235A70

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140271B50

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140198C60

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14066FEB0
#define PlayerBase__CanSee1_x                                      0x14066FF90
#define PlayerBase__GetVisibilityLineSegment_x                     0x140670480
#define PlayerBase__HasProperty_x                                  0x140670660
#define PlayerBase__IsTargetable_x                                 0x140670720
#define PlayerClient__ChangeBoneStringSprite_x                     0x140315140
#define PlayerClient__GetPcClient_x                                0x140317C60
#define PlayerClient__PlayerClient_x                               0x14030D3C0
#define PlayerClient__SetNameSpriteState_x                         0x14031B390
#define PlayerClient__SetNameSpriteTint_x                          0x14031C350
#define PlayerZoneClient__ChangeHeight_x                           0x14032B100
#define PlayerZoneClient__DoAttack_x                               0x14032BE10
#define PlayerZoneClient__GetLevel_x                               0x14032F530
#define PlayerZoneClient__IsValidTeleport_x                        0x1402748C0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401ACB30

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1403245B0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140324660  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140324760
#define PlayerManagerClient__CreatePlayer_x                        0x140324070
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14066F9E0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402D52C0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402D4BD0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402D4C40
#define KeypressHandler__ClearCommandStateArray_x                  0x1402D5250  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402D53E0
#define KeypressHandler__HandleKeyUp_x                             0x1402D5500
#define KeypressHandler__SaveKeymapping_x                          0x1402D50D0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406B5BB0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406B0180

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402FD3D0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140301D80
#define PcZoneClient__GetPcSkillLimit_x                            0x140304DD0
#define PcZoneClient__RemovePetEffect_x                            0x140307550
#define PcZoneClient__HasAlternateAbility_x                        0x140305A30
#define PcZoneClient__CanEquipItem_x                               0x140300090
#define PcZoneClient__GetItemByID_x                                0x140302D60
#define PcZoneClient__RemoveBuffEffect_x                           0x140307100
#define PcZoneClient__BandolierSwap_x                              0x1402F33D0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140279400

// IconCache
#define IconCache__GetIcon_x                                       0x1403E7C20

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403DBED0
#define CContainerMgr__CloseContainer_x                            0x1403DB7F0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403DC270

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404E6330

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402C7250

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14046E8E0
#define CLootWnd__RequestLootSlot_x                                0x14046F950

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401EEB90
#define EQ_Spell__SpellAffects_x                                   0x1401EFFC0
#define EQ_Spell__SpellAffectBase_x                                0x1401EFF20
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E7AA0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E7A50
#define EQ_Spell__IsSPAStacking_x                                  0x1401EFC30
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401EF7E0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401EF0A0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400CEB40

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140544230
#define CTargetWnd__RefreshTargetBuffs_x                           0x140543950
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140543150

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14054BAF0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140195700
#define CTaskManager__GetTaskStatus_x                              0x140195810
#define CTaskManager__GetElementDescription_x                      0x140195390

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401ECE10
#define EqSoundManager__PlayScriptMp3_x                            0x1401EBB50
#define EqSoundManager__SoundAssistPlay_x                          0x14034F230  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14034F570  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405F53B0
#define CTextureAnimation__SetCurCell_x                            0x1405F56C0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402C5440

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406CE820
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406CE8A0
#define CharacterBase__IsExpansionFlag_x                           0x140213560

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403B60F0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403B6BA0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403B8160

// messages
#define msg_spell_worn_off_x                                       0x14022B7D0
#define msg_new_text_x                                             0x140227010
#define __msgTokenTextParam_x                                      0x14021DA10
#define msgTokenText_x                                             0x14021D920

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140350F70
#define SpellManager__GetSpellByGroupAndRank_x                     0x140350E70

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14067F500

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140467B00

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403E0D30
#define CCursorAttachment__IsOkToActivate_x                        0x1403E41B0
#define CCursorAttachment__RemoveAttachment_x                      0x1403E4460
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14061DE20
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14061E020
#define CEQSuiteTextureLoader__GetTexture_x                        0x14061E030

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14015EFF0
#define CFindItemWnd__Update_x                                     0x140160050
#define CFindItemWnd__PickupSelectedItem_x                         0x140158170

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14016A470
#define LootFiltersManager__GetItemFilterData_x                    0x14016AFA0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14016B850
#define LootFiltersManager__SetItemLootFilter_x                    0x14016BB00

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404C80B0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140349990
#define CResolutionHandler__UpdateResolution_x                     0x1405C8790

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403D8010

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406D2B60  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406D2A50  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140402450
#define CGroupWnd__UpdateDisplay_x                                 0x1404015E0

// ItemBase
#define ItemBase__IsLore_x                                         0x14068B1F0
#define ItemBase__IsLoreEquipped_x                                 0x14068B280

#define MultipleItemMoveManager__ProcessMove_x                     0x1402E8D80

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140271C90
#define EQPlacedItemManager__GetItemByGuid_x                       0x140271C20
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140271C60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140343B90

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140134B20
#define FactionManagerClient__HandleFactionMessage_x               0x140134F00
#define FactionManagerClient__GetFactionStanding_x                 0x140134220
#define FactionManagerClient__GetMaxFaction_x                      0x1401342F0
#define FactionManagerClient__GetMinFaction_x                      0x1401341A0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400BB880

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140140630

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C77A0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C6930
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C75C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C7540  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403562C0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405F3E30

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140090460

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140367C60

// AchievementManager
#define AchievementManager__Instance_x                             0x1400998B0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406B8280
#define FreeToPlayClient__RestrictionInfo_x                        0x140B1BB70

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14057B050

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14086FAA8
#define CGFScreenWnd__CGFScreenWnd_x                               0x140078BB0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140078D40
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140078EF0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
