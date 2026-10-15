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

#define __ClientDate                                               20261013u
#define __ExpectedVersionDate                                     "Oct 13 2026"
#define __ExpectedVersionTime                                     "15:17:33"
#define __ActualVersionDate_x                                      0x14099FDD0
#define __ActualVersionTime_x                                      0x14099FDC0
#define __ActualVersionBuild_x                                     0x140D9BE48

// Memory Protection
#define __MemChecker0_x                                            0x1402D55E0
#define __MemChecker1_x                                            0x1405B8370
#define __MemChecker4_x                                            0x1402A2780
#define __EncryptPad0_x                                            0x140D90FC0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EC9B30
#define instEQZoneInfo_x                                           0x140EC9D24 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140239420
#define __gfMaxZoomCameraDistance_x                                0x140936058
#define __gfMaxCameraDistance_x                                    0x140AE0388
#define __CurrentSocial_x                                          0x140C4C9C0 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D887A0
#define g_eqCommandStates_x                                        0x140D89840
#define __CommandList_x                                            0x140D89A70
#define __ScreenMode_x                                             0x140E114B4
#define __gWorld_x                                                 0x140EC45E8
#define __gpbCommandEvent_x                                        0x140EC20A0
#define __ServerHost_x                                             0x140EC2288
#define __Guilds_x                                                 0x140EC86E0
#define __MemCheckBitmask_x                                        0x140ECA08B
#define __MemCheckActive_x                                         0x140ECB7A5
#define __MouseEventTime_x                                         0x140F3F120
#define DI8__MouseState_x                                          0x140F433A8
#define __heqmain_x                                                0x140F45838
#define DI8__Mouse_x                                               0x140F45850
#define __HWnd_x                                                   0x140F45858
#define __Mouse_x                                                  0x140F432C0
#define DI8__Keyboard_x                                            0x140F432E0
#define __LoginName_x                                              0x140F45F2C
#define __CurrentMapLabel_x                                        0x140F59A40
#define __LabelCache_x                                             0x140F5A610
#define __ChatFilterDefs_x                                         0x140A7A1A0
#define Teleport_Table_Size_x                                      0x140EC20A8
#define Teleport_Table_x                                           0x140EC25A0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EC4A70
#define pinstActiveBanker_x                                        0x140EC1FD0
#define pinstActiveCorpse_x                                        0x140EC1FC0
#define pinstActiveGMaster_x                                       0x140EC1FC8
#define pinstActiveMerchant_x                                      0x140EC1FB8
#define pinstAltAdvManager_x                                       0x140E12280
#define pinstCEverQuest_x                                          0x140F43300
#define pinstCamActor_x                                            0x140E114A0
#define pinstCDBStr_x                                              0x140E11030
#define pinstCDisplay_x                                            0x140EC2080
#define pinstControlledPlayer_x                                    0x140EC2060
#define pinstCResolutionHandler_x                                  0x140F6ABB8
#define pinstCSidlManager_x                                        0x140F6BBB0
#define pinstCXWndManager_x                                        0x140F6BBA8
#define instDynamicZone_x                                          0x140EC85A0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140EC85EE
#define instExpeditionName_x                                       0x140EC862E
#define pinstDZMember_x                                            0x140EC86B8
#define pinstDZTimerInfo_x                                         0x140EC86C0
#define pinstEqLogin_x                                             0x140F45870
#define instTribute_x                                              0x140D83DD0
#define pinstDeviceInputProxy_x                                    0x140EC9B8C
#define pinstEQSoundManager_x                                      0x140E12600
#define pinstEQSpellStrings_x                                      0x140DF5B70
#define pinstSGraphicsEngine_x                                     0x140F6ABD8
#define pinstLocalPC_x                                             0x140EC45D8
#define pinstLocalPlayer_x                                         0x140EC1FB0
#define pinstCMercenaryClientManager_x                             0x140F40A48
#define pinstModelPlayer_x                                         0x140EC1FE0
#define pinstRenderInterface_x                                     0x140F6ABF0
#define pinstSkillMgr_x                                            0x140F42708
#define pinstSpawnManager_x                                        0x140F40E00
#define pinstSpellManager_x                                        0x140F42770
#define pinstStringTable_x                                         0x140EC45E0
#define pinstSwitchManager_x                                       0x140EC1F30
#define pinstTarget_x                                              0x140EC2058
#define pinstTaskMember_x                                          0x140D83DC0 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140EC1FD8
#define instTributeActive_x                                        0x140D83DF9
#define pinstViewActor_x                                           0x140E11498
#define pinstWorldData_x                                           0x140EC45A0
#define pinstPlayerPath_x                                          0x140F40E28
#define pinstTargetIndicator_x                                     0x140F42820
#define EQObject_Top_x                                             0x140EC2088

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F56BA0
#define pinstCContainerMgr_x                                       0x140E110C8
#define pinstCContextMenuManager_x                                 0x140F6B890
#define pinstCInvSlotMgr_x                                         0x140E110A8
#define pinstCItemDisplayManager_x                                 0x140F59610
#define pinstCPopupWndManager_x                                    0x140F59EA0
#define pinstCSpellDisplayMgr_x                                    0x140F5A4F0
#define pinstCTaskManager_x                                        0x140C4CD00
#define pinstEQSuiteTextureLoader_x                                0x140D9A6E0
#define pinstItemIconCache_x                                       0x140F56F00
#define pinstLootFiltersManager_x                                  0x140E10A78
#define pinstGFViewListener_x                                      0x140F6B068


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14025E040
#define __CastRay_x                                                0x140256080
#define __CastRay2_x                                               0x140255D70
#define __compress_block_x                                         0x14056DDF0
#define __ConvertItemTags_x                                        0x140256510
#define __CleanItemTags_x                                          0x14008EA70
#define __CreateCascadeMenuItems_x                                 0x14019B550
#define __decompress_block_x                                       0x1405B39F0
#define __DoesFileExist_x                                          0x1405BCEF0
#define __EQGetTime_x                                              0x1405B8920
#define __ExecuteCmd_x                                             0x14022A990
#define __FixHeading_x                                             0x140676270
#define __FlushDxKeyboard_x                                        0x14035AA30
#define __get_bearing_x                                            0x140260410
#define __get_melee_range_x                                        0x140260500
#define __GetAnimationCache_x                                      0x1403E1620
#define __GetGaugeValueFromEQ_x                                    0x14052C9C0
#define __GetLabelFromEQ_x                                         0x14052DFB0
#define __GetXTargetType_x                                         0x140678760   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406762F0
#define __HelpPath_x                                               0x140F3EFE8   // Why?
#define __NewUIINI_x                                               0x140539A00   // Why?
#define __ProcessDeviceEvents_x                                    0x1402A2D80
#define __ProcessGameEvents_x                                      0x140297480
#define __ProcessKeyboardEvents_x                                  0x14035C210
#define __ProcessMouseEvents_x                                     0x140298C10
#define __SaveColors_x                                             0x1401AB730
#define __STMLToText_x                                             0x1405CD780
#define __WndProc_x                                                0x140359110
#define CMemoryMappedFile__SetFile_x                               0x140824C80
#define DrawNetStatus_x                                            0x1402E4B70
#define Util__FastTime_x                                           0x1405B7CC0
#define __eq_delete_x                                              0x1406EF5A8
#define __eq_new_x                                                 0x1406EF800
#define __CopyLayout_x                                             0x1402D19C0
#define __ThrottleFrameRate_x                                      0x140286203
#define __ThrottleFrameRateEnd_x                                   0x140286209

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14036C1F0
#define CAAWnd__Update_x                                           0x14036C650
#define CAAWnd__UpdateSelected_x                                   0x14036DCA0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC2C0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400AC0B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A8470
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B4560

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B69F0
#define AltAdvManager__IsAbilityReady_x                            0x1401B6ED0
#define AltAdvManager__GetAAById_x                                 0x1401B6280
#define AltAdvManager__CanTrainAbility_x                           0x1401B6080
#define AltAdvManager__CanSeeAbility_x                             0x1401B5DA0

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
#define CharacterZoneClient__GetBaseSkill_x                        0x140558AD0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E1DD0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F08D0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400FAFC0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F9EB0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E1F50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D1410
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D32E0
#define CharacterZoneClient__GetHPRegen_x                          0x1400FA5E0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F2A70
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400FB090
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
#define CharacterZoneClient__Max_Endurance_x                       0x1402FFBA0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x140103420
#define CharacterZoneClient__Max_Mana_x                            0x1402FFDC0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140103880
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E9ED0
#define CharacterZoneClient__SpellDuration_x                       0x1400EAC00
#define CharacterZoneClient__TotalEffect_x                         0x1400EC060
#define CharacterZoneClient__UseSkill_x                            0x140109A20


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038DDD0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140398BA0
#define CBarterWnd__UpdateInventoryList_x                          0x140398610

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403948C0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140393930

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14039B630

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AFFE48

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BEF70
#define CChatWindowManager__InitContextMenu_x                      0x1403BF100
#define CChatWindowManager__FreeChatWindow_x                       0x1403BDF70
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C7480
#define CChatWindowManager__CreateChatWindow_x                     0x1403BD9A0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140112020

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C84F0
#define CChatWindow__Clear_x                                       0x1403C9500
#define CChatWindow__WndNotification_x                             0x1403CA770
#define CChatWindow__AddHistory_x                                  0x1403C9000

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405FB0C0
#define CContextMenu__RemoveMenuItem_x                             0x1405FB4D0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405FB4A0
#define CContextMenu__CheckMenuItem_x                              0x1405FB310
#define CContextMenu__SetMenuItem_x                                0x1405FB4F0
#define CContextMenu__AddSeparator_x                               0x1405FB240

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405ECE70
#define CContextMenuManager__RemoveMenu_x                          0x1405ED450
#define CContextMenuManager__PopupMenu_x                           0x1405ED190
#define CContextMenuManager__Flush_x                               0x1405ECEF0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D8ED0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14052C950
#define CChatService__GetFriendName_x                              0x1406CA210

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405DDDA0
#define CComboWnd__Draw_x                                          0x1405DDE90
#define CComboWnd__GetCurChoice_x                                  0x1405DE170  // unused
#define CComboWnd__GetListRect_x                                   0x1405DE210
#define CComboWnd__InsertChoice_x                                  0x1405DE530
#define CComboWnd__SetColors_x                                     0x1405DE8C0
#define CComboWnd__SetChoice_x                                     0x1405DE880
#define CComboWnd__GetItemCount_x                                  0x1405DE200
#define CComboWnd__GetCurChoiceText_x                              0x1405DE1B0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405DE140
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405DE5F0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D6BC0
#define CContainerWnd__SetContainer_x                              0x1403D7D20
#define CContainerWnd__vftable_x                                   0x140A14DF0

// CDisplay
#define CDisplay__cameraType_x                                     0x140E11204
#define CDisplay__ZoneMainUI_x                                     0x140615BA0
#define CDisplay__PreZoneMainUI_x                                  0x1401A8440
#define CDisplay__CleanGameUI_x                                    0x14019A610
#define CDisplay__GetClickedActor_x                                0x14019E870
#define CDisplay__GetUserDefinedColor_x                            0x14019F4E0
#define CDisplay__InitCharSelectUI_x                               0x14019F790
#define CDisplay__ReloadUI_x                                       0x1401AA920
#define CDisplay__RestartUI_x                                      0x14020E470
#define CDisplay__WriteTextHD2_x                                   0x1401B18D0
#define CDisplay__TrueDistance_x                                   0x1401B1570
#define CDisplay__SetViewActor_x                                   0x1401ADE70
#define CDisplay__GetFloorHeight_x                                 0x14019EAD0
#define CDisplay__ToggleScreenshotMode_x                           0x1401B1060
#define CDisplay__RealRender_World_x                               0x1401A9D00

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140620060
#define CEditWnd__DrawCaret_x                                      0x140611810  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140611D20
#define CEditWnd__GetCaretPt_x                                     0x140611FC0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140612000
#define CEditWnd__GetDisplayString_x                               0x140612250
#define CEditWnd__GetHorzOffset_x                                  0x1406124A0
#define CEditWnd__GetLineForPrintableChar_x                        0x1406125F0
#define CEditWnd__GetSelStartPt_x                                  0x1406128E0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140612720
#define CEditWnd__PointFromPrintableChar_x                         0x1406134A0
#define CEditWnd__ReplaceSelection_x                               0x140613850
#define CEditWnd__SelectableCharFromPoint_x                        0x140613D10
#define CEditWnd__SetEditable_x                                    0x140613FA0
#define CEditWnd__SetWindowText_x                                  0x140613FD0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402872E0
#define CEverQuest__ClickedPlayer_x                                0x14027A310
#define CEverQuest__CreateTargetIndicator_x                        0x14027AC10
#define CEverQuest__DoTellWindow_x                                 0x140111D20 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140112610 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140289080
#define CEverQuest__dsp_chat_x                                     0x140111750 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402B49B0
#define CEverQuest__Emote_x                                        0x140289A10
#define CEverQuest__GetBodyTypeDesc_x                              0x14028A7B0
#define CEverQuest__GetClassDesc_x                                 0x14028A810
#define CEverQuest__GetClassThreeLetterCode_x                      0x14028ABE0
#define CEverQuest__GetDeityDesc_x                                 0x14028AE80
#define CEverQuest__GetLangDesc_x                                  0x14028B2B0
#define CEverQuest__GetRaceDesc_x                                  0x14028B650
#define CEverQuest__InterpretCmd_x                                 0x14028D290
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402A2DF0
#define CEverQuest__LMouseUp_x                                     0x14028EDA0
#define CEverQuest__RightClickedOnPlayer_x                         0x1402A0190
#define CEverQuest__RMouseUp_x                                     0x140299840
#define CEverQuest__SetGameState_x                                 0x1402A5930
#define CEverQuest__UPCNotificationFlush_x                         0x1402AB330 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14028E980
#define CEverQuest__ReportSuccessfulHeal_x                         0x14029AC30
#define CEverQuest__ReportSuccessfulHit_x                          0x14029BA40

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403EC800

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400CAB80
#define CGuild__GetGuildName_x                                     0x1400CABC0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140413670

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C7040
#define CHotButton__SetCheck_x                                     0x1402C7310

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14042EF40
#define CInvSlotMgr__MoveItem_x                                    0x140430050
#define CInvSlotMgr__SelectSlot_x                                  0x1404326E0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14042A760
#define CInvSlot__SliderComplete_x                                 0x14042C150
#define CInvSlot__GetItemBase_x                                    0x140425A30
#define CInvSlot__UpdateItem_x                                     0x14042C630

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140434D30

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140456460
#define CItemDisplayWnd__UpdateStrings_x                           0x140459670
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140452D60
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140454670
#define CItemDisplayWnd__RequestConvertItem_x                      0x140455880

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140529430
#define CSpellDisplayWnd__UpdateStrings_x                          0x14052B1C0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140566DF0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14044F3F0

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x14052B000

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015F260

// CLabel
#define CLabel__UpdateText_x                                       0x140460D10

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405E1700
#define CListWnd__dCListWnd_x                                      0x1405E1B30
#define CListWnd__vftable_x                                        0x140AFDF70
#define CListWnd__AddColumn_x                                      0x1405E21C0
#define CListWnd__AddColumn1_x                                     0x1405E2260
#define CListWnd__AddLine_x                                        0x1405E23C0
#define CListWnd__AddString_x                                      0x1405E2960
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405E2ED0
#define CListWnd__CalculateVSBRange_x                              0x1405E31B0
#define CListWnd__ClearSel_x                                       0x1405E3360
#define CListWnd__ClearAllSel_x                                    0x1405E3300
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405E33C0
#define CListWnd__Compare_x                                        0x1405E3580
#define CListWnd__Draw_x                                           0x1405E3A40
#define CListWnd__DrawColumnSeparators_x                           0x1405E45C0
#define CListWnd__DrawHeader_x                                     0x1405E4680
#define CListWnd__DrawItem_x                                       0x1405E4D60
#define CListWnd__DrawLine_x                                       0x1405E5700
#define CListWnd__DrawSeparator_x                                  0x1405E5BC0
#define CListWnd__EnableLine_x                                     0x1405E5FE0
#define CListWnd__EnsureVisible_x                                  0x1405E6040
#define CListWnd__ExtendSel_x                                      0x1405E6140
#define CListWnd__GetColumnMinWidth_x                              0x1405E64D0
#define CListWnd__GetColumnWidth_x                                 0x1405E6550
#define CListWnd__GetCurSel_x                                      0x1405E6650
#define CListWnd__GetItemData_x                                    0x1405E69D0
#define CListWnd__GetItemHeight_x                                  0x1405E6A10
#define CListWnd__GetItemRect_x                                    0x1405E6C40
#define CListWnd__GetItemText_x                                    0x1405E6EE0
#define CListWnd__GetSelList_x                                     0x1405E7140
#define CListWnd__GetSeparatorRect_x                               0x1405E7330
#define CListWnd__InsertLine_x                                     0x1405E8790
#define CListWnd__RemoveLine_x                                     0x1405E8E00
#define CListWnd__SetColors_x                                      0x1405E91C0
#define CListWnd__SetColumnJustification_x                         0x1405E91E0
#define CListWnd__SetColumnLabel_x                                 0x1405E9260
#define CListWnd__SetColumnWidth_x                                 0x1405E9400
#define CListWnd__SetCurSel_x                                      0x1405E94D0
#define CListWnd__SetItemColor_x                                   0x1405E9740
#define CListWnd__SetItemData_x                                    0x1405E97E0
#define CListWnd__SetItemText_x                                    0x1405E9A20
#define CListWnd__Sort_x                                           0x1405E9E30
#define CListWnd__ToggleSel_x                                      0x1405E9FA0
#define CListWnd__SetColumnsSizable_x                              0x1405E9450
#define CListWnd__SetItemWnd_x                                     0x1405E9B50
#define CListWnd__GetItemWnd_x                                     0x1405E70D0
#define CListWnd__SetItemIcon_x                                    0x1405E9820
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405E2CA0
#define CListWnd__SetVScrollPos_x                                  0x1405E9D90

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140474730

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A628A8
#define MapViewMap__Clear_x                                        0x1404763F0
#define MapViewMap__SetZoom_x                                      0x14047C890
#define MapViewMap__HandleLButtonDown_x                            0x140479390

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14049F280  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A7040
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A7850
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404AD3B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404ABAA0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404B1D00

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406A69A0
#define CPacketScrambler__hton_x                                   0x1406A6990

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14060B0E0
#define CSidlManagerBase__FindAnimation1_x                         0x14060B020
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14060B720
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14060B4C0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14060A420
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14060A3B0
#define CSidlManagerBase__CreateXWnd_x                             0x1406099F0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14051C230
#define CSidlManager__CreateXWnd_x                                 0x14051C3F0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405CF1F0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405CF320
#define CSidlScreenWnd__ConvertToRes_x                             0x14061A3A0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405CF4A0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405CE9B0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405CEA80
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405CECF0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405CFB90
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405CFDC0
#define CSidlScreenWnd__GetChildItem_x                             0x1405CFF60
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405D01B0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405DA320 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405D0520
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405D0890
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405D1160
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405D1B60
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F6AF08
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405D21F0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405D29E0
#define CSidlScreenWnd__vftable_x                                  0x140AFD1F8
#define CSidlScreenWnd__WndNotification_x                          0x1405D2A30

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403438C0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140343BF0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140343B20
#define CSkillMgr__IsActivatedSkill_x                              0x140343FB0
#define CSkillMgr__IsCombatSkill_x                                 0x140343FF0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140343F20
#define CSkillMgr__GetSkillLastUsed_x                              0x140343B70

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405EA910
#define CSliderWnd__SetValue_x                                     0x1405EB120
#define CSliderWnd__SetNumTicks_x                                  0x1405EAFA0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140522B20

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405EF8D0
#define CStmlWnd__CalculateHSBRange_x                              0x1405D9CD0
#define CStmlWnd__CalculateVSBRange_x                              0x1405F0800
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405F12A0
#define CStmlWnd__ForceParseNow_x                                  0x1405F0890
#define CStmlWnd__GetVisibleText_x                                 0x1405F1A10
#define CStmlWnd__MakeStmlColorTag_x                               0x1405F37A0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405F37E0
#define CStmlWnd__SetSTMLText_x                                    0x1405FA850
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405FAA00
#define CStmlWnd__UpdateHistoryString_x                            0x1405FADA0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405EB4F0
#define CTabWnd__DrawCurrentPage_x                                 0x1405EB590
#define CTabWnd__DrawTab_x                                         0x1405EB960
#define CTabWnd__GetTabRect_x                                      0x1405EBFE0
#define CTabWnd__InsertPage_x                                      0x1405EC2B0
#define CTabWnd__RemovePage_x                                      0x1405EC540
#define CTabWnd__SetPage_x                                         0x1405EC6A0
#define CTabWnd__UpdatePage_x                                      0x1405EC9A0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140614430
#define CPageWnd__SetTabText_x                                     0x140614AE0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C40F0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C4520


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140602460
#define CTextureFont__DrawWrappedText1_x                           0x140602360
#define CTextureFont__DrawWrappedText2_x                           0x140602590
#define CTextureFont__GetTextExtent_x                              0x140602940
#define CTextureFont__GetHeight_x                                  0x140602900

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140618AC0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405CBE00

// CXStr
#define CXStr__gFreeLists_x                                        0x140D9A050
#define CXStr__gCXStrAccess_x                                      0x140F6AA68

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405D53A0
#define CXWnd__ClrFocus_x                                          0x1405D5690
#define CXWnd__Destroy_x                                           0x1405D5810
#define CXWnd__DoAllDrawing_x                                      0x1405D5920
#define CXWnd__DrawColoredRect_x                                   0x1405D60E0
#define CXWnd__DrawTooltip_x                                       0x1405D7740
#define CXWnd__DrawTooltipAtPoint_x                                0x1405D7800
#define CXWnd__GetChildItem_x                                      0x1405D80F0
#define CXWnd__GetChildWndAt_x                                     0x1405D81B0
#define CXWnd__GetClientRect_x                                     0x1405D8460
#define CXWnd__GetClientClipRect_x                                 0x1405D8310
#define CXWnd__GetRelativeRect_x                                   0x1405D9E10
#define CXWnd__GetScreenClipRect_x                                 0x1405D9F20
#define CXWnd__GetScreenRect_x                                     0x1405DA0A0
#define CXWnd__GetTooltipRect_x                                    0x1405DA220
#define CXWnd__IsActive_x                                          0x1405DA7E0
#define CXWnd__IsDescendantOf_x                                    0x1405DA810
#define CXWnd__IsReallyVisible_x                                   0x1405DA880
#define CXWnd__IsType_x                                            0x1405DA8D0
#define CXWnd__Minimize_x                                          0x1405DA9D0
#define CXWnd__ProcessTransition_x                                 0x1405DB8B0
#define CXWnd__Resize_x                                            0x1405DB9D0
#define CXWnd__Right_x                                             0x1405DBA70
#define CXWnd__SetFocus_x                                          0x1405DBE20
#define CXWnd__SetFont_x                                           0x1405DBE70
#define CXWnd__SetKeyTooltip_x                                     0x1405DBF70
#define CXWnd__SetMouseOver_x                                      0x1405DC0C0
#define CXWnd__SetParent_x                                         0x1405DC140
#define CXWnd__StartFade_x                                         0x1405DC590
#define CXWnd__vftable_x                                           0x140AFD7D0
#define CXWnd__CXWnd_x                                             0x1405D3FD0
#define CXWnd__dCXWnd_x                                            0x1405D48E0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14061F7F0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405FC6B0
#define CXWndManager__DrawCursor_x                                 0x1405FC990
#define CXWndManager__DrawWindows_x                                0x1405FCBF0
#define CXWndManager__GetKeyboardFlags_x                           0x1405FD260
#define CXWndManager__HandleKeyboardMsg_x                          0x1405FD2A0
#define CXWndManager__RemoveWnd_x                                  0x140600AE0

// CDBStr
#define CDBStr__GetString_x                                        0x1401987D0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406B0AB0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D92D0
#define CCharacterListWnd__EnterWorld_x                            0x1400D80D0
#define CCharacterListWnd__Quit_x                                  0x1400D92B0
#define CCharacterListWnd__UpdateList_x                            0x1400DA010

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14067D3E0
#define ItemBase__CreateItemTagString_x                            0x14067DE60
#define ItemBase__GetImageNum_x                                    0x140680650
#define ItemBase__GetItemValue_x                                   0x140682150
#define ItemBase__IsEmpty_x                                        0x140683E40
#define ItemBase__IsKeyRingItem_x                                  0x1406845B0
#define ItemBase__ValueSellMerchant_x                              0x1406887E0
#define ItemClient__CanDrop_x                                      0x1402C9870
#define ItemClient__CanGoInBag_x                                   0x1402C99B0
#define ItemClient__CreateItemClient_x                             0x1402C9C40
#define ItemClient__dItemClient_x                                  0x1402C96E0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B86A0
#define EQ_LoadingS__Array_x                                       0x140D862B0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140694960
#define PcBase__GetCombatAbility_x                                 0x1406951F0
#define PcBase__GetCombatAbilityTimer_x                            0x1406952D0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140695AF0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406965C0
#define PcClient__AlertInventoryChanged_x                          0x1402ECE60
#define PcClient__GetConLevel_x                                    0x1402ED5B0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402EFCB0
#define PcClient__HasLoreItem_x                                    0x1402F0D80
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FD790
#define PcZoneClient__RemoveMyAffect_x                             0x140300D00

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022F470
#define EQGroundItemListManager__Add_x                             0x14022F620
#define EQGroundItemListManager__Clear_x                           0x14022F6C0
#define EQGroundItemListManager__Delete_x                          0x14022F780
#define EQGroundItemListManager__Instance_x                        0x14022F810

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14026B6E0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140192F30

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140668F70
#define PlayerBase__CanSee1_x                                      0x140669050
#define PlayerBase__GetVisibilityLineSegment_x                     0x140669540
#define PlayerBase__HasProperty_x                                  0x140669720
#define PlayerBase__IsTargetable_x                                 0x1406697E0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030EBD0
#define PlayerClient__GetPcClient_x                                0x1403116F0
#define PlayerClient__PlayerClient_x                               0x140306E50
#define PlayerClient__SetNameSpriteState_x                         0x140314E20
#define PlayerClient__SetNameSpriteTint_x                          0x140315DE0
#define PlayerZoneClient__ChangeHeight_x                           0x140324BD0
#define PlayerZoneClient__DoAttack_x                               0x1403258E0
#define PlayerZoneClient__GetLevel_x                               0x140329000
#define PlayerZoneClient__IsValidTeleport_x                        0x14026E450
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6CC0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031E080  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14031E130  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031E230
#define PlayerManagerClient__CreatePlayer_x                        0x14031DB40
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140668AA0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CEEB0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CE7C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CE830
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CEE40  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402CEFD0
#define KeypressHandler__HandleKeyUp_x                             0x1402CF0F0
#define KeypressHandler__SaveKeymapping_x                          0x1402CECC0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406AE5B0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406A8B80

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F6F00  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402FB840
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FE870
#define PcZoneClient__RemovePetEffect_x                            0x140300FE0
#define PcZoneClient__HasAlternateAbility_x                        0x1402FF4C0
#define PcZoneClient__CanEquipItem_x                               0x1402F9B50
#define PcZoneClient__GetItemByID_x                                0x1402FC810
#define PcZoneClient__RemoveBuffEffect_x                           0x140300B90
#define PcZoneClient__BandolierSwap_x                              0x1402ECF10

// Doors
#define EQSwitch__UseSwitch_x                                      0x140272F90

// IconCache
#define IconCache__GetIcon_x                                       0x1403E1650

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D5910
#define CContainerMgr__CloseContainer_x                            0x1403D5230
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D5CB0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404DF3A0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402C0E00

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140468290
#define CLootWnd__RequestLootSlot_x                                0x140469300

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E9080
#define EQ_Spell__SpellAffects_x                                   0x1401EA4B0
#define EQ_Spell__SpellAffectBase_x                                0x1401EA410
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E2630
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E25E0
#define EQ_Spell__IsSPAStacking_x                                  0x1401EA120
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E9CD0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E9590

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C96D0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14053D260
#define CTargetWnd__RefreshTargetBuffs_x                           0x14053C980
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14053C180

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140544B10  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018F9B0
#define CTaskManager__GetTaskStatus_x                              0x14018FAC0
#define CTaskManager__GetElementDescription_x                      0x14018F640

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E7300
#define EqSoundManager__PlayScriptMp3_x                            0x1401E60B0
#define EqSoundManager__SoundAssistPlay_x                          0x140348CA0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140348FE0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405DD340
#define CTextureAnimation__SetCurCell_x                            0x1405DD650

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BEFF0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406C7A60
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406C7AE0
#define CharacterBase__IsExpansionFlag_x                           0x14020DAC0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403AFB90
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403B05E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403B1BA0

// messages
#define msg_spell_worn_off_x                                       0x140225580
#define msg_new_text_x                                             0x140220DC0
#define __msgTokenTextParam_x                                      0x140217C40
#define msgTokenText_x                                             0x140217B50

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14034A9E0
#define SpellManager__GetSpellByGroupAndRank_x                     0x14034A8E0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140678B40

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404614A0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403DA760
#define CCursorAttachment__IsOkToActivate_x                        0x1403DDBE0
#define CCursorAttachment__RemoveAttachment_x                      0x1403DDE90
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140616F20
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140617120
#define CEQSuiteTextureLoader__GetTexture_x                        0x140617130

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140159B40
#define CFindItemWnd__Update_x                                     0x14015A500
#define CFindItemWnd__PickupSelectedItem_x                         0x1401530E0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140164750
#define LootFiltersManager__GetItemFilterData_x                    0x140165280
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140165B30
#define LootFiltersManager__SetItemLootFilter_x                    0x140165DE0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404C1050

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140343400
#define CResolutionHandler__UpdateResolution_x                     0x1405C1950

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403D1A50

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406CBD90  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406CBC80  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403FBE10
#define CGroupWnd__UpdateDisplay_x                                 0x1403FAFA0

// ItemBase
#define ItemBase__IsLore_x                                         0x1406846F0
#define ItemBase__IsLoreEquipped_x                                 0x1406832D0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402E2990

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14026B820
#define EQPlacedItemManager__GetItemByGuid_x                       0x14026B7B0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14026B7F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033D620

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012FA60
#define FactionManagerClient__HandleFactionMessage_x               0x14012FE40
#define FactionManagerClient__GetFactionStanding_x                 0x14012F230
#define FactionManagerClient__GetMaxFaction_x                      0x14012F230
#define FactionManagerClient__GetMinFaction_x                      0x14012F0E0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B63F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14013B4F0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C1930
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C0AC0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C1750  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C16D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14034FD30

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405D3070

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008ADD0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1403616D0

// AchievementManager
#define AchievementManager__Instance_x                             0x140094300

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406B1640
#define FreeToPlayClient__RestrictionInfo_x                        0x140B12CB0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140574210

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140866A58
#define CGFScreenWnd__CGFScreenWnd_x                               0x1400732D0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073460
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140073610

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
