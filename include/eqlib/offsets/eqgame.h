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

#define __ClientDate                                               20260707u
#define __ExpectedVersionDate                                      "Jul  7 2026"
#define __ExpectedVersionTime                                      "09:52:22"
#define __ActualVersionDate_x                                      0x140990BE8
#define __ActualVersionTime_x                                      0x140990BD8
#define __ActualVersionBuild_x                                     0x140925C60

// Memory Protection
#define __MemChecker0_x                                            0x1402D2230
#define __MemChecker1_x                                            0x1405AD140
#define __MemChecker4_x                                            0x14029F500
#define __EncryptPad0_x                                            0x140D6EC40

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EB75C0
#define instEQZoneInfo_x                                           0x140EB77B4

// Misc Globals
#define __do_loot_x                                                0x140231EE0
#define __gfMaxZoomCameraDistance_x                                0x140926F18
#define __gfMaxCameraDistance_x                                    0x140AD0C64
#define __CurrentSocial_x                                          0x140C230E4
#define __BindList_x                                               0x140D62970
#define g_eqCommandStates_x                                        0x140D63A10
#define __CommandList_x                                            0x140D63C50
#define __ScreenMode_x                                             0x140DFEE7C
#define __gWorld_x                                                 0x140EB1CA0
#define __gpbCommandEvent_x                                        0x140EB1FF8
#define __ServerHost_x                                             0x140EB21E8
#define __Guilds_x                                                 0x140EB6180
#define __MemCheckBitmask_x                                        0x140EB7B03
#define __MemCheckActive_x                                         0x140EB921D
#define __MouseEventTime_x                                         0x140F2CB98
#define DI8__MouseState_x                                          0x140F30D78
#define __heqmain_x                                                0x140F33208
#define DI8__Mouse_x                                               0x140F33220
#define __HWnd_x                                                   0x140F33228
#define __Mouse_x                                                  0x140F33230
#define DI8__Keyboard_x                                            0x140F33250
#define __LoginName_x                                              0x140F339BC
#define __CurrentMapLabel_x                                        0x140F474F0
#define __LabelCache_x                                             0x140F480C0
#define __ChatFilterDefs_x                                         0x140A6ABC0
#define Teleport_Table_Size_x                                      0x140EB2084
#define Teleport_Table_x                                           0x140EAFA40

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EB2510
#define pinstActiveBanker_x                                        0x140EB1F28
#define pinstActiveCorpse_x                                        0x140EB1F18
#define pinstActiveGMaster_x                                       0x140EB1F20
#define pinstActiveMerchant_x                                      0x140EB1F10
#define pinstAltAdvManager_x                                       0x140DFFCF8
#define pinstCEverQuest_x                                          0x140F33268
#define pinstCamActor_x                                            0x140DFEE60
#define pinstCDBStr_x                                              0x140DFEAB0
#define pinstCDisplay_x                                            0x140EB1FD8
#define pinstControlledPlayer_x                                    0x140EB1FB8
#define pinstCResolutionHandler_x                                  0x140F58668
#define pinstCSidlManager_x                                        0x140F59660
#define pinstCXWndManager_x                                        0x140F59658
#define instDynamicZone_x                                          0x140EB6040
#define instExpeditionLeader_x                                     0x140EB608E
#define instExpeditionName_x                                       0x140EB60CE
#define pinstDZMember_x                                            0x140EB6158
#define pinstDZTimerInfo_x                                         0x140EB6160
#define pinstEqLogin_x                                             0x140F33300
#define instTribute_x                                              0x140D5B880
#define pinstDeviceInputProxy_x                                    0x140EB761C
#define pinstEQSoundManager_x                                      0x140E00080
#define pinstEQSpellStrings_x                                      0x140DE3630
#define pinstSGraphicsEngine_x                                     0x140F58698
#define pinstLocalPC_x                                             0x140EB1A78
#define pinstLocalPlayer_x                                         0x140EB1D08
#define pinstCMercenaryClientManager_x                             0x140F2E4A8
#define pinstModelPlayer_x                                         0x140EB1F38
#define pinstRenderInterface_x                                     0x140F586B0
#define pinstSkillMgr_x                                            0x140F30188
#define pinstSpawnManager_x                                        0x140F2E888
#define pinstSpellManager_x                                        0x140F301F8
#define pinstStringTable_x                                         0x140EB1A80
#define pinstSwitchManager_x                                       0x140EAF9B0
#define pinstTarget_x                                              0x140EB1FB0
#define pinstTaskMember_x                                          0x140D5B870
#define pinstTradeTarget_x                                         0x140EB1F30
#define instTributeActive_x                                        0x140D5B8A9
#define pinstViewActor_x                                           0x140DFEE58
#define pinstWorldData_x                                           0x140EB1A40
#define pinstPlayerPath_x                                          0x140F2E8B0
#define pinstTargetIndicator_x                                     0x140F302A8
#define EQObject_Top_x                                             0x140EB1FE0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F44640
#define pinstCContainerMgr_x                                       0x140DFF090
#define pinstCContextMenuManager_x                                 0x140F59340
#define pinstCInvSlotMgr_x                                         0x140DFF070
#define pinstCItemDisplayManager_x                                 0x140F470C0
#define pinstCPopupWndManager_x                                    0x140F47950
#define pinstCSpellDisplayMgr_x                                    0x140F47FA0
#define pinstCTaskManager_x                                        0x140C247B0
#define pinstEQSuiteTextureLoader_x                                0x140D846F0
#define pinstItemIconCache_x                                       0x140F449A8
#define pinstLootFiltersManager_x                                  0x140DFE4F8
#define pinstGFViewListener_x                                      0x140F58B18


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14025C700
#define __CastRay_x                                                0x140254770
#define __CastRay2_x                                               0x140254460
#define __compress_block_x                                         0x140562C70
#define __ConvertItemTags_x                                        0x140254C00
#define __CleanItemTags_x                                          0x14008E6C0
#define __CreateCascadeMenuItems_x                                 0x14019AC10
#define __decompress_block_x                                       0x1405A87C0
#define __DoesFileExist_x                                          0x1405B11B0
#define __EQGetTime_x                                              0x1405AD6F0
#define __ExecuteCmd_x                                             0x140229380
#define __FixHeading_x                                             0x14066A500
#define __FlushDxKeyboard_x                                        0x140357440
#define __get_bearing_x                                            0x14025EA10
#define __get_melee_range_x                                        0x14025EB00
#define __GetAnimationCache_x                                      0x1403DDA40
#define __GetGaugeValueFromEQ_x                                    0x140521A50
#define __GetLabelFromEQ_x                                         0x140523030
#define __GetXTargetType_x                                         0x14066C9F0
#define __HeadingDiff_x                                            0x14066A580
#define __HelpPath_x                                               0x140F2CA60
#define __NewUIINI_x                                               0x14052EA90
#define __ProcessDeviceEvents_x                                    0x14029FB00
#define __ProcessGameEvents_x                                      0x1402942C0
#define __ProcessKeyboardEvents_x                                  0x140358C20
#define __ProcessMouseEvents_x                                     0x140295A20
#define __SaveColors_x                                             0x1401AADB0
#define __STMLToText_x                                             0x1405C1A40
#define __WndProc_x                                                0x140355C00
#define CMemoryMappedFile__SetFile_x                               0x1408173A0
#define DrawNetStatus_x                                            0x1402E1790
#define Util__FastTime_x                                           0x1405ACA90
#define __eq_delete_x                                              0x1406E30A8
#define __eq_new_x                                                 0x1406E3300
#define __CopyLayout_x                                             0x1402CE600
#define __ThrottleFrameRate_x                                      0x1402833E5
#define __ThrottleFrameRateEnd_x                                   0x1402833EB

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140368C10
#define CAAWnd__Update_x                                           0x140369070
#define CAAWnd__UpdateSelected_x                                   0x14036A6C0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B3770
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400ABDF0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A81A0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B40D0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B6050
#define AltAdvManager__IsAbilityReady_x                            0x1401B6530
#define AltAdvManager__GetAAById_x                                 0x1401B58E0
#define AltAdvManager__CanTrainAbility_x                           0x1401B56E0
#define AltAdvManager__CanSeeAbility_x                             0x1401B5400

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400DB4B0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DC370
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DC5C0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400F0B60
#define CharacterZoneClient__CanUseItem_x                          0x1400F1120
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DCFA0
#define CharacterZoneClient__CastSpell_x                           0x1400DD040
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400ECF90
#define CharacterZoneClient__Cur_HP_x                              0x1400F2910
#define CharacterZoneClient__Cur_Mana_x                            0x1400F2AD0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400E04A0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F9220
#define CharacterZoneClient__GetBaseSkill_x                        0x1403B4B30
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E1940
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F0460
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400FAAB0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F99A0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E1AC0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D0F80
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D2E50
#define CharacterZoneClient__GetHPRegen_x                          0x1400FA0D0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F2560
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400FAB80
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E1B40
#define CharacterZoneClient__GetManaRegen_x                        0x1400FB940
#define CharacterZoneClient__GetModCap_x                           0x140103090
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E1E40
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E2010
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D64D0
#define CharacterZoneClient__HasSkill_x                            0x1400FEAE0
#define CharacterZoneClient__HitBySpell_x                          0x1400E2A80
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E6400
#define CharacterZoneClient__MakeMeVisible_x                       0x140102B70
#define CharacterZoneClient__Max_Endurance_x                       0x1402FC750
#define CharacterZoneClient__Max_HP_x                              0x140102EC0
#define CharacterZoneClient__Max_Mana_x                            0x1402FC970
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140103320
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E9A40
#define CharacterZoneClient__SpellDuration_x                       0x1400EA770
#define CharacterZoneClient__TotalEffect_x                         0x1400EBBF0
#define CharacterZoneClient__UseSkill_x                            0x1401094E0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038A7C0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140395560

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140391290
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140394FD0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140397DD0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AF0728

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BB370
#define CChatWindowManager__InitContextMenu_x                      0x1403BB500
#define CChatWindowManager__FreeChatWindow_x                       0x1403BA370
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C3880
#define CChatWindowManager__CreateChatWindow_x                     0x1403B9DA0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140111AE0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C48F0
#define CChatWindow__Clear_x                                       0x1403C58F0
#define CChatWindow__WndNotification_x                             0x1403C6B60
#define CChatWindow__AddHistory_x                                  0x1403C5400

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405EF320
#define CContextMenu__RemoveMenuItem_x                             0x1405EF730
#define CContextMenu__RemoveAllMenuItems_x                         0x1405EF700
#define CContextMenu__CheckMenuItem_x                              0x1405EF570
#define CContextMenu__SetMenuItem_x                                0x1405EF750
#define CContextMenu__AddSeparator_x                               0x1405EF4A0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405E10C0
#define CContextMenuManager__RemoveMenu_x                          0x1405E16A0
#define CContextMenuManager__PopupMenu_x                           0x1405E13E0
#define CContextMenuManager__Flush_x                               0x1405E1140
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D52F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406BD920
#define CChatService__GetFriendName_x                              0x1406BD930

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405D1F90
#define CComboWnd__Draw_x                                          0x1405D2090
#define CComboWnd__GetCurChoice_x                                  0x1405D2380
#define CComboWnd__GetListRect_x                                   0x1405D2420
#define CComboWnd__InsertChoice_x                                  0x1405D2760
#define CComboWnd__SetColors_x                                     0x1405D2AF0
#define CComboWnd__SetChoice_x                                     0x1405D2AB0
#define CComboWnd__GetItemCount_x                                  0x1405D2410
#define CComboWnd__GetCurChoiceText_x                              0x1405D23C0
#define CComboWnd__GetChoiceText_x                                 0x1405D2350
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405D2820

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D2FD0
#define CContainerWnd__SetContainer_x                              0x140433000
#define CContainerWnd__vftable_x                                   0x140A05A10

// CDisplay
#define CDisplay__cameraType_x                                     0x140DFEC1C
#define CDisplay__ZoneMainUI_x                                     0x1406098F0
#define CDisplay__PreZoneMainUI_x                                  0x140126D60
#define CDisplay__CleanGameUI_x                                    0x140199CD0
#define CDisplay__GetClickedActor_x                                0x14019DF30
#define CDisplay__GetUserDefinedColor_x                            0x14019EBA0
#define CDisplay__InitCharSelectUI_x                               0x14019EE50
#define CDisplay__ReloadUI_x                                       0x1401A9FB0
#define CDisplay__RestartUI_x                                      0x14020D5E0
#define CDisplay__WriteTextHD2_x                                   0x1401B0F50
#define CDisplay__TrueDistance_x                                   0x1401B0BF0
#define CDisplay__SetViewActor_x                                   0x1401AD4F0
#define CDisplay__GetFloorHeight_x                                 0x14019E190
#define CDisplay__ToggleScreenshotMode_x                           0x1401B06E0
#define CDisplay__RealRender_World_x                               0x1401A9390

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1406142B0
#define CEditWnd__DrawCaret_x                                      0x1405FAEC0
#define CEditWnd__EnsureCaretVisible_x                             0x140605F40
#define CEditWnd__GetCaretPt_x                                     0x1406061E0
#define CEditWnd__GetCharIndexPt_x                                 0x140606220
#define CEditWnd__GetDisplayString_x                               0x140606480
#define CEditWnd__GetHorzOffset_x                                  0x1406066D0
#define CEditWnd__GetLineForPrintableChar_x                        0x140606830
#define CEditWnd__GetSelStartPt_x                                  0x140606B20
#define CEditWnd__GetSTMLSafeText_x                                0x140606960
#define CEditWnd__PointFromPrintableChar_x                         0x1406076E0
#define CEditWnd__ReplaceSelection_x                               0x140607AA0
#define CEditWnd__SelectableCharFromPoint_x                        0x140607F60
#define CEditWnd__SetEditable_x                                    0x140608200
#define CEditWnd__SetWindowText_x                                  0x140608230

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402844C0
#define CEverQuest__ClickedPlayer_x                                0x140278670
#define CEverQuest__CreateTargetIndicator_x                        0x140278F70
#define CEverQuest__DoTellWindow_x                                 0x1401117E0
#define CEverQuest__OutputTextToLog_x                              0x1401120D0
#define CEverQuest__DropHeldItemOnGround_x                         0x140285EB0
#define CEverQuest__dsp_chat_x                                     0x140111210
#define CEverQuest__trimName_x                                     0x1402B16F0
#define CEverQuest__Emote_x                                        0x140286840
#define CEverQuest__GetBodyTypeDesc_x                              0x140287620
#define CEverQuest__GetClassDesc_x                                 0x140287680
#define CEverQuest__GetClassThreeLetterCode_x                      0x140287A50
#define CEverQuest__GetDeityDesc_x                                 0x140287CF0
#define CEverQuest__GetLangDesc_x                                  0x140288120
#define CEverQuest__GetRaceDesc_x                                  0x1402884C0
#define CEverQuest__InterpretCmd_x                                 0x14028A100
#define CEverQuest__LeftClickedOnPlayer_x                          0x14029FB70
#define CEverQuest__LMouseUp_x                                     0x14028BC10
#define CEverQuest__RightClickedOnPlayer_x                         0x14029CF10
#define CEverQuest__RMouseUp_x                                     0x1402965B0
#define CEverQuest__SetGameState_x                                 0x1402A2630
#define CEverQuest__UPCNotificationFlush_x                         0x1402A8070
#define CEverQuest__IssuePetCommand_x                              0x14028B7F0
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402979A0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402987C0
#define CEverQuest__StartCasting_x                                 0x1402A39D0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403E8C10

// CGuild
#define CGuild__FindMemberByName_x                                 0x140817690
#define CGuild__GetGuildName_x                                     0x1400CA750

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x14040FAE0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C3D10
#define CHotButton__SetCheck_x                                     0x1402C3FE0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140429BB0
#define CInvSlotMgr__MoveItem_x                                    0x14042A740
#define CInvSlotMgr__SelectSlot_x                                  0x14042CA70

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1404267E0
#define CInvSlot__SliderComplete_x                                 0x1404281B0
#define CInvSlot__GetItemBase_x                                    0x140421D60
#define CInvSlot__UpdateItem_x                                     0x140428680

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14042EF30

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404505D0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404537F0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14044CEB0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14044E7E0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14044F9F0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14051E4D0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140520260

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14055BC50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140449530

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x1405200A0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015EA10

// CLabel
#define CLabel__UpdateText_x                                       0x14045AE00

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405D5930
#define CListWnd__dCListWnd_x                                      0x1405D5D70
#define CListWnd__vftable_x                                        0x140AEE850
#define CListWnd__AddColumn_x                                      0x1405D6400
#define CListWnd__AddColumn1_x                                     0x1405D64A0
#define CListWnd__AddLine_x                                        0x1405D6600
#define CListWnd__AddString_x                                      0x1405D6BA0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405D7110
#define CListWnd__CalculateVSBRange_x                              0x1405D73F0
#define CListWnd__ClearSel_x                                       0x1405D7590
#define CListWnd__ClearAllSel_x                                    0x1405D7530
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405D75F0
#define CListWnd__Compare_x                                        0x1405D77B0
#define CListWnd__Draw_x                                           0x1405D7C70
#define CListWnd__DrawColumnSeparators_x                           0x1405D8800
#define CListWnd__DrawHeader_x                                     0x1405D88C0
#define CListWnd__DrawItem_x                                       0x1405D8FA0
#define CListWnd__DrawLine_x                                       0x1405D9940
#define CListWnd__DrawSeparator_x                                  0x1405D9E00
#define CListWnd__EnableLine_x                                     0x1405DA220
#define CListWnd__EnsureVisible_x                                  0x1405DA280
#define CListWnd__ExtendSel_x                                      0x1405DA380
#define CListWnd__GetColumnMinWidth_x                              0x1405DA710
#define CListWnd__GetColumnWidth_x                                 0x1405DA790
#define CListWnd__GetCurSel_x                                      0x1405DA890
#define CListWnd__GetItemData_x                                    0x1405DAC10
#define CListWnd__GetItemHeight_x                                  0x1405DAC50
#define CListWnd__GetItemRect_x                                    0x1405DAE80
#define CListWnd__GetItemText_x                                    0x1405DB120
#define CListWnd__GetSelList_x                                     0x1405DB380
#define CListWnd__GetSeparatorRect_x                               0x1405DB570
#define CListWnd__InsertLine_x                                     0x1405DC9E0
#define CListWnd__RemoveLine_x                                     0x1405DD050
#define CListWnd__SetColors_x                                      0x1405DD410
#define CListWnd__SetColumnJustification_x                         0x1405DD430
#define CListWnd__SetColumnLabel_x                                 0x1405DD4B0
#define CListWnd__SetColumnWidth_x                                 0x1405DD650
#define CListWnd__SetCurSel_x                                      0x1405DD720
#define CListWnd__SetItemColor_x                                   0x1405DD990
#define CListWnd__SetItemData_x                                    0x1405DDA30
#define CListWnd__SetItemText_x                                    0x1405DDC70
#define CListWnd__Sort_x                                           0x1405DE080
#define CListWnd__ToggleSel_x                                      0x1405DE1F0
#define CListWnd__SetColumnsSizable_x                              0x1405DD6A0
#define CListWnd__SetItemWnd_x                                     0x1405DDDA0
#define CListWnd__GetItemWnd_x                                     0x1405DB310
#define CListWnd__SetItemIcon_x                                    0x1405DDA70
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405D6EE0
#define CListWnd__SetVScrollPos_x                                  0x1405DDFE0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14046E7C0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A53430
#define MapViewMap__Clear_x                                        0x140470480
#define MapViewMap__SetZoom_x                                      0x140476920
#define MapViewMap__HandleLButtonDown_x                            0x140473420

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404989D0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14049F330
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14049FB00
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404A3420
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404A2720
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A78C0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14069AC00
#define CPacketScrambler__hton_x                                   0x14069ABF0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405FF2D0
#define CSidlManagerBase__FindAnimation1_x                         0x1405FF210
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405FF910
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405FF6B0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405FE610
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405FE5A0
#define CSidlManagerBase__CreateXWnd_x                             0x1405FDC00

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140511340
#define CSidlManager__CreateXWnd_x                                 0x140511500

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405C35E0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405C34B0
#define CSidlScreenWnd__ConvertToRes_x                             0x14060E5F0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405C3750
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405C2C70
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405C2D40
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405C2FB0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405C3E40
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405C4070
#define CSidlScreenWnd__GetChildItem_x                             0x1405C4210
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405C4460
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405CE4E0
#define CSidlScreenWnd__Init1_x                                    0x1405C47D0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405C4B40
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405C5410
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405C5E10
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F589B8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C6490
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C6C80
#define CSidlScreenWnd__vftable_x                                  0x140AEDAD8
#define CSidlScreenWnd__WndNotification_x                          0x1405C6CD0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403403C0
#define CSkillMgr__GetSkillCap_x                                   0x1403406F0
#define CSkillMgr__GetNameToken_x                                  0x140340620
#define CSkillMgr__IsActivatedSkill_x                              0x140340AB0
#define CSkillMgr__IsCombatSkill_x                                 0x140340AF0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140340A20
#define CSkillMgr__GetSkillLastUsed_x                              0x140340670

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405DEB50
#define CSliderWnd__SetValue_x                                     0x1405DF360
#define CSliderWnd__SetNumTicks_x                                  0x1405DF1E0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140517C10

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405E3B20
#define CStmlWnd__CalculateHSBRange_x                              0x1405CDEB0
#define CStmlWnd__CalculateVSBRange_x                              0x1405E49C0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405E54D0
#define CStmlWnd__ForceParseNow_x                                  0x1405E5570
#define CStmlWnd__GetVisibleText_x                                 0x1405E5C40
#define CStmlWnd__MakeStmlColorTag_x                               0x1405E79D0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405E7A10
#define CStmlWnd__SetSTMLText_x                                    0x1405EEAA0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405EEC50
#define CStmlWnd__UpdateHistoryString_x                            0x1405EEFF0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405DF730
#define CTabWnd__DrawCurrentPage_x                                 0x1405DF7D0
#define CTabWnd__DrawTab_x                                         0x1405DFBA0
#define CTabWnd__GetTabRect_x                                      0x1405E0230
#define CTabWnd__InsertPage_x                                      0x1405E0500
#define CTabWnd__RemovePage_x                                      0x1405E0790
#define CTabWnd__SetPage_x                                         0x1405E08F0
#define CTabWnd__UpdatePage_x                                      0x1405E0BF0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140608690
#define CPageWnd__SetTabText_x                                     0x1406726E0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C3C30
#define CBroadcast__Get_x                                          0x1400C4060


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F6660
#define CTextureFont__DrawWrappedText1_x                           0x1405F6560
#define CTextureFont__DrawWrappedText2_x                           0x1405F6790
#define CTextureFont__GetTextExtent_x                              0x1405F6B40
#define CTextureFont__GetHeight_x                                  0x1405F6B00

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14060CD10

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405C00C0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D84060
#define CXStr__gCXStrAccess_x                                      0x140F58518

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405C9500
#define CXWnd__ClrFocus_x                                          0x1405C97F0
#define CXWnd__Destroy_x                                           0x1405C9970
#define CXWnd__DoAllDrawing_x                                      0x1405C9A70
#define CXWnd__DrawColoredRect_x                                   0x1405CA240
#define CXWnd__DrawTooltip_x                                       0x1405CB8B0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405CB970
#define CXWnd__GetChildItem_x                                      0x1405CC280
#define CXWnd__GetChildWndAt_x                                     0x1405CC340
#define CXWnd__GetClientRect_x                                     0x1405CC600
#define CXWnd__GetClientClipRect_x                                 0x1405CC4B0
#define CXWnd__GetRelativeRect_x                                   0x1405CDFF0
#define CXWnd__GetScreenClipRect_x                                 0x1405CE100
#define CXWnd__GetScreenRect_x                                     0x1405CE280
#define CXWnd__GetTooltipRect_x                                    0x1405CE400
#define CXWnd__IsActive_x                                          0x1405CE9C0
#define CXWnd__IsDescendantOf_x                                    0x1405CE9F0
#define CXWnd__IsReallyVisible_x                                   0x1405CEA60
#define CXWnd__IsType_x                                            0x1405CEAB0
#define CXWnd__Minimize_x                                          0x1405CEBB0
#define CXWnd__ProcessTransition_x                                 0x1402E4580
#define CXWnd__Resize_x                                            0x1405CFBD0
#define CXWnd__Right_x                                             0x1405CFC70
#define CXWnd__SetFocus_x                                          0x1405D0030
#define CXWnd__SetFont_x                                           0x1405D0080
#define CXWnd__SetKeyTooltip_x                                     0x1405D0190
#define CXWnd__SetMouseOver_x                                      0x1405D02E0
#define CXWnd__SetParent_x                                         0x1405D0360
#define CXWnd__StartFade_x                                         0x1405D0790
#define CXWnd__vftable_x                                           0x140AEE0B0
#define CXWnd__CXWnd_x                                             0x1405C8100
#define CXWnd__dCXWnd_x                                            0x1405C8A30

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140613A40

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405F0910
#define CXWndManager__DrawCursor_x                                 0x1405F0BF0
#define CXWndManager__DrawWindows_x                                0x1405F0E50
#define CXWndManager__GetKeyboardFlags_x                           0x1405F14C0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405F1500
#define CXWndManager__RemoveWnd_x                                  0x1405F4D00

// CDBStr
#define CDBStr__GetString_x                                        0x140197E90

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406A4250

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D8E40
#define CCharacterListWnd__EnterWorld_x                            0x1400D7C40
#define CCharacterListWnd__Quit_x                                  0x1405C05F0
#define CCharacterListWnd__UpdateList_x                            0x1400D9B80

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406716B0
#define ItemBase__CreateItemTagString_x                            0x140672150
#define ItemBase__GetImageNum_x                                    0x1406748C0
#define ItemBase__GetItemValue_x                                   0x1406763F0
#define ItemBase__IsEmpty_x                                        0x140678170
#define ItemBase__IsKeyRingItem_x                                  0x1406788A0
#define ItemBase__ValueSellMerchant_x                              0x14067CA80
#define ItemClient__CanDrop_x                                      0x1402C6500
#define ItemClient__CanGoInBag_x                                   0x1402C6630
#define ItemClient__CreateItemClient_x                             0x1402C68C0
#define ItemClient__dItemClient_x                                  0x1402C6380

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B7D00
#define EQ_LoadingS__Array_x                                       0x140D5DD60

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140688BE0
#define PcBase__GetCombatAbility_x                                 0x1402EEBE0
#define PcBase__GetCombatAbilityTimer_x                            0x140689550
#define PcBase__GetItemContainedRealEstateIds_x                    0x140689D70
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14068A840
#define PcClient__AlertInventoryChanged_x                          0x1402E9A90
#define PcClient__GetConLevel_x                                    0x1402EA1E0
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402EC8C0
#define PcClient__HasLoreItem_x                                    0x1402ED990
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FA380
#define PcZoneClient__RemoveMyAffect_x                             0x1402FD8B0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022DE60
#define EQGroundItemListManager__Add_x                             0x14022E010
#define EQGroundItemListManager__Clear_x                           0x14022E0B0
#define EQGroundItemListManager__Delete_x                          0x14022E170
#define EQGroundItemListManager__Instance_x                        0x14022E200

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140269A80

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401925B0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14065D160
#define PlayerBase__CanSee1_x                                      0x14065D240
#define PlayerBase__GetVisibilityLineSegment_x                     0x14065D730
#define PlayerBase__HasProperty_x                                  0x14065D910
#define PlayerBase__IsTargetable_x                                 0x14065D9D0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030B7D0
#define PlayerClient__GetPcClient_x                                0x14030E310
#define PlayerClient__PlayerClient_x                               0x140303A50
#define PlayerClient__SetNameSpriteState_x                         0x140311A40
#define PlayerClient__SetNameSpriteTint_x                          0x140312A00
#define PlayerZoneClient__ChangeHeight_x                           0x140321650
#define PlayerZoneClient__DoAttack_x                               0x140322360
#define PlayerZoneClient__GetLevel_x                               0x140325A80
#define PlayerZoneClient__IsValidTeleport_x                        0x14026C7F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6380

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031AB20
#define PlayerManagerClient__GetSpawnByName_x                      0x14031ABD0
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031ACD0
#define PlayerManagerClient__CreatePlayer_x                        0x14031A5E0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14065CC70

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CBAF0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CB400
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CB470
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CBA80
#define KeypressHandler__HandleKeyDown_x                           0x1402CBC10
#define KeypressHandler__HandleKeyUp_x                             0x1402CBD30
#define KeypressHandler__SaveKeymapping_x                          0x1402CB900

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406A1D50

// StringTable
#define StringTable__getString_x                                   0x14069C320

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F3AF0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F8430
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FB460
#define PcZoneClient__RemovePetEffect_x                            0x1402FDB90
#define PcZoneClient__HasAlternateAbility_x                        0x1402FC070
#define PcZoneClient__CanEquipItem_x                               0x1402F6740
#define PcZoneClient__GetItemByID_x                                0x1402F9400
#define PcZoneClient__RemoveBuffEffect_x                           0x1402FD740
#define PcZoneClient__BandolierSwap_x                              0x1402E9B40

// Doors
#define EQSwitch__UseSwitch_x                                      0x140271330

// IconCache
#define IconCache__GetIcon_x                                       0x1400AB740

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D1D20
#define CContainerMgr__CloseContainer_x                            0x1403D1640
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D20C0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404D4550

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402BDAD0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140462370
#define CLootWnd__RequestLootSlot_x                                0x1404633C0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E85E0
#define EQ_Spell__SpellAffects_x                                   0x1401E9A10
#define EQ_Spell__SpellAffectBase_x                                0x1401E9970
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E21A0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E2150
#define EQ_Spell__IsSPAStacking_x                                  0x1401E9680
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E9230
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E8AF0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C9220

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1405322E0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140531A00
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140531200

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140539B90

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018F040
#define CTaskManager__GetTaskStatus_x                              0x14018F150
#define CTaskManager__GetElementDescription_x                      0x14018ECD0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E6860
#define EqSoundManager__PlayScriptMp3_x                            0x1401E55F0
#define EqSoundManager__SoundAssistPlay_x                          0x1403457A0
#define EqSoundManager__WaveInstancePlay_x                         0x140345AE0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405D1530
#define CTextureAnimation__SetCurCell_x                            0x1405D1840

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BBCC0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406BB1B0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406BB230
#define CharacterBase__IsExpansionFlag_x                           0x14020CC30

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403ABF90
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403AC9E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403ADFA0

// messages
#define msg_spell_worn_off_x                                       0x140224020
#define msg_new_text_x                                             0x14021F810
#define __msgTokenTextParam_x                                      0x140216BE0
#define msgTokenText_x                                             0x140216AF0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140347510
#define SpellManager__GetSpellByGroupAndRank_x                     0x140347410

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14066CDD0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14045B590

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D6B80
#define CCursorAttachment__IsOkToActivate_x                        0x1403DA000
#define CCursorAttachment__RemoveAttachment_x                      0x1403DA2B0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14060B170
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14060B370
#define CEQSuiteTextureLoader__GetTexture_x                        0x14060B380

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140159280
#define CFindItemWnd__Update_x                                     0x140159C40
#define CFindItemWnd__PickupSelectedItem_x                         0x1401528D0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140163ED0
#define LootFiltersManager__GetItemFilterData_x                    0x1401649F0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401652A0
#define LootFiltersManager__SetItemLootFilter_x                    0x140165550

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404B6340

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14022DE10
#define CResolutionHandler__UpdateResolution_x                     0x1405B5C10

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403CDE40

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406BF4B0
#define CDistillerInfo__Instance_x                                 0x1406BF3A0

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403F8290
#define CGroupWnd__UpdateDisplay_x                                 0x1403F7420

// ItemBase
#define ItemBase__IsLore_x                                         0x1406789E0
#define ItemBase__IsLoreEquipped_x                                 0x140678A70

#define MultipleItemMoveManager__ProcessMove_x                     0x1402DF5D0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140269BC0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140269B50
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140269B90

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033A100

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012F510
#define FactionManagerClient__HandleFactionMessage_x               0x14012F8F0
#define FactionManagerClient__GetFactionStanding_x                 0x14012ECE0
#define FactionManagerClient__GetMaxFaction_x                      0x14012ECE0
#define FactionManagerClient__GetMinFaction_x                      0x14012EB90

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14079B9C0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14013AEC0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C0E50
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401BFFE0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C0C70
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C0BF0

// CTargetManager
#define CTargetManager__Get_x                                      0x140066E60

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405C72D0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008AA20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14035E0E0

// AchievementManager
#define AchievementManager__Instance_x                             0x140093F50

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406A4DE0
#define FreeToPlayClient__RestrictionInfo_x                        0x140B02C50

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140569090

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140857A18
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072EE0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073070
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140073220

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
