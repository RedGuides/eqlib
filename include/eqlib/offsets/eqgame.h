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

#define __ClientDate                                               20260624u
#define __ExpectedVersionDate                                     "Jun 24 2026"
#define __ExpectedVersionTime                                     "10:02:28"
#define __ActualVersionDate_x                                      0x14098F338
#define __ActualVersionTime_x                                      0x14098F328
#define __ActualVersionBuild_x                                     0x1409244F0

// Memory Protection
#define __MemChecker0_x                                            0x1402CF400
#define __MemChecker1_x                                            0x1405A9190
#define __MemChecker4_x                                            0x14029C720
#define __EncryptPad0_x                                            0x140D6CC40

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EB55E0
#define instEQZoneInfo_x                                           0x140EB57D4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14022EFD0
#define __gfMaxZoomCameraDistance_x                                0x1409257A8
#define __gfMaxCameraDistance_x                                    0x140ACF284
#define __CurrentSocial_x                                          0x140C210E4 // CActionsWnd::StopSocial
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
#define instDynamicZone_x                                          0x140EB4050 // Part of g_dynamicZone
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
#define pinstTaskMember_x                                          0x140D59870 // Part of g_taskManager
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
#define __allowslashcommand_x                                      0x140259950
#define __CastRay_x                                                0x1402519C0
#define __CastRay2_x                                               0x1402516B0
#define __compress_block_x                                         0x14055EE10
#define __ConvertItemTags_x                                        0x140251E50
#define __CleanItemTags_x                                          0x14008D490
#define __CreateCascadeMenuItems_x                                 0x140198430
#define __decompress_block_x                                       0x1405A4980
#define __DoesFileExist_x                                          0x1405AD200
#define __EQGetTime_x                                              0x1405A9740
#define __ExecuteCmd_x                                             0x140226470
#define __FixHeading_x                                             0x140666960
#define __FlushDxKeyboard_x                                        0x1403543B0
#define __get_bearing_x                                            0x14025BC60
#define __get_melee_range_x                                        0x14025BD50
#define __GetAnimationCache_x                                      0x1403D9A80
#define __GetGaugeValueFromEQ_x                                    0x14051DBF0
#define __GetLabelFromEQ_x                                         0x14051F1D0
#define __GetXTargetType_x                                         0x140668E50   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406669E0
#define __HelpPath_x                                               0x140F2AA78   // Why?
#define __NewUIINI_x                                               0x14052AC30   // Why?
#define __ProcessDeviceEvents_x                                    0x14029CD20
#define __ProcessGameEvents_x                                      0x1402914E0
#define __ProcessKeyboardEvents_x                                  0x140355B90
#define __ProcessMouseEvents_x                                     0x140292C40
#define __SaveColors_x                                             0x1401A85A0
#define __STMLToText_x                                             0x1405BDA90
#define __WndProc_x                                                0x140352B70
#define CMemoryMappedFile__SetFile_x                               0x140815C40
#define DrawNetStatus_x                                            0x1402DE960
#define Util__FastTime_x                                           0x1405A8C50
#define __eq_delete_x                                              0x1406E1C78
#define __eq_new_x                                                 0x1406E1ED0
#define __CopyLayout_x                                             0x1402CB7D0
#define __ThrottleFrameRate_x                                      0x1402805F5
#define __ThrottleFrameRateEnd_x                                   0x1402805FB

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140365700
#define CAAWnd__Update_x                                           0x140365A00
#define CAAWnd__UpdateSelected_x                                   0x140366C20

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B2160
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400AA7B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A6E60
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
#define CBankWnd__WndNotification_x                                0x140386AB0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403918B0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14038D580
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14038C5F0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140394120

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AEED10

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403B7360
#define CChatWindowManager__InitContextMenu_x                      0x1403B74F0
#define CChatWindowManager__FreeChatWindow_x                       0x1403B6360
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403BF870
#define CChatWindowManager__CreateChatWindow_x                     0x1403B5D90

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010F3B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C08E0
#define CChatWindow__Clear_x                                       0x1403C18E0
#define CChatWindow__WndNotification_x                             0x1403C2B50
#define CChatWindow__AddHistory_x                                  0x1403C13F0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405EB420
#define CContextMenu__RemoveMenuItem_x                             0x1405EB830
#define CContextMenu__RemoveAllMenuItems_x                         0x1405EB800
#define CContextMenu__CheckMenuItem_x                              0x1405EB670
#define CContextMenu__SetMenuItem_x                                0x1405EB850
#define CContextMenu__AddSeparator_x                               0x1405EB5A0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405DD190
#define CContextMenuManager__RemoveMenu_x                          0x1405DD770
#define CContextMenuManager__PopupMenu_x                           0x1405DD4B0
#define CContextMenuManager__Flush_x                               0x1405DD210
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D12E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406BB900
#define CChatService__GetFriendName_x                              0x1406BB910

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405CE060
#define CComboWnd__Draw_x                                          0x1405CE160
#define CComboWnd__GetCurChoice_x                                  0x1405CE450  // unused
#define CComboWnd__GetListRect_x                                   0x1405CE4F0
#define CComboWnd__InsertChoice_x                                  0x1405CE830
#define CComboWnd__SetColors_x                                     0x1405CEBC0
#define CComboWnd__SetChoice_x                                     0x1405CEB80
#define CComboWnd__GetItemCount_x                                  0x1405CE4E0
#define CComboWnd__GetCurChoiceText_x                              0x1405CE490  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405CE420
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405CE8F0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403CEFC0
#define CContainerWnd__SetContainer_x                              0x14042F050
#define CContainerWnd__vftable_x                                   0x140A040B0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DFCBCC
#define CDisplay__ZoneMainUI_x                                     0x1406055D0
#define CDisplay__PreZoneMainUI_x                                  0x140124630
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
#define CEditBaseWnd__SetSel_x                                     0x14060FF90
#define CEditWnd__DrawCaret_x                                      0x140601700  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140601C20
#define CEditWnd__GetCaretPt_x                                     0x140601EC0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140601F00
#define CEditWnd__GetDisplayString_x                               0x140602160
#define CEditWnd__GetHorzOffset_x                                  0x1406023B0
#define CEditWnd__GetLineForPrintableChar_x                        0x140602510
#define CEditWnd__GetSelStartPt_x                                  0x140602800  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140602640
#define CEditWnd__PointFromPrintableChar_x                         0x1406033C0
#define CEditWnd__ReplaceSelection_x                               0x140603780
#define CEditWnd__SelectableCharFromPoint_x                        0x140603C40
#define CEditWnd__SetEditable_x                                    0x140603EE0
#define CEditWnd__SetWindowText_x                                  0x140603F10

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
#define CGaugeWnd__Draw_x                                          0x1403E4C50

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C8F60
#define CGuild__GetGuildName_x                                     0x1400C8FA0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x14040BB20

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C0ED0
#define CHotButton__SetCheck_x                                     0x1402C11A0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140425CC0
#define CInvSlotMgr__MoveItem_x                                    0x1404268A0
#define CInvSlotMgr__SelectSlot_x                                  0x140428D70

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1404228F0
#define CInvSlot__SliderComplete_x                                 0x1404242C0
#define CInvSlot__GetItemBase_x                                    0x14041DDA0
#define CInvSlot__UpdateItem_x                                     0x140424790

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14042AF80

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14044C5B0
#define CItemDisplayWnd__UpdateStrings_x                           0x14044F7D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140448E90
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14044A7C0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14044B9D0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14051A660
#define CSpellDisplayWnd__UpdateStrings_x                          0x14051C3F0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140557E90

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140445510

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x14051C230

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015C320

// CLabel
#define CLabel__UpdateText_x                                       0x140456DE0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405D1A00
#define CListWnd__dCListWnd_x                                      0x1405D1E40
#define CListWnd__vftable_x                                        0x140AECE60
#define CListWnd__AddColumn_x                                      0x1405D24D0
#define CListWnd__AddColumn1_x                                     0x1405D2570
#define CListWnd__AddLine_x                                        0x1405D26D0
#define CListWnd__AddString_x                                      0x1405D2C70
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405D31E0
#define CListWnd__CalculateVSBRange_x                              0x1405D34C0
#define CListWnd__ClearSel_x                                       0x1405D3660
#define CListWnd__ClearAllSel_x                                    0x1405D3600
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405D36C0
#define CListWnd__Compare_x                                        0x1405D3880
#define CListWnd__Draw_x                                           0x1405D3D40
#define CListWnd__DrawColumnSeparators_x                           0x1405D48D0
#define CListWnd__DrawHeader_x                                     0x1405D4990
#define CListWnd__DrawItem_x                                       0x1405D5070
#define CListWnd__DrawLine_x                                       0x1405D5A10
#define CListWnd__DrawSeparator_x                                  0x1405D5ED0
#define CListWnd__EnableLine_x                                     0x1405D62F0
#define CListWnd__EnsureVisible_x                                  0x1405D6350
#define CListWnd__ExtendSel_x                                      0x1405D6450
#define CListWnd__GetColumnMinWidth_x                              0x1405D67E0
#define CListWnd__GetColumnWidth_x                                 0x1405D6860
#define CListWnd__GetCurSel_x                                      0x1405D6960
#define CListWnd__GetItemData_x                                    0x1405D6CE0
#define CListWnd__GetItemHeight_x                                  0x1405D6D20
#define CListWnd__GetItemRect_x                                    0x1405D6F50
#define CListWnd__GetItemText_x                                    0x1405D71F0
#define CListWnd__GetSelList_x                                     0x1405D7450
#define CListWnd__GetSeparatorRect_x                               0x1405D7640
#define CListWnd__InsertLine_x                                     0x1405D8AB0
#define CListWnd__RemoveLine_x                                     0x1405D9120
#define CListWnd__SetColors_x                                      0x1405D94E0
#define CListWnd__SetColumnJustification_x                         0x1405D9500
#define CListWnd__SetColumnLabel_x                                 0x1405D9580
#define CListWnd__SetColumnWidth_x                                 0x1405D9720
#define CListWnd__SetCurSel_x                                      0x1405D97F0
#define CListWnd__SetItemColor_x                                   0x1405D9A60
#define CListWnd__SetItemData_x                                    0x1405D9B00
#define CListWnd__SetItemText_x                                    0x1405D9D40
#define CListWnd__Sort_x                                           0x1405DA150
#define CListWnd__ToggleSel_x                                      0x1405DA2C0
#define CListWnd__SetColumnsSizable_x                              0x1405D9770
#define CListWnd__SetItemWnd_x                                     0x1405D9E70
#define CListWnd__GetItemWnd_x                                     0x1405D73E0
#define CListWnd__SetItemIcon_x                                    0x1405D9B40
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405D2FB0
#define CListWnd__SetVScrollPos_x                                  0x1405DA0B0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14046A7A0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A51A40
#define MapViewMap__Clear_x                                        0x14046C460
#define MapViewMap__SetZoom_x                                      0x140472B40
#define MapViewMap__HandleLButtonDown_x                            0x14046F640

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140494C10  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14049B570
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14049BD40
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14049F660
#define CMerchantWnd__SelectBuySellSlot_x                          0x14049E960
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A3AF0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140696930
#define CPacketScrambler__hton_x                                   0x140696920

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405FAFB0
#define CSidlManagerBase__FindAnimation1_x                         0x1405FAEF0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405FB5F0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405FB390
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405FA2F0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405FA280
#define CSidlManagerBase__CreateXWnd_x                             0x1405F98E0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14050D4B0
#define CSidlManager__CreateXWnd_x                                 0x14050D670

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405BF6B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405BF580
#define CSidlScreenWnd__ConvertToRes_x                             0x14060A2D0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405BF820
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405BECC0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405BED90
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405BF000
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405BFF10
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405C0140
#define CSidlScreenWnd__GetChildItem_x                             0x1405C02E0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405C0530
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405CA5D0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405C08A0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405C0C10
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405C14E0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405C1EE0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F569D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C2560
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C2D50
#define CSidlScreenWnd__vftable_x                                  0x140AEC0E8
#define CSidlScreenWnd__WndNotification_x                          0x1405C2DA0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14033D330 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14033D660 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14033D590
#define CSkillMgr__IsActivatedSkill_x                              0x14033DA20
#define CSkillMgr__IsCombatSkill_x                                 0x14033DA60
#define CSkillMgr__GetSkillTimerDuration_x                         0x14033D990
#define CSkillMgr__GetSkillLastUsed_x                              0x14033D5E0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405DAC20
#define CSliderWnd__SetValue_x                                     0x1405DB430
#define CSliderWnd__SetNumTicks_x                                  0x1405DB2B0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140513D30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405DFC20
#define CStmlWnd__CalculateHSBRange_x                              0x1405C9F80
#define CStmlWnd__CalculateVSBRange_x                              0x1405E0B40
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405E15D0
#define CStmlWnd__ForceParseNow_x                                  0x1405E1670
#define CStmlWnd__GetVisibleText_x                                 0x1405E1D40
#define CStmlWnd__MakeStmlColorTag_x                               0x1405E3AD0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405E3B10
#define CStmlWnd__SetSTMLText_x                                    0x1405EABA0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405EAD50
#define CStmlWnd__UpdateHistoryString_x                            0x1405EB0F0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405DB800
#define CTabWnd__DrawCurrentPage_x                                 0x1405DB8A0
#define CTabWnd__DrawTab_x                                         0x1405DBC70
#define CTabWnd__GetTabRect_x                                      0x1405DC300
#define CTabWnd__InsertPage_x                                      0x1405DC5D0
#define CTabWnd__RemovePage_x                                      0x1405DC860
#define CTabWnd__SetPage_x                                         0x1405DC9C0
#define CTabWnd__UpdatePage_x                                      0x1405DCCC0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140604370
#define CPageWnd__SetTabText_x                                     0x1406043E0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C2470  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C28A0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F2760
#define CTextureFont__DrawWrappedText1_x                           0x1405F2660
#define CTextureFont__DrawWrappedText2_x                           0x1405F2890
#define CTextureFont__GetTextExtent_x                              0x1405F2C40
#define CTextureFont__GetHeight_x                                  0x1405F2C00

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1406089F0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405BC110

// CXStr
#define CXStr__gFreeLists_x                                        0x140D82060
#define CXStr__gCXStrAccess_x                                      0x140F56538

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405C55D0
#define CXWnd__ClrFocus_x                                          0x1405C58C0
#define CXWnd__Destroy_x                                           0x1405C5A40
#define CXWnd__DoAllDrawing_x                                      0x1405C5B40
#define CXWnd__DrawColoredRect_x                                   0x1405C6310
#define CXWnd__DrawTooltip_x                                       0x1405C7980
#define CXWnd__DrawTooltipAtPoint_x                                0x1405C7A40
#define CXWnd__GetChildItem_x                                      0x1405C8350
#define CXWnd__GetChildWndAt_x                                     0x1405C8410
#define CXWnd__GetClientRect_x                                     0x1405C86D0
#define CXWnd__GetClientClipRect_x                                 0x1405C8580
#define CXWnd__GetRelativeRect_x                                   0x1405CA0C0
#define CXWnd__GetScreenClipRect_x                                 0x1405CA1D0
#define CXWnd__GetScreenRect_x                                     0x1405CA350
#define CXWnd__GetTooltipRect_x                                    0x1405CA4D0
#define CXWnd__IsActive_x                                          0x1405CAA90
#define CXWnd__IsDescendantOf_x                                    0x1405CAAC0
#define CXWnd__IsReallyVisible_x                                   0x1405CAB30
#define CXWnd__IsType_x                                            0x1405CAB80
#define CXWnd__Minimize_x                                          0x1405CAC80
#define CXWnd__ProcessTransition_x                                 0x1405CBB90
#define CXWnd__Resize_x                                            0x1405CBCA0
#define CXWnd__Right_x                                             0x1405CBD40
#define CXWnd__SetFocus_x                                          0x1405CC100
#define CXWnd__SetFont_x                                           0x1405CC150
#define CXWnd__SetKeyTooltip_x                                     0x1405CC260
#define CXWnd__SetMouseOver_x                                      0x1405CC3B0
#define CXWnd__SetParent_x                                         0x1405CC430
#define CXWnd__StartFade_x                                         0x1405CC860
#define CXWnd__vftable_x                                           0x140AEC6C0
#define CXWnd__CXWnd_x                                             0x1405C41D0
#define CXWnd__dCXWnd_x                                            0x1405C4B00

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14060F720

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405ECA10
#define CXWndManager__DrawCursor_x                                 0x1405ECCF0
#define CXWndManager__DrawWindows_x                                0x1405ECF50
#define CXWndManager__GetKeyboardFlags_x                           0x1405ED5C0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405ED600
#define CXWndManager__RemoveWnd_x                                  0x1405F0E00

// CDBStr
#define CDBStr__GetString_x                                        0x1401956B0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406A0920

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D7690
#define CCharacterListWnd__EnterWorld_x                            0x1400D6490
#define CCharacterListWnd__Quit_x                                  0x1400D7670
#define CCharacterListWnd__UpdateList_x                            0x1400D83D0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14066DB10
#define ItemBase__CreateItemTagString_x                            0x14066E5B0
#define ItemBase__GetImageNum_x                                    0x140670D20
#define ItemBase__GetItemValue_x                                   0x140672850
#define ItemBase__IsEmpty_x                                        0x1406745D0
#define ItemBase__IsKeyRingItem_x                                  0x140674D00
#define ItemBase__ValueSellMerchant_x                              0x140678EE0
#define ItemClient__CanDrop_x                                      0x1402C36E0
#define ItemClient__CanGoInBag_x                                   0x1402C3810
#define ItemClient__CreateItemClient_x                             0x1402C3AA0
#define ItemClient__dItemClient_x                                  0x1402C3560

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B5490
#define EQ_LoadingS__Array_x                                       0x140D5BD60

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140684FE0
#define PcBase__GetCombatAbility_x                                 0x1406856D0
#define PcBase__GetCombatAbilityTimer_x                            0x140685770
#define PcBase__GetItemContainedRealEstateIds_x                    0x140685F40
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406869C0
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
#define PlayerBase__CanSee_x                                       0x140658D70
#define PlayerBase__CanSee1_x                                      0x140658E50
#define PlayerBase__GetVisibilityLineSegment_x                     0x140659340
#define PlayerBase__HasProperty_x                                  0x140659520
#define PlayerBase__IsTargetable_x                                 0x1406595E0
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
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140658880

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C8CC0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C85D0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C8640
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C8C50  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C8DE0
#define KeypressHandler__HandleKeyUp_x                             0x1402C8F00
#define KeypressHandler__SaveKeymapping_x                          0x1402C8AD0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14069E430  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140698050

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
#define IconCache__GetIcon_x                                       0x1403D9AB0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403CDD10
#define CContainerMgr__CloseContainer_x                            0x1403CD630
#define CContainerMgr__OpenExperimentContainer_x                   0x1403CE0B0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404D0780

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402BAC50

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14045E350
#define CLootWnd__RequestLootSlot_x                                0x14045F3A0

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
#define CTargetWnd__WndNotification_x                              0x14052E480
#define CTargetWnd__RefreshTargetBuffs_x                           0x14052DBA0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14052D3A0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140535D30  // CTaskWnd::UpdateTimes

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
#define CTextureAnimation__Draw_x                                  0x1405CD600
#define CTextureAnimation__SetCurCell_x                            0x1405CD910

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B8E40

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406B9070
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406B90F0
#define CharacterBase__IsExpansionFlag_x                           0x140209F00

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403A8280
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403A8CF0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403AA260

// messages
#define msg_spell_worn_off_x                                       0x140221140
#define msg_new_text_x                                             0x14021C910
#define __msgTokenTextParam_x                                      0x140213CD0
#define msgTokenText_x                                             0x140213BE0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140344480
#define SpellManager__GetSpellByGroupAndRank_x                     0x140344380

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140669230

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140457570

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D2B70
#define CCursorAttachment__IsOkToActivate_x                        0x1403D6040
#define CCursorAttachment__RemoveAttachment_x                      0x1403D62F0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140606E50
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140607050
#define CEQSuiteTextureLoader__GetTexture_x                        0x140607060

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
#define COptionsWnd__FillChatFilterList_x                          0x1404B2570

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14033CEF0
#define CResolutionHandler__UpdateResolution_x                     0x1405B1C60

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403C9E30

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406BD490  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406BD380  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403F42D0
#define CGroupWnd__UpdateDisplay_x                                 0x1403F3460

// ItemBase
#define ItemBase__IsLore_x                                         0x140674E40
#define ItemBase__IsLoreEquipped_x                                 0x140674ED0

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
#define KeyCombo__GetTextDescription_x                             0x1405C33A0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140089B20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14035B040

// AchievementManager
#define AchievementManager__Instance_x                             0x140092D20

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406A14B0
#define FreeToPlayClient__RestrictionInfo_x                        0x140B010C0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140565230

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x1408568D8
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072AD0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140072C60
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140072E10

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
