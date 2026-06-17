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

#define __ClientDate                                               20260611u
#define __ExpectedVersionDate                                     "Jun 11 2026"
#define __ExpectedVersionTime                                     "11:51:43"
#define __ActualVersionDate_x                                      0x14098E338
#define __ActualVersionTime_x                                      0x14098E328
#define __ActualVersionBuild_x                                     0x1409234F0

// Memory Protection
#define __MemChecker0_x                                            0x1402CF400
#define __MemChecker1_x                                            0x1405A9480
#define __MemChecker4_x                                            0x14029C720
#define __EncryptPad0_x                                            0x140D6BC40

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EB45E0
#define instEQZoneInfo_x                                           0x140EB47D4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14022EFD0
#define __gfMaxZoomCameraDistance_x                                0x1409247A8
#define __gfMaxCameraDistance_x                                    0x140ACE284
#define __CurrentSocial_x                                          0x140C200E4 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D5F970
#define g_eqCommandStates_x                                        0x140D60A10
#define __CommandList_x                                            0x140D60C50
#define __ScreenMode_x                                             0x140DFBE64
#define __gWorld_x                                                 0x140EACF10
#define __gpbCommandEvent_x                                        0x140EAD008
#define __ServerHost_x                                             0x140EAD1F8
#define __Guilds_x                                                 0x140EB3190
#define __MemCheckBitmask_x                                        0x140EB4B23
#define __MemCheckActive_x                                         0x140EB623D
#define __MouseEventTime_x                                         0x140F29BB0
#define DI8__MouseState_x                                          0x140F2DD98
#define __heqmain_x                                                0x140F30228
#define DI8__Mouse_x                                               0x140F30240
#define __HWnd_x                                                   0x140F30248
#define __Mouse_x                                                  0x140F30250
#define DI8__Keyboard_x                                            0x140F30270
#define __LoginName_x                                              0x140F309DC
#define __CurrentMapLabel_x                                        0x140F44510
#define __LabelCache_x                                             0x140F450E0
#define __ChatFilterDefs_x                                         0x140A681D0
#define Teleport_Table_Size_x                                      0x140EAD094
#define Teleport_Table_x                                           0x140EAD520

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EAF520
#define pinstActiveBanker_x                                        0x140EACF38
#define pinstActiveCorpse_x                                        0x140EACF28
#define pinstActiveGMaster_x                                       0x140EACF30
#define pinstActiveMerchant_x                                      0x140EACF20
#define pinstAltAdvManager_x                                       0x140DFCD08
#define pinstCEverQuest_x                                          0x140F30288
#define pinstCamActor_x                                            0x140DFBE50
#define pinstCDBStr_x                                              0x140DFBAC0
#define pinstCDisplay_x                                            0x140EACFE8
#define pinstControlledPlayer_x                                    0x140EACFC8
#define pinstCResolutionHandler_x                                  0x140F55688
#define pinstCSidlManager_x                                        0x140F56688
#define pinstCXWndManager_x                                        0x140F56680
#define instDynamicZone_x                                          0x140EB3050 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140EB309E
#define instExpeditionName_x                                       0x140EB30DE
#define pinstDZMember_x                                            0x140EB3168
#define pinstDZTimerInfo_x                                         0x140EB3170
#define pinstEqLogin_x                                             0x140F30320
#define instTribute_x                                              0x140D58880
#define pinstDeviceInputProxy_x                                    0x140EB463C
#define pinstEQSoundManager_x                                      0x140DFD090
#define pinstEQSpellStrings_x                                      0x140DE0640
#define pinstSGraphicsEngine_x                                     0x140F556B8
#define pinstLocalPC_x                                             0x140EACA88
#define pinstLocalPlayer_x                                         0x140EACF18
#define pinstCMercenaryClientManager_x                             0x140F2B4C8
#define pinstModelPlayer_x                                         0x140EACF48
#define pinstRenderInterface_x                                     0x140F556D0
#define pinstSkillMgr_x                                            0x140F2D1A8
#define pinstSpawnManager_x                                        0x140F2B8A8
#define pinstSpellManager_x                                        0x140F2D218
#define pinstStringTable_x                                         0x140EACA90
#define pinstSwitchManager_x                                       0x140EAC9C0
#define pinstTarget_x                                              0x140EACFC0
#define pinstTaskMember_x                                          0x140D58870 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140EACF40
#define instTributeActive_x                                        0x140D588A9
#define pinstViewActor_x                                           0x140DFBE48
#define pinstWorldData_x                                           0x140EACA50
#define pinstPlayerPath_x                                          0x140F2B8D0
#define pinstTargetIndicator_x                                     0x140F2D2C8
#define EQObject_Top_x                                             0x140EACFF0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F41660
#define pinstCContainerMgr_x                                       0x140DFC018
#define pinstCContextMenuManager_x                                 0x140F56360
#define pinstCInvSlotMgr_x                                         0x140DFC000
#define pinstCItemDisplayManager_x                                 0x140F440E0
#define pinstCPopupWndManager_x                                    0x140F44970
#define pinstCSpellDisplayMgr_x                                    0x140F44FC0
#define pinstCTaskManager_x                                        0x140C217B0
#define pinstEQSuiteTextureLoader_x                                0x140D816F0
#define pinstItemIconCache_x                                       0x140F419C8
#define pinstLootFiltersManager_x                                  0x140DFB508
#define pinstGFViewListener_x                                      0x140F55B38


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140259950
#define __CastRay_x                                                0x1402519C0
#define __CastRay2_x                                               0x1402516B0
#define __compress_block_x                                         0x14055F100
#define __ConvertItemTags_x                                        0x140251E50
#define __CleanItemTags_x                                          0x14008D490
#define __CreateCascadeMenuItems_x                                 0x140198430
#define __decompress_block_x                                       0x1405A4C70
#define __DoesFileExist_x                                          0x1405AD4F0
#define __EQGetTime_x                                              0x1405A9A30
#define __ExecuteCmd_x                                             0x140226470
#define __FixHeading_x                                             0x140666610
#define __FlushDxKeyboard_x                                        0x1403543B0
#define __get_bearing_x                                            0x14025BC60
#define __get_melee_range_x                                        0x14025BD50
#define __GetAnimationCache_x                                      0x1403D9D70
#define __GetGaugeValueFromEQ_x                                    0x14051DEE0
#define __GetLabelFromEQ_x                                         0x14051F4C0
#define __GetXTargetType_x                                         0x140668B00   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140666690
#define __HelpPath_x                                               0x140F29A78   // Why?
#define __NewUIINI_x                                               0x14052AF20   // Why?
#define __ProcessDeviceEvents_x                                    0x14029CD20
#define __ProcessGameEvents_x                                      0x1402914E0
#define __ProcessKeyboardEvents_x                                  0x140355B90
#define __ProcessMouseEvents_x                                     0x140292C40
#define __SaveColors_x                                             0x1401A85A0
#define __STMLToText_x                                             0x1405BDD80
#define __WndProc_x                                                0x140352B70
#define CMemoryMappedFile__SetFile_x                               0x1408158F0
#define DrawNetStatus_x                                            0x1402DE960
#define Util__FastTime_x                                           0x1405A8F40
#define __eq_delete_x                                              0x1406E1928
#define __eq_new_x                                                 0x1406E1B80
#define __CopyLayout_x                                             0x1402CB7D0
#define __ThrottleFrameRate_x                                      0x1402805F5
#define __ThrottleFrameRateEnd_x                                   0x1402805FB

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403659F0
#define CAAWnd__Update_x                                           0x140365CF0
#define CAAWnd__UpdateSelected_x                                   0x140366F10

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B2160
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400AA7B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14086F2B0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B2AC0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B3820
#define AltAdvManager__IsAbilityReady_x                            0x1401B3CC0
#define AltAdvManager__GetAAById_x                                 0x1401B30B0
#define AltAdvManager__CanTrainAbility_x                           0x1401B2EB0
#define AltAdvManager__CanSeeAbility_x                             0x1401B2B60

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D9D00
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DABC0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DAE10
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EF1B0
#define CharacterZoneClient__CanUseItem_x                          0x1400EF770
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DB7F0
#define CharacterZoneClient__CastSpell_x                           0x1400DB890
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400EB630
#define CharacterZoneClient__Cur_HP_x                              0x1400F0F00
#define CharacterZoneClient__Cur_Mana_x                            0x1400F10C0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DEB80
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F7810
#define CharacterZoneClient__GetBaseSkill_x                        0x140105D80  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E0020
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EEAB0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F90A0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F7F90
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E01A0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CF7D0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D16A0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F86C0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F0B50
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F9240
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E0220
#define CharacterZoneClient__GetManaRegen_x                        0x1400F9F30
#define CharacterZoneClient__GetModCap_x                           0x140101530
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E04B0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E0680
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D4D20
#define CharacterZoneClient__HasSkill_x                            0x1400FD060
#define CharacterZoneClient__HitBySpell_x                          0x1400E10F0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E4A90
#define CharacterZoneClient__MakeMeVisible_x                       0x140101010
#define CharacterZoneClient__Max_Endurance_x                       0x1402F9860  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x140101360
#define CharacterZoneClient__Max_Mana_x                            0x1402F9A80  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1401017C0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E80D0
#define CharacterZoneClient__SpellDuration_x                       0x1400E8E00
#define CharacterZoneClient__TotalEffect_x                         0x1400EA290
#define CharacterZoneClient__UseSkill_x                            0x140106DB0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140386DA0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140391BA0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14038D870
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14038C8E0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140394410

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AEDD10

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403B7650
#define CChatWindowManager__InitContextMenu_x                      0x1403B77E0
#define CChatWindowManager__FreeChatWindow_x                       0x1403B6650
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403BFB60
#define CChatWindowManager__CreateChatWindow_x                     0x1403B6080

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010F3B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C0BD0
#define CChatWindow__Clear_x                                       0x1403C1BD0
#define CChatWindow__WndNotification_x                             0x1403C2E40
#define CChatWindow__AddHistory_x                                  0x1403C16E0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405EB710
#define CContextMenu__RemoveMenuItem_x                             0x1405EBB20
#define CContextMenu__RemoveAllMenuItems_x                         0x1405EBAF0
#define CContextMenu__CheckMenuItem_x                              0x1405EB960
#define CContextMenu__SetMenuItem_x                                0x1405EBB40
#define CContextMenu__AddSeparator_x                               0x1405EB890

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405DD480
#define CContextMenuManager__RemoveMenu_x                          0x1405DDA60
#define CContextMenuManager__PopupMenu_x                           0x1405DD7A0
#define CContextMenuManager__Flush_x                               0x1405DD500
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D15D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406BB5B0
#define CChatService__GetFriendName_x                              0x1406BB5C0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405CE350
#define CComboWnd__Draw_x                                          0x1405CE450
#define CComboWnd__GetCurChoice_x                                  0x1405CE740  // unused
#define CComboWnd__GetListRect_x                                   0x1405CE7E0
#define CComboWnd__InsertChoice_x                                  0x1405CEB20
#define CComboWnd__SetColors_x                                     0x1405CEEB0
#define CComboWnd__SetChoice_x                                     0x1405CEE70
#define CComboWnd__GetItemCount_x                                  0x1405CE7D0
#define CComboWnd__GetCurChoiceText_x                              0x1405CE780  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405CE710
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405CEBE0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403CF2B0
#define CContainerWnd__SetContainer_x                              0x14042F340
#define CContainerWnd__vftable_x                                   0x140A030B0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DFBBCC
#define CDisplay__ZoneMainUI_x                                     0x140605C60
#define CDisplay__PreZoneMainUI_x                                  0x1401A52E0
#define CDisplay__CleanGameUI_x                                    0x1401974F0
#define CDisplay__GetClickedActor_x                                0x14019B710
#define CDisplay__GetUserDefinedColor_x                            0x14019C380
#define CDisplay__InitCharSelectUI_x                               0x14019C630
#define CDisplay__ReloadUI_x                                       0x1401A77A0
#define CDisplay__RestartUI_x                                      0x14020A8B0
#define CDisplay__WriteTextHD2_x                                   0x1401AE740
#define CDisplay__TrueDistance_x                                   0x1401AE3E0
#define CDisplay__SetViewActor_x                                   0x1401AACD0
#define CDisplay__GetFloorHeight_x                                 0x14019B970
#define CDisplay__ToggleScreenshotMode_x                           0x1401ADED0
#define CDisplay__RealRender_World_x                               0x1401A6B70

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140610120
#define CEditWnd__DrawCaret_x                                      0x140601890  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140601DB0
#define CEditWnd__GetCaretPt_x                                     0x140602050  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140602090
#define CEditWnd__GetDisplayString_x                               0x1406022F0
#define CEditWnd__GetHorzOffset_x                                  0x140602540
#define CEditWnd__GetLineForPrintableChar_x                        0x1406026A0
#define CEditWnd__GetSelStartPt_x                                  0x140602990  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1406027D0
#define CEditWnd__PointFromPrintableChar_x                         0x140603550
#define CEditWnd__ReplaceSelection_x                               0x140603910
#define CEditWnd__SelectableCharFromPoint_x                        0x140603DD0
#define CEditWnd__SetEditable_x                                    0x140604070
#define CEditWnd__SetWindowText_x                                  0x1406040A0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402816D0
#define CEverQuest__ClickedPlayer_x                                0x140275880
#define CEverQuest__CreateTargetIndicator_x                        0x140276180
#define CEverQuest__DoTellWindow_x                                 0x14010F0B0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010F9A0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402830C0
#define CEverQuest__dsp_chat_x                                     0x14010EAE0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402AE910
#define CEverQuest__Emote_x                                        0x140283A50
#define CEverQuest__GetBodyTypeDesc_x                              0x140284830
#define CEverQuest__GetClassDesc_x                                 0x140284890
#define CEverQuest__GetClassThreeLetterCode_x                      0x140284C60
#define CEverQuest__GetDeityDesc_x                                 0x140284F10
#define CEverQuest__GetLangDesc_x                                  0x140285340
#define CEverQuest__GetRaceDesc_x                                  0x1402856E0
#define CEverQuest__InterpretCmd_x                                 0x140287320
#define CEverQuest__LeftClickedOnPlayer_x                          0x14029CD90
#define CEverQuest__LMouseUp_x                                     0x140288E30
#define CEverQuest__RightClickedOnPlayer_x                         0x14029A130
#define CEverQuest__RMouseUp_x                                     0x1402937D0
#define CEverQuest__SetGameState_x                                 0x14029F850
#define CEverQuest__UPCNotificationFlush_x                         0x1402A5290 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140288A10
#define CEverQuest__ReportSuccessfulHeal_x                         0x140294BC0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402959E0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403E4F40

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C8F60
#define CGuild__GetGuildName_x                                     0x1400C8FA0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x14040BE10

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C0ED0
#define CHotButton__SetCheck_x                                     0x14040DA10

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140425FB0
#define CInvSlotMgr__MoveItem_x                                    0x140426B90
#define CInvSlotMgr__SelectSlot_x                                  0x140429060

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140422BE0
#define CInvSlot__SliderComplete_x                                 0x1404245B0
#define CInvSlot__GetItemBase_x                                    0x14041E090
#define CInvSlot__UpdateItem_x                                     0x140424A80

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14042B270

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14044C8A0
#define CItemDisplayWnd__UpdateStrings_x                           0x14044FAC0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140449180
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14044AAB0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14044BCC0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14051A950
#define CSpellDisplayWnd__UpdateStrings_x                          0x14051C6E0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140558180

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140445800

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x14051C520

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015C320

// CLabel
#define CLabel__UpdateText_x                                       0x1404570D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405D1CF0
#define CListWnd__dCListWnd_x                                      0x1405D2130
#define CListWnd__vftable_x                                        0x140AEBE60
#define CListWnd__AddColumn_x                                      0x1405D27C0
#define CListWnd__AddColumn1_x                                     0x1405D2860
#define CListWnd__AddLine_x                                        0x1405D29C0
#define CListWnd__AddString_x                                      0x1405D2F60
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405D34D0
#define CListWnd__CalculateVSBRange_x                              0x1405D37B0
#define CListWnd__ClearSel_x                                       0x1405D3950
#define CListWnd__ClearAllSel_x                                    0x1405D38F0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405D39B0
#define CListWnd__Compare_x                                        0x1405D3B70
#define CListWnd__Draw_x                                           0x1405D4030
#define CListWnd__DrawColumnSeparators_x                           0x1405D4BC0
#define CListWnd__DrawHeader_x                                     0x1405D4C80
#define CListWnd__DrawItem_x                                       0x1405D5360
#define CListWnd__DrawLine_x                                       0x1405D5D00
#define CListWnd__DrawSeparator_x                                  0x1405D61C0
#define CListWnd__EnableLine_x                                     0x1405D65E0
#define CListWnd__EnsureVisible_x                                  0x1405D6640
#define CListWnd__ExtendSel_x                                      0x1405D6740
#define CListWnd__GetColumnMinWidth_x                              0x1405D6AD0
#define CListWnd__GetColumnWidth_x                                 0x1405D6B50
#define CListWnd__GetCurSel_x                                      0x1405D6C50
#define CListWnd__GetItemData_x                                    0x1405D6FD0
#define CListWnd__GetItemHeight_x                                  0x1405D7010
#define CListWnd__GetItemRect_x                                    0x1405D7240
#define CListWnd__GetItemText_x                                    0x1405D74E0
#define CListWnd__GetSelList_x                                     0x1405D7740
#define CListWnd__GetSeparatorRect_x                               0x1405D7930
#define CListWnd__InsertLine_x                                     0x1405D8DA0
#define CListWnd__RemoveLine_x                                     0x1405D9410
#define CListWnd__SetColors_x                                      0x1405D97D0
#define CListWnd__SetColumnJustification_x                         0x1405D97F0
#define CListWnd__SetColumnLabel_x                                 0x1405D9870
#define CListWnd__SetColumnWidth_x                                 0x1405D9A10
#define CListWnd__SetCurSel_x                                      0x1405D9AE0
#define CListWnd__SetItemColor_x                                   0x1405D9D50
#define CListWnd__SetItemData_x                                    0x1405D9DF0
#define CListWnd__SetItemText_x                                    0x1405DA030
#define CListWnd__Sort_x                                           0x1405DA440
#define CListWnd__ToggleSel_x                                      0x1405DA5B0
#define CListWnd__SetColumnsSizable_x                              0x1405D9A60
#define CListWnd__SetItemWnd_x                                     0x1405DA160
#define CListWnd__GetItemWnd_x                                     0x1405D76D0
#define CListWnd__SetItemIcon_x                                    0x1405D9E30
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405D32A0
#define CListWnd__SetVScrollPos_x                                  0x1405DA3A0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14046AA90

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A50A40
#define MapViewMap__Clear_x                                        0x14046C750
#define MapViewMap__SetZoom_x                                      0x140472E30
#define MapViewMap__HandleLButtonDown_x                            0x14046F930

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140494F00  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14049B860
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14049C030
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14049F950
#define CMerchantWnd__SelectBuySellSlot_x                          0x14049EC50
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A3DE0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406965E0
#define CPacketScrambler__hton_x                                   0x1406965D0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405FB140
#define CSidlManagerBase__FindAnimation1_x                         0x1405FB080
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405FB780
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405FB520
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405FA480
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405FA410
#define CSidlManagerBase__CreateXWnd_x                             0x1405F9A70

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14050D7A0
#define CSidlManager__CreateXWnd_x                                 0x14050D960

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405BF9A0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405BF870
#define CSidlScreenWnd__ConvertToRes_x                             0x14060A460 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405BFB10
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405BEFB0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405BF080
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405BF2F0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405C0200
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405C0430
#define CSidlScreenWnd__GetChildItem_x                             0x1405C05D0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405C0820
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405CA8C0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405C0B90
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405C0F00
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405C17D0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405C21D0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F559D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C2850
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C3040
#define CSidlScreenWnd__vftable_x                                  0x140AEB0E8
#define CSidlScreenWnd__WndNotification_x                          0x1405C3090

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14033D330 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14033D660 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14033D590
#define CSkillMgr__IsActivatedSkill_x                              0x14033DA20
#define CSkillMgr__IsCombatSkill_x                                 0x14033DA60
#define CSkillMgr__GetSkillTimerDuration_x                         0x14033D990
#define CSkillMgr__GetSkillLastUsed_x                              0x14033D5E0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405DAF10
#define CSliderWnd__SetValue_x                                     0x1405DB720
#define CSliderWnd__SetNumTicks_x                                  0x1405DB5A0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140514020

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405DFF10
#define CStmlWnd__CalculateHSBRange_x                              0x1405CA270
#define CStmlWnd__CalculateVSBRange_x                              0x1405E0E30
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405E18C0
#define CStmlWnd__ForceParseNow_x                                  0x1405E1960
#define CStmlWnd__GetVisibleText_x                                 0x1405E2030
#define CStmlWnd__MakeStmlColorTag_x                               0x1405E3DC0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405E3E00
#define CStmlWnd__SetSTMLText_x                                    0x1405EAE90
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405EB040
#define CStmlWnd__UpdateHistoryString_x                            0x1405EB3E0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405DBAF0
#define CTabWnd__DrawCurrentPage_x                                 0x1405DBB90
#define CTabWnd__DrawTab_x                                         0x1405DBF60
#define CTabWnd__GetTabRect_x                                      0x1405DC5F0
#define CTabWnd__InsertPage_x                                      0x1405DC8C0
#define CTabWnd__RemovePage_x                                      0x1405DCB50
#define CTabWnd__SetPage_x                                         0x1405DCCB0
#define CTabWnd__UpdatePage_x                                      0x1405DCFB0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140604500
#define CPageWnd__SetTabText_x                                     0x140604570

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C2470  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C28A0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F2A50
#define CTextureFont__DrawWrappedText1_x                           0x1405F2950
#define CTextureFont__DrawWrappedText2_x                           0x1405F2B80
#define CTextureFont__GetTextExtent_x                              0x1405F2F30
#define CTextureFont__GetHeight_x                                  0x1405F2EF0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140608B80

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405BC400

// CXStr
#define CXStr__gFreeLists_x                                        0x140D81060
#define CXStr__gCXStrAccess_x                                      0x140F55538

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405C58C0
#define CXWnd__ClrFocus_x                                          0x1405C5BB0
#define CXWnd__Destroy_x                                           0x1405C5D30
#define CXWnd__DoAllDrawing_x                                      0x1405C5E30
#define CXWnd__DrawColoredRect_x                                   0x1405C6600
#define CXWnd__DrawTooltip_x                                       0x1405C7C70
#define CXWnd__DrawTooltipAtPoint_x                                0x1405C7D30
#define CXWnd__GetChildItem_x                                      0x1405C8640
#define CXWnd__GetChildWndAt_x                                     0x1405C8700
#define CXWnd__GetClientRect_x                                     0x1405C89C0
#define CXWnd__GetClientClipRect_x                                 0x1405C8870
#define CXWnd__GetRelativeRect_x                                   0x1405CA3B0
#define CXWnd__GetScreenClipRect_x                                 0x1405CA4C0
#define CXWnd__GetScreenRect_x                                     0x1405CA640
#define CXWnd__GetTooltipRect_x                                    0x1405CA7C0
#define CXWnd__IsActive_x                                          0x1405CAD80
#define CXWnd__IsDescendantOf_x                                    0x1405CADB0
#define CXWnd__IsReallyVisible_x                                   0x1405CAE20
#define CXWnd__IsType_x                                            0x1405CAE70
#define CXWnd__Minimize_x                                          0x1405CAF70
#define CXWnd__ProcessTransition_x                                 0x1405CBE80
#define CXWnd__Resize_x                                            0x1405CBF90
#define CXWnd__Right_x                                             0x1405CC030
#define CXWnd__SetFocus_x                                          0x1405CC3F0
#define CXWnd__SetFont_x                                           0x1405CC440
#define CXWnd__SetKeyTooltip_x                                     0x1405CC550
#define CXWnd__SetMouseOver_x                                      0x1405CC6A0
#define CXWnd__SetParent_x                                         0x1405CC720
#define CXWnd__StartFade_x                                         0x1405CCB50
#define CXWnd__vftable_x                                           0x140AEB6C0
#define CXWnd__CXWnd_x                                             0x1405C44C0
#define CXWnd__dCXWnd_x                                            0x1405C4DF0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14060F8B0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405ECD00
#define CXWndManager__DrawCursor_x                                 0x1405ECFE0
#define CXWndManager__DrawWindows_x                                0x1405ED240
#define CXWndManager__GetKeyboardFlags_x                           0x1405ED8B0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405ED8F0
#define CXWndManager__RemoveWnd_x                                  0x1405F10F0

// CDBStr
#define CDBStr__GetString_x                                        0x1401956B0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406A05D0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D7690
#define CCharacterListWnd__EnterWorld_x                            0x1400D6490
#define CCharacterListWnd__Quit_x                                  0x1400D7670
#define CCharacterListWnd__UpdateList_x                            0x1400D83D0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14066D7C0
#define ItemBase__CreateItemTagString_x                            0x14066E260
#define ItemBase__GetImageNum_x                                    0x1406709D0
#define ItemBase__GetItemValue_x                                   0x140672500
#define ItemBase__IsEmpty_x                                        0x140674280
#define ItemBase__IsKeyRingItem_x                                  0x1406749B0
#define ItemBase__ValueSellMerchant_x                              0x140678B90
#define ItemClient__CanDrop_x                                      0x1402C36E0
#define ItemClient__CanGoInBag_x                                   0x1402C3810
#define ItemClient__CreateItemClient_x                             0x1402C3AA0
#define ItemClient__dItemClient_x                                  0x1402C3560

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B5490
#define EQ_LoadingS__Array_x                                       0x140D5AD60

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140684C90
#define PcBase__GetCombatAbility_x                                 0x140685380
#define PcBase__GetCombatAbilityTimer_x                            0x140685420
#define PcBase__GetItemContainedRealEstateIds_x                    0x140685BF0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140686670
#define PcClient__AlertInventoryChanged_x                          0x1402E6C60
#define PcClient__GetConLevel_x                                    0x1402E73B0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E9AB0
#define PcClient__HasLoreItem_x                                    0x1402EAB50
#define PcZoneClient__GetItemRecastTimer_x                         0x1402F74D0
#define PcZoneClient__RemoveMyAffect_x                             0x1402FA990

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022AF50
#define EQGroundItemListManager__Add_x                             0x14022B100
#define EQGroundItemListManager__Clear_x                           0x14022B1A0
#define EQGroundItemListManager__Delete_x                          0x14022B260
#define EQGroundItemListManager__Instance_x                        0x14022B2F0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140266B40

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018FDD0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140658F00
#define PlayerBase__CanSee1_x                                      0x140658FE0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406594D0
#define PlayerBase__HasProperty_x                                  0x1406596B0
#define PlayerBase__IsTargetable_x                                 0x140659770
#define PlayerClient__ChangeBoneStringSprite_x                     0x140308740
#define PlayerClient__GetPcClient_x                                0x14030B280
#define PlayerClient__PlayerClient_x                               0x140300A60
#define PlayerClient__SetNameSpriteState_x                         0x14030E9B0
#define PlayerClient__SetNameSpriteTint_x                          0x14030F970
#define PlayerZoneClient__ChangeHeight_x                           0x14031E5B0
#define PlayerZoneClient__DoAttack_x                               0x14031F2C0
#define PlayerZoneClient__GetLevel_x                               0x140322A70
#define PlayerZoneClient__IsValidTeleport_x                        0x1402698D0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A3B60

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140317A80  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140317B30  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140317C30
#define PlayerManagerClient__CreatePlayer_x                        0x140317540
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140658A10

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C8CC0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C85D0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C8640
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C8C50  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C8DE0
#define KeypressHandler__HandleKeyUp_x                             0x1402C8F00
#define KeypressHandler__SaveKeymapping_x                          0x1402C8AD0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14069E0E0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140697D00

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F0C70  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F5600
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F85B0
#define PcZoneClient__RemovePetEffect_x                            0x1402FAC70
#define PcZoneClient__HasAlternateAbility_x                        0x1402F9190
#define PcZoneClient__CanEquipItem_x                               0x1402F3890
#define PcZoneClient__GetItemByID_x                                0x1402F6550
#define PcZoneClient__RemoveBuffEffect_x                           0x1402FA820
#define PcZoneClient__BandolierSwap_x                              0x1402E6D10

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026E540

// IconCache
#define IconCache__GetIcon_x                                       0x1403D9DA0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403CE000
#define CContainerMgr__CloseContainer_x                            0x1403CD920
#define CContainerMgr__OpenExperimentContainer_x                   0x1403CE3A0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404D0A70

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402BAC50

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14045E640
#define CLootWnd__RequestLootSlot_x                                0x14045F690

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E5BC0
#define EQ_Spell__SpellAffects_x                                   0x1401E6EA0
#define EQ_Spell__SpellAffectBase_x                                0x1401E6E00
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E0810
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E07C0
#define EQ_Spell__IsSPAStacking_x                                  0x1401E6AD0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E6680
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E5F40

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C7A70

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14052E770
#define CTargetWnd__RefreshTargetBuffs_x                           0x14052DE90
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14052D690

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140536020  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018C850
#define CTaskManager__GetTaskStatus_x                              0x14018C960
#define CTaskManager__GetElementDescription_x                      0x14018C4E0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E3EE0
#define EqSoundManager__PlayScriptMp3_x                            0x1401E2C70
#define EqSoundManager__SoundAssistPlay_x                          0x140342710  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140342A50  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405CD8F0
#define CTextureAnimation__SetCurCell_x                            0x1405CDC00

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B8E40

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406B8D20
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406B8DA0
#define CharacterBase__IsExpansionFlag_x                           0x140209F00

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403A8570
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403A8FE0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403AA550

// messages
#define msg_spell_worn_off_x                                       0x140221140
#define msg_new_text_x                                             0x14021C910
#define __msgTokenTextParam_x                                      0x140213CD0
#define msgTokenText_x                                             0x140213BE0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140344480
#define SpellManager__GetSpellByGroupAndRank_x                     0x140344380

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140668EE0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140457860

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D2E60
#define CCursorAttachment__IsOkToActivate_x                        0x1403D6330
#define CCursorAttachment__RemoveAttachment_x                      0x1403D65E0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140606FE0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1406071E0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1406071F0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140156C50
#define CFindItemWnd__Update_x                                     0x140157610
#define CFindItemWnd__PickupSelectedItem_x                         0x1401502A0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401617E0
#define LootFiltersManager__GetItemFilterData_x                    0x140162300
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140162BB0
#define LootFiltersManager__SetItemLootFilter_x                    0x140162E60

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404B2860

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14033CEF0
#define CResolutionHandler__UpdateResolution_x                     0x1405B1F50

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403CA120

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406BD140  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406BD030  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403F45C0
#define CGroupWnd__UpdateDisplay_x                                 0x1403F3750

// ItemBase
#define ItemBase__IsLore_x                                         0x140674AF0
#define ItemBase__IsLoreEquipped_x                                 0x140674B80

#define MultipleItemMoveManager__ProcessMove_x                     0x1402DC7A0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140266CA0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140266C30
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140266C70

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403370F0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012CDE0
#define FactionManagerClient__HandleFactionMessage_x               0x14012D1C0
#define FactionManagerClient__GetFactionStanding_x                 0x14012C5B0
#define FactionManagerClient__GetMaxFaction_x                      0x14012C5B0
#define FactionManagerClient__GetMinFaction_x                      0x14012C460

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B4830

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140138790

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401BE4D0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401BD660
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401BE2F0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401BE270  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140349790

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405C3690

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140089B20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14035B330

// AchievementManager
#define AchievementManager__Instance_x                             0x140092D20

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406A1160
#define FreeToPlayClient__RestrictionInfo_x                        0x140B000C0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140565520

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x1408558D8
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072AD0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140072C60
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140072E10

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
