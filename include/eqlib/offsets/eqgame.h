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

#define __ClientDate                                               20260911u
#define __ExpectedVersionDate                                     "Sep 11 2026"
#define __ExpectedVersionTime                                     "10:18:02"
#define __ActualVersionDate_x                                      0x140994DD8
#define __ActualVersionTime_x                                      0x140994DC8
#define __ActualVersionBuild_x                                     0x1408598B0

// Memory Protection
#define __MemChecker0_x                                            0x1402D47B0
#define __MemChecker1_x                                            0x1405B03C0
#define __MemChecker4_x                                            0x1402A19D0
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
#define __Mouse_x                                                  0x140F36774
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
#define __compress_block_x                                         0x140565EF0
#define __ConvertItemTags_x                                        0x140255BC0
#define __CleanItemTags_x                                          0x14008E750
#define __CreateCascadeMenuItems_x                                 0x14019B210
#define __decompress_block_x                                       0x1405ABA40
#define __DoesFileExist_x                                          0x1405B4430
#define __EQGetTime_x                                              0x1405B0970
#define __ExecuteCmd_x                                             0x140229FB0
#define __FixHeading_x                                             0x14066DBB0
#define __FlushDxKeyboard_x                                        0x140359B70
#define __get_bearing_x                                            0x14025FAB0
#define __get_melee_range_x                                        0x14025FBA0
#define __GetAnimationCache_x                                      0x1403E06C0
#define __GetGaugeValueFromEQ_x                                    0x140524AE0
#define __GetLabelFromEQ_x                                         0x1405260D0
#define __GetXTargetType_x                                         0x1406700A0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14066DC30
#define __HelpPath_x                                               0x140F30F90   // Why?
#define __NewUIINI_x                                               0x140531B20   // Why?
#define __ProcessDeviceEvents_x                                    0x1402A1FD0
#define __ProcessGameEvents_x                                      0x140296760
#define __ProcessKeyboardEvents_x                                  0x14035B350
#define __ProcessMouseEvents_x                                     0x140297EC0
#define __SaveColors_x                                             0x1401AB3E0
#define __STMLToText_x                                             0x1405C4CC0
#define __WndProc_x                                                0x1403582C0
#define CMemoryMappedFile__SetFile_x                               0x14081B1D0
#define DrawNetStatus_x                                            0x1402E3D40
#define Util__FastTime_x                                           0x1405AFD10
#define __eq_delete_x                                              0x1406E6ED8
#define __eq_new_x                                                 0x1406E7130
#define __CopyLayout_x                                             0x1402D0B90
#define __ThrottleFrameRate_x                                      0x140285845
#define __ThrottleFrameRateEnd_x                                   0x14028584B

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14036B320
#define CAAWnd__Update_x                                           0x14036B780
#define CAAWnd__UpdateSelected_x                                   0x14036CDD0

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
#define CharacterZoneClient__Max_Endurance_x                       0x1402FEDA0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1401030E0
#define CharacterZoneClient__Max_Mana_x                            0x1402FEFC0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140103540
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E9B90
#define CharacterZoneClient__SpellDuration_x                       0x1400EA8C0
#define CharacterZoneClient__TotalEffect_x                         0x1400EBD20
#define CharacterZoneClient__UseSkill_x                            0x1401096E0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038CE90

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140397C30
#define CBarterWnd__UpdateInventoryList_x                          0x1403976A0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140393960
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403929D0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14039A6D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AF4D38

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BE010
#define CChatWindowManager__InitContextMenu_x                      0x1403BE1A0
#define CChatWindowManager__FreeChatWindow_x                       0x1403BD010
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C6520
#define CChatWindowManager__CreateChatWindow_x                     0x1403BCA40

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140111CE0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C7590
#define CChatWindow__Clear_x                                       0x1403C8590
#define CChatWindow__WndNotification_x                             0x1403C9800
#define CChatWindow__AddHistory_x                                  0x1403C80A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405F26E0
#define CContextMenu__RemoveMenuItem_x                             0x1405F2AF0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405F2AC0
#define CContextMenu__CheckMenuItem_x                              0x1405F2930
#define CContextMenu__SetMenuItem_x                                0x1405F2B10
#define CContextMenu__AddSeparator_x                               0x1405F2860

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405E4490
#define CContextMenuManager__RemoveMenu_x                          0x1405E4A70
#define CContextMenuManager__PopupMenu_x                           0x1405E47B0
#define CContextMenuManager__Flush_x                               0x1405E4510
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D7F70

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406C1BE0
#define CChatService__GetFriendName_x                              0x1406C1BF0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405D5380
#define CComboWnd__Draw_x                                          0x1405D5480
#define CComboWnd__GetCurChoice_x                                  0x1405D5770  // unused
#define CComboWnd__GetListRect_x                                   0x1405D5810
#define CComboWnd__InsertChoice_x                                  0x1405D5B50
#define CComboWnd__SetColors_x                                     0x1405D5EE0
#define CComboWnd__SetChoice_x                                     0x1405D5EA0
#define CComboWnd__GetItemCount_x                                  0x1405D5800
#define CComboWnd__GetCurChoiceText_x                              0x1405D57B0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405D5740
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405D5C10

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D5C50
#define CContainerWnd__SetContainer_x                              0x140435CA0
#define CContainerWnd__vftable_x                                   0x140A09E00

// CDisplay
#define CDisplay__cameraType_x                                     0x140E03144
#define CDisplay__ZoneMainUI_x                                     0x14060D1F0
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
#define CEditBaseWnd__SetSel_x                                     0x1406176A0
#define CEditWnd__DrawCaret_x                                      0x140608E10  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140609330
#define CEditWnd__GetCaretPt_x                                     0x1406095D0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140609610
#define CEditWnd__GetDisplayString_x                               0x140609870
#define CEditWnd__GetHorzOffset_x                                  0x140609AC0
#define CEditWnd__GetLineForPrintableChar_x                        0x140609C20
#define CEditWnd__GetSelStartPt_x                                  0x140609F10  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140609D50
#define CEditWnd__PointFromPrintableChar_x                         0x14060AAD0
#define CEditWnd__ReplaceSelection_x                               0x14060AE90
#define CEditWnd__SelectableCharFromPoint_x                        0x14060B350
#define CEditWnd__SetEditable_x                                    0x14060B5F0
#define CEditWnd__SetWindowText_x                                  0x14060B620

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140286920
#define CEverQuest__ClickedPlayer_x                                0x140279980
#define CEverQuest__CreateTargetIndicator_x                        0x14027A280
#define CEverQuest__DoTellWindow_x                                 0x1401119E0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401122D0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140288330
#define CEverQuest__dsp_chat_x                                     0x140111410 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402B3C00
#define CEverQuest__Emote_x                                        0x140288CC0
#define CEverQuest__GetBodyTypeDesc_x                              0x140289AA0
#define CEverQuest__GetClassDesc_x                                 0x140289B00
#define CEverQuest__GetClassThreeLetterCode_x                      0x140289ED0
#define CEverQuest__GetDeityDesc_x                                 0x14028A170
#define CEverQuest__GetLangDesc_x                                  0x14028A5A0
#define CEverQuest__GetRaceDesc_x                                  0x14028A940
#define CEverQuest__InterpretCmd_x                                 0x14028C580
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402A2040
#define CEverQuest__LMouseUp_x                                     0x14028E090
#define CEverQuest__RightClickedOnPlayer_x                         0x14029F3E0
#define CEverQuest__RMouseUp_x                                     0x140298A90
#define CEverQuest__SetGameState_x                                 0x1402A4B80
#define CEverQuest__UPCNotificationFlush_x                         0x1402AA580 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14028DC70
#define CEverQuest__ReportSuccessfulHeal_x                         0x140299E80
#define CEverQuest__ReportSuccessfulHit_x                          0x14029AC90

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403EB8A0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400CA890
#define CGuild__GetGuildName_x                                     0x1400CA8D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1404126F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C6210
#define CHotButton__SetCheck_x                                     0x1402C64E0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14042C7D0
#define CInvSlotMgr__MoveItem_x                                    0x14042D360
#define CInvSlotMgr__SelectSlot_x                                  0x14042F690

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1404293F0
#define CInvSlot__SliderComplete_x                                 0x14042ADC0
#define CInvSlot__GetItemBase_x                                    0x140424990
#define CInvSlot__UpdateItem_x                                     0x14042B290

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140431B50

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140453300
#define CItemDisplayWnd__UpdateStrings_x                           0x140456510
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14044FBD0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140451500
#define CItemDisplayWnd__RequestConvertItem_x                      0x140452720

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140521550
#define CSpellDisplayWnd__UpdateStrings_x                          0x1405232E0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14055EEF0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14044C250

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x140523120

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015EF30

// CLabel
#define CLabel__UpdateText_x                                       0x14045DBC0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405D8D20
#define CListWnd__dCListWnd_x                                      0x1405D9160
#define CListWnd__vftable_x                                        0x140AF2E60
#define CListWnd__AddColumn_x                                      0x1405D97F0
#define CListWnd__AddColumn1_x                                     0x1405D9890
#define CListWnd__AddLine_x                                        0x1405D99F0
#define CListWnd__AddString_x                                      0x1405D9F90
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405DA500
#define CListWnd__CalculateVSBRange_x                              0x1405DA7E0
#define CListWnd__ClearSel_x                                       0x1405DA980
#define CListWnd__ClearAllSel_x                                    0x1405DA920
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405DA9E0
#define CListWnd__Compare_x                                        0x1405DABA0
#define CListWnd__Draw_x                                           0x1405DB060
#define CListWnd__DrawColumnSeparators_x                           0x1405DBBF0
#define CListWnd__DrawHeader_x                                     0x1405DBCB0
#define CListWnd__DrawItem_x                                       0x1405DC380
#define CListWnd__DrawLine_x                                       0x1405DCD20
#define CListWnd__DrawSeparator_x                                  0x1405DD1E0
#define CListWnd__EnableLine_x                                     0x1405DD600
#define CListWnd__EnsureVisible_x                                  0x1405DD660
#define CListWnd__ExtendSel_x                                      0x1405DD760
#define CListWnd__GetColumnMinWidth_x                              0x1405DDAF0
#define CListWnd__GetColumnWidth_x                                 0x1405DDB70
#define CListWnd__GetCurSel_x                                      0x1405DDC70
#define CListWnd__GetItemData_x                                    0x1405DDFF0
#define CListWnd__GetItemHeight_x                                  0x1405DE030
#define CListWnd__GetItemRect_x                                    0x1405DE260
#define CListWnd__GetItemText_x                                    0x1405DE500
#define CListWnd__GetSelList_x                                     0x1405DE760
#define CListWnd__GetSeparatorRect_x                               0x1405DE950
#define CListWnd__InsertLine_x                                     0x1405DFDB0
#define CListWnd__RemoveLine_x                                     0x1405E0420
#define CListWnd__SetColors_x                                      0x1405E07E0
#define CListWnd__SetColumnJustification_x                         0x1405E0800
#define CListWnd__SetColumnLabel_x                                 0x1405E0880
#define CListWnd__SetColumnWidth_x                                 0x1405E0A20
#define CListWnd__SetCurSel_x                                      0x1405E0AF0
#define CListWnd__SetItemColor_x                                   0x1405E0D60
#define CListWnd__SetItemData_x                                    0x1405E0E00
#define CListWnd__SetItemText_x                                    0x1405E1040
#define CListWnd__Sort_x                                           0x1405E1450
#define CListWnd__ToggleSel_x                                      0x1405E15C0
#define CListWnd__SetColumnsSizable_x                              0x1405E0A70
#define CListWnd__SetItemWnd_x                                     0x1405E1170
#define CListWnd__GetItemWnd_x                                     0x1405DE6F0
#define CListWnd__SetItemIcon_x                                    0x1405E0E40
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405DA2D0
#define CListWnd__SetVScrollPos_x                                  0x1405E13B0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404715A0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A578A8
#define MapViewMap__Clear_x                                        0x140473260
#define MapViewMap__SetZoom_x                                      0x140479700
#define MapViewMap__HandleLButtonDown_x                            0x140476200

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14049B970  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A22F0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A2AD0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404A6400
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404A5700
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404AA8E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14069E450
#define CPacketScrambler__hton_x                                   0x14069E440

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1406026C0
#define CSidlManagerBase__FindAnimation1_x                         0x140602600
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140602D00
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140602AA0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140601A00
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140601990
#define CSidlManagerBase__CreateXWnd_x                             0x140600FF0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140514360
#define CSidlManager__CreateXWnd_x                                 0x140514520

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405C6730
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405C6850
#define CSidlScreenWnd__ConvertToRes_x                             0x1406119E0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405C69C0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405C5EF0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405C5FC0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405C6230
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405C70B0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405C72E0
#define CSidlScreenWnd__GetChildItem_x                             0x1405C7480
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405C76D0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405D18D0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405C7A40
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405C7DB0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405C8680
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405C9080
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F5CE98
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C9700
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C9F00
#define CSidlScreenWnd__vftable_x                                  0x140AF20E8
#define CSidlScreenWnd__WndNotification_x                          0x1405C9F50

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140342A70 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140342DA0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140342CD0
#define CSkillMgr__IsActivatedSkill_x                              0x140343160
#define CSkillMgr__IsCombatSkill_x                                 0x1403431A0
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403430D0
#define CSkillMgr__GetSkillLastUsed_x                              0x140342D20

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405E1F30
#define CSliderWnd__SetValue_x                                     0x1405E2740
#define CSliderWnd__SetNumTicks_x                                  0x1405E25C0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14051AC40

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405E6EF0
#define CStmlWnd__CalculateHSBRange_x                              0x1405E7D80
#define CStmlWnd__CalculateVSBRange_x                              0x1405E7E00
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405E8890
#define CStmlWnd__ForceParseNow_x                                  0x1405E8930
#define CStmlWnd__GetVisibleText_x                                 0x1405E9000
#define CStmlWnd__MakeStmlColorTag_x                               0x1405EAD90
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405EADD0
#define CStmlWnd__SetSTMLText_x                                    0x1405F1E60
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405F2010
#define CStmlWnd__UpdateHistoryString_x                            0x1405F23B0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405E2B10
#define CTabWnd__DrawCurrentPage_x                                 0x1405E2BB0
#define CTabWnd__DrawTab_x                                         0x1405E2F80
#define CTabWnd__GetTabRect_x                                      0x1405E3600
#define CTabWnd__InsertPage_x                                      0x1405E38D0
#define CTabWnd__RemovePage_x                                      0x1405E3B60
#define CTabWnd__SetPage_x                                         0x1405E3CC0
#define CTabWnd__UpdatePage_x                                      0x1405E3FC0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14060BA80
#define CPageWnd__SetTabText_x                                     0x14060BAF0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C3DB0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C41E0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F9A60
#define CTextureFont__DrawWrappedText1_x                           0x1405F9960
#define CTextureFont__DrawWrappedText2_x                           0x1405F9B90
#define CTextureFont__GetTextExtent_x                              0x1405F9F40
#define CTextureFont__GetHeight_x                                  0x1405F9F00

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140610100

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405C3340

// CXStr
#define CXStr__gFreeLists_x                                        0x140D8C060
#define CXStr__gCXStrAccess_x                                      0x140F5C9F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405CC910
#define CXWnd__ClrFocus_x                                          0x1405CCC00
#define CXWnd__Destroy_x                                           0x1405CCD80
#define CXWnd__DoAllDrawing_x                                      0x1405CCE80
#define CXWnd__DrawColoredRect_x                                   0x1405CD650
#define CXWnd__DrawTooltip_x                                       0x1405CECD0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405CED90
#define CXWnd__GetChildItem_x                                      0x1405CF6A0
#define CXWnd__GetChildWndAt_x                                     0x1405CF760
#define CXWnd__GetClientRect_x                                     0x1405CFA10
#define CXWnd__GetClientClipRect_x                                 0x1405CF8D0
#define CXWnd__GetRelativeRect_x                                   0x1405D13D0
#define CXWnd__GetScreenClipRect_x                                 0x1405D14E0
#define CXWnd__GetScreenRect_x                                     0x1405D1650
#define CXWnd__GetTooltipRect_x                                    0x1405D17D0
#define CXWnd__IsActive_x                                          0x1405D1D90
#define CXWnd__IsDescendantOf_x                                    0x1405D1DC0
#define CXWnd__IsReallyVisible_x                                   0x1405D1E30
#define CXWnd__IsType_x                                            0x1405D1E80
#define CXWnd__Minimize_x                                          0x1405D1F80
#define CXWnd__ProcessTransition_x                                 0x1405D2E80
#define CXWnd__Resize_x                                            0x1405D2FA0
#define CXWnd__Right_x                                             0x1405D3040
#define CXWnd__SetFocus_x                                          0x1405D3400
#define CXWnd__SetFont_x                                           0x1405D3450
#define CXWnd__SetKeyTooltip_x                                     0x1405D3550
#define CXWnd__SetMouseOver_x                                      0x1405D36A0
#define CXWnd__SetParent_x                                         0x1405D3720
#define CXWnd__StartFade_x                                         0x1405D3B60
#define CXWnd__vftable_x                                           0x140AF26C0
#define CXWnd__CXWnd_x                                             0x1405CB4F0
#define CXWnd__dCXWnd_x                                            0x1405CBE40

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140616E30

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405F3CD0
#define CXWndManager__DrawCursor_x                                 0x1405F3FB0
#define CXWndManager__DrawWindows_x                                0x1405F4210
#define CXWndManager__GetKeyboardFlags_x                           0x1405F4880
#define CXWndManager__HandleKeyboardMsg_x                          0x1405F48C0
#define CXWndManager__RemoveWnd_x                                  0x1405F80E0

// CDBStr
#define CDBStr__GetString_x                                        0x140198490

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406A8490

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D8F90
#define CCharacterListWnd__EnterWorld_x                            0x1400D7D90
#define CCharacterListWnd__Quit_x                                  0x1400D8F70
#define CCharacterListWnd__UpdateList_x                            0x1400D9CD0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140674D50
#define ItemBase__CreateItemTagString_x                            0x1406757E0
#define ItemBase__GetImageNum_x                                    0x140677F30
#define ItemBase__GetItemValue_x                                   0x140679AF0
#define ItemBase__IsEmpty_x                                        0x14067B880
#define ItemBase__IsKeyRingItem_x                                  0x14067C010
#define ItemBase__ValueSellMerchant_x                              0x140680290
#define ItemClient__CanDrop_x                                      0x1402C8A40
#define ItemClient__CanGoInBag_x                                   0x1402C8B80
#define ItemClient__CreateItemClient_x                             0x1402C8E10
#define ItemClient__dItemClient_x                                  0x1402C88B0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B8340
#define EQ_LoadingS__Array_x                                       0x140D782B0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14068C410
#define PcBase__GetCombatAbility_x                                 0x14068CCA0
#define PcBase__GetCombatAbilityTimer_x                            0x14068CD80
#define PcBase__GetItemContainedRealEstateIds_x                    0x14068D5A0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14068E070
#define PcClient__AlertInventoryChanged_x                          0x1402EC040
#define PcClient__GetConLevel_x                                    0x1402EC790  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402EEE90
#define PcClient__HasLoreItem_x                                    0x1402EFF70
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FC990
#define PcZoneClient__RemoveMyAffect_x                             0x1402FFF00

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
#define PlayerBase__CanSee_x                                       0x1406605C0
#define PlayerBase__CanSee1_x                                      0x1406606A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140660B90
#define PlayerBase__HasProperty_x                                  0x140660D70
#define PlayerBase__IsTargetable_x                                 0x140660E30
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030DDD0
#define PlayerClient__GetPcClient_x                                0x1403108F0
#define PlayerClient__PlayerClient_x                               0x140306050
#define PlayerClient__SetNameSpriteState_x                         0x140314020
#define PlayerClient__SetNameSpriteTint_x                          0x140314FE0
#define PlayerZoneClient__ChangeHeight_x                           0x140323D30
#define PlayerZoneClient__DoAttack_x                               0x140324A40
#define PlayerZoneClient__GetLevel_x                               0x140328160
#define PlayerZoneClient__IsValidTeleport_x                        0x14026DB00
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6980

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031D1E0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14031D290  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031D390
#define PlayerManagerClient__CreatePlayer_x                        0x14031CCA0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406600F0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CE080
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CD990
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CDA00
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CE010  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402CE1A0
#define KeypressHandler__HandleKeyUp_x                             0x1402CE2C0
#define KeypressHandler__SaveKeymapping_x                          0x1402CDE90  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406A5F90  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406A0560

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F6100  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402FAA40
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FDA70
#define PcZoneClient__RemovePetEffect_x                            0x1403001E0
#define PcZoneClient__HasAlternateAbility_x                        0x1402FE6C0
#define PcZoneClient__CanEquipItem_x                               0x1402F8D50
#define PcZoneClient__GetItemByID_x                                0x1402FBA10
#define PcZoneClient__RemoveBuffEffect_x                           0x1402FFD90
#define PcZoneClient__BandolierSwap_x                              0x1402EC0F0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140272620

// IconCache
#define IconCache__GetIcon_x                                       0x1403E06F0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D49A0
#define CContainerMgr__CloseContainer_x                            0x1403D42C0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D4D40

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404D7570

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402BFFE0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140465130
#define CLootWnd__RequestLootSlot_x                                0x140466180

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
#define CTargetWnd__WndNotification_x                              0x140535370
#define CTargetWnd__RefreshTargetBuffs_x                           0x140534A90
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140534290

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14053CC20  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018F670
#define CTaskManager__GetTaskStatus_x                              0x14018F780
#define CTaskManager__GetElementDescription_x                      0x14018F300

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E6F90
#define EqSoundManager__PlayScriptMp3_x                            0x1401E5D40
#define EqSoundManager__SoundAssistPlay_x                          0x140347E50  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140348190  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405D4920
#define CTextureAnimation__SetCurCell_x                            0x1405D4C30

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BE1D0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406BF430
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406BF4B0
#define CharacterBase__IsExpansionFlag_x                           0x14020D4A0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403AEC30
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403AF680
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403B0C40

// messages
#define msg_spell_worn_off_x                                       0x140224BA0
#define msg_new_text_x                                             0x140220380
#define __msgTokenTextParam_x                                      0x140217610
#define msgTokenText_x                                             0x140217520

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140349B90
#define SpellManager__GetSpellByGroupAndRank_x                     0x140349A90

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140670480

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14045E350

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D9800
#define CCursorAttachment__IsOkToActivate_x                        0x1403DCC80
#define CCursorAttachment__RemoveAttachment_x                      0x1403DCF30
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14060E560
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14060E760
#define CEQSuiteTextureLoader__GetTexture_x                        0x14060E770

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
#define COptionsWnd__FillChatFilterList_x                          0x1404B9370

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403425B0
#define CResolutionHandler__UpdateResolution_x                     0x1405B8E90

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403D0AE0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406C3770  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406C3660  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403FAEA0
#define CGroupWnd__UpdateDisplay_x                                 0x1403FA030

// ItemBase
#define ItemBase__IsLore_x                                         0x14067C150
#define ItemBase__IsLoreEquipped_x                                 0x14067C1E0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402E1B70

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14026AED0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14026AE60
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14026AEA0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033C7D0

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
#define CTargetManager__Get_x                                      0x14034EEE0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405CA590

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008AAB0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140360800

// AchievementManager
#define AchievementManager__Instance_x                             0x140093FE0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406A9020
#define FreeToPlayClient__RestrictionInfo_x                        0x140B07270

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14056C310

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14085BA58
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072FB0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073140
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400732F0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
