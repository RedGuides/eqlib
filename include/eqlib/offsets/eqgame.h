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

#define __ClientDate                                               20260623u
#define __ExpectedVersionDate                                      "Jun 23 2026"
#define __ExpectedVersionTime                                      "19:18:37"
#define __ActualVersionDate_x                                      0x14098F338
#define __ActualVersionTime_x                                      0x14098F328
#define __ActualVersionBuild_x                                     0x1409244F0

// Memory Protection
#define __MemChecker0_x                                            0x1402CF850
#define __MemChecker1_x                                            0x1405A9AA0
#define __MemChecker4_x                                            0x14029CB00
#define __EncryptPad0_x                                            0x140D6CC40

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EB55E0
#define instEQZoneInfo_x                                           0x140EB57D4

// Misc Globals
#define __do_loot_x                                                0x14022F380
#define __gfMaxZoomCameraDistance_x                                0x1409257A8
#define __gfMaxCameraDistance_x                                    0x140ACF284
#define __CurrentSocial_x                                          0x140C210E4
#define __BindList_x                                               0x140D60970
#define g_eqCommandStates_x                                        0x140D61A10
#define __CommandList_x                                            0x140D61C50
#define __ScreenMode_x                                             0x140DFCE64
#define __gWorld_x                                                 0x140EADF10
#define __gpbCommandEvent_x                                        0x140EAE008
#define __ServerHost_x                                             0x140EAE1F8
#define __Guilds_x                                                 0x140EB4190
#define __MemCheckBitmask_x                                        0x140EB5B23
#define __MemCheckActive_x                                         0x140EB723D
#define __MouseEventTime_x                                         0x140F2ABB0
#define DI8__MouseState_x                                          0x140F2ED98
#define __heqmain_x                                                0x140F31228
#define DI8__Mouse_x                                               0x140F31240
#define __HWnd_x                                                   0x140F31248
#define __Mouse_x                                                  0x140F31250
#define DI8__Keyboard_x                                            0x140F31270
#define __LoginName_x                                              0x140F319DC
#define __CurrentMapLabel_x                                        0x140F45510
#define __LabelCache_x                                             0x140F460E0
#define __ChatFilterDefs_x                                         0x140A691D0
#define Teleport_Table_Size_x                                      0x140EAE094
#define Teleport_Table_x                                           0x140EAE520

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EB0520
#define pinstActiveBanker_x                                        0x140EADF38
#define pinstActiveCorpse_x                                        0x140EADF28
#define pinstActiveGMaster_x                                       0x140EADF30
#define pinstActiveMerchant_x                                      0x140EADF20
#define pinstAltAdvManager_x                                       0x140DFDD08
#define pinstCEverQuest_x                                          0x140F31288
#define pinstCamActor_x                                            0x140DFCE50
#define pinstCDBStr_x                                              0x140DFCAC0
#define pinstCDisplay_x                                            0x140EADFE8
#define pinstControlledPlayer_x                                    0x140EADFC8
#define pinstCResolutionHandler_x                                  0x140F56688
#define pinstCSidlManager_x                                        0x140F57688
#define pinstCXWndManager_x                                        0x140F57680
#define instDynamicZone_x                                          0x140EB4050
#define instExpeditionLeader_x                                     0x140EB409E
#define instExpeditionName_x                                       0x140EB40DE
#define pinstDZMember_x                                            0x140EB4168
#define pinstDZTimerInfo_x                                         0x140EB4170
#define pinstEqLogin_x                                             0x140F31320
#define instTribute_x                                              0x140D59880
#define pinstDeviceInputProxy_x                                    0x140EB563C
#define pinstEQSoundManager_x                                      0x140DFE090
#define pinstEQSpellStrings_x                                      0x140DE1640
#define pinstSGraphicsEngine_x                                     0x140F566B8
#define pinstLocalPC_x                                             0x140EADA88
#define pinstLocalPlayer_x                                         0x140EADF18
#define pinstCMercenaryClientManager_x                             0x140F2C4C8
#define pinstModelPlayer_x                                         0x140EADF48
#define pinstRenderInterface_x                                     0x140F566D0
#define pinstSkillMgr_x                                            0x140F2E1A8
#define pinstSpawnManager_x                                        0x140F2C8A8
#define pinstSpellManager_x                                        0x140F2E218
#define pinstStringTable_x                                         0x140EADA90
#define pinstSwitchManager_x                                       0x140EAD9C0
#define pinstTarget_x                                              0x140EADFC0
#define pinstTaskMember_x                                          0x140D59870
#define pinstTradeTarget_x                                         0x140EADF40
#define instTributeActive_x                                        0x140D598A9
#define pinstViewActor_x                                           0x140DFCE48
#define pinstWorldData_x                                           0x140EADA50
#define pinstPlayerPath_x                                          0x140F2C8D0
#define pinstTargetIndicator_x                                     0x140F2E2C8
#define EQObject_Top_x                                             0x140EADFF0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F42660
#define pinstCContainerMgr_x                                       0x140DFD018
#define pinstCContextMenuManager_x                                 0x140F57360
#define pinstCInvSlotMgr_x                                         0x140DFD000
#define pinstCItemDisplayManager_x                                 0x140F450E0
#define pinstCPopupWndManager_x                                    0x140F45970
#define pinstCSpellDisplayMgr_x                                    0x140F45FC0
#define pinstCTaskManager_x                                        0x140C227B0
#define pinstEQSuiteTextureLoader_x                                0x140D826F0
#define pinstItemIconCache_x                                       0x140F429C8
#define pinstLootFiltersManager_x                                  0x140DFC508
#define pinstGFViewListener_x                                      0x140F56B38


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140259D20
#define __CastRay_x                                                0x140251D80
#define __CastRay2_x                                               0x140251A70
#define __compress_block_x                                         0x14055F720
#define __ConvertItemTags_x                                        0x140252210
#define __CleanItemTags_x                                          0x14008D490
#define __CreateCascadeMenuItems_x                                 0x1401984A0
#define __decompress_block_x                                       0x1405A5290
#define __DoesFileExist_x                                          0x1405ADB10
#define __EQGetTime_x                                              0x1405AA050
#define __ExecuteCmd_x                                             0x140226820
#define __FixHeading_x                                             0x140667260
#define __FlushDxKeyboard_x                                        0x140354870
#define __get_bearing_x                                            0x14025C030
#define __get_melee_range_x                                        0x14025C120
#define __GetAnimationCache_x                                      0x1403DA230
#define __GetGaugeValueFromEQ_x                                    0x14051E500
#define __GetLabelFromEQ_x                                         0x14051FAF0
#define __GetXTargetType_x                                         0x140669750
#define __HeadingDiff_x                                            0x1406672E0
#define __HelpPath_x                                               0x140F2AA78
#define __NewUIINI_x                                               0x14052B550
#define __ProcessDeviceEvents_x                                    0x14029D100
#define __ProcessGameEvents_x                                      0x1402918C0
#define __ProcessKeyboardEvents_x                                  0x140356050
#define __ProcessMouseEvents_x                                     0x140293020
#define __SaveColors_x                                             0x1401A8610
#define __STMLToText_x                                             0x1405BE3A0
#define __WndProc_x                                                0x140353030
#define CMemoryMappedFile__SetFile_x                               0x140816430
#define DrawNetStatus_x                                            0x1402DEE20
#define Util__FastTime_x                                           0x1405A9560
#define __eq_delete_x                                              0x1406E2458
#define __eq_new_x                                                 0x1406E26B0
#define __CopyLayout_x                                             0x1402CBC30
#define __ThrottleFrameRate_x                                      0x1402809D5
#define __ThrottleFrameRateEnd_x                                   0x1402809DB

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140365EB0
#define CAAWnd__Update_x                                           0x1403661B0
#define CAAWnd__UpdateSelected_x                                   0x1403673D0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B2160
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400B1C10
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A6E60
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B2AC0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B3890
#define AltAdvManager__IsAbilityReady_x                            0x1401B3D30
#define AltAdvManager__GetAAById_x                                 0x1401B3120
#define AltAdvManager__CanTrainAbility_x                           0x1401B2F20
#define AltAdvManager__CanSeeAbility_x                             0x1401B2BD0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D9D40
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DAC00
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DAE50
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EF1F0
#define CharacterZoneClient__CanUseItem_x                          0x1400EF7B0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DB830
#define CharacterZoneClient__CastSpell_x                           0x1400DB8D0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400EB670
#define CharacterZoneClient__Cur_HP_x                              0x1400F0F40
#define CharacterZoneClient__Cur_Mana_x                            0x1400F1100
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DEBC0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F7850
#define CharacterZoneClient__GetBaseSkill_x                        0x140105DC0
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E0060
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EEAF0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F90E0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F7FD0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E01E0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CF810
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D16E0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F8700
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F0B90
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F91B0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E0260
#define CharacterZoneClient__GetManaRegen_x                        0x1400F9F70
#define CharacterZoneClient__GetModCap_x                           0x140101570
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E04F0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E06C0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D4D60
#define CharacterZoneClient__HasSkill_x                            0x1400FD0A0
#define CharacterZoneClient__HitBySpell_x                          0x1400E1130
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E4AD0
#define CharacterZoneClient__MakeMeVisible_x                       0x140101050
#define CharacterZoneClient__Max_Endurance_x                       0x1402F9D20
#define CharacterZoneClient__Max_HP_x                              0x1401013A0
#define CharacterZoneClient__Max_Mana_x                            0x1402F9F40
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140101800
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E8110
#define CharacterZoneClient__SpellDuration_x                       0x1400E8E40
#define CharacterZoneClient__TotalEffect_x                         0x1400EA2D0
#define CharacterZoneClient__UseSkill_x                            0x140106DF0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140387250

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140392080

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14038DD40
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140391AF0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403948F0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AEED10

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403B7B50
#define CChatWindowManager__InitContextMenu_x                      0x1403B7CE0
#define CChatWindowManager__FreeChatWindow_x                       0x1403B6B50
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C0060
#define CChatWindowManager__CreateChatWindow_x                     0x1403B6580

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010F3F0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C10D0
#define CChatWindow__Clear_x                                       0x1403C20D0
#define CChatWindow__WndNotification_x                             0x1403C3320
#define CChatWindow__AddHistory_x                                  0x1403C1BE0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405EBCE0
#define CContextMenu__RemoveMenuItem_x                             0x1405EC0F0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405EC0C0
#define CContextMenu__CheckMenuItem_x                              0x1405EBF30
#define CContextMenu__SetMenuItem_x                                0x1405EC110
#define CContextMenu__AddSeparator_x                               0x1405EBE60

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405DDA70
#define CContextMenuManager__RemoveMenu_x                          0x1405DE050
#define CContextMenuManager__PopupMenu_x                           0x1405DDD90
#define CContextMenuManager__Flush_x                               0x1405DDAF0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D1A90

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406BC0D0
#define CChatService__GetFriendName_x                              0x1406BC0E0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405CE980
#define CComboWnd__Draw_x                                          0x1405CEA80
#define CComboWnd__GetCurChoice_x                                  0x1405CED70
#define CComboWnd__GetListRect_x                                   0x1405CEE10
#define CComboWnd__InsertChoice_x                                  0x1405CF150
#define CComboWnd__SetColors_x                                     0x1405CF4E0
#define CComboWnd__SetChoice_x                                     0x1405CF4A0
#define CComboWnd__GetItemCount_x                                  0x1405CEE00
#define CComboWnd__GetCurChoiceText_x                              0x1405CEDB0
#define CComboWnd__GetChoiceText_x                                 0x1405CED40
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405CF210

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403CF790
#define CContainerWnd__SetContainer_x                              0x14042F7A0
#define CContainerWnd__vftable_x                                   0x140A040B0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DFCBCC
#define CDisplay__ZoneMainUI_x                                     0x140606430
#define CDisplay__PreZoneMainUI_x                                  0x1401A5350
#define CDisplay__CleanGameUI_x                                    0x140197560
#define CDisplay__GetClickedActor_x                                0x14019B780
#define CDisplay__GetUserDefinedColor_x                            0x14019C3F0
#define CDisplay__InitCharSelectUI_x                               0x14019C6A0
#define CDisplay__ReloadUI_x                                       0x1401A7810
#define CDisplay__RestartUI_x                                      0x14020AC20
#define CDisplay__WriteTextHD2_x                                   0x1401AE7B0
#define CDisplay__TrueDistance_x                                   0x1401AE450
#define CDisplay__SetViewActor_x                                   0x1401AAD40
#define CDisplay__GetFloorHeight_x                                 0x14019B9E0
#define CDisplay__ToggleScreenshotMode_x                           0x1401ADF40
#define CDisplay__RealRender_World_x                               0x1401A6BE0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1406108F0
#define CEditWnd__DrawCaret_x                                      0x1405F7450
#define CEditWnd__EnsureCaretVisible_x                             0x1406024F0
#define CEditWnd__GetCaretPt_x                                     0x140602790
#define CEditWnd__GetCharIndexPt_x                                 0x1406027D0
#define CEditWnd__GetDisplayString_x                               0x140602A30
#define CEditWnd__GetHorzOffset_x                                  0x140602C80
#define CEditWnd__GetLineForPrintableChar_x                        0x140602DE0
#define CEditWnd__GetSelStartPt_x                                  0x1406030D0
#define CEditWnd__GetSTMLSafeText_x                                0x140602F10
#define CEditWnd__PointFromPrintableChar_x                         0x140603D10
#define CEditWnd__ReplaceSelection_x                               0x1406040C0
#define CEditWnd__SelectableCharFromPoint_x                        0x140604580
#define CEditWnd__SetEditable_x                                    0x140604820
#define CEditWnd__SetWindowText_x                                  0x140604850

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140281AB0
#define CEverQuest__ClickedPlayer_x                                0x140275C60
#define CEverQuest__CreateTargetIndicator_x                        0x140276560
#define CEverQuest__DoTellWindow_x                                 0x14010F0F0
#define CEverQuest__OutputTextToLog_x                              0x14010F9E0
#define CEverQuest__DropHeldItemOnGround_x                         0x1402834A0
#define CEverQuest__dsp_chat_x                                     0x14010EB20
#define CEverQuest__trimName_x                                     0x1402AECF0
#define CEverQuest__Emote_x                                        0x140283E30
#define CEverQuest__GetBodyTypeDesc_x                              0x140284C10
#define CEverQuest__GetClassDesc_x                                 0x140284C70
#define CEverQuest__GetClassThreeLetterCode_x                      0x140285040
#define CEverQuest__GetDeityDesc_x                                 0x1402852F0
#define CEverQuest__GetLangDesc_x                                  0x140673860
#define CEverQuest__GetRaceDesc_x                                  0x140285AC0
#define CEverQuest__InterpretCmd_x                                 0x140287700
#define CEverQuest__LeftClickedOnPlayer_x                          0x14029D170
#define CEverQuest__LMouseUp_x                                     0x140289210
#define CEverQuest__RightClickedOnPlayer_x                         0x14029A510
#define CEverQuest__RMouseUp_x                                     0x140293BB0
#define CEverQuest__SetGameState_x                                 0x14029FC30
#define CEverQuest__UPCNotificationFlush_x                         0x1402A5670
#define CEverQuest__IssuePetCommand_x                              0x140288DF0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140294FA0
#define CEverQuest__ReportSuccessfulHit_x                          0x140295DC0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403E5400

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C8FB0
#define CGuild__GetGuildName_x                                     0x1400C8FF0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x14040C240

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C12B0
#define CHotButton__SetCheck_x                                     0x1402C15A0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140426400
#define CInvSlotMgr__MoveItem_x                                    0x140426FE0
#define CInvSlotMgr__SelectSlot_x                                  0x1404294B0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140423010
#define CInvSlot__SliderComplete_x                                 0x1404249E0
#define CInvSlot__GetItemBase_x                                    0x14041E4B0
#define CInvSlot__UpdateItem_x                                     0x140424EC0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14042B6C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14044CDF0
#define CItemDisplayWnd__UpdateStrings_x                           0x14044FFF0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404496D0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14044B000
#define CItemDisplayWnd__RequestConvertItem_x                      0x14044C210

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14051AF60
#define CSpellDisplayWnd__UpdateStrings_x                          0x14051CCF0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405587A0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140445D60

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x14051CB30

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015C380

// CLabel
#define CLabel__UpdateText_x                                       0x140457600

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405D2320
#define CListWnd__dCListWnd_x                                      0x1405D2760
#define CListWnd__vftable_x                                        0x140AECE60
#define CListWnd__AddColumn_x                                      0x1405D2DF0
#define CListWnd__AddColumn1_x                                     0x1405D2E90
#define CListWnd__AddLine_x                                        0x1405D2FF0
#define CListWnd__AddString_x                                      0x1405D3590
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405D3B00
#define CListWnd__CalculateVSBRange_x                              0x1405D3DE0
#define CListWnd__ClearSel_x                                       0x1405D3F80
#define CListWnd__ClearAllSel_x                                    0x1405D3F20
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405D3FE0
#define CListWnd__Compare_x                                        0x1405D41A0
#define CListWnd__Draw_x                                           0x1405D4660
#define CListWnd__DrawColumnSeparators_x                           0x1405D51F0
#define CListWnd__DrawHeader_x                                     0x1405D52B0
#define CListWnd__DrawItem_x                                       0x1405D5990
#define CListWnd__DrawLine_x                                       0x1405D6330
#define CListWnd__DrawSeparator_x                                  0x1405D67F0
#define CListWnd__EnableLine_x                                     0x1405D6C10
#define CListWnd__EnsureVisible_x                                  0x1405D6C70
#define CListWnd__ExtendSel_x                                      0x1405D6D60
#define CListWnd__GetColumnMinWidth_x                              0x1405D70F0
#define CListWnd__GetColumnWidth_x                                 0x1405D7170
#define CListWnd__GetCurSel_x                                      0x1405D7270
#define CListWnd__GetItemData_x                                    0x1405D75F0
#define CListWnd__GetItemHeight_x                                  0x1405D7630
#define CListWnd__GetItemRect_x                                    0x1405D7860
#define CListWnd__GetItemText_x                                    0x1405D7B00
#define CListWnd__GetSelList_x                                     0x1405D7D60
#define CListWnd__GetSeparatorRect_x                               0x1405D7F50
#define CListWnd__InsertLine_x                                     0x1405D93B0
#define CListWnd__RemoveLine_x                                     0x1405D9A20
#define CListWnd__SetColors_x                                      0x1405D9DE0
#define CListWnd__SetColumnJustification_x                         0x1405D9E00
#define CListWnd__SetColumnLabel_x                                 0x1405D9E80
#define CListWnd__SetColumnWidth_x                                 0x1405DA020
#define CListWnd__SetCurSel_x                                      0x1405DA0F0
#define CListWnd__SetItemColor_x                                   0x1405DA360
#define CListWnd__SetItemData_x                                    0x1405DA400
#define CListWnd__SetItemText_x                                    0x1405DA640
#define CListWnd__Sort_x                                           0x1405DAA50
#define CListWnd__ToggleSel_x                                      0x1405DABC0
#define CListWnd__SetColumnsSizable_x                              0x1405DA070
#define CListWnd__SetItemWnd_x                                     0x1405DA770
#define CListWnd__GetItemWnd_x                                     0x1405D7CF0
#define CListWnd__SetItemIcon_x                                    0x1405DA440
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405D38D0
#define CListWnd__SetVScrollPos_x                                  0x1405DA9B0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14046AFE0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A51A40
#define MapViewMap__Clear_x                                        0x14046CCA0
#define MapViewMap__SetZoom_x                                      0x140473380
#define MapViewMap__HandleLButtonDown_x                            0x14046FE80

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140495460
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14049BDC0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14049C590
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14049FED0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14049F1D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A4370

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406970E0
#define CPacketScrambler__hton_x                                   0x140568B60

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405FB880
#define CSidlManagerBase__FindAnimation1_x                         0x1405FB7C0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405FBEC0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405FBC60
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405FABC0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405FAB50
#define CSidlManagerBase__CreateXWnd_x                             0x1405FA190

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14050DDA0
#define CSidlManager__CreateXWnd_x                                 0x14050DF60

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405BFE90
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405BFE90
#define CSidlScreenWnd__ConvertToRes_x                             0x14060AC30
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405C0130
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405BF5D0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405BF6A0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405BF910
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405C0820
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405C0A50
#define CSidlScreenWnd__GetChildItem_x                             0x1405C0BF0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405C0E40
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405CAFE0
#define CSidlScreenWnd__Init1_x                                    0x1405C11B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405C1520
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405C1DF0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405C27F0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F569D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C2E70
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C3660
#define CSidlScreenWnd__vftable_x                                  0x140AEC0E8
#define CSidlScreenWnd__WndNotification_x                          0x1405C36B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14033D7F0
#define CSkillMgr__GetSkillCap_x                                   0x14033DB20
#define CSkillMgr__GetNameToken_x                                  0x14033DA50
#define CSkillMgr__IsActivatedSkill_x                              0x14033DEE0
#define CSkillMgr__IsCombatSkill_x                                 0x14033DF20
#define CSkillMgr__GetSkillTimerDuration_x                         0x14033DE50
#define CSkillMgr__GetSkillLastUsed_x                              0x14033DAA0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140529C20
#define CSliderWnd__SetValue_x                                     0x1405DBD20
#define CSliderWnd__SetNumTicks_x                                  0x1405DBBA0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140514630

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405E0500
#define CStmlWnd__CalculateHSBRange_x                              0x1405E13A0
#define CStmlWnd__CalculateVSBRange_x                              0x1405E13A0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405E1EB0
#define CStmlWnd__ForceParseNow_x                                  0x1405E1F50
#define CStmlWnd__GetVisibleText_x                                 0x1405E2610
#define CStmlWnd__MakeStmlColorTag_x                               0x1405E4390
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405E43D0
#define CStmlWnd__SetSTMLText_x                                    0x1405EB460
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405EB610
#define CStmlWnd__UpdateHistoryString_x                            0x1405EB9B0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405DC0F0
#define CTabWnd__DrawCurrentPage_x                                 0x1405DC190
#define CTabWnd__DrawTab_x                                         0x1405DC560
#define CTabWnd__GetTabRect_x                                      0x1405DCBE0
#define CTabWnd__InsertPage_x                                      0x1405DCEB0
#define CTabWnd__RemovePage_x                                      0x1405DD140
#define CTabWnd__SetPage_x                                         0x1405DD2A0
#define CTabWnd__UpdatePage_x                                      0x1405DD5A0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140604CB0
#define CPageWnd__SetTabText_x                                     0x140074860

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C24D0
#define CBroadcast__Get_x                                          0x1400C2900


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F3030
#define CTextureFont__DrawWrappedText1_x                           0x1405F2F30
#define CTextureFont__DrawWrappedText2_x                           0x1405F3160
#define CTextureFont__GetTextExtent_x                              0x1405F3510
#define CTextureFont__GetHeight_x                                  0x1405F34D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140609350

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405BCA20

// CXStr
#define CXStr__gFreeLists_x                                        0x140D82060
#define CXStr__gCXStrAccess_x                                      0x140F56538

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405C5ED0
#define CXWnd__ClrFocus_x                                          0x1405C61C0
#define CXWnd__Destroy_x                                           0x1405C6340
#define CXWnd__DoAllDrawing_x                                      0x1405C6440
#define CXWnd__DrawColoredRect_x                                   0x1405C6C10
#define CXWnd__DrawTooltip_x                                       0x1405C8280
#define CXWnd__DrawTooltipAtPoint_x                                0x1405C8340
#define CXWnd__GetChildItem_x                                      0x1405C8C50
#define CXWnd__GetChildWndAt_x                                     0x1405C8D10
#define CXWnd__GetClientRect_x                                     0x1405C8FD0
#define CXWnd__GetClientClipRect_x                                 0x1405C8E80
#define CXWnd__GetRelativeRect_x                                   0x1405CA9D0
#define CXWnd__GetScreenClipRect_x                                 0x1405CAAE0
#define CXWnd__GetScreenRect_x                                     0x1405CAC60
#define CXWnd__GetTooltipRect_x                                    0x1405CADE0
#define CXWnd__IsActive_x                                          0x1405CB3A0
#define CXWnd__IsDescendantOf_x                                    0x1405CB3D0
#define CXWnd__IsReallyVisible_x                                   0x1405CB440
#define CXWnd__IsType_x                                            0x1405CB490
#define CXWnd__Minimize_x                                          0x1405CB590
#define CXWnd__ProcessTransition_x                                 0x1402E1C10
#define CXWnd__Resize_x                                            0x1405CC590
#define CXWnd__Right_x                                             0x1405CC630
#define CXWnd__SetFocus_x                                          0x1405CC9F0
#define CXWnd__SetFont_x                                           0x1405CCA40
#define CXWnd__SetKeyTooltip_x                                     0x1405CCB50
#define CXWnd__SetMouseOver_x                                      0x1405CCCA0
#define CXWnd__SetParent_x                                         0x1405CCD20
#define CXWnd__StartFade_x                                         0x1405CD160
#define CXWnd__vftable_x                                           0x140AEC6C0
#define CXWnd__CXWnd_x                                             0x1405C4AE0
#define CXWnd__dCXWnd_x                                            0x1405C5410

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140610080

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405ED2D0
#define CXWndManager__DrawCursor_x                                 0x1405ED5B0
#define CXWndManager__DrawWindows_x                                0x1405ED810
#define CXWndManager__GetKeyboardFlags_x                           0x1405EDE80
#define CXWndManager__HandleKeyboardMsg_x                          0x1405EDEC0
#define CXWndManager__RemoveWnd_x                                  0x1405F16D0

// CDBStr
#define CDBStr__GetString_x                                        0x140195720

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406A10D0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D76D0
#define CCharacterListWnd__EnterWorld_x                            0x1400D64D0
#define CCharacterListWnd__Quit_x                                  0x14012C780
#define CCharacterListWnd__UpdateList_x                            0x1400D8410

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14066E3C0
#define ItemBase__CreateItemTagString_x                            0x14066EE20
#define ItemBase__GetImageNum_x                                    0x140671540
#define ItemBase__GetItemValue_x                                   0x1406730F0
#define ItemBase__IsEmpty_x                                        0x140674DD0
#define ItemBase__IsKeyRingItem_x                                  0x1406754E0
#define ItemBase__ValueSellMerchant_x                              0x140679690
#define ItemClient__CanDrop_x                                      0x1402C3B00
#define ItemClient__CanGoInBag_x                                   0x1402C3C30
#define ItemClient__CreateItemClient_x                             0x1402C3EC0
#define ItemClient__dItemClient_x                                  0x1402C3980

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B5500
#define EQ_LoadingS__Array_x                                       0x140D5BD60

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140685790
#define PcBase__GetCombatAbility_x                                 0x140685E80
#define PcBase__GetCombatAbilityTimer_x                            0x140685F20
#define PcBase__GetItemContainedRealEstateIds_x                    0x1406866F0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140687170
#define PcClient__AlertInventoryChanged_x                          0x1402E7110
#define PcClient__GetConLevel_x                                    0x1402E7860
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E9F60
#define PcClient__HasLoreItem_x                                    0x1402EB010
#define PcZoneClient__GetItemRecastTimer_x                         0x1402F7990
#define PcZoneClient__RemoveMyAffect_x                             0x1402FAE50

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022B300
#define EQGroundItemListManager__Add_x                             0x14022B4B0
#define EQGroundItemListManager__Clear_x                           0x14022B550
#define EQGroundItemListManager__Delete_x                          0x14022B610
#define EQGroundItemListManager__Instance_x                        0x14022B6A0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140266F20

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018FE50

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406596D0
#define PlayerBase__CanSee1_x                                      0x1406597B0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140659CA0
#define PlayerBase__HasProperty_x                                  0x140659E80
#define PlayerBase__IsTargetable_x                                 0x140659F40
#define PlayerClient__ChangeBoneStringSprite_x                     0x140308C00
#define PlayerClient__GetPcClient_x                                0x14030B740
#define PlayerClient__PlayerClient_x                               0x140300F20
#define PlayerClient__SetNameSpriteState_x                         0x14030EE70
#define PlayerClient__SetNameSpriteTint_x                          0x14030FE30
#define PlayerZoneClient__ChangeHeight_x                           0x14031EA40
#define PlayerZoneClient__DoAttack_x                               0x14031F750
#define PlayerZoneClient__GetLevel_x                               0x140322F00
#define PlayerZoneClient__IsValidTeleport_x                        0x140269CB0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A3BD0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140317F10
#define PlayerManagerClient__GetSpawnByName_x                      0x140317FC0
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1403180C0
#define PlayerManagerClient__CreatePlayer_x                        0x1403179D0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406591E0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C9120
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C8A30
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C8AA0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C90B0
#define KeypressHandler__HandleKeyDown_x                           0x1402C9240
#define KeypressHandler__HandleKeyUp_x                             0x1402C9360
#define KeypressHandler__SaveKeymapping_x                          0x1402C8F30

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14069EBE0

// StringTable
#define StringTable__getString_x                                   0x140698800

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F1130
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F5AC0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F8A70
#define PcZoneClient__RemovePetEffect_x                            0x1402FB130
#define PcZoneClient__HasAlternateAbility_x                        0x1402F9650
#define PcZoneClient__CanEquipItem_x                               0x1402F3D50
#define PcZoneClient__GetItemByID_x                                0x1402F6A10
#define PcZoneClient__RemoveBuffEffect_x                           0x1402FACE0
#define PcZoneClient__BandolierSwap_x                              0x1402E71C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026E920

// IconCache
#define IconCache__GetIcon_x                                       0x1400AA1A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403CE4E0
#define CContainerMgr__CloseContainer_x                            0x1403CDE00
#define CContainerMgr__OpenExperimentContainer_x                   0x1403CE880

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404D1020

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402BB030

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14045EB80
#define CLootWnd__RequestLootSlot_x                                0x14045FBD0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E5C40
#define EQ_Spell__SpellAffects_x                                   0x1401E6F20
#define EQ_Spell__SpellAffectBase_x                                0x1401E6E80
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E0850
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E0800
#define EQ_Spell__IsSPAStacking_x                                  0x1401E6B50
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E6700
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E5FC0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C7AC0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14052ED90
#define CTargetWnd__RefreshTargetBuffs_x                           0x14052E4B0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14052DCB0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140536640

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018C8D0
#define CTaskManager__GetTaskStatus_x                              0x14018C9E0
#define CTaskManager__GetElementDescription_x                      0x14018C560

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E3F60
#define EqSoundManager__PlayScriptMp3_x                            0x1401E2CF0
#define EqSoundManager__SoundAssistPlay_x                          0x140342BD0
#define EqSoundManager__WaveInstancePlay_x                         0x140342F10

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405CDF20
#define CTextureAnimation__SetCurCell_x                            0x1405CE230

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B9220

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406B9840
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406B98C0
#define CharacterBase__IsExpansionFlag_x                           0x14020A270

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403A8A70
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403A94E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403AAA50

// messages
#define msg_spell_worn_off_x                                       0x140499C70
#define msg_new_text_x                                             0x14021CCC0
#define __msgTokenTextParam_x                                      0x140214050
#define msgTokenText_x                                             0x140213F60

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140344940
#define SpellManager__GetSpellByGroupAndRank_x                     0x140344840

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140669B30

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140457D90

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D3320
#define CCursorAttachment__IsOkToActivate_x                        0x1403D67F0
#define CCursorAttachment__RemoveAttachment_x                      0x1403D6AA0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1406077B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1406079B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1406079C0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140156CB0
#define CFindItemWnd__Update_x                                     0x140157670
#define CFindItemWnd__PickupSelectedItem_x                         0x140150300

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140161860
#define LootFiltersManager__GetItemFilterData_x                    0x140162380
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140162C30
#define LootFiltersManager__SetItemLootFilter_x                    0x140162EE0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404B2E00

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14033D3B0
#define CResolutionHandler__UpdateResolution_x                     0x1405B2570

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403CA600

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406BDC60
#define CDistillerInfo__Instance_x                                 0x1406BDB50

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403F49F0
#define CGroupWnd__UpdateDisplay_x                                 0x1403F3B80

// ItemBase
#define ItemBase__IsLore_x                                         0x140675620
#define ItemBase__IsLoreEquipped_x                                 0x1406756B0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402DCC50

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140267080
#define EQPlacedItemManager__GetItemByGuid_x                       0x140267010
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140267050

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403375A0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012CE50
#define FactionManagerClient__HandleFactionMessage_x               0x14012D230
#define FactionManagerClient__GetFactionStanding_x                 0x14012C620
#define FactionManagerClient__GetMaxFaction_x                      0x14012C620
#define FactionManagerClient__GetMinFaction_x                      0x14012C4D0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B4830

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140138800

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401BE540
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401BD6D0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401BE360
#define CAltAbilityData__GetMercMaxRank_x                          0x1401BE2E0

// CTargetManager
#define CTargetManager__Get_x                                      0x140349C50

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405C3CB0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140089B20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14035B7F0

// AchievementManager
#define AchievementManager__Instance_x                             0x140092D20

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406A1C60
#define FreeToPlayClient__RestrictionInfo_x                        0x140B010C0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140565B40

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x1408568D8
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072AD0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140072C60
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140072E10

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
