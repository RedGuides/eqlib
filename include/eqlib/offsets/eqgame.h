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

#define __ClientDate                                       20260430u
#define __ExpectedVersionDate                              "Apr 30 2026"
#define __ExpectedVersionTime                              "15:25:53"
#define __ActualVersionDate_x                              0x14098C198
#define __ActualVersionTime_x                              0x14098C188
#define __ActualVersionBuild_x                             0x140921340

// Memory Protection
#define __MemChecker0_x                                    0x1402CCD30
#define __MemChecker1_x                                    0x1405A7030
#define __MemChecker4_x                                    0x14029A040
#define __EncryptPad0_x                                    0x140D69C20

// EverQuestInfo
#define pinstEverQuestInfo_x                               0x140EB25C0
#define instEQZoneInfo_x                                   0x140EB27B4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                        0x14022CC00
#define __gfMaxZoomCameraDistance_x                        0x1409225F8
#define __gfMaxCameraDistance_x                            0x140ACC0E4
#define __CurrentSocial_x                                  0x140C1E0D4 // CActionsWnd::StopSocial
#define __BindList_x                                       0x140D5D950
#define g_eqCommandStates_x                                0x140D5E9F0
#define __CommandList_x                                    0x140D5EC30
#define __ScreenMode_x                                     0x140DF9EA4
#define __gWorld_x                                         0x140EAACF0
#define __gpbCommandEvent_x                                0x140EAAFE8
#define __ServerHost_x                                     0x140EAB1D8
#define __Guilds_x                                         0x140EB1170
#define __MemCheckBitmask_x                                0x140EB2B03
#define __MemCheckActive_x                                 0x140EB421D
#define __MouseEventTime_x                                 0x140F27B90
#define DI8__MouseState_x                                  0x140F2BD78
#define __heqmain_x                                        0x140F2E208
#define DI8__Mouse_x                                       0x140F2E220
#define __HWnd_x                                           0x140F2E228
#define __Mouse_x                                          0x140F2E230
#define DI8__Keyboard_x                                    0x140F2E250
#define __LoginName_x                                      0x140F2E9BC
#define __CurrentMapLabel_x                                0x140F424F0
#define __LabelCache_x                                     0x140F430C0
#define __ChatFilterDefs_x                                 0x140A66030
#define Teleport_Table_Size_x                              0x140EAB074
#define Teleport_Table_x                                   0x140EAB500

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                        0x140EAD500
#define pinstActiveBanker_x                                0x140EAAF18
#define pinstActiveCorpse_x                                0x140EAAF08
#define pinstActiveGMaster_x                               0x140EAAF10
#define pinstActiveMerchant_x                              0x140EAAF00
#define pinstAltAdvManager_x                               0x140DFACE8
#define pinstCEverQuest_x                                  0x140F2E268
#define pinstCamActor_x                                    0x140DF9E90
#define pinstCDBStr_x                                      0x140DF9AA0
#define pinstCDisplay_x                                    0x140EAAFC8
#define pinstControlledPlayer_x                            0x140EAAFA8
#define pinstCResolutionHandler_x                          0x140F53668
#define pinstCSidlManager_x                                0x140F54660
#define pinstCXWndManager_x                                0x140F54658
#define instDynamicZone_x                                  0x140EB1030 // Part of g_dynamicZone
#define instExpeditionLeader_x                             0x140EB107E
#define instExpeditionName_x                               0x140EB10BE
#define pinstDZMember_x                                    0x140EB1148
#define pinstDZTimerInfo_x                                 0x140EB1150
#define pinstEqLogin_x                                     0x140F2E300
#define instTribute_x                                      0x140D56870
#define pinstDeviceInputProxy_x                            0x140EB261C
#define pinstEQSoundManager_x                              0x140DFB070
#define pinstEQSpellStrings_x                              0x140DDE620
#define pinstSGraphicsEngine_x                             0x140F53698
#define pinstLocalPC_x                                     0x140EAAA68
#define pinstLocalPlayer_x                                 0x140EAACF8
#define pinstCMercenaryClientManager_x                     0x140F294A8
#define pinstModelPlayer_x                                 0x140EAAF28
#define pinstRenderInterface_x                             0x140F536B0
#define pinstSkillMgr_x                                    0x140F2B188
#define pinstSpawnManager_x                                0x140F29888
#define pinstSpellManager_x                                0x140F2B1F8
#define pinstStringTable_x                                 0x140EAAAE8
#define pinstSwitchManager_x                               0x140EAA9A0
#define pinstTarget_x                                      0x140EAAFA0
#define pinstTaskMember_x                                  0x140D56860 // Part of g_taskManager
#define pinstTradeTarget_x                                 0x140EAAF20
#define instTributeActive_x                                0x140D56899
#define pinstViewActor_x                                   0x140DF9E88
#define pinstWorldData_x                                   0x140EAAA30
#define pinstPlayerPath_x                                  0x140F298B0
#define pinstTargetIndicator_x                             0x140F2B2A8
#define EQObject_Top_x                                     0x140EAAFD0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                          0x140F3F640
#define pinstCContainerMgr_x                               0x140DF9F18
#define pinstCContextMenuManager_x                         0x140F54340
#define pinstCInvSlotMgr_x                                 0x140DF9F08
#define pinstCItemDisplayManager_x                         0x140F420C0
#define pinstCPopupWndManager_x                            0x140F42950
#define pinstCSpellDisplayMgr_x                            0x140F42FA0
#define pinstCTaskManager_x                                0x140C1F7A0
#define pinstEQSuiteTextureLoader_x                        0x140D7F6D0
#define pinstItemIconCache_x                               0x140F3F9A8
#define pinstLootFiltersManager_x                          0x140DF94E8
#define pinstGFViewListener_x                              0x140F53B18


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                              0x140257130
#define __CastRay_x                                        0x14024F1E0
#define __CastRay2_x                                       0x14024EED0
#define __compress_block_x                                 0x14055C3E0
#define __ConvertItemTags_x                                0x14024F670
#define __CleanItemTags_x                                  0x14008C730
#define __CreateCascadeMenuItems_x                         0x140196120
#define __decompress_block_x                               0x1405A2820
#define __DoesFileExist_x                                  0x1405AB0A0
#define __EQGetTime_x                                      0x1405A75E0
#define __ExecuteCmd_x                                     0x1402240A0
#define __FixHeading_x                                     0x140663F50
#define __FlushDxKeyboard_x                                0x140351B20
#define __get_bearing_x                                    0x140259450
#define __get_melee_range_x                                0x140259540
#define __GetAnimationCache_x                              0x1403D73D0
#define __GetGaugeValueFromEQ_x                            0x14051B1F0
#define __GetLabelFromEQ_x                                 0x14051C7E0
#define __GetXTargetType_x                                 0x140666440   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                    0x140663FD0
#define __HelpPath_x                                       0x140F27A58   // Why?
#define __NewUIINI_x                                       0x140528230   // Why?
#define __ProcessDeviceEvents_x                            0x14029A640
#define __ProcessGameEvents_x                              0x14028EE10
#define __ProcessKeyboardEvents_x                          0x140353300
#define __ProcessMouseEvents_x                             0x140290560
#define __SaveColors_x                                     0x1401A6080
#define __STMLToText_x                                     0x1405BB8A0
#define __WndProc_x                                        0x1403502E0
#define CMemoryMappedFile__SetFile_x                       0x140812F40
#define DrawNetStatus_x                                    0x1402DC2D0
#define Util__FastTime_x                                   0x1405A6AF0
#define __eq_delete_x                                      0x1406DEF78
#define __eq_new_x                                         0x1406DF1D0
#define __CopyLayout_x                                     0x1402C9110
#define __ThrottleFrameRate_x                              0x14027DF31
#define __ThrottleFrameRateEnd_x                           0x14027DF37

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                              0x140363140
#define CAAWnd__Update_x                                   0x140363440
#define CAAWnd__UpdateSelected_x                           0x140364660

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                0x1400B0850
#define CAdvancedLootWnd__DoSharedAdvLootAction_x          0x1400A9150
#define CAdvancedLootWnd__AddPlayerToList_x                0x14086D320
#define CAdvancedLootWnd__UpdateMasterLooter_x             0x1400B11B0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                0x1401B1390
#define AltAdvManager__IsAbilityReady_x                    0x1401B1830
#define AltAdvManager__GetAAById_x                         0x1401B0C20
#define AltAdvManager__CanTrainAbility_x                   0x1401B0A20
#define AltAdvManager__CanSeeAbility_x                     0x1401B06D0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                0x1400D84D0
#define CharacterZoneClient__CalcAffectChange_x            0x1400D9390
#define CharacterZoneClient__CalcAffectChangeGeneric_x     0x1400D95E0
#define CharacterZoneClient__CanMedOnHorse_x               0x1400EDA10
#define CharacterZoneClient__CanUseItem_x                  0x1400EDFD0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x    0x1400D9FC0
#define CharacterZoneClient__CastSpell_x                   0x1400DA060
#define CharacterZoneClient__CharacterZoneClient_x         0x1400E9ED0
#define CharacterZoneClient__Cur_HP_x                      0x1400EF740
#define CharacterZoneClient__Cur_Mana_x                    0x1400EF900
#define CharacterZoneClient__FindAffectSlot_x              0x1400DD300
#define CharacterZoneClient__GetAdjustedSkill_x            0x1400F6020
#define CharacterZoneClient__GetBaseSkill_x                0x140104570  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x      0x1400DE7A0
#define CharacterZoneClient__GetCurrentMod_x               0x1400ED310
#define CharacterZoneClient__GetCursorItemCount_x          0x1400F78B0
#define CharacterZoneClient__GetEnduranceRegen_x           0x1400F67A0
#define CharacterZoneClient__GetFirstEffectSlot_x          0x1400DE920
#define CharacterZoneClient__GetFocusCastingTimeModifier_x 0x1400CDEA0
#define CharacterZoneClient__GetFocusDurationMod_x         0x1400CFD70
#define CharacterZoneClient__GetHPRegen_x                  0x1400F6ED0
#define CharacterZoneClient__GetItemCountInInventory_x     0x1400EF390
#define CharacterZoneClient__GetItemCountWorn_x            0x1400F60C0
#define CharacterZoneClient__GetLastEffectSlot_x           0x1400DE9A0
#define CharacterZoneClient__GetManaRegen_x                0x1400F8740
#define CharacterZoneClient__GetModCap_x                   0x1400FFD20
#define CharacterZoneClient__GetOpenEffectSlot_x           0x1400DEC30
#define CharacterZoneClient__GetPCSpellAffect_x            0x1400DEE00
#define CharacterZoneClient__GetPctModAndMin_x             0x1400D3400
#define CharacterZoneClient__HasSkill_x                    0x1400FB860
#define CharacterZoneClient__HitBySpell_x                  0x1400DF890
#define CharacterZoneClient__IsStackBlocked_x              0x1400E3260
#define CharacterZoneClient__MakeMeVisible_x               0x1400FF800
#define CharacterZoneClient__Max_Endurance_x               0x1402F7130  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                      0x1400FFB50
#define CharacterZoneClient__Max_Mana_x                    0x1402F7350  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x        0x1400FFFB0
#define CharacterZoneClient__RemovePCAffectex_x            0x1400E68D0
#define CharacterZoneClient__SpellDuration_x               0x1400E7600
#define CharacterZoneClient__TotalEffect_x                 0x1400E8AA0
#define CharacterZoneClient__UseSkill_x                    0x1401055A0


// CBankWnd
#define CBankWnd__WndNotification_x                        0x1403844F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                      0x14038F2C0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                0x14038AF90
#define CBarterSearchWnd__UpdateInventoryList_x            0x14038ED30

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x            0x140391B20

// CButtonWnd
#define CButtonWnd__vftable_x                              0x140AEBB70

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x             0x1403B4D10
#define CChatWindowManager__InitContextMenu_x              0x1403B4EA0
#define CChatWindowManager__FreeChatWindow_x               0x1403B3D10
#define CChatWindowManager__SetLockedActiveChatWindow_x    0x1403BD220
#define CChatWindowManager__CreateChatWindow_x             0x1403B3740

// ChatManagerClient
#define ChatManagerClient__Instance_x                      0x14010DBB0

// CChatWindow
#define CChatWindow__CChatWindow_x                         0x1403BE290
#define CChatWindow__Clear_x                               0x1403BF290
#define CChatWindow__WndNotification_x                     0x1403C0500
#define CChatWindow__AddHistory_x                          0x1403BEDA0

// CContextMenu
#define CContextMenu__AddMenuItem_x                        0x1405E9000
#define CContextMenu__RemoveMenuItem_x                     0x1405E9410
#define CContextMenu__RemoveAllMenuItems_x                 0x1405E93E0
#define CContextMenu__CheckMenuItem_x                      0x1405E9250
#define CContextMenu__SetMenuItem_x                        0x1405E9430
#define CContextMenu__AddSeparator_x                       0x1405E9180

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                     0x1405DADE0
#define CContextMenuManager__RemoveMenu_x                  0x1405DB3B0
#define CContextMenuManager__PopupMenu_x                   0x1405DB0F0
#define CContextMenuManager__Flush_x                       0x1405DAE60
#define CContextMenuManager__CreateDefaultMenu_x           0x1403CEC80

// CChatService
#define CChatService__GetNumberOfFriends_x                 0x1406B8BD0
#define CChatService__GetFriendName_x                      0x1406B8BE0

// CComboWnd
#define CComboWnd__DeleteAll_x                             0x1405CBD10
#define CComboWnd__Draw_x                                  0x1405CBE00
#define CComboWnd__GetCurChoice_x                          0x1405CC160  // unused
#define CComboWnd__GetListRect_x                           0x1405CC180
#define CComboWnd__InsertChoice_x                          0x1405CC4A0
#define CComboWnd__SetColors_x                             0x1405CC830
#define CComboWnd__SetChoice_x                             0x1405CC7F0
#define CComboWnd__GetItemCount_x                          0x1405CC170
#define CComboWnd__GetCurChoiceText_x                      0x1405CC120  // unused
#define CComboWnd__GetChoiceText_x                         0x1405CC0B0
#define CComboWnd__InsertChoiceAtIndex_x                   0x1405CC560

// CContainerWnd
#define CContainerWnd__HandleCombine_x                     0x1403CC970
#define CContainerWnd__SetContainer_x                      0x14042C4C0
#define CContainerWnd__vftable_x                           0x140A00F10

// CDisplay
#define CDisplay__cameraType_x                             0x140DF9BB4
#define CDisplay__ZoneMainUI_x                             0x140603640
#define CDisplay__PreZoneMainUI_x                          0x1401A2F80
#define CDisplay__CleanGameUI_x                            0x1401951E0
#define CDisplay__GetClickedActor_x                        0x140199400
#define CDisplay__GetUserDefinedColor_x                    0x14019A070
#define CDisplay__InitCharSelectUI_x                       0x14019A320
#define CDisplay__ReloadUI_x                               0x1401A5280
#define CDisplay__RestartUI_x                              0x140208590
#define CDisplay__WriteTextHD2_x                           0x1401AC2A0
#define CDisplay__TrueDistance_x                           0x1401ABF40
#define CDisplay__SetViewActor_x                           0x1401A87B0
#define CDisplay__GetFloorHeight_x                         0x140199660
#define CDisplay__ToggleScreenshotMode_x                   0x1401ABA30
#define CDisplay__RealRender_World_x                       0x1401A4650

// CEditWnd
#define CEditBaseWnd__SetSel_x                             0x14060DB00
#define CEditWnd__DrawCaret_x                              0x1405F46C0  // unused
#define CEditWnd__EnsureCaretVisible_x                     0x1405FF750
#define CEditWnd__GetCaretPt_x                             0x1405FF9F0  // unused
#define CEditWnd__GetCharIndexPt_x                         0x1405FFA30
#define CEditWnd__GetDisplayString_x                       0x1405FFC80
#define CEditWnd__GetHorzOffset_x                          0x1405FFED0
#define CEditWnd__GetLineForPrintableChar_x                0x140600020
#define CEditWnd__GetSelStartPt_x                          0x140600310  // unused
#define CEditWnd__GetSTMLSafeText_x                        0x140600150
#define CEditWnd__PointFromPrintableChar_x                 0x140600F50
#define CEditWnd__ReplaceSelection_x                       0x140601300
#define CEditWnd__SelectableCharFromPoint_x                0x1406017C0
#define CEditWnd__SetEditable_x                            0x140601A50
#define CEditWnd__SetWindowText_x                          0x140601A80

// CEverQuest
#define CEverQuest__DoPercentConvert_x                     0x14027F010
#define CEverQuest__ClickedPlayer_x                        0x1402731D0
#define CEverQuest__CreateTargetIndicator_x                0x140273AD0
#define CEverQuest__DoTellWindow_x                         0x14010D8B0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                      0x14010E1A0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                 0x140280A00
#define CEverQuest__dsp_chat_x                             0x14010D2E0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                             0x1402AC220
#define CEverQuest__Emote_x                                0x1402813F0
#define CEverQuest__GetBodyTypeDesc_x                      0x1402821D0
#define CEverQuest__GetClassDesc_x                         0x140282230
#define CEverQuest__GetClassThreeLetterCode_x              0x140282600
#define CEverQuest__GetDeityDesc_x                         0x1402828B0
#define CEverQuest__GetLangDesc_x                          0x140282CE0
#define CEverQuest__GetRaceDesc_x                          0x140283080
#define CEverQuest__InterpretCmd_x                         0x140284CC0
#define CEverQuest__LeftClickedOnPlayer_x                  0x14029A6B0
#define CEverQuest__LMouseUp_x                             0x1402867D0
#define CEverQuest__RightClickedOnPlayer_x                 0x140297A50
#define CEverQuest__RMouseUp_x                             0x1402910F0
#define CEverQuest__SetGameState_x                         0x14029D160
#define CEverQuest__UPCNotificationFlush_x                 0x1402A2BA0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                      0x1402863B0
#define CEverQuest__ReportSuccessfulHeal_x                 0x1402924E0
#define CEverQuest__ReportSuccessfulHit_x                  0x140293300

// CGaugeWnd
#define CGaugeWnd__Draw_x                                  0x1403E2580

// CGuild
#define CGuild__FindMemberByName_x                         0x1400C7650
#define CGuild__GetGuildName_x                             0x1400C7690

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                       0x140409470

//CHotButton
#define CHotButton__SetButtonSize_x                        0x1402BE7B0
#define CHotButton__SetCheck_x                             0x1402BEAA0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                         0x140423300
#define CInvSlotMgr__MoveItem_x                            0x140423E90
#define CInvSlotMgr__SelectSlot_x                          0x1404261B0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                        0x1404200C0
#define CInvSlot__SliderComplete_x                         0x1404218F0
#define CInvSlot__GetItemBase_x                            0x14041B720
#define CInvSlot__UpdateItem_x                             0x140421DA0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                         0x1404283C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                         0x140449B90
#define CItemDisplayWnd__UpdateStrings_x                   0x14044CDE0
#define CItemDisplayWnd__InsertAugmentRequest_x            0x140446430
#define CItemDisplayWnd__RemoveAugmentRequest_x            0x140447D60
#define CItemDisplayWnd__RequestConvertItem_x              0x140448FA0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                       0x140517C50
#define CSpellDisplayWnd__UpdateStrings_x                  0x1405199E0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                   0x140555460

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x        0x140442AB0

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                  0x140519820

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                   0x14015AB90

// CLabel
#define CLabel__UpdateText_x                               0x140454400

// CListWnd
#define CListWnd__CListWnd_x                               0x1405CF670
#define CListWnd__dCListWnd_x                              0x1405CFAA0
#define CListWnd__vftable_x                                0x140AE9CC0
#define CListWnd__AddColumn_x                              0x1405D0130
#define CListWnd__AddColumn1_x                             0x1405D01D0
#define CListWnd__AddLine_x                                0x1405D0330
#define CListWnd__AddString_x                              0x1405D08D0
#define CListWnd__CalculateFirstVisibleLine_x              0x1405D0E40
#define CListWnd__CalculateVSBRange_x                      0x1405D1120
#define CListWnd__ClearSel_x                               0x1405D12C0
#define CListWnd__ClearAllSel_x                            0x1405D1260
#define CListWnd__CloseAndUpdateEditWindow_x               0x1405D1320
#define CListWnd__Compare_x                                0x1405D14E0
#define CListWnd__Draw_x                                   0x1405D19A0
#define CListWnd__DrawColumnSeparators_x                   0x1405D2520
#define CListWnd__DrawHeader_x                             0x1405D25E0
#define CListWnd__DrawItem_x                               0x1405D2CC0
#define CListWnd__DrawLine_x                               0x1405D3660
#define CListWnd__DrawSeparator_x                          0x1405D3B20
#define CListWnd__EnableLine_x                             0x1405D3F40
#define CListWnd__EnsureVisible_x                          0x1405D3FA0
#define CListWnd__ExtendSel_x                              0x1405D40A0
#define CListWnd__GetColumnMinWidth_x                      0x1405D4430
#define CListWnd__GetColumnWidth_x                         0x1405D44B0
#define CListWnd__GetCurSel_x                              0x1405D45B0
#define CListWnd__GetItemData_x                            0x1405D4930
#define CListWnd__GetItemHeight_x                          0x1405D4970
#define CListWnd__GetItemRect_x                            0x1405D4BA0
#define CListWnd__GetItemText_x                            0x1405D4E40
#define CListWnd__GetSelList_x                             0x1405D50A0
#define CListWnd__GetSeparatorRect_x                       0x1405D5290
#define CListWnd__InsertLine_x                             0x1405D66F0
#define CListWnd__RemoveLine_x                             0x1405D6D60
#define CListWnd__SetColors_x                              0x1405D7120
#define CListWnd__SetColumnJustification_x                 0x1405D7140
#define CListWnd__SetColumnLabel_x                         0x1405D71C0
#define CListWnd__SetColumnWidth_x                         0x1405D7360
#define CListWnd__SetCurSel_x                              0x1405D7430
#define CListWnd__SetItemColor_x                           0x1405D76A0
#define CListWnd__SetItemData_x                            0x1405D7740
#define CListWnd__SetItemText_x                            0x1405D7980
#define CListWnd__Sort_x                                   0x1405D7D90
#define CListWnd__ToggleSel_x                              0x1405D7F00
#define CListWnd__SetColumnsSizable_x                      0x1405D73B0
#define CListWnd__SetItemWnd_x                             0x1405D7AB0
#define CListWnd__GetItemWnd_x                             0x1405D5030
#define CListWnd__SetItemIcon_x                            0x1405D7780
#define CListWnd__CalculateCustomWindowPositions_x         0x1405D0C10
#define CListWnd__SetVScrollPos_x                          0x1405D7CF0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                         0x140467DB0

// MapViewMap
#define MapViewMap__vftable_x                              0x140A4E8A0
#define MapViewMap__Clear_x                                0x140469A70
#define MapViewMap__SetZoom_x                              0x140470150
#define MapViewMap__HandleLButtonDown_x                    0x14046CC50

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x              0x140492200  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x 0x140498B70
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x 0x140499340
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x 0x14049CC70
#define CMerchantWnd__SelectBuySellSlot_x                  0x14049BF70
#define CMerchantWnd__PurchasePageHandler__UpdateList_x    0x1404A1100

// CPacketScrambler
#define CPacketScrambler__ntoh_x                           0x140693F20
#define CPacketScrambler__hton_x                           0x140693F10

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x         0x1405F8AF0
#define CSidlManagerBase__FindAnimation1_x                 0x1405F8A30
#define CSidlManagerBase__FindScreenPieceTemplate_x        0x1405F9130
#define CSidlManagerBase__FindScreenPieceTemplate1_x       0x1405F8ED0
#define CSidlManagerBase__CreateXWndFromTemplate_x         0x1405F7E30
#define CSidlManagerBase__CreateXWndFromTemplate1_x        0x1405F7DC0
#define CSidlManagerBase__CreateXWnd_x                     0x1405F7400

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                 0x14050AAC0
#define CSidlManager__CreateXWnd_x                         0x14050AC80

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                0x1405BD390
#define CSidlScreenWnd__CalculateVSBRange_x                0x1405BD4A0
#define CSidlScreenWnd__ConvertToRes_x                     0x140607E40 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x           0x1405BD610
#define CSidlScreenWnd__CSidlScreenWnd1_x                  0x1405BCAD0
#define CSidlScreenWnd__CSidlScreenWnd2_x                  0x1405BCBA0
#define CSidlScreenWnd__dCSidlScreenWnd_x                  0x1405BCDB0
#define CSidlScreenWnd__DrawSidlPiece_x                    0x1405BDCF0
#define CSidlScreenWnd__EnableIniStorage_x                 0x1405BDF20
#define CSidlScreenWnd__GetChildItem_x                     0x1405BE0C0
#define CSidlScreenWnd__GetSidlPiece_x                     0x1405BE310
#define CSidlScreenWnd__HandleLButtonUp_x                  0x1405C83A0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                            0x1405BE680
#define CSidlScreenWnd__LoadIniInfo_x                      0x1405BE9F0
#define CSidlScreenWnd__LoadIniListWnd_x                   0x1405BF2B0
#define CSidlScreenWnd__LoadSidlScreen_x                   0x1405BFCB0
#define CSidlScreenWnd__m_layoutCopy_x                     0x140F539B8
#define CSidlScreenWnd__StoreIniInfo_x                     0x1405C0320
#define CSidlScreenWnd__StoreIniVis_x                      0x1405C0B10
#define CSidlScreenWnd__vftable_x                          0x140AE8F48
#define CSidlScreenWnd__WndNotification_x                  0x1405C0B60

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                           0x14033AAB0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                           0x14033ADD0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                          0x14033AD00
#define CSkillMgr__IsActivatedSkill_x                      0x14033B190
#define CSkillMgr__IsCombatSkill_x                         0x14033B1D0
#define CSkillMgr__GetSkillTimerDuration_x                 0x14033B100
#define CSkillMgr__GetSkillLastUsed_x                      0x14033AD50

// CSliderWnd
#define CSliderWnd__GetValue_x                             0x1405D8870
#define CSliderWnd__SetValue_x                             0x1405D9080
#define CSliderWnd__SetNumTicks_x                          0x1405D8F00

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                       0x140511320

// CStmlWnd
#define CStmlWnd__AppendSTML_x                             0x1405DD830
#define CStmlWnd__CalculateHSBRange_x                      0x1405C7C80
#define CStmlWnd__CalculateVSBRange_x                      0x1405DE740
#define CStmlWnd__FastForwardToEndOfTag_x                  0x1405DF1D0
#define CStmlWnd__ForceParseNow_x                          0x1405DF270
#define CStmlWnd__GetVisibleText_x                         0x1405DF940
#define CStmlWnd__MakeStmlColorTag_x                       0x1405E16D0
#define CStmlWnd__MakeWndNotificationTag_x                 0x1405E1710
#define CStmlWnd__SetSTMLText_x                            0x1405E8780
#define CStmlWnd__StripFirstSTMLLines_x                    0x1405E8930
#define CStmlWnd__UpdateHistoryString_x                    0x1405E8CD0

// CTabWnd
#define CTabWnd__Draw_x                                    0x1405D9450
#define CTabWnd__DrawCurrentPage_x                         0x1405D94F0
#define CTabWnd__DrawTab_x                                 0x1405D98C0
#define CTabWnd__GetTabRect_x                              0x1405D9F50
#define CTabWnd__InsertPage_x                              0x1405DA220
#define CTabWnd__RemovePage_x                              0x1405DA4B0
#define CTabWnd__SetPage_x                                 0x1405DA610
#define CTabWnd__UpdatePage_x                              0x1405DA910

// CPageWnd
#define CPageWnd__FlashTab_x                               0x140601EE0
#define CPageWnd__SetTabText_x                             0x140601F50

// CTextOverlay
#define CTextOverlay__DisplayText_x                        0x1400C0B50  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                  0x1400C0F80


// CTextureFont
#define CTextureFont__DrawWrappedText_x                    0x1405F0310
#define CTextureFont__DrawWrappedText1_x                   0x1405F0210
#define CTextureFont__DrawWrappedText2_x                   0x1405F0440
#define CTextureFont__GetTextExtent_x                      0x1405F07F0
#define CTextureFont__GetHeight_x                          0x1405F07B0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                      0x140606560

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                     0x1405B9F20

// CXStr
#define CXStr__gFreeLists_x                                0x140D7F040
#define CXStr__gCXStrAccess_x                              0x140F53518

// CXWnd
#define CXWnd__BringToTop_x                                0x1405C3350
#define CXWnd__ClrFocus_x                                  0x1405C3640
#define CXWnd__Destroy_x                                   0x1405C37C0
#define CXWnd__DoAllDrawing_x                              0x1405C38D0
#define CXWnd__DrawColoredRect_x                           0x1405C4080
#define CXWnd__DrawTooltip_x                               0x1405C56F0
#define CXWnd__DrawTooltipAtPoint_x                        0x1405C57B0
#define CXWnd__GetChildItem_x                              0x1405C60B0
#define CXWnd__GetChildWndAt_x                             0x1405C6170
#define CXWnd__GetClientRect_x                             0x1405C6420
#define CXWnd__GetClientClipRect_x                         0x1405C62D0
#define CXWnd__GetRelativeRect_x                           0x1405C7DC0
#define CXWnd__GetScreenClipRect_x                         0x1405C7ED0
#define CXWnd__GetScreenRect_x                             0x1405C8020
#define CXWnd__GetTooltipRect_x                            0x1405C81A0
#define CXWnd__IsActive_x                                  0x1405C8760
#define CXWnd__IsDescendantOf_x                            0x1405C8790
#define CXWnd__IsReallyVisible_x                           0x1405C8800
#define CXWnd__IsType_x                                    0x1405C8850
#define CXWnd__Minimize_x                                  0x1405C8950
#define CXWnd__ProcessTransition_x                         0x1405C9830
#define CXWnd__Resize_x                                    0x1405C9940
#define CXWnd__Right_x                                     0x1405C99E0
#define CXWnd__SetFocus_x                                  0x1405C9D80
#define CXWnd__SetFont_x                                   0x1405C9DD0
#define CXWnd__SetKeyTooltip_x                             0x1405C9ED0
#define CXWnd__SetMouseOver_x                              0x1405CA020
#define CXWnd__SetParent_x                                 0x1405CA0A0
#define CXWnd__StartFade_x                                 0x1405CA4E0
#define CXWnd__vftable_x                                   0x140AE9520
#define CXWnd__CXWnd_x                                     0x1405C1F80
#define CXWnd__dCXWnd_x                                    0x1405C28A0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                     0x14060D290

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                  0x1405EA5C0
#define CXWndManager__DrawCursor_x                         0x1405EA8A0
#define CXWndManager__DrawWindows_x                        0x1405EAB00
#define CXWndManager__GetKeyboardFlags_x                   0x1405EB170
#define CXWndManager__HandleKeyboardMsg_x                  0x1405EB1B0
#define CXWndManager__RemoveWnd_x                          0x1405EE9A0

// CDBStr
#define CDBStr__GetString_x                                0x1401933A0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                0x14069DF10

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x               0x1400D5E60
#define CCharacterListWnd__EnterWorld_x                    0x1400D4C60
#define CCharacterListWnd__Quit_x                          0x1400D5E40
#define CCharacterListWnd__UpdateList_x                    0x1400D6BA0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                        0x14066B100
#define ItemBase__CreateItemTagString_x                    0x14066BBA0
#define ItemBase__GetImageNum_x                            0x14066E320
#define ItemBase__GetItemValue_x                           0x14066FE60
#define ItemBase__IsEmpty_x                                0x140671C00
#define ItemBase__IsKeyRingItem_x                          0x140672330
#define ItemBase__ValueSellMerchant_x                      0x140676590
#define ItemClient__CanDrop_x                              0x1402C0FD0
#define ItemClient__CanGoInBag_x                           0x1402C1100
#define ItemClient__CreateItemClient_x                     0x1402C1390
#define ItemClient__dItemClient_x                          0x1402C0E50

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                      0x1401B3000
#define EQ_LoadingS__Array_x                               0x140D58D40

// PcClient
#define PcBase__GetAlternateAbilityId_x                    0x140682690
#define PcBase__GetCombatAbility_x                         0x140682D90
#define PcBase__GetCombatAbilityTimer_x                    0x140682E30
#define PcBase__GetItemContainedRealEstateIds_x            0x140683600
#define PcBase__GetNonArchivedOwnedRealEstates_x           0x140684080
#define PcClient__AlertInventoryChanged_x                  0x1402E45D0
#define PcClient__GetConLevel_x                            0x1402E4D20  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x            0x1402E7400
#define PcClient__HasLoreItem_x                            0x1402E84B0
#define PcZoneClient__GetItemRecastTimer_x                 0x1402F4DA0
#define PcZoneClient__RemoveMyAffect_x                     0x1402F8260

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                       0x140228B80
#define EQGroundItemListManager__Add_x                     0x140228D30
#define EQGroundItemListManager__Clear_x                   0x140228DD0
#define EQGroundItemListManager__Delete_x                  0x140228E90
#define EQGroundItemListManager__Instance_x                0x140228F20

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                         0x140264340

// CTribute
#define CTribute__GetActiveFavorCost_x                     0x14018DAE0

// PlayerClient
#define PlayerBase__CanSee_x                               0x1406568E0
#define PlayerBase__CanSee1_x                              0x1406569C0
#define PlayerBase__GetVisibilityLineSegment_x             0x140656EB0
#define PlayerBase__HasProperty_x                          0x140657090
#define PlayerBase__IsTargetable_x                         0x140657150
#define PlayerClient__ChangeBoneStringSprite_x             0x140306010
#define PlayerClient__GetPcClient_x                        0x140308B50
#define PlayerClient__PlayerClient_x                       0x1402FE330
#define PlayerClient__SetNameSpriteState_x                 0x14030C280
#define PlayerClient__SetNameSpriteTint_x                  0x14030D240
#define PlayerZoneClient__ChangeHeight_x                   0x14031BD80
#define PlayerZoneClient__DoAttack_x                       0x14031CA90
#define PlayerZoneClient__GetLevel_x                       0x1403201E0
#define PlayerZoneClient__IsValidTeleport_x                0x1402670D0
#define PlayerZoneClient__LegalPlayerRace_x                0x1401A1800

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                0x140315250  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x              0x140315300  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x    0x140315400
#define PlayerManagerClient__CreatePlayer_x                0x140314D10
#define PlayerManagerBase__PrepForDestroyPlayer_x          0x1406563F0

// KeyPressHandler
#define KeypressHandler__Get_x                             0x1402C6600
#define KeypressHandler__AttachAltKeyToEqCommand_x         0x1402C5F10
#define KeypressHandler__AttachKeyToEqCommand_x            0x1402C5F80
#define KeypressHandler__ClearCommandStateArray_x          0x1402C6590  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                   0x1402C6720
#define KeypressHandler__HandleKeyUp_x                     0x1402C6840
#define KeypressHandler__SaveKeymapping_x                  0x1402C6410  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x               0x14069BA20  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                           0x140695640

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                    0x1402EE570  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x             0x1402F2EC0
#define PcZoneClient__GetPcSkillLimit_x                    0x1402F5E80
#define PcZoneClient__RemovePetEffect_x                    0x1402F8540
#define PcZoneClient__HasAlternateAbility_x                0x1402F6A60
#define PcZoneClient__CanEquipItem_x                       0x1402F1150
#define PcZoneClient__GetItemByID_x                        0x1402F3E10
#define PcZoneClient__RemoveBuffEffect_x                   0x1402F80F0
#define PcZoneClient__BandolierSwap_x                      0x1402E4680

// Doors
#define EQSwitch__UseSwitch_x                              0x14026BD40

// IconCache
#define IconCache__GetIcon_x                               0x1403D7400

// CContainerMgr
#define CContainerMgr__OpenContainer_x                     0x1403CB6C0
#define CContainerMgr__CloseContainer_x                    0x1403CAFE0
#define CContainerMgr__OpenExperimentContainer_x           0x1403CBA60

// CQuantityWnd
#define CQuantityWnd__Open_x                               0x1404CDDC0

// CHelpWnd
#define CHelpWnd__SetFile_x                                0x1402B8560

// CLootWnd
#define CLootWnd__LootAll_x                                0x14045B940
#define CLootWnd__RequestLootSlot_x                        0x14045C990

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                    0x1401E3790
#define EQ_Spell__SpellAffects_x                           0x1401E4A70
#define EQ_Spell__SpellAffectBase_x                        0x1401E49D0
#define EQ_Spell__GetSpellAffectBySlot_x                   0x1400DEF90
#define EQ_Spell__GetSpellAffectByIndex_x                  0x1400DEF40
#define EQ_Spell__IsSPAStacking_x                          0x1401E46A0
#define EQ_Spell__IsSPAIgnoredByStacking_x                 0x1401E4250
#define EQ_Spell__IsDegeneratingLevelMod_x                 0x1401E3B10

// EQSpellStrings
#define EQSpellStrings__GetString_x                        0x1400C6160

// CTargetWnd
#define CTargetWnd__WndNotification_x                      0x14052BA70
#define CTargetWnd__RefreshTargetBuffs_x                   0x14052B190
#define CTargetWnd__HandleBuffRemoveRequest_x              0x14052A9A0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                       0x140533320  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                           0x14018A570
#define CTaskManager__GetTaskStatus_x                      0x14018A680
#define CTaskManager__GetElementDescription_x              0x14018A200

// EqSoundManager
#define EqSoundManager__WavePlay_x                         0x1401E1AB0
#define EqSoundManager__PlayScriptMp3_x                    0x1401E0840
#define EqSoundManager__SoundAssistPlay_x                  0x14033FE80  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                 0x1403401C0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                          0x1405CB2B0
#define CTextureAnimation__SetCurCell_x                    0x1405CB5C0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                     0x1402B6750

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x              0x1406B6340
#define CharacterBase__GetItemByGlobalIndex1_x             0x1406B63C0
#define CharacterBase__IsExpansionFlag_x                   0x140207BE0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x              0x1403A5BE0
#define CCastSpellWnd__IsBardSongPlaying_x                 0x1403A6650
#define CCastSpellWnd__RefreshSpellGemButtons_x            0x1403A7BC0

// messages
#define msg_spell_worn_off_x                               0x140496A10
#define msg_new_text_x                                     0x14021A550
#define __msgTokenTextParam_x                              0x140211970
#define msgTokenText_x                                     0x140211880

// SpellManager
#define Spellmanager__LoadTextSpells_x                     0x140341BF0
#define SpellManager__GetSpellByGroupAndRank_x             0x140341AF0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140666820

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                            0x140454B90

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                0x1403D04F0
#define CCursorAttachment__IsOkToActivate_x                0x1403D3990
#define CCursorAttachment__RemoveAttachment_x              0x1403D3C40
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x             0x1406049C0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x          0x140604BC0
#define CEQSuiteTextureLoader__GetTexture_x                0x140604BD0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                    0x140155400
#define CFindItemWnd__Update_x                             0x140155DC0
#define CFindItemWnd__PickupSelectedItem_x                 0x14014EAA0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x            0x140160020
#define LootFiltersManager__GetItemFilterData_x            0x140160B40
#define LootFiltersManager__RemoveItemLootFilter_x         0x1401613F0
#define LootFiltersManager__SetItemLootFilter_x            0x1401616A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                  0x1404AFBB0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x             0x14033A670
#define CResolutionHandler__UpdateResolution_x             0x1405AFB00

// CColorPickerWnd
#define CColorPickerWnd__Open_x                            0x1403C77E0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x               0x1406BA750  // Rename..?
#define CDistillerInfo__Instance_x                         0x1406BA640  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                       0x1403F1C20
#define CGroupWnd__UpdateDisplay_x                         0x1403F0D90

// ItemBase
#define ItemBase__IsLore_x                                 0x140672470
#define ItemBase__IsLoreEquipped_x                         0x140672500

#define MultipleItemMoveManager__ProcessMove_x             0x1402DA0D0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                    0x1402644A0
#define EQPlacedItemManager__GetItemByGuid_x               0x140264430
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140264470

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                0x140334880

// FactionManagerClient
#define FactionManagerClient__Instance_x                   0x14012B6B0
#define FactionManagerClient__HandleFactionMessage_x       0x14012BA90
#define FactionManagerClient__GetFactionStanding_x         0x14012AE80
#define FactionManagerClient__GetMaxFaction_x              0x14012AE80
#define FactionManagerClient__GetMinFaction_x              0x14012AD30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                0x1400B2EB0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                   0x140137060

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x 0x1401BC070
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x 0x1401BB210
#define CAltAbilityData__GetMercCurrentRank_x              0x1401BBE90  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                  0x1401BBE10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                              0x140346F00

// KeyCombo
#define KeyCombo__GetTextDescription_x                     0x1405C1150

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                    0x140088E10

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                 0x140358A80

// AchievementManager
#define AchievementManager__Instance_x                     0x140091FC0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                       0x14069EAA0
#define FreeToPlayClient__RestrictionInfo_x                0x140AFDF20

// UdpConnection
#define UdpConnection__GetStats_x                          0x140562800

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                            0x1408538E8
#define CGFScreenWnd__CGFScreenWnd_x                       0x140072AD0
#define CGFScreenWnd__CGFScreenWnd1_x                      0x140072C60
#define CGFScreenWnd__dCGFScreenWnd_x                      0x140072E10

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
