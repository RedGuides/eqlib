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

#define __ClientDate                                       20260608u
#define __ExpectedVersionDate                              "Jun  8 2026"
#define __ExpectedVersionTime                              "16:04:47"
#define __ActualVersionDate_x                              0x14098E338
#define __ActualVersionTime_x                              0x14098E328
#define __ActualVersionBuild_x                             0x1409234F0

// Memory Protection
#define __MemChecker0_x                                    0x1402CF410
#define __MemChecker1_x                                    0x1405A91B0
#define __MemChecker4_x                                    0x14029C730
#define __EncryptPad0_x                                    0x140D6BC40

// EverQuestInfo
#define pinstEverQuestInfo_x                               0x140EB45E0
#define instEQZoneInfo_x                                   0x140EB47D4

// Misc Globals
#define __do_loot_x                                        0x14022EFE0
#define __gfMaxZoomCameraDistance_x                        0x1409247A8
#define __gfMaxCameraDistance_x                            0x140ACE284
#define __CurrentSocial_x                                  0x140C200E4
#define __BindList_x                                       0x140D5F970
#define g_eqCommandStates_x                                0x140D60A10
#define __CommandList_x                                    0x140D60C50
#define __ScreenMode_x                                     0x140DFBE64
#define __gWorld_x                                         0x140EACF10
#define __gpbCommandEvent_x                                0x140EAD008
#define __ServerHost_x                                     0x140EAD1F8
#define __Guilds_x                                         0x140EB3190
#define __MemCheckBitmask_x                                0x140EB4B23
#define __MemCheckActive_x                                 0x140EB623D
#define __MouseEventTime_x                                 0x140F29BB0
#define DI8__MouseState_x                                  0x140F2DD98
#define __heqmain_x                                        0x140F30228
#define DI8__Mouse_x                                       0x140F30240
#define __HWnd_x                                           0x140F30248
#define __Mouse_x                                          0x140F30250
#define DI8__Keyboard_x                                    0x140F30270
#define __LoginName_x                                      0x140F309DC
#define __CurrentMapLabel_x                                0x140F44510
#define __LabelCache_x                                     0x140F450E0
#define __ChatFilterDefs_x                                 0x140A681D0
#define Teleport_Table_Size_x                              0x140EAD094
#define Teleport_Table_x                                   0x140EAD520

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                        0x140EAF520
#define pinstActiveBanker_x                                0x140EACF38
#define pinstActiveCorpse_x                                0x140EACF28
#define pinstActiveGMaster_x                               0x140EACF30
#define pinstActiveMerchant_x                              0x140EACF20
#define pinstAltAdvManager_x                               0x140DFCD08
#define pinstCEverQuest_x                                  0x140F30288
#define pinstCamActor_x                                    0x140DFBE50
#define pinstCDBStr_x                                      0x140DFBAC0
#define pinstCDisplay_x                                    0x140EACFE8
#define pinstControlledPlayer_x                            0x140EACFC8
#define pinstCResolutionHandler_x                          0x140F55688
#define pinstCSidlManager_x                                0x140F56688
#define pinstCXWndManager_x                                0x140F56680
#define instDynamicZone_x                                  0x140EB3050
#define instExpeditionLeader_x                             0x140EB309E
#define instExpeditionName_x                               0x140EB30DE
#define pinstDZMember_x                                    0x140EB3168
#define pinstDZTimerInfo_x                                 0x140EB3170
#define pinstEqLogin_x                                     0x140F30320
#define instTribute_x                                      0x140D58880
#define pinstDeviceInputProxy_x                            0x140EB463C
#define pinstEQSoundManager_x                              0x140DFD090
#define pinstEQSpellStrings_x                              0x140DE0640
#define pinstSGraphicsEngine_x                             0x140F556B8
#define pinstLocalPC_x                                     0x140EACA88
#define pinstLocalPlayer_x                                 0x140EACF18
#define pinstCMercenaryClientManager_x                     0x140F2B4C8
#define pinstModelPlayer_x                                 0x140EACF48
#define pinstRenderInterface_x                             0x140F556D0
#define pinstSkillMgr_x                                    0x140F2D1A8
#define pinstSpawnManager_x                                0x140F2B8A8
#define pinstSpellManager_x                                0x140F2D218
#define pinstStringTable_x                                 0x140EACA90
#define pinstSwitchManager_x                               0x140EAC9C0
#define pinstTarget_x                                      0x140EACFC0
#define pinstTaskMember_x                                  0x140D58870
#define pinstTradeTarget_x                                 0x140EACF40
#define instTributeActive_x                                0x140D588A9
#define pinstViewActor_x                                   0x140DFBE48
#define pinstWorldData_x                                   0x140EACA50
#define pinstPlayerPath_x                                  0x140F2B8D0
#define pinstTargetIndicator_x                             0x140F2D2C8
#define EQObject_Top_x                                     0x140EACFF0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                          0x140F41660
#define pinstCContainerMgr_x                               0x140DFC018
#define pinstCContextMenuManager_x                         0x140F56360
#define pinstCInvSlotMgr_x                                 0x140DFC000
#define pinstCItemDisplayManager_x                         0x140F440E0
#define pinstCPopupWndManager_x                            0x140F44970
#define pinstCSpellDisplayMgr_x                            0x140F44FC0
#define pinstCTaskManager_x                                0x140C217B0
#define pinstEQSuiteTextureLoader_x                        0x140D816F0
#define pinstItemIconCache_x                               0x140F419C8
#define pinstLootFiltersManager_x                          0x140DFB508
#define pinstGFViewListener_x                              0x140F55B38


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                              0x140259960
#define __CastRay_x                                        0x1402519D0
#define __CastRay2_x                                       0x1402516C0
#define __compress_block_x                                 0x14055EE30
#define __ConvertItemTags_x                                0x140251E60
#define __CleanItemTags_x                                  0x14008D490
#define __CreateCascadeMenuItems_x                         0x140198440
#define __decompress_block_x                               0x1405A49A0
#define __DoesFileExist_x                                  0x1405AD220
#define __EQGetTime_x                                      0x1405A9760
#define __ExecuteCmd_x                                     0x140226480
#define __FixHeading_x                                     0x140666170
#define __FlushDxKeyboard_x                                0x1403543C0
#define __get_bearing_x                                    0x14025BC70
#define __get_melee_range_x                                0x14025BD60
#define __GetAnimationCache_x                              0x1403D9A90
#define __GetGaugeValueFromEQ_x                            0x14051DC00
#define __GetLabelFromEQ_x                                 0x14051F1E0
#define __GetXTargetType_x                                 0x140668660
#define __HeadingDiff_x                                    0x1406661F0
#define __HelpPath_x                                       0x140F29A78
#define __NewUIINI_x                                       0x14052AC40
#define __ProcessDeviceEvents_x                            0x14029CD30
#define __ProcessGameEvents_x                              0x1402914F0
#define __ProcessKeyboardEvents_x                          0x140355BA0
#define __ProcessMouseEvents_x                             0x140292C50
#define __SaveColors_x                                     0x1401A85B0
#define __STMLToText_x                                     0x1405BDAB0
#define __WndProc_x                                        0x140352B80
#define CMemoryMappedFile__SetFile_x                       0x140815450
#define DrawNetStatus_x                                    0x1402DE970
#define Util__FastTime_x                                   0x1405A8C70
#define __eq_delete_x                                      0x1406E1488
#define __eq_new_x                                         0x1406E16E0
#define __CopyLayout_x                                     0x1402CB7E0
#define __ThrottleFrameRate_x                              0x140280605
#define __ThrottleFrameRateEnd_x                           0x14028060B

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                              0x140365710
#define CAAWnd__Update_x                                   0x140365A10
#define CAAWnd__UpdateSelected_x                           0x140366C30

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                0x1400B2160
#define CAdvancedLootWnd__DoSharedAdvLootAction_x          0x1400B1C10
#define CAdvancedLootWnd__AddPlayerToList_x                0x1400A6E60
#define CAdvancedLootWnd__UpdateMasterLooter_x             0x1400B2AC0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                0x1401B3830
#define AltAdvManager__IsAbilityReady_x                    0x1401B3CD0
#define AltAdvManager__GetAAById_x                         0x1401B30C0
#define AltAdvManager__CanTrainAbility_x                   0x1401B2EC0
#define AltAdvManager__CanSeeAbility_x                     0x1401B2B70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                0x1400D9D00
#define CharacterZoneClient__CalcAffectChange_x            0x1400DABC0
#define CharacterZoneClient__CalcAffectChangeGeneric_x     0x1400DAE10
#define CharacterZoneClient__CanMedOnHorse_x               0x1400EF1B0
#define CharacterZoneClient__CanUseItem_x                  0x1400EF770
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x    0x1400DB7F0
#define CharacterZoneClient__CastSpell_x                   0x1400DB890
#define CharacterZoneClient__CharacterZoneClient_x         0x1400EB630
#define CharacterZoneClient__Cur_HP_x                      0x1400F0F00
#define CharacterZoneClient__Cur_Mana_x                    0x1400F10C0
#define CharacterZoneClient__FindAffectSlot_x              0x1400DEB80
#define CharacterZoneClient__GetAdjustedSkill_x            0x1400F7810
#define CharacterZoneClient__GetBaseSkill_x                0x140105D80
#define CharacterZoneClient__GetCastingTimeModifier_x      0x1400E0020
#define CharacterZoneClient__GetCurrentMod_x               0x1400EEAB0
#define CharacterZoneClient__GetCursorItemCount_x          0x1400F90A0
#define CharacterZoneClient__GetEnduranceRegen_x           0x1400F7F90
#define CharacterZoneClient__GetFirstEffectSlot_x          0x1400E01A0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x 0x1400CF7D0
#define CharacterZoneClient__GetFocusDurationMod_x         0x1400D16A0
#define CharacterZoneClient__GetHPRegen_x                  0x1400F86C0
#define CharacterZoneClient__GetItemCountInInventory_x     0x1400F0B50
#define CharacterZoneClient__GetItemCountWorn_x            0x1400F9170
#define CharacterZoneClient__GetLastEffectSlot_x           0x1400E0220
#define CharacterZoneClient__GetManaRegen_x                0x1400F9F30
#define CharacterZoneClient__GetModCap_x                   0x140101530
#define CharacterZoneClient__GetOpenEffectSlot_x           0x1400E04B0
#define CharacterZoneClient__GetPCSpellAffect_x            0x1400E0680
#define CharacterZoneClient__GetPctModAndMin_x             0x1400D4D20
#define CharacterZoneClient__HasSkill_x                    0x1400FD060
#define CharacterZoneClient__HitBySpell_x                  0x1400E10F0
#define CharacterZoneClient__IsStackBlocked_x              0x1400E4A90
#define CharacterZoneClient__MakeMeVisible_x               0x140101010
#define CharacterZoneClient__Max_Endurance_x               0x1402F9870
#define CharacterZoneClient__Max_HP_x                      0x140101360
#define CharacterZoneClient__Max_Mana_x                    0x1402F9A90
#define CharacterZoneClient__NotifyPCAffectChange_x        0x1401017C0
#define CharacterZoneClient__RemovePCAffectex_x            0x1400E80D0
#define CharacterZoneClient__SpellDuration_x               0x1400E8E00
#define CharacterZoneClient__TotalEffect_x                 0x1400EA290
#define CharacterZoneClient__UseSkill_x                    0x140106DB0


// CBankWnd
#define CBankWnd__WndNotification_x                        0x140386AC0

// CBarterWnd
#define CBarterWnd__WndNotification_x                      0x1403918C0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                0x14038D590
#define CBarterSearchWnd__UpdateInventoryList_x            0x140391330

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x            0x140394130

// CButtonWnd
#define CButtonWnd__vftable_x                              0x140AEDD40

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x             0x1403B7370
#define CChatWindowManager__InitContextMenu_x              0x1403B7500
#define CChatWindowManager__FreeChatWindow_x               0x1403B6370
#define CChatWindowManager__SetLockedActiveChatWindow_x    0x1403BF880
#define CChatWindowManager__CreateChatWindow_x             0x1403B5DA0

// ChatManagerClient
#define ChatManagerClient__Instance_x                      0x14010F3B0

// CChatWindow
#define CChatWindow__CChatWindow_x                         0x1403C08F0
#define CChatWindow__Clear_x                               0x1403C18F0
#define CChatWindow__WndNotification_x                     0x1403C2B60
#define CChatWindow__AddHistory_x                          0x1403C1400

// CContextMenu
#define CContextMenu__AddMenuItem_x                        0x1405EB440
#define CContextMenu__RemoveMenuItem_x                     0x1405EB850
#define CContextMenu__RemoveAllMenuItems_x                 0x1405EB820
#define CContextMenu__CheckMenuItem_x                      0x1405EB690
#define CContextMenu__SetMenuItem_x                        0x1405EB870
#define CContextMenu__AddSeparator_x                       0x1405EB5C0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                     0x1405DD1B0
#define CContextMenuManager__RemoveMenu_x                  0x1405DD790
#define CContextMenuManager__PopupMenu_x                   0x1405DD4D0
#define CContextMenuManager__Flush_x                       0x1405DD230
#define CContextMenuManager__CreateDefaultMenu_x           0x1403D12F0

// CChatService
#define CChatService__GetNumberOfFriends_x                 0x1406BB110
#define CChatService__GetFriendName_x                      0x1406BB120

// CComboWnd
#define CComboWnd__DeleteAll_x                             0x1405CE080
#define CComboWnd__Draw_x                                  0x1405CE180
#define CComboWnd__GetCurChoice_x                          0x1405CE470
#define CComboWnd__GetListRect_x                           0x1405CE510
#define CComboWnd__InsertChoice_x                          0x1405CE850
#define CComboWnd__SetColors_x                             0x1405CEBE0
#define CComboWnd__SetChoice_x                             0x1405CEBA0
#define CComboWnd__GetItemCount_x                          0x1405CE500
#define CComboWnd__GetCurChoiceText_x                      0x1405CE4B0
#define CComboWnd__GetChoiceText_x                         0x1405CE440
#define CComboWnd__InsertChoiceAtIndex_x                   0x1405CE910

// CContainerWnd
#define CContainerWnd__HandleCombine_x                     0x1403CEFD0
#define CContainerWnd__SetContainer_x                      0x14042F060
#define CContainerWnd__vftable_x                           0x140A030B0

// CDisplay
#define CDisplay__cameraType_x                             0x140DFBBCC
#define CDisplay__ZoneMainUI_x                             0x140605990
#define CDisplay__PreZoneMainUI_x                          0x1401A52F0
#define CDisplay__CleanGameUI_x                            0x140197500
#define CDisplay__GetClickedActor_x                        0x14019B720
#define CDisplay__GetUserDefinedColor_x                    0x14019C390
#define CDisplay__InitCharSelectUI_x                       0x14019C640
#define CDisplay__ReloadUI_x                               0x1401A77B0
#define CDisplay__RestartUI_x                              0x14020A8C0
#define CDisplay__WriteTextHD2_x                           0x1401AE750
#define CDisplay__TrueDistance_x                           0x1401AE3F0
#define CDisplay__SetViewActor_x                           0x1401AACE0
#define CDisplay__GetFloorHeight_x                         0x14019B980
#define CDisplay__ToggleScreenshotMode_x                   0x1401ADEE0
#define CDisplay__RealRender_World_x                       0x1401A6B80

// CEditWnd
#define CEditBaseWnd__SetSel_x                             0x14060FE50
#define CEditWnd__DrawCaret_x                              0x1405F6A60
#define CEditWnd__EnsureCaretVisible_x                     0x140601AE0
#define CEditWnd__GetCaretPt_x                             0x140601D80
#define CEditWnd__GetCharIndexPt_x                         0x140601DC0
#define CEditWnd__GetDisplayString_x                       0x140602020
#define CEditWnd__GetHorzOffset_x                          0x140602270
#define CEditWnd__GetLineForPrintableChar_x                0x1406023D0
#define CEditWnd__GetSelStartPt_x                          0x1406026C0
#define CEditWnd__GetSTMLSafeText_x                        0x140602500
#define CEditWnd__PointFromPrintableChar_x                 0x140603280
#define CEditWnd__ReplaceSelection_x                       0x140603640
#define CEditWnd__SelectableCharFromPoint_x                0x140603B00
#define CEditWnd__SetEditable_x                            0x140603DA0
#define CEditWnd__SetWindowText_x                          0x140603DD0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                     0x1402816E0
#define CEverQuest__ClickedPlayer_x                        0x140275890
#define CEverQuest__CreateTargetIndicator_x                0x140276190
#define CEverQuest__DoTellWindow_x                         0x14010F0B0
#define CEverQuest__OutputTextToLog_x                      0x14010F9A0
#define CEverQuest__DropHeldItemOnGround_x                 0x1402830D0
#define CEverQuest__dsp_chat_x                             0x14010EAE0
#define CEverQuest__trimName_x                             0x1402AE920
#define CEverQuest__Emote_x                                0x140283A60
#define CEverQuest__GetBodyTypeDesc_x                      0x140284840
#define CEverQuest__GetClassDesc_x                         0x1402848A0
#define CEverQuest__GetClassThreeLetterCode_x              0x140284C70
#define CEverQuest__GetDeityDesc_x                         0x140284F20
#define CEverQuest__GetLangDesc_x                          0x1406727F0
#define CEverQuest__GetRaceDesc_x                          0x1402856F0
#define CEverQuest__InterpretCmd_x                         0x140287330
#define CEverQuest__LeftClickedOnPlayer_x                  0x14029CDA0
#define CEverQuest__LMouseUp_x                             0x140288E40
#define CEverQuest__RightClickedOnPlayer_x                 0x14029A140
#define CEverQuest__RMouseUp_x                             0x1402937E0
#define CEverQuest__SetGameState_x                         0x14029F860
#define CEverQuest__UPCNotificationFlush_x                 0x1402A52A0
#define CEverQuest__IssuePetCommand_x                      0x140288A20
#define CEverQuest__ReportSuccessfulHeal_x                 0x140294BD0
#define CEverQuest__ReportSuccessfulHit_x                  0x1402959F0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                  0x1403E4C60

// CGuild
#define CGuild__FindMemberByName_x                         0x1400C8F60
#define CGuild__GetGuildName_x                             0x1400C8FA0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                       0x14040BB30

//CHotButton
#define CHotButton__SetButtonSize_x                        0x1402C0EE0
#define CHotButton__SetCheck_x                             0x1402C11D0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                         0x140425CD0
#define CInvSlotMgr__MoveItem_x                            0x1404268B0
#define CInvSlotMgr__SelectSlot_x                          0x140428D80

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                        0x140422900
#define CInvSlot__SliderComplete_x                         0x1404242D0
#define CInvSlot__GetItemBase_x                            0x14041DDB0
#define CInvSlot__UpdateItem_x                             0x1404247A0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                         0x14042AF90

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                         0x14044C5C0
#define CItemDisplayWnd__UpdateStrings_x                   0x14044F7E0
#define CItemDisplayWnd__InsertAugmentRequest_x            0x140448EA0
#define CItemDisplayWnd__RemoveAugmentRequest_x            0x14044A7D0
#define CItemDisplayWnd__RequestConvertItem_x              0x14044B9E0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                       0x14051A670
#define CSpellDisplayWnd__UpdateStrings_x                  0x14051C400

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                   0x140557EB0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x        0x140445520

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                  0x14051C240

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                   0x14015C330

// CLabel
#define CLabel__UpdateText_x                               0x140456DF0

// CListWnd
#define CListWnd__CListWnd_x                               0x1405D1A20
#define CListWnd__dCListWnd_x                              0x1405D1E60
#define CListWnd__vftable_x                                0x14085D430
#define CListWnd__AddColumn_x                              0x1405D24F0
#define CListWnd__AddColumn1_x                             0x1405D2590
#define CListWnd__AddLine_x                                0x1405D26F0
#define CListWnd__AddString_x                              0x1405D2C90
#define CListWnd__CalculateFirstVisibleLine_x              0x1405D3200
#define CListWnd__CalculateVSBRange_x                      0x1405D34E0
#define CListWnd__ClearSel_x                               0x1405D3680
#define CListWnd__ClearAllSel_x                            0x1405D3620
#define CListWnd__CloseAndUpdateEditWindow_x               0x1405D36E0
#define CListWnd__Compare_x                                0x1405D38A0
#define CListWnd__Draw_x                                   0x1405D3D60
#define CListWnd__DrawColumnSeparators_x                   0x1405D48F0
#define CListWnd__DrawHeader_x                             0x1405D49B0
#define CListWnd__DrawItem_x                               0x1405D5090
#define CListWnd__DrawLine_x                               0x1405D5A30
#define CListWnd__DrawSeparator_x                          0x1405D5EF0
#define CListWnd__EnableLine_x                             0x1405D6310
#define CListWnd__EnsureVisible_x                          0x1405D6370
#define CListWnd__ExtendSel_x                              0x1405D6470
#define CListWnd__GetColumnMinWidth_x                      0x1405D6800
#define CListWnd__GetColumnWidth_x                         0x1405D6880
#define CListWnd__GetCurSel_x                              0x1405D6980
#define CListWnd__GetItemData_x                            0x1405D6D00
#define CListWnd__GetItemHeight_x                          0x1405D6D40
#define CListWnd__GetItemRect_x                            0x1405D6F70
#define CListWnd__GetItemText_x                            0x1405D7210
#define CListWnd__GetSelList_x                             0x1405D7470
#define CListWnd__GetSeparatorRect_x                       0x1405D7660
#define CListWnd__InsertLine_x                             0x1405D8AD0
#define CListWnd__RemoveLine_x                             0x1405D9140
#define CListWnd__SetColors_x                              0x1405D9500
#define CListWnd__SetColumnJustification_x                 0x1405D9520
#define CListWnd__SetColumnLabel_x                         0x1405D95A0
#define CListWnd__SetColumnWidth_x                         0x1405D9740
#define CListWnd__SetCurSel_x                              0x1405D9810
#define CListWnd__SetItemColor_x                           0x1405D9A80
#define CListWnd__SetItemData_x                            0x1405D9B20
#define CListWnd__SetItemText_x                            0x1405D9D60
#define CListWnd__Sort_x                                   0x1405DA170
#define CListWnd__ToggleSel_x                              0x1405DA2E0
#define CListWnd__SetColumnsSizable_x                      0x1405D9790
#define CListWnd__SetItemWnd_x                             0x1405D9E90
#define CListWnd__GetItemWnd_x                             0x1405D7400
#define CListWnd__SetItemIcon_x                            0x1405D9B60
#define CListWnd__CalculateCustomWindowPositions_x         0x1405D2FD0
#define CListWnd__SetVScrollPos_x                          0x1405DA0D0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                         0x14046A7B0

// MapViewMap
#define MapViewMap__vftable_x                              0x140A50A40
#define MapViewMap__Clear_x                                0x14046C470
#define MapViewMap__SetZoom_x                              0x140472B50
#define MapViewMap__HandleLButtonDown_x                    0x14046F650

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x              0x140494C20
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x 0x14049B580
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x 0x14049BD50
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x 0x14049F670
#define CMerchantWnd__SelectBuySellSlot_x                  0x14049E970
#define CMerchantWnd__PurchasePageHandler__UpdateList_x    0x1404A3B00

// CPacketScrambler
#define CPacketScrambler__ntoh_x                           0x140696140
#define CPacketScrambler__hton_x                           0x140568270

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x         0x1405FAE70
#define CSidlManagerBase__FindAnimation1_x                 0x1405FADB0
#define CSidlManagerBase__FindScreenPieceTemplate_x        0x1405FB4B0
#define CSidlManagerBase__FindScreenPieceTemplate1_x       0x1405FB250
#define CSidlManagerBase__CreateXWndFromTemplate_x         0x1405FA1B0
#define CSidlManagerBase__CreateXWndFromTemplate1_x        0x1405FA140
#define CSidlManagerBase__CreateXWnd_x                     0x1405F97A0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                 0x14050D4C0
#define CSidlManager__CreateXWnd_x                         0x14050D680

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                0x1405BF5A0
#define CSidlScreenWnd__CalculateVSBRange_x                0x1405BF5A0
#define CSidlScreenWnd__ConvertToRes_x                     0x14060A190
#define CSidlScreenWnd__CreateChildrenFromSidl_x           0x1405BF840
#define CSidlScreenWnd__CSidlScreenWnd1_x                  0x1405BECE0
#define CSidlScreenWnd__CSidlScreenWnd2_x                  0x1405BEDB0
#define CSidlScreenWnd__dCSidlScreenWnd_x                  0x1405BF020
#define CSidlScreenWnd__DrawSidlPiece_x                    0x1405BFF30
#define CSidlScreenWnd__EnableIniStorage_x                 0x1405C0160
#define CSidlScreenWnd__GetChildItem_x                     0x1405C0300
#define CSidlScreenWnd__GetSidlPiece_x                     0x1405C0550
#define CSidlScreenWnd__HandleLButtonUp_x                  0x1405CA6F0
#define CSidlScreenWnd__Init1_x                            0x1405C08C0
#define CSidlScreenWnd__LoadIniInfo_x                      0x1405C0C30
#define CSidlScreenWnd__LoadIniListWnd_x                   0x1405C1500
#define CSidlScreenWnd__LoadSidlScreen_x                   0x1405C1F00
#define CSidlScreenWnd__m_layoutCopy_x                     0x140F559D8
#define CSidlScreenWnd__StoreIniInfo_x                     0x1405C2580
#define CSidlScreenWnd__StoreIniVis_x                      0x1405C2D70
#define CSidlScreenWnd__vftable_x                          0x140AEB118
#define CSidlScreenWnd__WndNotification_x                  0x1405C2DC0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                           0x14033D340
#define CSkillMgr__GetSkillCap_x                           0x14033D670
#define CSkillMgr__GetNameToken_x                          0x14033D5A0
#define CSkillMgr__IsActivatedSkill_x                      0x14033DA30
#define CSkillMgr__IsCombatSkill_x                         0x14033DA70
#define CSkillMgr__GetSkillTimerDuration_x                 0x14033D9A0
#define CSkillMgr__GetSkillLastUsed_x                      0x14033D5F0

// CSliderWnd
#define CSliderWnd__GetValue_x                             0x1405DAC40
#define CSliderWnd__SetValue_x                             0x1405DB450
#define CSliderWnd__SetNumTicks_x                          0x1405DB2D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                       0x140513D40

// CStmlWnd
#define CStmlWnd__AppendSTML_x                             0x1405DFC40
#define CStmlWnd__CalculateHSBRange_x                      0x1405E0AE0
#define CStmlWnd__CalculateVSBRange_x                      0x1405E0AE0
#define CStmlWnd__FastForwardToEndOfTag_x                  0x1405E15F0
#define CStmlWnd__ForceParseNow_x                          0x140057890
#define CStmlWnd__GetVisibleText_x                         0x1405E1D60
#define CStmlWnd__MakeStmlColorTag_x                       0x1405E3AF0
#define CStmlWnd__MakeWndNotificationTag_x                 0x1405E3B30
#define CStmlWnd__SetSTMLText_x                            0x1405EABC0
#define CStmlWnd__StripFirstSTMLLines_x                    0x1405EAD70
#define CStmlWnd__UpdateHistoryString_x                    0x1405EB110

// CTabWnd
#define CTabWnd__Draw_x                                    0x1405DB820
#define CTabWnd__DrawCurrentPage_x                         0x1405DB8C0
#define CTabWnd__DrawTab_x                                 0x1405DBC90
#define CTabWnd__GetTabRect_x                              0x1405DC320
#define CTabWnd__InsertPage_x                              0x1405DC5F0
#define CTabWnd__RemovePage_x                              0x1405DC880
#define CTabWnd__SetPage_x                                 0x1405DC9E0
#define CTabWnd__UpdatePage_x                              0x1405DCCE0

// CPageWnd
#define CPageWnd__FlashTab_x                               0x140604230
#define CPageWnd__SetTabText_x                             0x140074860

// CTextOverlay
#define CTextOverlay__DisplayText_x                        0x1400C2470
#define CBroadcast__Get_x                                  0x1400C28A0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                    0x1405F2780
#define CTextureFont__DrawWrappedText1_x                   0x1405F2680
#define CTextureFont__DrawWrappedText2_x                   0x1405F28B0
#define CTextureFont__GetTextExtent_x                      0x1405F2C60
#define CTextureFont__GetHeight_x                          0x1405F2C20

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                      0x1406088B0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                     0x1405BC130

// CXStr
#define CXStr__gFreeLists_x                                0x140D81060
#define CXStr__gCXStrAccess_x                              0x140F55538

// CXWnd
#define CXWnd__BringToTop_x                                0x1405C55F0
#define CXWnd__ClrFocus_x                                  0x1405C58E0
#define CXWnd__Destroy_x                                   0x1405C5A60
#define CXWnd__DoAllDrawing_x                              0x1405C5B60
#define CXWnd__DrawColoredRect_x                           0x1405C6330
#define CXWnd__DrawTooltip_x                               0x1405C79A0
#define CXWnd__DrawTooltipAtPoint_x                        0x1405C7A60
#define CXWnd__GetChildItem_x                              0x1405C8370
#define CXWnd__GetChildWndAt_x                             0x1405C8430
#define CXWnd__GetClientRect_x                             0x1405C86F0
#define CXWnd__GetClientClipRect_x                         0x1405C85A0
#define CXWnd__GetRelativeRect_x                           0x1405CA0E0
#define CXWnd__GetScreenClipRect_x                         0x1405CA1F0
#define CXWnd__GetScreenRect_x                             0x1405CA370
#define CXWnd__GetTooltipRect_x                            0x1405CA4F0
#define CXWnd__IsActive_x                                  0x1405CAAB0
#define CXWnd__IsDescendantOf_x                            0x1405CAAE0
#define CXWnd__IsReallyVisible_x                           0x1405CAB50
#define CXWnd__IsType_x                                    0x1405CABA0
#define CXWnd__Minimize_x                                  0x1405CACA0
#define CXWnd__ProcessTransition_x                         0x1402E1760
#define CXWnd__Resize_x                                    0x1405CBCC0
#define CXWnd__Right_x                                     0x1405CBD60
#define CXWnd__SetFocus_x                                  0x1405CC120
#define CXWnd__SetFont_x                                   0x1405CC170
#define CXWnd__SetKeyTooltip_x                             0x1405CC280
#define CXWnd__SetMouseOver_x                              0x1405CC3D0
#define CXWnd__SetParent_x                                 0x1405CC450
#define CXWnd__StartFade_x                                 0x1405CC880
#define CXWnd__vftable_x                                   0x140AEB6F0
#define CXWnd__CXWnd_x                                     0x1405C41F0
#define CXWnd__dCXWnd_x                                    0x1405C4B20

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                     0x14060F5E0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                  0x1405ECA30
#define CXWndManager__DrawCursor_x                         0x1405ECD10
#define CXWndManager__DrawWindows_x                        0x1405ECF70
#define CXWndManager__GetKeyboardFlags_x                   0x1405ED5E0
#define CXWndManager__HandleKeyboardMsg_x                  0x1405ED620
#define CXWndManager__RemoveWnd_x                          0x1405F0E20

// CDBStr
#define CDBStr__GetString_x                                0x1401956C0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                0x1406A0130

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x               0x1400D7690
#define CCharacterListWnd__EnterWorld_x                    0x1400D6490
#define CCharacterListWnd__Quit_x                          0x14012C720
#define CCharacterListWnd__UpdateList_x                    0x1400D83D0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                        0x14066D320
#define ItemBase__CreateItemTagString_x                    0x14066DDC0
#define ItemBase__GetImageNum_x                            0x140670530
#define ItemBase__GetItemValue_x                           0x140672060
#define ItemBase__IsEmpty_x                                0x140673DE0
#define ItemBase__IsKeyRingItem_x                          0x140674510
#define ItemBase__ValueSellMerchant_x                      0x1406786F0
#define ItemClient__CanDrop_x                              0x1402C36F0
#define ItemClient__CanGoInBag_x                           0x1402C3820
#define ItemClient__CreateItemClient_x                     0x1402C3AB0
#define ItemClient__dItemClient_x                          0x1402C3570

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                      0x1401B54A0
#define EQ_LoadingS__Array_x                               0x140D5AD60

// PcClient
#define PcBase__GetAlternateAbilityId_x                    0x1406847F0
#define PcBase__GetCombatAbility_x                         0x140684EE0
#define PcBase__GetCombatAbilityTimer_x                    0x140684F80
#define PcBase__GetItemContainedRealEstateIds_x            0x140685750
#define PcBase__GetNonArchivedOwnedRealEstates_x           0x1406861D0
#define PcClient__AlertInventoryChanged_x                  0x1402E6C70
#define PcClient__GetConLevel_x                            0x1402E73C0
#define PcClient__GetMeleeSpellFromSkillIndex_x            0x1402E9AC0
#define PcClient__HasLoreItem_x                            0x1402EAB60
#define PcZoneClient__GetItemRecastTimer_x                 0x1402F74E0
#define PcZoneClient__RemoveMyAffect_x                     0x1402FA9A0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                       0x14022AF60
#define EQGroundItemListManager__Add_x                     0x14022B110
#define EQGroundItemListManager__Clear_x                   0x14022B1B0
#define EQGroundItemListManager__Delete_x                  0x14022B270
#define EQGroundItemListManager__Instance_x                0x14022B300

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                         0x140266B50

// CTribute
#define CTribute__GetActiveFavorCost_x                     0x14018FDE0

// PlayerClient
#define PlayerBase__CanSee_x                               0x140658C30
#define PlayerBase__CanSee1_x                              0x140658D10
#define PlayerBase__GetVisibilityLineSegment_x             0x140659200
#define PlayerBase__HasProperty_x                          0x1406593E0
#define PlayerBase__IsTargetable_x                         0x1406594A0
#define PlayerClient__ChangeBoneStringSprite_x             0x140308750
#define PlayerClient__GetPcClient_x                        0x14030B290
#define PlayerClient__PlayerClient_x                       0x140300A70
#define PlayerClient__SetNameSpriteState_x                 0x14030E9C0
#define PlayerClient__SetNameSpriteTint_x                  0x14030F980
#define PlayerZoneClient__ChangeHeight_x                   0x14031E5C0
#define PlayerZoneClient__DoAttack_x                       0x14031F2D0
#define PlayerZoneClient__GetLevel_x                       0x140322A80
#define PlayerZoneClient__IsValidTeleport_x                0x1402698E0
#define PlayerZoneClient__LegalPlayerRace_x                0x1401A3B70

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                0x140317A90
#define PlayerManagerClient__GetSpawnByName_x              0x140317B40
#define PlayerManagerClient__GetPlayerFromPartialName_x    0x140317C40
#define PlayerManagerClient__CreatePlayer_x                0x140317550
#define PlayerManagerBase__PrepForDestroyPlayer_x          0x140658740

// KeyPressHandler
#define KeypressHandler__Get_x                             0x1402C8CD0
#define KeypressHandler__AttachAltKeyToEqCommand_x         0x1402C85E0
#define KeypressHandler__AttachKeyToEqCommand_x            0x1402C8650
#define KeypressHandler__ClearCommandStateArray_x          0x1402C8C60
#define KeypressHandler__HandleKeyDown_x                   0x1402C8DF0
#define KeypressHandler__HandleKeyUp_x                     0x1402C8F10
#define KeypressHandler__SaveKeymapping_x                  0x1402C8AE0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x               0x14069DC40

// StringTable
#define StringTable__getString_x                           0x140697860

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                    0x1402F0C80
#define PcZoneClient__DestroyHeldItemOrMoney_x             0x1402F5610
#define PcZoneClient__GetPcSkillLimit_x                    0x1402F85C0
#define PcZoneClient__RemovePetEffect_x                    0x1402FAC80
#define PcZoneClient__HasAlternateAbility_x                0x1402F91A0
#define PcZoneClient__CanEquipItem_x                       0x1402F38A0
#define PcZoneClient__GetItemByID_x                        0x1402F6560
#define PcZoneClient__RemoveBuffEffect_x                   0x1402FA830
#define PcZoneClient__BandolierSwap_x                      0x1402E6D20

// Doors
#define EQSwitch__UseSwitch_x                              0x14026E550

// IconCache
#define IconCache__GetIcon_x                               0x1400AA1A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                     0x1403CDD20
#define CContainerMgr__CloseContainer_x                    0x1403CD640
#define CContainerMgr__OpenExperimentContainer_x           0x1403CE0C0

// CQuantityWnd
#define CQuantityWnd__Open_x                               0x1404D0790

// CHelpWnd
#define CHelpWnd__SetFile_x                                0x1402BAC60

// CLootWnd
#define CLootWnd__LootAll_x                                0x14045E360
#define CLootWnd__RequestLootSlot_x                        0x14045F3B0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                    0x1401E5BD0
#define EQ_Spell__SpellAffects_x                           0x1401E6EB0
#define EQ_Spell__SpellAffectBase_x                        0x1401E6E10
#define EQ_Spell__GetSpellAffectBySlot_x                   0x1400E0810
#define EQ_Spell__GetSpellAffectByIndex_x                  0x1400E07C0
#define EQ_Spell__IsSPAStacking_x                          0x1401E6AE0
#define EQ_Spell__IsSPAIgnoredByStacking_x                 0x1401E6690
#define EQ_Spell__IsDegeneratingLevelMod_x                 0x1401E5F50

// EQSpellStrings
#define EQSpellStrings__GetString_x                        0x1400C7A70

// CTargetWnd
#define CTargetWnd__WndNotification_x                      0x14052E490
#define CTargetWnd__RefreshTargetBuffs_x                   0x14052DBB0
#define CTargetWnd__HandleBuffRemoveRequest_x              0x14052D3B0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                       0x140535D40

// CTaskManager
#define CTaskManager__GetEntry_x                           0x14018C860
#define CTaskManager__GetTaskStatus_x                      0x14018C970
#define CTaskManager__GetElementDescription_x              0x14018C4F0

// EqSoundManager
#define EqSoundManager__WavePlay_x                         0x1401E3EF0
#define EqSoundManager__PlayScriptMp3_x                    0x1401E2C80
#define EqSoundManager__SoundAssistPlay_x                  0x140342720
#define EqSoundManager__WaveInstancePlay_x                 0x140342A60

// CTextureAnimation
#define CTextureAnimation__Draw_x                          0x1405CD620
#define CTextureAnimation__SetCurCell_x                    0x1405CD930

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                     0x1402B8E50

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x              0x1406B8880
#define CharacterBase__GetItemByGlobalIndex1_x             0x1406B8900
#define CharacterBase__IsExpansionFlag_x                   0x140209F10

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x              0x1403A8290
#define CCastSpellWnd__IsBardSongPlaying_x                 0x1403A8D00
#define CCastSpellWnd__RefreshSpellGemButtons_x            0x1403AA270

// messages
#define msg_spell_worn_off_x                               0x140499430
#define msg_new_text_x                                     0x14021C920
#define __msgTokenTextParam_x                              0x140213CE0
#define msgTokenText_x                                     0x140213BF0

// SpellManager
#define Spellmanager__LoadTextSpells_x                     0x140344490
#define SpellManager__GetSpellByGroupAndRank_x             0x140344390

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140668A40

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                            0x140457580

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                0x1403D2B80
#define CCursorAttachment__IsOkToActivate_x                0x1403D6050
#define CCursorAttachment__RemoveAttachment_x              0x1403D6300
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x             0x140606D10
#define CEQSuiteTextureLoader__GetDefaultUIPath_x          0x140606F10
#define CEQSuiteTextureLoader__GetTexture_x                0x140606F20

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                    0x140156C60
#define CFindItemWnd__Update_x                             0x140157620
#define CFindItemWnd__PickupSelectedItem_x                 0x1401502B0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x            0x1401617F0
#define LootFiltersManager__GetItemFilterData_x            0x140162310
#define LootFiltersManager__RemoveItemLootFilter_x         0x140162BC0
#define LootFiltersManager__SetItemLootFilter_x            0x140162E70

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                  0x1404B2580

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x             0x14033CF00
#define CResolutionHandler__UpdateResolution_x             0x1405B1C80

// CColorPickerWnd
#define CColorPickerWnd__Open_x                            0x1403C9E40

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x               0x1406BCCA0
#define CDistillerInfo__Instance_x                         0x1406BCB90

// CGroupWnd
#define CGroupWnd__WndNotification_x                       0x1403F42E0
#define CGroupWnd__UpdateDisplay_x                         0x1403F3470

// ItemBase
#define ItemBase__IsLore_x                                 0x140674650
#define ItemBase__IsLoreEquipped_x                         0x1406746E0

#define MultipleItemMoveManager__ProcessMove_x             0x1402DC7B0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                    0x140266CB0
#define EQPlacedItemManager__GetItemByGuid_x               0x140266C40
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140266C80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                0x140337100

// FactionManagerClient
#define FactionManagerClient__Instance_x                   0x14012CDF0
#define FactionManagerClient__HandleFactionMessage_x       0x14012D1D0
#define FactionManagerClient__GetFactionStanding_x         0x14012C5C0
#define FactionManagerClient__GetMaxFaction_x              0x14012C5C0
#define FactionManagerClient__GetMinFaction_x              0x14012C470

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                0x1400B4830

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                   0x1401387A0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x 0x1401BE4E0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x 0x1401BD670
#define CAltAbilityData__GetMercCurrentRank_x              0x1401BE300
#define CAltAbilityData__GetMercMaxRank_x                  0x1401BE280

// CTargetManager
#define CTargetManager__Get_x                              0x1403497A0

// KeyCombo
#define KeyCombo__GetTextDescription_x                     0x1405C33C0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                    0x140089B20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                 0x14035B050

// AchievementManager
#define AchievementManager__Instance_x                     0x140092D20

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                       0x1406A0CC0
#define FreeToPlayClient__RestrictionInfo_x                0x140B000F0

// UdpConnection
#define UdpConnection__GetStats_x                          0x140565250

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                            0x1408558D8
#define CGFScreenWnd__CGFScreenWnd_x                       0x140072AD0
#define CGFScreenWnd__CGFScreenWnd1_x                      0x140072C60
#define CGFScreenWnd__dCGFScreenWnd_x                      0x140072E10

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
