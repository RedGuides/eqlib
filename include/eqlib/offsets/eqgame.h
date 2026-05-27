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

#define __ClientDate                                               20260526u
#define __ExpectedVersionDate                                     "May 26 2026"
#define __ExpectedVersionTime                                     "19:06:58"
#define __ActualVersionDate_x                                      0x14098C1D8
#define __ActualVersionTime_x                                      0x14098C1C8
#define __ActualVersionBuild_x                                     0x140921380

// Memory Protection
#define __MemChecker0_x                                            0x1402CD1F0
#define __MemChecker1_x                                            0x1405A71F0
#define __MemChecker4_x                                            0x14029A520
#define __EncryptPad0_x                                            0x140D69C20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EB25C0
#define instEQZoneInfo_x                                           0x140EB27B4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14022CBD0
#define __gfMaxZoomCameraDistance_x                                0x140922638
#define __gfMaxCameraDistance_x                                    0x140ACC114
#define __CurrentSocial_x                                          0x140C1E0D4 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D5D950
#define g_eqCommandStates_x                                        0x140D5E9F0
#define __CommandList_x                                            0x140D5EC30
#define __ScreenMode_x                                             0x140DF9E94
#define __gWorld_x                                                 0x140EAACF0
#define __gpbCommandEvent_x                                        0x140EAAFE8
#define __ServerHost_x                                             0x140EAB1D8
#define __Guilds_x                                                 0x140EB1170
#define __MemCheckBitmask_x                                        0x140EB2B03
#define __MemCheckActive_x                                         0x140EB421D
#define __MouseEventTime_x                                         0x140F27B90
#define DI8__MouseState_x                                          0x140F2BD78
#define __heqmain_x                                                0x140F2E208
#define DI8__Mouse_x                                               0x140F2E220
#define __HWnd_x                                                   0x140F2E228
#define __Mouse_x                                                  0x140F2E230
#define DI8__Keyboard_x                                            0x140F2E250
#define __LoginName_x                                              0x140F2E9BC
#define __CurrentMapLabel_x                                        0x140F424F0
#define __LabelCache_x                                             0x140F430C0
#define __ChatFilterDefs_x                                         0x140A66070
#define Teleport_Table_Size_x                                      0x140EAB074
#define Teleport_Table_x                                           0x140EAB500

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EAD500
#define pinstActiveBanker_x                                        0x140EAAF18
#define pinstActiveCorpse_x                                        0x140EAAF08
#define pinstActiveGMaster_x                                       0x140EAAF10
#define pinstActiveMerchant_x                                      0x140EAAF00
#define pinstAltAdvManager_x                                       0x140DFACE8
#define pinstCEverQuest_x                                          0x140F2E268
#define pinstCamActor_x                                            0x140DF9E80
#define pinstCDBStr_x                                              0x140DF9AA0
#define pinstCDisplay_x                                            0x140EAAFC8
#define pinstControlledPlayer_x                                    0x140EAAFA8
#define pinstCResolutionHandler_x                                  0x140F53668
#define pinstCSidlManager_x                                        0x140F54660
#define pinstCXWndManager_x                                        0x140F54658
#define instDynamicZone_x                                          0x140EB1030 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140EB107E
#define instExpeditionName_x                                       0x140EB10BE
#define pinstDZMember_x                                            0x140EB1148
#define pinstDZTimerInfo_x                                         0x140EB1150
#define pinstEqLogin_x                                             0x140F2E300
#define instTribute_x                                              0x140D56870
#define pinstDeviceInputProxy_x                                    0x140EB261C
#define pinstEQSoundManager_x                                      0x140DFB070
#define pinstEQSpellStrings_x                                      0x140DDE620
#define pinstSGraphicsEngine_x                                     0x140F53698
#define pinstLocalPC_x                                             0x140EAAA68
#define pinstLocalPlayer_x                                         0x140EAACF8
#define pinstCMercenaryClientManager_x                             0x140F294A8
#define pinstModelPlayer_x                                         0x140EAAF28
#define pinstRenderInterface_x                                     0x140F536B0
#define pinstSkillMgr_x                                            0x140F2B188
#define pinstSpawnManager_x                                        0x140F29888
#define pinstSpellManager_x                                        0x140F2B1F8
#define pinstStringTable_x                                         0x140EAAA70
#define pinstSwitchManager_x                                       0x140EAA9A0
#define pinstTarget_x                                              0x140EAAFA0
#define pinstTaskMember_x                                          0x140D56860 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140EAAF20
#define instTributeActive_x                                        0x140D56899
#define pinstViewActor_x                                           0x140DF9E78
#define pinstWorldData_x                                           0x140EAAA30
#define pinstPlayerPath_x                                          0x140F298B0
#define pinstTargetIndicator_x                                     0x140F2B2A8
#define EQObject_Top_x                                             0x140EAAFD0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F3F640
#define pinstCContainerMgr_x                                       0x140DF9F18
#define pinstCContextMenuManager_x                                 0x140F54340
#define pinstCInvSlotMgr_x                                         0x140DF9F08
#define pinstCItemDisplayManager_x                                 0x140F420C0
#define pinstCPopupWndManager_x                                    0x140F42950
#define pinstCSpellDisplayMgr_x                                    0x140F42FA0
#define pinstCTaskManager_x                                        0x140C1F7A0
#define pinstEQSuiteTextureLoader_x                                0x140D7F6D0
#define pinstItemIconCache_x                                       0x140F3F9A8
#define pinstLootFiltersManager_x                                  0x140DF94E8
#define pinstGFViewListener_x                                      0x140F53B18


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140257590
#define __CastRay_x                                                0x14024F640
#define __CastRay2_x                                               0x14024F330
#define __compress_block_x                                         0x14055C5A0
#define __ConvertItemTags_x                                        0x14024FAD0
#define __CleanItemTags_x                                          0x14008C740
#define __CreateCascadeMenuItems_x                                 0x1401961B0
#define __decompress_block_x                                       0x1405A29E0
#define __DoesFileExist_x                                          0x1405AB260
#define __EQGetTime_x                                              0x1405A77A0
#define __ExecuteCmd_x                                             0x140224080
#define __FixHeading_x                                             0x140663ED0
#define __FlushDxKeyboard_x                                        0x140352130
#define __get_bearing_x                                            0x1402598B0
#define __get_melee_range_x                                        0x1402599A0
#define __GetAnimationCache_x                                      0x1403D77B0
#define __GetGaugeValueFromEQ_x                                    0x14051B380
#define __GetLabelFromEQ_x                                         0x14051C960
#define __GetXTargetType_x                                         0x1406663C0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140663F50
#define __HelpPath_x                                               0x140F27A58   // Why?
#define __NewUIINI_x                                               0x1405283C0   // Why?
#define __ProcessDeviceEvents_x                                    0x14029AB20
#define __ProcessGameEvents_x                                      0x14028F2E0
#define __ProcessKeyboardEvents_x                                  0x140353910
#define __ProcessMouseEvents_x                                     0x140290A40
#define __SaveColors_x                                             0x1401A6110
#define __STMLToText_x                                             0x1405BBD30
#define __WndProc_x                                                0x1403508F0
#define CMemoryMappedFile__SetFile_x                               0x140813200
#define DrawNetStatus_x                                            0x1402DC750
#define Util__FastTime_x                                           0x1405A6CB0
#define __eq_delete_x                                              0x1406DF228
#define __eq_new_x                                                 0x1406DF480
#define __CopyLayout_x                                             0x1402C95C0
#define __ThrottleFrameRate_x                                      0x14027E391
#define __ThrottleFrameRateEnd_x                                   0x14027E397

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140363460
#define CAAWnd__Update_x                                           0x140363760
#define CAAWnd__UpdateSelected_x                                   0x140364980

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B0870
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A9170
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14086D2D0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B11D0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B1410
#define AltAdvManager__IsAbilityReady_x                            0x1401B18B0
#define AltAdvManager__GetAAById_x                                 0x1401B0CA0
#define AltAdvManager__CanTrainAbility_x                           0x1401B0AA0
#define AltAdvManager__CanSeeAbility_x                             0x1401B0750

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D8490
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D9350
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D95A0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400ED900
#define CharacterZoneClient__CanUseItem_x                          0x1400EDEC0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D9F80
#define CharacterZoneClient__CastSpell_x                           0x1400DA020
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E9D80
#define CharacterZoneClient__Cur_HP_x                              0x1400EF650
#define CharacterZoneClient__Cur_Mana_x                            0x1400EF810
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DD2D0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F5F60
#define CharacterZoneClient__GetBaseSkill_x                        0x1401044D0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DE770
#define CharacterZoneClient__GetCurrentMod_x                       0x1400ED200
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F77F0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F66E0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DE8F0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CDE70
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CFD40
#define CharacterZoneClient__GetHPRegen_x                          0x1400F6E10
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EF2A0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F6000
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DE970
#define CharacterZoneClient__GetManaRegen_x                        0x1400F8680
#define CharacterZoneClient__GetModCap_x                           0x1400FFC80
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DEC00
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DEDD0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D33C0
#define CharacterZoneClient__HasSkill_x                            0x1400FB7B0
#define CharacterZoneClient__HitBySpell_x                          0x1400DF840
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E31E0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FF760
#define CharacterZoneClient__Max_Endurance_x                       0x1402F7650  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FFAB0
#define CharacterZoneClient__Max_Mana_x                            0x1402F7870  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FFF10
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E6820
#define CharacterZoneClient__SpellDuration_x                       0x1400E7550
#define CharacterZoneClient__TotalEffect_x                         0x1400E89E0
#define CharacterZoneClient__UseSkill_x                            0x140105500


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140384810

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14038F610

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14038B2E0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14038F080

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140391E80

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AEBBA0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403B50C0
#define CChatWindowManager__InitContextMenu_x                      0x1403B5250
#define CChatWindowManager__FreeChatWindow_x                       0x1403B40C0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403BD5D0
#define CChatWindowManager__CreateChatWindow_x                     0x1403B3AF0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010DB00

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403BE640
#define CChatWindow__Clear_x                                       0x1403BF640
#define CChatWindow__WndNotification_x                             0x1403C08B0
#define CChatWindow__AddHistory_x                                  0x1403BF150

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405E9680
#define CContextMenu__RemoveMenuItem_x                             0x1405E9A90
#define CContextMenu__RemoveAllMenuItems_x                         0x1405E9A60
#define CContextMenu__CheckMenuItem_x                              0x1405E98D0
#define CContextMenu__SetMenuItem_x                                0x1405E9AB0
#define CContextMenu__AddSeparator_x                               0x1405E9800

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405DB420
#define CContextMenuManager__RemoveMenu_x                          0x1405DBA00
#define CContextMenuManager__PopupMenu_x                           0x1405DB740
#define CContextMenuManager__Flush_x                               0x1405DB4A0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403CF040

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406B8E80
#define CChatService__GetFriendName_x                              0x1406B8E90

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405CC2F0
#define CComboWnd__Draw_x                                          0x1405CC3F0
#define CComboWnd__GetCurChoice_x                                  0x1405CC6E0  // unused
#define CComboWnd__GetListRect_x                                   0x1405CC780
#define CComboWnd__InsertChoice_x                                  0x1405CCAC0
#define CComboWnd__SetColors_x                                     0x1405CCE50
#define CComboWnd__SetChoice_x                                     0x1405CCE10
#define CComboWnd__GetItemCount_x                                  0x1405CC770
#define CComboWnd__GetCurChoiceText_x                              0x1405CC720  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405CC6B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405CCB80

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403CCD20
#define CContainerWnd__SetContainer_x                              0x14042C830
#define CContainerWnd__vftable_x                                   0x140A00F50

// CDisplay
#define CDisplay__cameraType_x                                     0x140DF9BAC
#define CDisplay__ZoneMainUI_x                                     0x140603CB0
#define CDisplay__PreZoneMainUI_x                                  0x1401A3010
#define CDisplay__CleanGameUI_x                                    0x140195270
#define CDisplay__GetClickedActor_x                                0x140199490
#define CDisplay__GetUserDefinedColor_x                            0x14019A100
#define CDisplay__InitCharSelectUI_x                               0x14019A3B0
#define CDisplay__ReloadUI_x                                       0x1401A5310
#define CDisplay__RestartUI_x                                      0x1402084C0
#define CDisplay__WriteTextHD2_x                                   0x1401AC330
#define CDisplay__TrueDistance_x                                   0x1401ABFD0
#define CDisplay__SetViewActor_x                                   0x1401A8840
#define CDisplay__GetFloorHeight_x                                 0x1401996F0
#define CDisplay__ToggleScreenshotMode_x                           0x1401ABAC0
#define CDisplay__RealRender_World_x                               0x1401A46E0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14060E170
#define CEditWnd__DrawCaret_x                                      0x1405FF8E0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405FFE00
#define CEditWnd__GetCaretPt_x                                     0x1406000A0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1406000E0
#define CEditWnd__GetDisplayString_x                               0x140600340
#define CEditWnd__GetHorzOffset_x                                  0x140600590
#define CEditWnd__GetLineForPrintableChar_x                        0x1406006F0
#define CEditWnd__GetSelStartPt_x                                  0x1406009E0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140600820
#define CEditWnd__PointFromPrintableChar_x                         0x1406015A0
#define CEditWnd__ReplaceSelection_x                               0x140601960
#define CEditWnd__SelectableCharFromPoint_x                        0x140601E20
#define CEditWnd__SetEditable_x                                    0x1406020C0
#define CEditWnd__SetWindowText_x                                  0x1406020F0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027F470
#define CEverQuest__ClickedPlayer_x                                0x140273620
#define CEverQuest__CreateTargetIndicator_x                        0x140273F20
#define CEverQuest__DoTellWindow_x                                 0x14010D800 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010E0F0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140280E60
#define CEverQuest__dsp_chat_x                                     0x14010D230 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402AC700
#define CEverQuest__Emote_x                                        0x140281850
#define CEverQuest__GetBodyTypeDesc_x                              0x140282630
#define CEverQuest__GetClassDesc_x                                 0x140282690
#define CEverQuest__GetClassThreeLetterCode_x                      0x140282A60
#define CEverQuest__GetDeityDesc_x                                 0x140282D10
#define CEverQuest__GetLangDesc_x                                  0x140283140
#define CEverQuest__GetRaceDesc_x                                  0x1402834E0
#define CEverQuest__InterpretCmd_x                                 0x140285120
#define CEverQuest__LeftClickedOnPlayer_x                          0x14029AB90
#define CEverQuest__LMouseUp_x                                     0x140286C30
#define CEverQuest__RightClickedOnPlayer_x                         0x140297F30
#define CEverQuest__RMouseUp_x                                     0x1402915D0
#define CEverQuest__SetGameState_x                                 0x14029D640
#define CEverQuest__UPCNotificationFlush_x                         0x1402A3080 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140286810
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402929C0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402937E0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403E2960

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C7600
#define CGuild__GetGuildName_x                                     0x1400C7640

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140409830

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402BECC0
#define CHotButton__SetCheck_x                                     0x1402BEF90

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140423690
#define CInvSlotMgr__MoveItem_x                                    0x140424220
#define CInvSlotMgr__SelectSlot_x                                  0x140426550

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140420460
#define CInvSlot__SliderComplete_x                                 0x140421C90
#define CInvSlot__GetItemBase_x                                    0x14041BAB0
#define CInvSlot__UpdateItem_x                                     0x140422160

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140428760

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140449D90
#define CItemDisplayWnd__UpdateStrings_x                           0x14044CFB0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140446670
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140447FA0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404491B0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140517DF0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140519B80

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140555620

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140442CF0

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x1405199C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015ABF0

// CLabel
#define CLabel__UpdateText_x                                       0x1404545C0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405CFC90
#define CListWnd__dCListWnd_x                                      0x1405D00D0
#define CListWnd__vftable_x                                        0x140AE9CF0
#define CListWnd__AddColumn_x                                      0x1405D0760
#define CListWnd__AddColumn1_x                                     0x1405D0800
#define CListWnd__AddLine_x                                        0x1405D0960
#define CListWnd__AddString_x                                      0x1405D0F00
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405D1470
#define CListWnd__CalculateVSBRange_x                              0x1405D1750
#define CListWnd__ClearSel_x                                       0x1405D18F0
#define CListWnd__ClearAllSel_x                                    0x1405D1890
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405D1950
#define CListWnd__Compare_x                                        0x1405D1B10
#define CListWnd__Draw_x                                           0x1405D1FD0
#define CListWnd__DrawColumnSeparators_x                           0x1405D2B60
#define CListWnd__DrawHeader_x                                     0x1405D2C20
#define CListWnd__DrawItem_x                                       0x1405D3300
#define CListWnd__DrawLine_x                                       0x1405D3CA0
#define CListWnd__DrawSeparator_x                                  0x1405D4160
#define CListWnd__EnableLine_x                                     0x1405D4580
#define CListWnd__EnsureVisible_x                                  0x1405D45E0
#define CListWnd__ExtendSel_x                                      0x1405D46E0
#define CListWnd__GetColumnMinWidth_x                              0x1405D4A70
#define CListWnd__GetColumnWidth_x                                 0x1405D4AF0
#define CListWnd__GetCurSel_x                                      0x1405D4BF0
#define CListWnd__GetItemData_x                                    0x1405D4F70
#define CListWnd__GetItemHeight_x                                  0x1405D4FB0
#define CListWnd__GetItemRect_x                                    0x1405D51E0
#define CListWnd__GetItemText_x                                    0x1405D5480
#define CListWnd__GetSelList_x                                     0x1405D56E0
#define CListWnd__GetSeparatorRect_x                               0x1405D58D0
#define CListWnd__InsertLine_x                                     0x1405D6D40
#define CListWnd__RemoveLine_x                                     0x1405D73B0
#define CListWnd__SetColors_x                                      0x1405D7770
#define CListWnd__SetColumnJustification_x                         0x1405D7790
#define CListWnd__SetColumnLabel_x                                 0x1405D7810
#define CListWnd__SetColumnWidth_x                                 0x1405D79B0
#define CListWnd__SetCurSel_x                                      0x1405D7A80
#define CListWnd__SetItemColor_x                                   0x1405D7CF0
#define CListWnd__SetItemData_x                                    0x1405D7D90
#define CListWnd__SetItemText_x                                    0x1405D7FD0
#define CListWnd__Sort_x                                           0x1405D83E0
#define CListWnd__ToggleSel_x                                      0x1405D8550
#define CListWnd__SetColumnsSizable_x                              0x1405D7A00
#define CListWnd__SetItemWnd_x                                     0x1405D8100
#define CListWnd__GetItemWnd_x                                     0x1405D5670
#define CListWnd__SetItemIcon_x                                    0x1405D7DD0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405D1240
#define CListWnd__SetVScrollPos_x                                  0x1405D8340

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140467F80

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A4E8E0
#define MapViewMap__Clear_x                                        0x140469C40
#define MapViewMap__SetZoom_x                                      0x140470320
#define MapViewMap__HandleLButtonDown_x                            0x14046CE20

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404923D0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140498D30
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140499500
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14049CE20
#define CMerchantWnd__SelectBuySellSlot_x                          0x14049C120
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A12B0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140693EB0
#define CPacketScrambler__hton_x                                   0x140693EA0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405F9190
#define CSidlManagerBase__FindAnimation1_x                         0x1405F90D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405F97D0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405F9570
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405F84D0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405F8460
#define CSidlManagerBase__CreateXWnd_x                             0x1405F7AC0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14050AC70
#define CSidlManager__CreateXWnd_x                                 0x14050AE30

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405BD950
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405BD820
#define CSidlScreenWnd__ConvertToRes_x                             0x1406084B0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405BDAC0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405BCF60
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405BD030
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405BD240
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405BE1B0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405BE3E0
#define CSidlScreenWnd__GetChildItem_x                             0x1405BE580
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405BE7D0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405C8860 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405BEB40
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405BEEB0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405BF780
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405C0180
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F539B8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C0800
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C0FF0
#define CSidlScreenWnd__vftable_x                                  0x140AE8F78
#define CSidlScreenWnd__WndNotification_x                          0x1405C1040

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14033B0C0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14033B3E0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14033B310
#define CSkillMgr__IsActivatedSkill_x                              0x14033B7A0
#define CSkillMgr__IsCombatSkill_x                                 0x14033B7E0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14033B710
#define CSkillMgr__GetSkillLastUsed_x                              0x14033B360

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405D8EB0
#define CSliderWnd__SetValue_x                                     0x1405D96C0
#define CSliderWnd__SetNumTicks_x                                  0x1405D9540

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1405114C0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405DDE80
#define CStmlWnd__CalculateHSBRange_x                              0x1405C8210
#define CStmlWnd__CalculateVSBRange_x                              0x1405DEDA0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405DF830
#define CStmlWnd__ForceParseNow_x                                  0x1405DF8D0
#define CStmlWnd__GetVisibleText_x                                 0x1405DFFA0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405E1D30
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405E1D70
#define CStmlWnd__SetSTMLText_x                                    0x1405E8E00
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405E8FB0
#define CStmlWnd__UpdateHistoryString_x                            0x1405E9350

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405D9A90
#define CTabWnd__DrawCurrentPage_x                                 0x1405D9B30
#define CTabWnd__DrawTab_x                                         0x1405D9F00
#define CTabWnd__GetTabRect_x                                      0x1405DA590
#define CTabWnd__InsertPage_x                                      0x1405DA860
#define CTabWnd__RemovePage_x                                      0x1405DAAF0
#define CTabWnd__SetPage_x                                         0x1405DAC50
#define CTabWnd__UpdatePage_x                                      0x1405DAF50

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140602550
#define CPageWnd__SetTabText_x                                     0x1406025C0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C0B10  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C0F40


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F09C0
#define CTextureFont__DrawWrappedText1_x                           0x1405F08C0
#define CTextureFont__DrawWrappedText2_x                           0x1405F0AF0
#define CTextureFont__GetTextExtent_x                              0x1405F0EA0
#define CTextureFont__GetHeight_x                                  0x1405F0E60

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140606BD0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405BA3B0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D7F040
#define CXStr__gCXStrAccess_x                                      0x140F53518

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405C3860
#define CXWnd__ClrFocus_x                                          0x1405C3B50
#define CXWnd__Destroy_x                                           0x1405C3CD0
#define CXWnd__DoAllDrawing_x                                      0x1405C3DD0
#define CXWnd__DrawColoredRect_x                                   0x1405C45A0
#define CXWnd__DrawTooltip_x                                       0x1405C5C10
#define CXWnd__DrawTooltipAtPoint_x                                0x1405C5CD0
#define CXWnd__GetChildItem_x                                      0x1405C65E0
#define CXWnd__GetChildWndAt_x                                     0x1405C66A0
#define CXWnd__GetClientRect_x                                     0x1405C6960
#define CXWnd__GetClientClipRect_x                                 0x1405C6810
#define CXWnd__GetRelativeRect_x                                   0x1405C8350
#define CXWnd__GetScreenClipRect_x                                 0x1405C8460
#define CXWnd__GetScreenRect_x                                     0x1405C85E0
#define CXWnd__GetTooltipRect_x                                    0x1405C8760
#define CXWnd__IsActive_x                                          0x1405C8D20
#define CXWnd__IsDescendantOf_x                                    0x1405C8D50
#define CXWnd__IsReallyVisible_x                                   0x1405C8DC0
#define CXWnd__IsType_x                                            0x1405C8E10
#define CXWnd__Minimize_x                                          0x1405C8F10
#define CXWnd__ProcessTransition_x                                 0x1405C9E20
#define CXWnd__Resize_x                                            0x1405C9F30
#define CXWnd__Right_x                                             0x1405C9FD0
#define CXWnd__SetFocus_x                                          0x1405CA390
#define CXWnd__SetFont_x                                           0x1405CA3E0
#define CXWnd__SetKeyTooltip_x                                     0x1405CA4F0
#define CXWnd__SetMouseOver_x                                      0x1405CA640
#define CXWnd__SetParent_x                                         0x1405CA6C0
#define CXWnd__StartFade_x                                         0x1405CAAF0
#define CXWnd__vftable_x                                           0x140AE9550
#define CXWnd__CXWnd_x                                             0x1405C2460
#define CXWnd__dCXWnd_x                                            0x1405C2D90

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14060D900

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405EAC70
#define CXWndManager__DrawCursor_x                                 0x1405EAF50
#define CXWndManager__DrawWindows_x                                0x1405EB1B0
#define CXWndManager__GetKeyboardFlags_x                           0x1405EB820
#define CXWndManager__HandleKeyboardMsg_x                          0x1405EB860
#define CXWndManager__RemoveWnd_x                                  0x1405EF060

// CDBStr
#define CDBStr__GetString_x                                        0x140193430

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14069DEA0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D5E20
#define CCharacterListWnd__EnterWorld_x                            0x1400D4C20
#define CCharacterListWnd__Quit_x                                  0x1400D5E00
#define CCharacterListWnd__UpdateList_x                            0x1400D6B60

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14066B080
#define ItemBase__CreateItemTagString_x                            0x14066BB20
#define ItemBase__GetImageNum_x                                    0x14066E290
#define ItemBase__GetItemValue_x                                   0x14066FDD0
#define ItemBase__IsEmpty_x                                        0x140671B50
#define ItemBase__IsKeyRingItem_x                                  0x140672280
#define ItemBase__ValueSellMerchant_x                              0x140676460
#define ItemClient__CanDrop_x                                      0x1402C14D0
#define ItemClient__CanGoInBag_x                                   0x1402C1600
#define ItemClient__CreateItemClient_x                             0x1402C1890
#define ItemClient__dItemClient_x                                  0x1402C1350

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B3080
#define EQ_LoadingS__Array_x                                       0x140D58D40

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140682560
#define PcBase__GetCombatAbility_x                                 0x140682C50
#define PcBase__GetCombatAbilityTimer_x                            0x140682CF0
#define PcBase__GetItemContainedRealEstateIds_x                    0x1406834C0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140683F40
#define PcClient__AlertInventoryChanged_x                          0x1402E4A50
#define PcClient__GetConLevel_x                                    0x1402E51A0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E78A0
#define PcClient__HasLoreItem_x                                    0x1402E8940
#define PcZoneClient__GetItemRecastTimer_x                         0x1402F52C0
#define PcZoneClient__RemoveMyAffect_x                             0x1402F8780

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140228B60
#define EQGroundItemListManager__Add_x                             0x140228D10
#define EQGroundItemListManager__Clear_x                           0x140228DB0
#define EQGroundItemListManager__Delete_x                          0x140228E70
#define EQGroundItemListManager__Instance_x                        0x140228F00

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140264790

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018DB50

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140656F50
#define PlayerBase__CanSee1_x                                      0x140657030
#define PlayerBase__GetVisibilityLineSegment_x                     0x140657520
#define PlayerBase__HasProperty_x                                  0x140657700
#define PlayerBase__IsTargetable_x                                 0x1406577C0
#define PlayerClient__ChangeBoneStringSprite_x                     0x140306530
#define PlayerClient__GetPcClient_x                                0x140309070
#define PlayerClient__PlayerClient_x                               0x1402FE850
#define PlayerClient__SetNameSpriteState_x                         0x14030C7A0
#define PlayerClient__SetNameSpriteTint_x                          0x14030D760
#define PlayerZoneClient__ChangeHeight_x                           0x14031C3A0
#define PlayerZoneClient__DoAttack_x                               0x14031D0B0
#define PlayerZoneClient__GetLevel_x                               0x140320800
#define PlayerZoneClient__IsValidTeleport_x                        0x140267520
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A1890

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140315870  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140315920  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140315A20
#define PlayerManagerClient__CreatePlayer_x                        0x140315330
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140656A60

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C6AB0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C63C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C6430
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C6A40  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C6BD0
#define KeypressHandler__HandleKeyUp_x                             0x1402C6CF0
#define KeypressHandler__SaveKeymapping_x                          0x1402C68C0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14069B9B0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406955D0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402EEA60  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F33F0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F63A0
#define PcZoneClient__RemovePetEffect_x                            0x1402F8A60
#define PcZoneClient__HasAlternateAbility_x                        0x1402F6F80
#define PcZoneClient__CanEquipItem_x                               0x1402F1680
#define PcZoneClient__GetItemByID_x                                0x1402F4340
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F8610
#define PcZoneClient__BandolierSwap_x                              0x1402E4B00

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026C190

// IconCache
#define IconCache__GetIcon_x                                       0x1403D77E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403CBA70
#define CContainerMgr__CloseContainer_x                            0x1403CB390
#define CContainerMgr__OpenExperimentContainer_x                   0x1403CBE10

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404CDF40

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B8A40

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14045BB30
#define CLootWnd__RequestLootSlot_x                                0x14045CB80

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E37D0
#define EQ_Spell__SpellAffects_x                                   0x1401E4AB0
#define EQ_Spell__SpellAffectBase_x                                0x1401E4A10
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DEF60
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DEF10
#define EQ_Spell__IsSPAStacking_x                                  0x1401E46E0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E4290
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E3B50

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C6110

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14052BC10
#define CTargetWnd__RefreshTargetBuffs_x                           0x14052B330
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14052AB30

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405334C0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018A5D0
#define CTaskManager__GetTaskStatus_x                              0x14018A6E0
#define CTaskManager__GetElementDescription_x                      0x14018A260

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E1AF0
#define EqSoundManager__PlayScriptMp3_x                            0x1401E0880
#define EqSoundManager__SoundAssistPlay_x                          0x140340490  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403407D0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405CB890
#define CTextureAnimation__SetCurCell_x                            0x1405CBBA0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B6C30

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406B65F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406B6670
#define CharacterBase__IsExpansionFlag_x                           0x140207B10

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403A5FE0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403A6A50
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403A7FC0

// messages
#define msg_spell_worn_off_x                                       0x14021ED50
#define msg_new_text_x                                             0x14021A520
#define __msgTokenTextParam_x                                      0x1402118E0
#define msgTokenText_x                                             0x1402117F0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140342200
#define SpellManager__GetSpellByGroupAndRank_x                     0x140342100

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406667A0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140454D50

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D08D0
#define CCursorAttachment__IsOkToActivate_x                        0x1403D3D70
#define CCursorAttachment__RemoveAttachment_x                      0x1403D4020
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140605030
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140605230
#define CEQSuiteTextureLoader__GetTexture_x                        0x140605240

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140155460
#define CFindItemWnd__Update_x                                     0x140155E20
#define CFindItemWnd__PickupSelectedItem_x                         0x14014EAB0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401600B0
#define LootFiltersManager__GetItemFilterData_x                    0x140160BD0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140161480
#define LootFiltersManager__SetItemLootFilter_x                    0x140161730

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404AFD30

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14033AC80
#define CResolutionHandler__UpdateResolution_x                     0x1405AFF10

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403C7B90

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406BAA10  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406BA900  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403F1FE0
#define CGroupWnd__UpdateDisplay_x                                 0x1403F1170

// ItemBase
#define ItemBase__IsLore_x                                         0x1406723C0
#define ItemBase__IsLoreEquipped_x                                 0x140672450

#define MultipleItemMoveManager__ProcessMove_x                     0x1402DA590

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402648F0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140264880
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402648C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140334E80

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012B5F0
#define FactionManagerClient__HandleFactionMessage_x               0x14012B9D0
#define FactionManagerClient__GetFactionStanding_x                 0x14012ADC0
#define FactionManagerClient__GetMaxFaction_x                      0x14012ADC0
#define FactionManagerClient__GetMinFaction_x                      0x14012AC70

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B2ED0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140136FA0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401BC0E0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401BB280
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401BBF00  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401BBE80  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140347510

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140334E80

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405C1630

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140088E20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140358DA0

// AchievementManager
#define AchievementManager__Instance_x                             0x140091FD0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14069EA30
#define FreeToPlayClient__RestrictionInfo_x                        0x140AFDF60

// UdpConnection
#define UdpConnection__GetStats_x                                  0x1405629C0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x1408538E8
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072AD0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140072C60
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140072E10

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
