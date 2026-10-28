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

#define __ClientDate                                               20261019u
#define __ExpectedVersionDate                                     "Oct 19 2026"
#define __ExpectedVersionTime                                     "13:46:43"
#define __ActualVersionDate_x                                      0x1409A0DD0
#define __ActualVersionTime_x                                      0x1409A0DC0
#define __ActualVersionBuild_x                                     0x140935DA0

// Memory Protection
#define __MemChecker0_x                                            0x1402D5640
#define __MemChecker1_x                                            0x1405B88C0
#define __MemChecker4_x                                            0x1402A27E0
#define __EncryptPad0_x                                            0x140D91FC0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140ECAB30
#define instEQZoneInfo_x                                           0x140ECAD24 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402394B0
#define __gfMaxZoomCameraDistance_x                                0x140937058
#define __gfMaxCameraDistance_x                                    0x140AE13A8
#define __CurrentSocial_x                                          0x140C4D9C0 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D897A0
#define g_eqCommandStates_x                                        0x140D8A840
#define __CommandList_x                                            0x140D8AA70
#define __ScreenMode_x                                             0x140E124B4
#define __gWorld_x                                                 0x140EC55E8
#define __gpbCommandEvent_x                                        0x140EC30A0
#define __ServerHost_x                                             0x140EC3288
#define __Guilds_x                                                 0x140EC96E0
#define __MemCheckBitmask_x                                        0x140ECB08B
#define __MemCheckActive_x                                         0x140ECC7A5
#define __MouseEventTime_x                                         0x140F40120
#define DI8__MouseState_x                                          0x140F443A8
#define __heqmain_x                                                0x140F46838
#define DI8__Mouse_x                                               0x140F46850
#define __HWnd_x                                                   0x140F46858
#define __Mouse_x                                                  0x140ECAB8C
#define DI8__Keyboard_x                                            0x140F442E0
#define __LoginName_x                                              0x140F46F2C
#define __CurrentMapLabel_x                                        0x140F5AA40
#define __LabelCache_x                                             0x140F5B610
#define __ChatFilterDefs_x                                         0x140A7B1C0
#define Teleport_Table_Size_x                                      0x140EC30A8
#define Teleport_Table_x                                           0x140EC35A0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EC5A70
#define pinstActiveBanker_x                                        0x140EC2FD0
#define pinstActiveCorpse_x                                        0x140EC2FC0
#define pinstActiveGMaster_x                                       0x140EC2FC8
#define pinstActiveMerchant_x                                      0x140EC2FB8
#define pinstAltAdvManager_x                                       0x140E13280
#define pinstCEverQuest_x                                          0x140F44300
#define pinstCamActor_x                                            0x140E124A0
#define pinstCDBStr_x                                              0x140E12030
#define pinstCDisplay_x                                            0x140EC3080
#define pinstControlledPlayer_x                                    0x140EC3060
#define pinstCResolutionHandler_x                                  0x140F6BBB8
#define pinstCSidlManager_x                                        0x140F6CBB0
#define pinstCXWndManager_x                                        0x140F6CBA8
#define instDynamicZone_x                                          0x140EC95A0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140EC95EE
#define instExpeditionName_x                                       0x140EC962E
#define pinstDZMember_x                                            0x140EC96B8
#define pinstDZTimerInfo_x                                         0x140EC96C0
#define pinstEqLogin_x                                             0x140F46870
#define instTribute_x                                              0x140D84DD0
#define pinstDeviceInputProxy_x                                    0x140ECAB8C
#define pinstEQSoundManager_x                                      0x140E13600
#define pinstEQSpellStrings_x                                      0x140DF6B70
#define pinstSGraphicsEngine_x                                     0x140F6BBD8
#define pinstLocalPC_x                                             0x140EC55D8
#define pinstLocalPlayer_x                                         0x140EC2FB0
#define pinstCMercenaryClientManager_x                             0x140F41A48
#define pinstModelPlayer_x                                         0x140EC2FE0
#define pinstRenderInterface_x                                     0x140F6BBF0
#define pinstSkillMgr_x                                            0x140F43708
#define pinstSpawnManager_x                                        0x140F41E00
#define pinstSpellManager_x                                        0x140F43770
#define pinstStringTable_x                                         0x140EC55E0
#define pinstSwitchManager_x                                       0x140EC2F30
#define pinstTarget_x                                              0x140EC3058
#define pinstTaskMember_x                                          0x140D84DC0 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140EC2FD8
#define instTributeActive_x                                        0x140D84DF9
#define pinstViewActor_x                                           0x140E12498
#define pinstWorldData_x                                           0x140EC55A0
#define pinstPlayerPath_x                                          0x140F41E28
#define pinstTargetIndicator_x                                     0x140F43820
#define EQObject_Top_x                                             0x140EC3088

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F57BA0
#define pinstCContainerMgr_x                                       0x140E120C8
#define pinstCContextMenuManager_x                                 0x140F6C890
#define pinstCInvSlotMgr_x                                         0x140E120A8
#define pinstCItemDisplayManager_x                                 0x140F5A610
#define pinstCPopupWndManager_x                                    0x140F5AEA0
#define pinstCSpellDisplayMgr_x                                    0x140F5B4F0
#define pinstCTaskManager_x                                        0x140C4DD00
#define pinstEQSuiteTextureLoader_x                                0x140D9B6E0
#define pinstItemIconCache_x                                       0x140F57F00
#define pinstLootFiltersManager_x                                  0x140E11A78
#define pinstGFViewListener_x                                      0x140F6C068


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14025E0C0
#define __CastRay_x                                                0x140256110
#define __CastRay2_x                                               0x140255E00
#define __compress_block_x                                         0x14056E340
#define __ConvertItemTags_x                                        0x1402565A0
#define __CleanItemTags_x                                          0x14008EA60
#define __CreateCascadeMenuItems_x                                 0x14019B5C0
#define __decompress_block_x                                       0x1405B3F40
#define __DoesFileExist_x                                          0x1405BD440
#define __EQGetTime_x                                              0x1405B8E70
#define __ExecuteCmd_x                                             0x14022AA20
#define __FixHeading_x                                             0x140676B70
#define __FlushDxKeyboard_x                                        0x14035AAB0
#define __get_bearing_x                                            0x140260490
#define __get_melee_range_x                                        0x140260580
#define __GetAnimationCache_x                                      0x1403E15E0
#define __GetGaugeValueFromEQ_x                                    0x14052D0C0
#define __GetLabelFromEQ_x                                         0x14052E6B0
#define __GetXTargetType_x                                         0x140679060   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140676BF0
#define __HelpPath_x                                               0x140F3FFE8   // Why?
#define __NewUIINI_x                                               0x14053A100   // Why?
#define __ProcessDeviceEvents_x                                    0x1402A2DE0
#define __ProcessGameEvents_x                                      0x1402974E0
#define __ProcessKeyboardEvents_x                                  0x14035C290
#define __ProcessMouseEvents_x                                     0x140298C70
#define __SaveColors_x                                             0x1401AB7A0
#define __STMLToText_x                                             0x1405CDCD0
#define __WndProc_x                                                0x140359190
#define CMemoryMappedFile__SetFile_x                               0x140825850
#define DrawNetStatus_x                                            0x1402E4BB0
#define Util__FastTime_x                                           0x1405B8210
#define __eq_delete_x                                              0x1406F01A8
#define __eq_new_x                                                 0x1406F0400
#define __CopyLayout_x                                             0x1402D1A10
#define __ThrottleFrameRate_x                                      0x140286265
#define __ThrottleFrameRateEnd_x                                   0x14028626B

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14036C270
#define CAAWnd__Update_x                                           0x14036C6D0
#define CAAWnd__UpdateSelected_x                                   0x14036DD20

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B3C00
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400AC0B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A8460
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B4560

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B6A50
#define AltAdvManager__IsAbilityReady_x                            0x1401B6F30
#define AltAdvManager__GetAAById_x                                 0x1401B62E0
#define AltAdvManager__CanTrainAbility_x                           0x1401B60E0
#define AltAdvManager__CanSeeAbility_x                             0x1401B5E00

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400DB970
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DC830
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DCA80
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400F1000
#define CharacterZoneClient__CanUseItem_x                          0x1400F15C0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DD460
#define CharacterZoneClient__CastSpell_x                           0x1400DD500
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400ED430
#define CharacterZoneClient__Cur_HP_x                              0x1400F2E50
#define CharacterZoneClient__Cur_Mana_x                            0x1400F3010
#define CharacterZoneClient__FindAffectSlot_x                      0x1400E0960
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F9760
#define CharacterZoneClient__GetBaseSkill_x                        0x140108A50  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E1E00
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F0900
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400FAFF0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F9EE0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E1F80
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D1440
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D3310
#define CharacterZoneClient__GetHPRegen_x                          0x1400FA610
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F2AA0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400FB190
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E2000
#define CharacterZoneClient__GetManaRegen_x                        0x1400FBE80
#define CharacterZoneClient__GetModCap_x                           0x140103620
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E2300
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E24D0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D69B0
#define CharacterZoneClient__HasSkill_x                            0x1400FF020
#define CharacterZoneClient__HitBySpell_x                          0x1400E2F40
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E68C0
#define CharacterZoneClient__MakeMeVisible_x                       0x140103100
#define CharacterZoneClient__Max_Endurance_x                       0x1402FFC00  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x140103450
#define CharacterZoneClient__Max_Mana_x                            0x1402FFE20  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1401038B0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E9F00
#define CharacterZoneClient__SpellDuration_x                       0x1400EAC30
#define CharacterZoneClient__TotalEffect_x                         0x1400EC090
#define CharacterZoneClient__UseSkill_x                            0x140109A50


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038DE00

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140398BA0
#define CBarterWnd__UpdateInventoryList_x                          0x140398610

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403948D0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140393940

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14039B640

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140B00E68

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BEF70
#define CChatWindowManager__InitContextMenu_x                      0x1403BF100
#define CChatWindowManager__FreeChatWindow_x                       0x1403BDF70
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C7480
#define CChatWindowManager__CreateChatWindow_x                     0x1403BD9A0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140112050

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C84F0
#define CChatWindow__Clear_x                                       0x1403C94E0
#define CChatWindow__WndNotification_x                             0x1403CA750
#define CChatWindow__AddHistory_x                                  0x1403C8FF0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405FB650
#define CContextMenu__RemoveMenuItem_x                             0x1405FBA60
#define CContextMenu__RemoveAllMenuItems_x                         0x1405FBA30
#define CContextMenu__CheckMenuItem_x                              0x1405FB8A0
#define CContextMenu__SetMenuItem_x                                0x1405FBA80
#define CContextMenu__AddSeparator_x                               0x1405FB7D0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405ED3F0
#define CContextMenuManager__RemoveMenu_x                          0x1405ED9D0
#define CContextMenuManager__PopupMenu_x                           0x1405ED710
#define CContextMenuManager__Flush_x                               0x1405ED470
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D8E90

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140683520
#define CChatService__GetFriendName_x                              0x1406CAE10

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405DE300
#define CComboWnd__Draw_x                                          0x1405DE400
#define CComboWnd__GetCurChoice_x                                  0x1405DE6F0  // unused
#define CComboWnd__GetListRect_x                                   0x1405DE790
#define CComboWnd__InsertChoice_x                                  0x1405DEAD0
#define CComboWnd__SetColors_x                                     0x1405DEE60
#define CComboWnd__SetChoice_x                                     0x1405DEE20
#define CComboWnd__GetItemCount_x                                  0x1405DE780
#define CComboWnd__GetCurChoiceText_x                              0x1405DE730  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405DE6C0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405DEB90

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D6B80
#define CContainerWnd__SetContainer_x                              0x140438EF0
#define CContainerWnd__vftable_x                                   0x140A15DF0

// CDisplay
#define CDisplay__cameraType_x                                     0x140E12204
#define CDisplay__ZoneMainUI_x                                     0x140616000
#define CDisplay__PreZoneMainUI_x                                  0x1401A84B0
#define CDisplay__CleanGameUI_x                                    0x14019A680
#define CDisplay__GetClickedActor_x                                0x14019E8E0
#define CDisplay__GetUserDefinedColor_x                            0x14019F550
#define CDisplay__InitCharSelectUI_x                               0x14019F800
#define CDisplay__ReloadUI_x                                       0x1401AA990
#define CDisplay__RestartUI_x                                      0x14020E500
#define CDisplay__WriteTextHD2_x                                   0x1401B1940
#define CDisplay__TrueDistance_x                                   0x1401B15E0
#define CDisplay__SetViewActor_x                                   0x1401ADEE0
#define CDisplay__GetFloorHeight_x                                 0x14019EB40
#define CDisplay__ToggleScreenshotMode_x                           0x1401B10D0
#define CDisplay__RealRender_World_x                               0x1401A9D70

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1406204C0
#define CEditWnd__DrawCaret_x                                      0x140611CB0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1406121B0
#define CEditWnd__GetCaretPt_x                                     0x140612450  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140612490
#define CEditWnd__GetDisplayString_x                               0x1406126F0
#define CEditWnd__GetHorzOffset_x                                  0x140612940
#define CEditWnd__GetLineForPrintableChar_x                        0x140612AA0
#define CEditWnd__GetSelStartPt_x                                  0x140612D90  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140612BD0
#define CEditWnd__PointFromPrintableChar_x                         0x140613950
#define CEditWnd__ReplaceSelection_x                               0x140613D10
#define CEditWnd__SelectableCharFromPoint_x                        0x1406141D0
#define CEditWnd__SetEditable_x                                    0x140614470
#define CEditWnd__SetWindowText_x                                  0x1406144A0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140287340
#define CEverQuest__ClickedPlayer_x                                0x14027A3A0
#define CEverQuest__CreateTargetIndicator_x                        0x14027ACA0
#define CEverQuest__DoTellWindow_x                                 0x140111D50 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140112640 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402890E0
#define CEverQuest__dsp_chat_x                                     0x140111780 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402B4A10
#define CEverQuest__Emote_x                                        0x140289A70
#define CEverQuest__GetBodyTypeDesc_x                              0x14028A810
#define CEverQuest__GetClassDesc_x                                 0x14028A870
#define CEverQuest__GetClassThreeLetterCode_x                      0x14028AC40
#define CEverQuest__GetDeityDesc_x                                 0x14028AEE0
#define CEverQuest__GetLangDesc_x                                  0x14028B310
#define CEverQuest__GetRaceDesc_x                                  0x14028B6B0
#define CEverQuest__InterpretCmd_x                                 0x14028D2F0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402A2E50
#define CEverQuest__LMouseUp_x                                     0x14028EE00
#define CEverQuest__RightClickedOnPlayer_x                         0x1402A01F0
#define CEverQuest__RMouseUp_x                                     0x1402998A0
#define CEverQuest__SetGameState_x                                 0x1402A5990
#define CEverQuest__UPCNotificationFlush_x                         0x1402AB390 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14028E9E0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14029AC90
#define CEverQuest__ReportSuccessfulHit_x                          0x14029BAA0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403EC780

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400CABD0
#define CGuild__GetGuildName_x                                     0x1400CAC10

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140413670

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C70A0
#define CHotButton__SetCheck_x                                     0x1402C7370

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14042EF30
#define CInvSlotMgr__MoveItem_x                                    0x140430040
#define CInvSlotMgr__SelectSlot_x                                  0x1404326C0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14042A750
#define CInvSlot__SliderComplete_x                                 0x14042C140
#define CInvSlot__GetItemBase_x                                    0x140425A30
#define CInvSlot__UpdateItem_x                                     0x14042C610

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140434D10

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140456450
#define CItemDisplayWnd__UpdateStrings_x                           0x140459660
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140452D30
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140454650
#define CItemDisplayWnd__RequestConvertItem_x                      0x140455870

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140529B40
#define CSpellDisplayWnd__UpdateStrings_x                          0x14052B8D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140567340

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14044F3B0

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x14052B710

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015F2B0

// CLabel
#define CLabel__UpdateText_x                                       0x140460D10

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405E1CA0
#define CListWnd__dCListWnd_x                                      0x1405E20D0
#define CListWnd__vftable_x                                        0x140AFEF90
#define CListWnd__AddColumn_x                                      0x1405E2760
#define CListWnd__AddColumn1_x                                     0x1405E2800
#define CListWnd__AddLine_x                                        0x1405E2960
#define CListWnd__AddString_x                                      0x1405E2F00
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405E3470
#define CListWnd__CalculateVSBRange_x                              0x1405E3750
#define CListWnd__ClearSel_x                                       0x1405E38F0
#define CListWnd__ClearAllSel_x                                    0x1405E3890
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405E3950
#define CListWnd__Compare_x                                        0x1405E3B10
#define CListWnd__Draw_x                                           0x1405E3FD0
#define CListWnd__DrawColumnSeparators_x                           0x1405E4B60
#define CListWnd__DrawHeader_x                                     0x1405E4C20
#define CListWnd__DrawItem_x                                       0x1405E5300
#define CListWnd__DrawLine_x                                       0x1405E5CA0
#define CListWnd__DrawSeparator_x                                  0x1405E6160
#define CListWnd__EnableLine_x                                     0x1405E6580
#define CListWnd__EnsureVisible_x                                  0x1405E65E0
#define CListWnd__ExtendSel_x                                      0x1405E66E0
#define CListWnd__GetColumnMinWidth_x                              0x1405E6A70
#define CListWnd__GetColumnWidth_x                                 0x1405E6AF0
#define CListWnd__GetCurSel_x                                      0x1405E6BF0
#define CListWnd__GetItemData_x                                    0x1405E6F70
#define CListWnd__GetItemHeight_x                                  0x1405E6FB0
#define CListWnd__GetItemRect_x                                    0x1405E71E0
#define CListWnd__GetItemText_x                                    0x1405E7480
#define CListWnd__GetSelList_x                                     0x1405E76E0
#define CListWnd__GetSeparatorRect_x                               0x1405E78D0
#define CListWnd__InsertLine_x                                     0x1405E8D40
#define CListWnd__RemoveLine_x                                     0x1405E93B0
#define CListWnd__SetColors_x                                      0x1405E9770
#define CListWnd__SetColumnJustification_x                         0x1405E9790
#define CListWnd__SetColumnLabel_x                                 0x1405E9810
#define CListWnd__SetColumnWidth_x                                 0x1405E99B0
#define CListWnd__SetCurSel_x                                      0x1405E9A80
#define CListWnd__SetItemColor_x                                   0x1405E9CF0
#define CListWnd__SetItemData_x                                    0x1405E9D90
#define CListWnd__SetItemText_x                                    0x1405E9FD0
#define CListWnd__Sort_x                                           0x1405EA3E0
#define CListWnd__ToggleSel_x                                      0x1405EA550
#define CListWnd__SetColumnsSizable_x                              0x1405E9A00
#define CListWnd__SetItemWnd_x                                     0x1405EA100
#define CListWnd__GetItemWnd_x                                     0x1405E7670
#define CListWnd__SetItemIcon_x                                    0x1405E9DD0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405E3240
#define CListWnd__SetVScrollPos_x                                  0x1405EA340

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140474700

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A638A8
#define MapViewMap__Clear_x                                        0x1404763C0
#define MapViewMap__SetZoom_x                                      0x14047C860
#define MapViewMap__HandleLButtonDown_x                            0x140479360

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14049F3E0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A7700
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A7F10
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404ADCA0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404AC3A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404B25E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406A75B0
#define CPacketScrambler__hton_x                                   0x1406A75A0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14060B590
#define CSidlManagerBase__FindAnimation1_x                         0x14060B4D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14060BBD0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14060B970
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14060A8D0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14060A860
#define CSidlManagerBase__CreateXWnd_x                             0x140609EA0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14051C980
#define CSidlManager__CreateXWnd_x                                 0x14051CB40

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405CF740
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405CF870
#define CSidlScreenWnd__ConvertToRes_x                             0x14061A800 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405CF9E0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405CEF00
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405CEFD0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405CF240
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405D00D0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405D0300
#define CSidlScreenWnd__GetChildItem_x                             0x1405D04A0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405D06F0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405DA890 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405D0A60
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405D0DA0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405D1670
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405D2070
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F6BF08
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405D2700
#define CSidlScreenWnd__StoreIniVis_x                              0x1405D2EF0
#define CSidlScreenWnd__vftable_x                                  0x140AFE218
#define CSidlScreenWnd__WndNotification_x                          0x1405D2F40

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140343940 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140343C70 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140343BA0
#define CSkillMgr__IsActivatedSkill_x                              0x140344030
#define CSkillMgr__IsCombatSkill_x                                 0x140344070
#define CSkillMgr__GetSkillTimerDuration_x                         0x140343FA0
#define CSkillMgr__GetSkillLastUsed_x                              0x140343BF0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405EAEA0
#define CSliderWnd__SetValue_x                                     0x1405EB6B0
#define CSliderWnd__SetNumTicks_x                                  0x1405EB530

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140523230

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405EFE50
#define CStmlWnd__CalculateHSBRange_x                              0x1405DA250
#define CStmlWnd__CalculateVSBRange_x                              0x1405F0D70
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405F1800
#define CStmlWnd__ForceParseNow_x                                  0x1405F18A0
#define CStmlWnd__GetVisibleText_x                                 0x1405F1F70
#define CStmlWnd__MakeStmlColorTag_x                               0x1405F3D00
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405F3D40
#define CStmlWnd__SetSTMLText_x                                    0x1405FADD0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405FAF80
#define CStmlWnd__UpdateHistoryString_x                            0x1405FB320

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405EBA60
#define CTabWnd__DrawCurrentPage_x                                 0x1405EBB00
#define CTabWnd__DrawTab_x                                         0x1405EBED0
#define CTabWnd__GetTabRect_x                                      0x1405EC560
#define CTabWnd__InsertPage_x                                      0x1405EC830
#define CTabWnd__RemovePage_x                                      0x1405ECAC0
#define CTabWnd__SetPage_x                                         0x1405ECC20
#define CTabWnd__UpdatePage_x                                      0x1405ECF20

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1406148D0
#define CPageWnd__SetTabText_x                                     0x140614940

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C40F0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C4520


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140602900
#define CTextureFont__DrawWrappedText1_x                           0x140602800
#define CTextureFont__DrawWrappedText2_x                           0x140602A30
#define CTextureFont__GetTextExtent_x                              0x140602DE0
#define CTextureFont__GetHeight_x                                  0x140602DA0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140618F20

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405CC350

// CXStr
#define CXStr__gFreeLists_x                                        0x140D9B050
#define CXStr__gCXStrAccess_x                                      0x140F6BA68

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405D58A0
#define CXWnd__ClrFocus_x                                          0x1405D5B90
#define CXWnd__Destroy_x                                           0x1405D5D10
#define CXWnd__DoAllDrawing_x                                      0x1405D5E20
#define CXWnd__DrawColoredRect_x                                   0x1405D65F0
#define CXWnd__DrawTooltip_x                                       0x1405D7C60
#define CXWnd__DrawTooltipAtPoint_x                                0x1405D7D20
#define CXWnd__GetChildItem_x                                      0x1405D8630
#define CXWnd__GetChildWndAt_x                                     0x1405D86F0
#define CXWnd__GetClientRect_x                                     0x1405D89B0
#define CXWnd__GetClientClipRect_x                                 0x1405D8860
#define CXWnd__GetRelativeRect_x                                   0x1405DA390
#define CXWnd__GetScreenClipRect_x                                 0x1405DA4A0
#define CXWnd__GetScreenRect_x                                     0x1405DA610
#define CXWnd__GetTooltipRect_x                                    0x1405DA790
#define CXWnd__IsActive_x                                          0x1405DAD50
#define CXWnd__IsDescendantOf_x                                    0x1405DAD80
#define CXWnd__IsReallyVisible_x                                   0x1405DADF0
#define CXWnd__IsType_x                                            0x1405DAE40
#define CXWnd__Minimize_x                                          0x1405DAF30
#define CXWnd__ProcessTransition_x                                 0x1405DBE40
#define CXWnd__Resize_x                                            0x1405DBF60
#define CXWnd__Right_x                                             0x1405DC000
#define CXWnd__SetFocus_x                                          0x1405DC3B0
#define CXWnd__SetFont_x                                           0x1405DC400
#define CXWnd__SetKeyTooltip_x                                     0x1405DC510
#define CXWnd__SetMouseOver_x                                      0x1405DC660
#define CXWnd__SetParent_x                                         0x1405DC6E0
#define CXWnd__StartFade_x                                         0x1405DCB20
#define CXWnd__vftable_x                                           0x140AFE7F0
#define CXWnd__CXWnd_x                                             0x1405D44E0
#define CXWnd__dCXWnd_x                                            0x1405D4DE0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14061FC50

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405FCC50
#define CXWndManager__DrawCursor_x                                 0x1405FCF30
#define CXWndManager__DrawWindows_x                                0x1405FD190
#define CXWndManager__GetKeyboardFlags_x                           0x1405FD800
#define CXWndManager__HandleKeyboardMsg_x                          0x1405FD840
#define CXWndManager__RemoveWnd_x                                  0x140600F90

// CDBStr
#define CDBStr__GetString_x                                        0x140198840

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406B16C0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D9300
#define CCharacterListWnd__EnterWorld_x                            0x1400D8100
#define CCharacterListWnd__Quit_x                                  0x1400D92E0
#define CCharacterListWnd__UpdateList_x                            0x1400DA040

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14067DCC0
#define ItemBase__CreateItemTagString_x                            0x14067E740
#define ItemBase__GetImageNum_x                                    0x140680E50
#define ItemBase__GetItemValue_x                                   0x140682DC0
#define ItemBase__IsEmpty_x                                        0x140684AE0
#define ItemBase__IsKeyRingItem_x                                  0x140685250
#define ItemBase__ValueSellMerchant_x                              0x140689400
#define ItemClient__CanDrop_x                                      0x1402C98C0
#define ItemClient__CanGoInBag_x                                   0x1402C9A00
#define ItemClient__CreateItemClient_x                             0x1402C9C90
#define ItemClient__dItemClient_x                                  0x1402C9730

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B8700
#define EQ_LoadingS__Array_x                                       0x140D872B0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140695580
#define PcBase__GetCombatAbility_x                                 0x140695E10
#define PcBase__GetCombatAbilityTimer_x                            0x140695EF0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140696710
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406971E0
#define PcClient__AlertInventoryChanged_x                          0x1402ECEA0
#define PcClient__GetConLevel_x                                    0x1402ED5F0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402EFCF0
#define PcClient__HasLoreItem_x                                    0x1402F0DD0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FD7F0
#define PcZoneClient__RemoveMyAffect_x                             0x140300D60

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022F500
#define EQGroundItemListManager__Add_x                             0x14022F6B0
#define EQGroundItemListManager__Clear_x                           0x14022F750
#define EQGroundItemListManager__Delete_x                          0x14022F810
#define EQGroundItemListManager__Instance_x                        0x14022F8A0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14026B770

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140192F60

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406693E0
#define PlayerBase__CanSee1_x                                      0x1406694C0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406699B0
#define PlayerBase__HasProperty_x                                  0x140669B90
#define PlayerBase__IsTargetable_x                                 0x140669C50
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030EC30
#define PlayerClient__GetPcClient_x                                0x140311750
#define PlayerClient__PlayerClient_x                               0x140306EB0
#define PlayerClient__SetNameSpriteState_x                         0x140314E80
#define PlayerClient__SetNameSpriteTint_x                          0x140315E40
#define PlayerZoneClient__ChangeHeight_x                           0x140324C30
#define PlayerZoneClient__DoAttack_x                               0x140325940
#define PlayerZoneClient__GetLevel_x                               0x140329060
#define PlayerZoneClient__IsValidTeleport_x                        0x14026E4E0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6D30

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031E0E0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14031E190  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031E290
#define PlayerManagerClient__CreatePlayer_x                        0x14031DBA0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140668F10

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CEF00
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CE810
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CE880
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CEE90  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402CF020
#define KeypressHandler__HandleKeyUp_x                             0x1402CF140
#define KeypressHandler__SaveKeymapping_x                          0x1402CED10  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406AF1C0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406A9790

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F6F60  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402FB8A0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FE8D0
#define PcZoneClient__RemovePetEffect_x                            0x140301040
#define PcZoneClient__HasAlternateAbility_x                        0x1402FF520
#define PcZoneClient__CanEquipItem_x                               0x1402F9BB0
#define PcZoneClient__GetItemByID_x                                0x1402FC870
#define PcZoneClient__RemoveBuffEffect_x                           0x140300BF0
#define PcZoneClient__BandolierSwap_x                              0x1402ECF50

// Doors
#define EQSwitch__UseSwitch_x                                      0x140273020

// IconCache
#define IconCache__GetIcon_x                                       0x1403E1610

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D58D0
#define CContainerMgr__CloseContainer_x                            0x1403D51F0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D5C70

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404DFBC0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402C0E60

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140468270
#define CLootWnd__RequestLootSlot_x                                0x1404692E0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E9180
#define EQ_Spell__SpellAffects_x                                   0x1401EA5B0
#define EQ_Spell__SpellAffectBase_x                                0x1401EA510
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E2660
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E2610
#define EQ_Spell__IsSPAStacking_x                                  0x1401EA220
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E9DD0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E9690

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C96E0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14053D960
#define CTargetWnd__RefreshTargetBuffs_x                           0x14053D080
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14053C880

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140545220  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018F9E0
#define CTaskManager__GetTaskStatus_x                              0x14018FAF0
#define CTaskManager__GetElementDescription_x                      0x14018F670

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E7400
#define EqSoundManager__PlayScriptMp3_x                            0x1401E61B0
#define EqSoundManager__SoundAssistPlay_x                          0x140348D20  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140349060  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405DD8D0
#define CTextureAnimation__SetCurCell_x                            0x1405DDBE0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BF050

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406C8660
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406C86E0
#define CharacterBase__IsExpansionFlag_x                           0x14020DB50

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403AFB90
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403B05E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403B1BA0

// messages
#define msg_spell_worn_off_x                                       0x140225610
#define msg_new_text_x                                             0x140220E50
#define __msgTokenTextParam_x                                      0x140217CC0
#define msgTokenText_x                                             0x140217BD0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14034AA60
#define SpellManager__GetSpellByGroupAndRank_x                     0x14034A960

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140679440

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140461490

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403DA720
#define CCursorAttachment__IsOkToActivate_x                        0x1403DDBA0
#define CCursorAttachment__RemoveAttachment_x                      0x1403DDE50
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140617380
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140617580
#define CEQSuiteTextureLoader__GetTexture_x                        0x140617590

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140159B90
#define CFindItemWnd__Update_x                                     0x14015A550
#define CFindItemWnd__PickupSelectedItem_x                         0x140153140

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140164780
#define LootFiltersManager__GetItemFilterData_x                    0x1401652B0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140165B60
#define LootFiltersManager__SetItemLootFilter_x                    0x140165E10

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404C1880

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140343480
#define CResolutionHandler__UpdateResolution_x                     0x1405C1EA0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403D1A30

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406CC990  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406CC880  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403FBDF0
#define CGroupWnd__UpdateDisplay_x                                 0x1403FAF80

// ItemBase
#define ItemBase__IsLore_x                                         0x140685390
#define ItemBase__IsLoreEquipped_x                                 0x140685420

#define MultipleItemMoveManager__ProcessMove_x                     0x1402E29E0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14026B8B0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14026B840
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14026B880

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033D6A0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012FAB0
#define FactionManagerClient__HandleFactionMessage_x               0x14012FE90
#define FactionManagerClient__GetFactionStanding_x                 0x14012F1B0
#define FactionManagerClient__GetMaxFaction_x                      0x14012F280
#define FactionManagerClient__GetMinFaction_x                      0x14012F130

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B63F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14013B540

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C19B0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C0B40
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C17D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C1750  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14034FDB0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405D3580

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008ADC0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140361750

// AchievementManager
#define AchievementManager__Instance_x                             0x1400942F0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406B2250
#define FreeToPlayClient__RestrictionInfo_x                        0x140B13CD0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140574760

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140867A58
#define CGFScreenWnd__CGFScreenWnd_x                               0x1400732C0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073450
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140073600

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
