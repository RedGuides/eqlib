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

#define __ClientDate                                               20260917u
#define __ExpectedVersionDate                                     "Sep 17 2026"
#define __ExpectedVersionTime                                     "15:46:17"
#define __ActualVersionDate_x                                      0x140994DD8
#define __ActualVersionTime_x                                      0x140994DC8
#define __ActualVersionBuild_x                                     0x1408598B0

// Memory Protection
#define __MemChecker0_x                                            0x1402D47A0
#define __MemChecker1_x                                            0x1405B03B0
#define __MemChecker4_x                                            0x1402A19C0
#define __EncryptPad0_x                                            0x140D82FD0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EBBAF0
#define instEQZoneInfo_x                                           0x140EBBCE4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140232BF0
#define __gfMaxZoomCameraDistance_x                                0x14092B0A8
#define __gfMaxCameraDistance_x                                    0x140AD5274
#define __CurrentSocial_x                                          0x140C3E9CC // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D7A7A0
#define g_eqCommandStates_x                                        0x140D7B840
#define __CommandList_x                                            0x140D7BA80
#define __ScreenMode_x                                             0x140E033C4
#define __gWorld_x                                                 0x140EB61C0
#define __gpbCommandEvent_x                                        0x140EB6530
#define __ServerHost_x                                             0x140EB6718
#define __Guilds_x                                                 0x140EBA6A0
#define __MemCheckBitmask_x                                        0x140EBC03B
#define __MemCheckActive_x                                         0x140EBD755
#define __MouseEventTime_x                                         0x140F310C8
#define DI8__MouseState_x                                          0x140F35300
#define __heqmain_x                                                0x140F37790
#define DI8__Mouse_x                                               0x140F377A8
#define __HWnd_x                                                   0x140F377B0
#define __Mouse_x                                                  0x140EBBB4C
#define DI8__Keyboard_x                                            0x140F377D0
#define __LoginName_x                                              0x140F37EBC
#define __CurrentMapLabel_x                                        0x140F4B9D0
#define __LabelCache_x                                             0x140F4C5A0
#define __ChatFilterDefs_x                                         0x140A6F0F0
#define Teleport_Table_Size_x                                      0x140EB6538
#define Teleport_Table_x                                           0x140EB3F80

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EB6A30
#define pinstActiveBanker_x                                        0x140EB6460
#define pinstActiveCorpse_x                                        0x140EB6450
#define pinstActiveGMaster_x                                       0x140EB6458
#define pinstActiveMerchant_x                                      0x140EB6448
#define pinstAltAdvManager_x                                       0x140E04238
#define pinstCEverQuest_x                                          0x140F35250
#define pinstCamActor_x                                            0x140E033B0
#define pinstCDBStr_x                                              0x140E02FF0
#define pinstCDisplay_x                                            0x140EB6510
#define pinstControlledPlayer_x                                    0x140EB64F0
#define pinstCResolutionHandler_x                                  0x140F5CB48
#define pinstCSidlManager_x                                        0x140F5DB40
#define pinstCXWndManager_x                                        0x140F5DB38
#define instDynamicZone_x                                          0x140EBA560 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140EBA5AE
#define instExpeditionName_x                                       0x140EBA5EE
#define pinstDZMember_x                                            0x140EBA678
#define pinstDZTimerInfo_x                                         0x140EBA680
#define pinstEqLogin_x                                             0x140F37800
#define instTribute_x                                              0x140D75DD0
#define pinstDeviceInputProxy_x                                    0x140EBBB4C
#define pinstEQSoundManager_x                                      0x140E045C0
#define pinstEQSpellStrings_x                                      0x140DE7B80
#define pinstSGraphicsEngine_x                                     0x140F5CB78
#define pinstLocalPC_x                                             0x140EB5FB0
#define pinstLocalPlayer_x                                         0x140EB6440
#define pinstCMercenaryClientManager_x                             0x140F329E0
#define pinstModelPlayer_x                                         0x140EB6470
#define pinstRenderInterface_x                                     0x140F5CB90
#define pinstSkillMgr_x                                            0x140F34698
#define pinstSpawnManager_x                                        0x140F32DA0
#define pinstSpellManager_x                                        0x140F34700
#define pinstStringTable_x                                         0x140EB5FB8
#define pinstSwitchManager_x                                       0x140EB3EF0
#define pinstTarget_x                                              0x140EB64E8
#define pinstTaskMember_x                                          0x140D75DC0 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140EB6468
#define instTributeActive_x                                        0x140D75DF9
#define pinstViewActor_x                                           0x140E033A8
#define pinstWorldData_x                                           0x140EB3F78
#define pinstPlayerPath_x                                          0x140F32DC8
#define pinstTargetIndicator_x                                     0x140F347B0
#define EQObject_Top_x                                             0x140EB6518

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F48B30
#define pinstCContainerMgr_x                                       0x140E035E8
#define pinstCContextMenuManager_x                                 0x140F5D820
#define pinstCInvSlotMgr_x                                         0x140E035C8
#define pinstCItemDisplayManager_x                                 0x140F4B5A0
#define pinstCPopupWndManager_x                                    0x140F4BE30
#define pinstCSpellDisplayMgr_x                                    0x140F4C480
#define pinstCTaskManager_x                                        0x140C3ED00
#define pinstEQSuiteTextureLoader_x                                0x140D8C6F0
#define pinstItemIconCache_x                                       0x140F48E90
#define pinstLootFiltersManager_x                                  0x140E02A38
#define pinstGFViewListener_x                                      0x140F5CFF8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14025D6E0
#define __CastRay_x                                                0x140255730
#define __CastRay2_x                                               0x140255420
#define __compress_block_x                                         0x140565EE0
#define __ConvertItemTags_x                                        0x140255BC0
#define __CleanItemTags_x                                          0x14008E750
#define __CreateCascadeMenuItems_x                                 0x14019B210
#define __decompress_block_x                                       0x1405ABA30
#define __DoesFileExist_x                                          0x1405B4420
#define __EQGetTime_x                                              0x1405B0960
#define __ExecuteCmd_x                                             0x140229FB0
#define __FixHeading_x                                             0x14066D330
#define __FlushDxKeyboard_x                                        0x140359B60
#define __get_bearing_x                                            0x14025FAB0
#define __get_melee_range_x                                        0x14025FBA0
#define __GetAnimationCache_x                                      0x1403E06B0
#define __GetGaugeValueFromEQ_x                                    0x140524AD0
#define __GetLabelFromEQ_x                                         0x1405260C0
#define __GetXTargetType_x                                         0x14066F820   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14066D3B0
#define __HelpPath_x                                               0x140F30F90   // Why?
#define __NewUIINI_x                                               0x140531B10   // Why?
#define __ProcessDeviceEvents_x                                    0x1402A1FC0
#define __ProcessGameEvents_x                                      0x140296760
#define __ProcessKeyboardEvents_x                                  0x14035B340
#define __ProcessMouseEvents_x                                     0x140297EC0
#define __SaveColors_x                                             0x1401AB3E0
#define __STMLToText_x                                             0x1405C4CB0
#define __WndProc_x                                                0x1403582B0
#define CMemoryMappedFile__SetFile_x                               0x14081A950
#define DrawNetStatus_x                                            0x1402E3D30
#define Util__FastTime_x                                           0x1405AFD00
#define __eq_delete_x                                              0x1406E6658
#define __eq_new_x                                                 0x1406E68B0
#define __CopyLayout_x                                             0x1402D0B80
#define __ThrottleFrameRate_x                                      0x140285845
#define __ThrottleFrameRateEnd_x                                   0x14028584B

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14036B310
#define CAAWnd__Update_x                                           0x14036B770
#define CAAWnd__UpdateSelected_x                                   0x14036CDC0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B38E0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400ABD90
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A8150
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B4240

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B6690
#define AltAdvManager__IsAbilityReady_x                            0x1401B6B70
#define AltAdvManager__GetAAById_x                                 0x1401B5F20
#define AltAdvManager__CanTrainAbility_x                           0x1401B5D20
#define AltAdvManager__CanSeeAbility_x                             0x1401B5A40

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400DB600
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DC4C0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DC710
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400F0C90
#define CharacterZoneClient__CanUseItem_x                          0x1400F1250
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DD0F0
#define CharacterZoneClient__CastSpell_x                           0x1400DD190
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400ED0C0
#define CharacterZoneClient__Cur_HP_x                              0x1400F2AE0
#define CharacterZoneClient__Cur_Mana_x                            0x1400F2CA0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400E05F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F93F0
#define CharacterZoneClient__GetBaseSkill_x                        0x1401086E0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E1A90
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F0590
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400FAC80
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F9B70
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E1C10
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D10F0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D2FC0
#define CharacterZoneClient__GetHPRegen_x                          0x1400FA2A0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F2730
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400FAE20
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E1C90
#define CharacterZoneClient__GetManaRegen_x                        0x1400FBB10
#define CharacterZoneClient__GetModCap_x                           0x1401032B0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E1F90
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E2160
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D6640
#define CharacterZoneClient__HasSkill_x                            0x1400FECB0
#define CharacterZoneClient__HitBySpell_x                          0x1400E2BD0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E6550
#define CharacterZoneClient__MakeMeVisible_x                       0x140102D90
#define CharacterZoneClient__Max_Endurance_x                       0x1402FED90  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1401030E0
#define CharacterZoneClient__Max_Mana_x                            0x1402FEFB0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140103540
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E9B90
#define CharacterZoneClient__SpellDuration_x                       0x1400EA8C0
#define CharacterZoneClient__TotalEffect_x                         0x1400EBD20
#define CharacterZoneClient__UseSkill_x                            0x1401096E0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038CE80

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140397C20
#define CBarterWnd__UpdateInventoryList_x                          0x140397690

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140393950
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403929C0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14039A6C0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AF4D38

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BE000
#define CChatWindowManager__InitContextMenu_x                      0x1403BE190
#define CChatWindowManager__FreeChatWindow_x                       0x1403BD000
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C6510
#define CChatWindowManager__CreateChatWindow_x                     0x1403BCA30

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140111CE0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C7580
#define CChatWindow__Clear_x                                       0x1403C8580
#define CChatWindow__WndNotification_x                             0x1403C97F0
#define CChatWindow__AddHistory_x                                  0x1403C8090

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405F26D0
#define CContextMenu__RemoveMenuItem_x                             0x1405F2AE0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405F2AB0
#define CContextMenu__CheckMenuItem_x                              0x1405F2920
#define CContextMenu__SetMenuItem_x                                0x1405F2B00
#define CContextMenu__AddSeparator_x                               0x1405F2850

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405E4480
#define CContextMenuManager__RemoveMenu_x                          0x1405E4A60
#define CContextMenuManager__PopupMenu_x                           0x1405E47A0
#define CContextMenuManager__Flush_x                               0x1405E4500
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D7F60

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406C1360
#define CChatService__GetFriendName_x                              0x1406C1370

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405D5370
#define CComboWnd__Draw_x                                          0x1405D5470
#define CComboWnd__GetCurChoice_x                                  0x1405D5760  // unused
#define CComboWnd__GetListRect_x                                   0x1405D5800
#define CComboWnd__InsertChoice_x                                  0x1405D5B40
#define CComboWnd__SetColors_x                                     0x1405D5ED0
#define CComboWnd__SetChoice_x                                     0x1405D5E90
#define CComboWnd__GetItemCount_x                                  0x1405D57F0
#define CComboWnd__GetCurChoiceText_x                              0x1405D57A0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405D5730
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405D5C00

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D5C40
#define CContainerWnd__SetContainer_x                              0x140435C90
#define CContainerWnd__vftable_x                                   0x140A09E00

// CDisplay
#define CDisplay__cameraType_x                                     0x140E03144
#define CDisplay__ZoneMainUI_x                                     0x14060D1E0
#define CDisplay__PreZoneMainUI_x                                  0x1401A8100
#define CDisplay__CleanGameUI_x                                    0x14019A2D0
#define CDisplay__GetClickedActor_x                                0x14019E530
#define CDisplay__GetUserDefinedColor_x                            0x14019F1A0
#define CDisplay__InitCharSelectUI_x                               0x14019F450
#define CDisplay__ReloadUI_x                                       0x1401AA5E0
#define CDisplay__RestartUI_x                                      0x14020DE50
#define CDisplay__WriteTextHD2_x                                   0x1401B1580
#define CDisplay__TrueDistance_x                                   0x1401B1220
#define CDisplay__SetViewActor_x                                   0x1401ADB20
#define CDisplay__GetFloorHeight_x                                 0x14019E790
#define CDisplay__ToggleScreenshotMode_x                           0x1401B0D10
#define CDisplay__RealRender_World_x                               0x1401A99C0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140617690
#define CEditWnd__DrawCaret_x                                      0x140608E00  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140609320
#define CEditWnd__GetCaretPt_x                                     0x1406095C0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140609600
#define CEditWnd__GetDisplayString_x                               0x140609860
#define CEditWnd__GetHorzOffset_x                                  0x140609AB0
#define CEditWnd__GetLineForPrintableChar_x                        0x140609C10
#define CEditWnd__GetSelStartPt_x                                  0x140609F00  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140609D40
#define CEditWnd__PointFromPrintableChar_x                         0x14060AAC0
#define CEditWnd__ReplaceSelection_x                               0x14060AE80
#define CEditWnd__SelectableCharFromPoint_x                        0x14060B340
#define CEditWnd__SetEditable_x                                    0x14060B5E0
#define CEditWnd__SetWindowText_x                                  0x14060B610

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140286920
#define CEverQuest__ClickedPlayer_x                                0x140279980
#define CEverQuest__CreateTargetIndicator_x                        0x14027A280
#define CEverQuest__DoTellWindow_x                                 0x1401119E0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401122D0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140288330
#define CEverQuest__dsp_chat_x                                     0x140111410 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402B3BF0
#define CEverQuest__Emote_x                                        0x140288CC0
#define CEverQuest__GetBodyTypeDesc_x                              0x140289AA0
#define CEverQuest__GetClassDesc_x                                 0x140289B00
#define CEverQuest__GetClassThreeLetterCode_x                      0x140289ED0
#define CEverQuest__GetDeityDesc_x                                 0x14028A170
#define CEverQuest__GetLangDesc_x                                  0x14028A5A0
#define CEverQuest__GetRaceDesc_x                                  0x14028A940
#define CEverQuest__InterpretCmd_x                                 0x14028C580
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402A2030
#define CEverQuest__LMouseUp_x                                     0x14028E090
#define CEverQuest__RightClickedOnPlayer_x                         0x14029F3D0
#define CEverQuest__RMouseUp_x                                     0x140298A80
#define CEverQuest__SetGameState_x                                 0x1402A4B70
#define CEverQuest__UPCNotificationFlush_x                         0x1402AA570 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14028DC70
#define CEverQuest__ReportSuccessfulHeal_x                         0x140299E70
#define CEverQuest__ReportSuccessfulHit_x                          0x14029AC80

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403EB890

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400CA890
#define CGuild__GetGuildName_x                                     0x1400CA8D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1404126E0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C6200
#define CHotButton__SetCheck_x                                     0x1402C64D0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14042C7C0
#define CInvSlotMgr__MoveItem_x                                    0x14042D350
#define CInvSlotMgr__SelectSlot_x                                  0x14042F680

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1404293E0
#define CInvSlot__SliderComplete_x                                 0x14042ADB0
#define CInvSlot__GetItemBase_x                                    0x140424980
#define CInvSlot__UpdateItem_x                                     0x14042B280

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140431B40

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404532F0
#define CItemDisplayWnd__UpdateStrings_x                           0x140456500
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14044FBC0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404514F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140452710

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140521540
#define CSpellDisplayWnd__UpdateStrings_x                          0x1405232D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14055EEE0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14044C240

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x140523110

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015EF30

// CLabel
#define CLabel__UpdateText_x                                       0x14045DBB0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405D8D10
#define CListWnd__dCListWnd_x                                      0x1405D9150
#define CListWnd__vftable_x                                        0x140AF2E60
#define CListWnd__AddColumn_x                                      0x1405D97E0
#define CListWnd__AddColumn1_x                                     0x1405D9880
#define CListWnd__AddLine_x                                        0x1405D99E0
#define CListWnd__AddString_x                                      0x1405D9F80
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405DA4F0
#define CListWnd__CalculateVSBRange_x                              0x1405DA7D0
#define CListWnd__ClearSel_x                                       0x1405DA970
#define CListWnd__ClearAllSel_x                                    0x1405DA910
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405DA9D0
#define CListWnd__Compare_x                                        0x1405DAB90
#define CListWnd__Draw_x                                           0x1405DB050
#define CListWnd__DrawColumnSeparators_x                           0x1405DBBE0
#define CListWnd__DrawHeader_x                                     0x1405DBCA0
#define CListWnd__DrawItem_x                                       0x1405DC370
#define CListWnd__DrawLine_x                                       0x1405DCD10
#define CListWnd__DrawSeparator_x                                  0x1405DD1D0
#define CListWnd__EnableLine_x                                     0x1405DD5F0
#define CListWnd__EnsureVisible_x                                  0x1405DD650
#define CListWnd__ExtendSel_x                                      0x1405DD750
#define CListWnd__GetColumnMinWidth_x                              0x1405DDAE0
#define CListWnd__GetColumnWidth_x                                 0x1405DDB60
#define CListWnd__GetCurSel_x                                      0x1405DDC60
#define CListWnd__GetItemData_x                                    0x1405DDFE0
#define CListWnd__GetItemHeight_x                                  0x1405DE020
#define CListWnd__GetItemRect_x                                    0x1405DE250
#define CListWnd__GetItemText_x                                    0x1405DE4F0
#define CListWnd__GetSelList_x                                     0x1405DE750
#define CListWnd__GetSeparatorRect_x                               0x1405DE940
#define CListWnd__InsertLine_x                                     0x1405DFDA0
#define CListWnd__RemoveLine_x                                     0x1405E0410
#define CListWnd__SetColors_x                                      0x1405E07D0
#define CListWnd__SetColumnJustification_x                         0x1405E07F0
#define CListWnd__SetColumnLabel_x                                 0x1405E0870
#define CListWnd__SetColumnWidth_x                                 0x1405E0A10
#define CListWnd__SetCurSel_x                                      0x1405E0AE0
#define CListWnd__SetItemColor_x                                   0x1405E0D50
#define CListWnd__SetItemData_x                                    0x1405E0DF0
#define CListWnd__SetItemText_x                                    0x1405E1030
#define CListWnd__Sort_x                                           0x1405E1440
#define CListWnd__ToggleSel_x                                      0x1405E15B0
#define CListWnd__SetColumnsSizable_x                              0x1405E0A60
#define CListWnd__SetItemWnd_x                                     0x1405E1160
#define CListWnd__GetItemWnd_x                                     0x1405DE6E0
#define CListWnd__SetItemIcon_x                                    0x1405E0E30
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405DA2C0
#define CListWnd__SetVScrollPos_x                                  0x1405E13A0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140471590

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A578A8
#define MapViewMap__Clear_x                                        0x140473250
#define MapViewMap__SetZoom_x                                      0x1404796F0
#define MapViewMap__HandleLButtonDown_x                            0x1404761F0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14049B960  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A22E0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A2AC0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404A63F0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404A56F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404AA8D0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14069DBD0
#define CPacketScrambler__hton_x                                   0x14069DBC0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1406026B0
#define CSidlManagerBase__FindAnimation1_x                         0x1406025F0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140602CF0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140602A90
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1406019F0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140601980
#define CSidlManagerBase__CreateXWnd_x                             0x140600FE0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140514350
#define CSidlManager__CreateXWnd_x                                 0x140514510

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405C6720
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405C6840
#define CSidlScreenWnd__ConvertToRes_x                             0x1406119D0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405C69B0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405C5EE0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405C5FB0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405C6220
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405C70A0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405C72D0
#define CSidlScreenWnd__GetChildItem_x                             0x1405C7470
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405C76C0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405D18C0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405C7A30
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405C7DA0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405C8670
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405C9070
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F5CE98
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C96F0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C9EF0
#define CSidlScreenWnd__vftable_x                                  0x140AF20E8
#define CSidlScreenWnd__WndNotification_x                          0x1405C9F40

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140342A60 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140342D90 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140342CC0
#define CSkillMgr__IsActivatedSkill_x                              0x140343150
#define CSkillMgr__IsCombatSkill_x                                 0x140343190
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403430C0
#define CSkillMgr__GetSkillLastUsed_x                              0x140342D10

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405E1F20
#define CSliderWnd__SetValue_x                                     0x1405E2730
#define CSliderWnd__SetNumTicks_x                                  0x1405E25B0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14051AC30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405E6EE0
#define CStmlWnd__CalculateHSBRange_x                              0x1405D1290
#define CStmlWnd__CalculateVSBRange_x                              0x1405E7DF0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405E8880
#define CStmlWnd__ForceParseNow_x                                  0x1405E8920
#define CStmlWnd__GetVisibleText_x                                 0x1405E8FF0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405EAD80
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405EADC0
#define CStmlWnd__SetSTMLText_x                                    0x1405F1E50
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405F2000
#define CStmlWnd__UpdateHistoryString_x                            0x1405F23A0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405E2B00
#define CTabWnd__DrawCurrentPage_x                                 0x1405E2BA0
#define CTabWnd__DrawTab_x                                         0x1405E2F70
#define CTabWnd__GetTabRect_x                                      0x1405E35F0
#define CTabWnd__InsertPage_x                                      0x1405E38C0
#define CTabWnd__RemovePage_x                                      0x1405E3B50
#define CTabWnd__SetPage_x                                         0x1405E3CB0
#define CTabWnd__UpdatePage_x                                      0x1405E3FB0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14060BA70
#define CPageWnd__SetTabText_x                                     0x14060BAE0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C3DB0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C41E0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F9A50
#define CTextureFont__DrawWrappedText1_x                           0x1405F9950
#define CTextureFont__DrawWrappedText2_x                           0x1405F9B80
#define CTextureFont__GetTextExtent_x                              0x1405F9F30
#define CTextureFont__GetHeight_x                                  0x1405F9EF0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1406100F0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405C3330

// CXStr
#define CXStr__gFreeLists_x                                        0x140D8C060
#define CXStr__gCXStrAccess_x                                      0x140F5C9F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405CC900
#define CXWnd__ClrFocus_x                                          0x1405CCBF0
#define CXWnd__Destroy_x                                           0x1405CCD70
#define CXWnd__DoAllDrawing_x                                      0x1405CCE70
#define CXWnd__DrawColoredRect_x                                   0x1405CD640
#define CXWnd__DrawTooltip_x                                       0x1405CECC0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405CED80
#define CXWnd__GetChildItem_x                                      0x1405CF690
#define CXWnd__GetChildWndAt_x                                     0x1405CF750
#define CXWnd__GetClientRect_x                                     0x1405CFA00
#define CXWnd__GetClientClipRect_x                                 0x1405CF8C0
#define CXWnd__GetRelativeRect_x                                   0x1405D13C0
#define CXWnd__GetScreenClipRect_x                                 0x1405D14D0
#define CXWnd__GetScreenRect_x                                     0x1405D1640
#define CXWnd__GetTooltipRect_x                                    0x1405D17C0
#define CXWnd__IsActive_x                                          0x1405D1D80
#define CXWnd__IsDescendantOf_x                                    0x1405D1DB0
#define CXWnd__IsReallyVisible_x                                   0x1405D1E20
#define CXWnd__IsType_x                                            0x1405D1E70
#define CXWnd__Minimize_x                                          0x1405D1F70
#define CXWnd__ProcessTransition_x                                 0x1405D2E70
#define CXWnd__Resize_x                                            0x1405D2F90
#define CXWnd__Right_x                                             0x1405D3030
#define CXWnd__SetFocus_x                                          0x1405D33F0
#define CXWnd__SetFont_x                                           0x1405D3440
#define CXWnd__SetKeyTooltip_x                                     0x1405D3540
#define CXWnd__SetMouseOver_x                                      0x1405D3690
#define CXWnd__SetParent_x                                         0x1405D3710
#define CXWnd__StartFade_x                                         0x1405D3B50
#define CXWnd__vftable_x                                           0x140AF26C0
#define CXWnd__CXWnd_x                                             0x1405CB4E0
#define CXWnd__dCXWnd_x                                            0x1405CBE30

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140616E20

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405F3CC0
#define CXWndManager__DrawCursor_x                                 0x1405F3FA0
#define CXWndManager__DrawWindows_x                                0x1405F4200
#define CXWndManager__GetKeyboardFlags_x                           0x1405F4870
#define CXWndManager__HandleKeyboardMsg_x                          0x1405F48B0
#define CXWndManager__RemoveWnd_x                                  0x1405F80D0

// CDBStr
#define CDBStr__GetString_x                                        0x140198490

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406A7C10

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D8F90
#define CCharacterListWnd__EnterWorld_x                            0x1400D7D90
#define CCharacterListWnd__Quit_x                                  0x1400D8F70
#define CCharacterListWnd__UpdateList_x                            0x1400D9CD0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406744D0
#define ItemBase__CreateItemTagString_x                            0x140674F60
#define ItemBase__GetImageNum_x                                    0x1406776B0
#define ItemBase__GetItemValue_x                                   0x140679270
#define ItemBase__IsEmpty_x                                        0x14067B000
#define ItemBase__IsKeyRingItem_x                                  0x14067B790
#define ItemBase__ValueSellMerchant_x                              0x14067FA10
#define ItemClient__CanDrop_x                                      0x1402C8A30
#define ItemClient__CanGoInBag_x                                   0x1402C8B70
#define ItemClient__CreateItemClient_x                             0x1402C8E00
#define ItemClient__dItemClient_x                                  0x1402C88A0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B8340
#define EQ_LoadingS__Array_x                                       0x140D782B0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14068BB90
#define PcBase__GetCombatAbility_x                                 0x14068C420
#define PcBase__GetCombatAbilityTimer_x                            0x14068C500
#define PcBase__GetItemContainedRealEstateIds_x                    0x14068CD20
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14068D7F0
#define PcClient__AlertInventoryChanged_x                          0x1402EC030
#define PcClient__GetConLevel_x                                    0x1402EC780  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402EEE80
#define PcClient__HasLoreItem_x                                    0x1402EFF60
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FC980
#define PcZoneClient__RemoveMyAffect_x                             0x1402FFEF0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022EA90
#define EQGroundItemListManager__Add_x                             0x14022EC40
#define EQGroundItemListManager__Clear_x                           0x14022ECE0
#define EQGroundItemListManager__Delete_x                          0x14022EDA0
#define EQGroundItemListManager__Instance_x                        0x14022EE30

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14026AD90

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140192BE0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406605B0
#define PlayerBase__CanSee1_x                                      0x140660690
#define PlayerBase__GetVisibilityLineSegment_x                     0x140660B80
#define PlayerBase__HasProperty_x                                  0x140660D60
#define PlayerBase__IsTargetable_x                                 0x140660E20
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030DDC0
#define PlayerClient__GetPcClient_x                                0x1403108E0
#define PlayerClient__PlayerClient_x                               0x140306040
#define PlayerClient__SetNameSpriteState_x                         0x140314010
#define PlayerClient__SetNameSpriteTint_x                          0x140314FD0
#define PlayerZoneClient__ChangeHeight_x                           0x140323D20
#define PlayerZoneClient__DoAttack_x                               0x140324A30
#define PlayerZoneClient__GetLevel_x                               0x140328150
#define PlayerZoneClient__IsValidTeleport_x                        0x14026DB00
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6980

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031D1D0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14031D280  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031D380
#define PlayerManagerClient__CreatePlayer_x                        0x14031CC90
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406600E0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CE070
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CD980
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CD9F0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CE000  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402CE190
#define KeypressHandler__HandleKeyUp_x                             0x1402CE2B0
#define KeypressHandler__SaveKeymapping_x                          0x1402CDE80  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406A5710  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14069FCE0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F60F0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402FAA30
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FDA60
#define PcZoneClient__RemovePetEffect_x                            0x1403001D0
#define PcZoneClient__HasAlternateAbility_x                        0x1402FE6B0
#define PcZoneClient__CanEquipItem_x                               0x1402F8D40
#define PcZoneClient__GetItemByID_x                                0x1402FBA00
#define PcZoneClient__RemoveBuffEffect_x                           0x1402FFD80
#define PcZoneClient__BandolierSwap_x                              0x1402EC0E0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140272620

// IconCache
#define IconCache__GetIcon_x                                       0x1403E06E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D4990
#define CContainerMgr__CloseContainer_x                            0x1403D42B0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D4D30

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404D7560

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402BFFD0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140465120
#define CLootWnd__RequestLootSlot_x                                0x140466170

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E8D10
#define EQ_Spell__SpellAffects_x                                   0x1401EA140
#define EQ_Spell__SpellAffectBase_x                                0x1401EA0A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E22F0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E22A0
#define EQ_Spell__IsSPAStacking_x                                  0x1401E9DB0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E9960
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E9220

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C93A0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140535360
#define CTargetWnd__RefreshTargetBuffs_x                           0x140534A80
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140534280

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14053CC10  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018F670
#define CTaskManager__GetTaskStatus_x                              0x14018F780
#define CTaskManager__GetElementDescription_x                      0x14018F300

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E6F90
#define EqSoundManager__PlayScriptMp3_x                            0x1401E5D40
#define EqSoundManager__SoundAssistPlay_x                          0x140347E40  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140348180  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405D4910
#define CTextureAnimation__SetCurCell_x                            0x1405D4C20

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BE1C0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406BEBB0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406BEC30
#define CharacterBase__IsExpansionFlag_x                           0x14020D4A0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403AEC20
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403AF670
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403B0C30

// messages
#define msg_spell_worn_off_x                                       0x140224BA0
#define msg_new_text_x                                             0x140220380
#define __msgTokenTextParam_x                                      0x140217610
#define msgTokenText_x                                             0x140217520

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140349B80
#define SpellManager__GetSpellByGroupAndRank_x                     0x140349A80

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14066FC00

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14045E340

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D97F0
#define CCursorAttachment__IsOkToActivate_x                        0x1403DCC70
#define CCursorAttachment__RemoveAttachment_x                      0x1403DCF20
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14060E550
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14060E750
#define CEQSuiteTextureLoader__GetTexture_x                        0x14060E760

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140159810
#define CFindItemWnd__Update_x                                     0x14015A1D0
#define CFindItemWnd__PickupSelectedItem_x                         0x140152DC0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140164410
#define LootFiltersManager__GetItemFilterData_x                    0x140164F40
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401657F0
#define LootFiltersManager__SetItemLootFilter_x                    0x140165AA0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404B9360

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403425A0
#define CResolutionHandler__UpdateResolution_x                     0x1405B8E80

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403D0AD0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406C2EF0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406C2DE0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403FAE90
#define CGroupWnd__UpdateDisplay_x                                 0x1403FA020

// ItemBase
#define ItemBase__IsLore_x                                         0x14067B8D0
#define ItemBase__IsLoreEquipped_x                                 0x14067B960

#define MultipleItemMoveManager__ProcessMove_x                     0x1402E1B60

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14026AED0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14026AE60
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14026AEA0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033C7C0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012F740
#define FactionManagerClient__HandleFactionMessage_x               0x14012FB20
#define FactionManagerClient__GetFactionStanding_x                 0x14012EF10
#define FactionManagerClient__GetMaxFaction_x                      0x14012EF10
#define FactionManagerClient__GetMinFaction_x                      0x14012EDC0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B60D0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14013B1D0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C15E0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C0770
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C1400  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C1380  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14034EED0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405CA580

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008AAB0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1403607F0

// AchievementManager
#define AchievementManager__Instance_x                             0x140093FE0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406A87A0
#define FreeToPlayClient__RestrictionInfo_x                        0x140B07270

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14056C300

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14085BA58
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072FB0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073140
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400732F0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
