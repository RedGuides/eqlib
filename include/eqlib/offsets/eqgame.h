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

#define __ClientDate                                               20260924u
#define __ExpectedVersionDate                                      "Sep 24 2026"
#define __ExpectedVersionTime                                      "07:54:38"
#define __ActualVersionDate_x                                      0x140994DD8
#define __ActualVersionTime_x                                      0x140994DC8
#define __ActualVersionBuild_x                                     0x140929DF0

// Memory Protection
#define __MemChecker0_x                                            0x1402D4660
#define __MemChecker1_x                                            0x1405B0320
#define __MemChecker4_x                                            0x1402A18D0
#define __EncryptPad0_x                                            0x140D82FD0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EBBAF0
#define instEQZoneInfo_x                                           0x140EBBCE4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140232B20
#define __gfMaxZoomCameraDistance_x                                0x14092B0A8
#define __gfMaxCameraDistance_x                                    0x140AD5274
#define __CurrentSocial_x                                          0x140C3E9CC
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
#define instDynamicZone_x                                          0x140EBA560
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
#define pinstTaskMember_x                                          0x140D75DC0
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
#define __allowslashcommand_x                                      0x14025D600
#define __CastRay_x                                                0x140255650
#define __CastRay2_x                                               0x140255340
#define __compress_block_x                                         0x140565E50
#define __ConvertItemTags_x                                        0x140255AE0
#define __CleanItemTags_x                                          0x14008E750
#define __CreateCascadeMenuItems_x                                 0x14019B1E0
#define __decompress_block_x                                       0x1405AB9A0
#define __DoesFileExist_x                                          0x1405B4390
#define __EQGetTime_x                                              0x1405B08D0
#define __ExecuteCmd_x                                             0x140229EE0
#define __FixHeading_x                                             0x14066DD20
#define __FlushDxKeyboard_x                                        0x1403599D0
#define __get_bearing_x                                            0x14025F9D0
#define __get_melee_range_x                                        0x14025FAC0
#define __GetAnimationCache_x                                      0x1403E0860
#define __GetGaugeValueFromEQ_x                                    0x140524BB0
#define __GetLabelFromEQ_x                                         0x1405261A0
#define __GetXTargetType_x                                         0x140670210
#define __HeadingDiff_x                                            0x14066DDA0
#define __HelpPath_x                                               0x140F30F90
#define __NewUIINI_x                                               0x140531C00
#define __ProcessDeviceEvents_x                                    0x1402A1ED0
#define __ProcessGameEvents_x                                      0x140296670
#define __ProcessKeyboardEvents_x                                  0x14035B1B0
#define __ProcessMouseEvents_x                                     0x140297DD0
#define __SaveColors_x                                             0x1401AB3B0
#define __STMLToText_x                                             0x1405C4C20
#define __WndProc_x                                                0x140358120
#define CMemoryMappedFile__SetFile_x                               0x14081B220
#define DrawNetStatus_x                                            0x1402E3BD0
#define Util__FastTime_x                                           0x1405AFC70
#define __eq_delete_x                                              0x1406E6F28
#define __eq_new_x                                                 0x1406E7180
#define __CopyLayout_x                                             0x1402D0A30
#define __ThrottleFrameRate_x                                      0x140285755
#define __ThrottleFrameRateEnd_x                                   0x14028575B

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14036B480
#define CAAWnd__Update_x                                           0x14036B8E0
#define CAAWnd__UpdateSelected_x                                   0x14036CF30

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B38F0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400ABDA0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A8150
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B4250

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B6650
#define AltAdvManager__IsAbilityReady_x                            0x1401B6B30
#define AltAdvManager__GetAAById_x                                 0x1401B5EE0
#define AltAdvManager__CanTrainAbility_x                           0x1401B5CE0
#define AltAdvManager__CanSeeAbility_x                             0x1401B5A00

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400DB600
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DC4C0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DC710
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400F0C90
#define CharacterZoneClient__CanUseItem_x                          0x1400F1250
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DD0F0
#define CharacterZoneClient__CastSpell_x                           0x1400DD190
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400ED0C0
#define CharacterZoneClient__Cur_HP_x                              0x1400F2AD0
#define CharacterZoneClient__Cur_Mana_x                            0x1400F2C90
#define CharacterZoneClient__FindAffectSlot_x                      0x1400E05F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F93E0
#define CharacterZoneClient__GetBaseSkill_x                        0x1401086D0
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E1A90
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F0590
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400FAC70
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F9B60
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E1C10
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D10F0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D2FC0
#define CharacterZoneClient__GetHPRegen_x                          0x1400FA290
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F2720
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400FAE10
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E1C90
#define CharacterZoneClient__GetManaRegen_x                        0x1400FBB00
#define CharacterZoneClient__GetModCap_x                           0x1401032A0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E1F90
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E2160
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D6640
#define CharacterZoneClient__HasSkill_x                            0x1400FECA0
#define CharacterZoneClient__HitBySpell_x                          0x1400E2BD0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E6550
#define CharacterZoneClient__MakeMeVisible_x                       0x140102D80
#define CharacterZoneClient__Max_Endurance_x                       0x1402FEC20
#define CharacterZoneClient__Max_HP_x                              0x1401030D0
#define CharacterZoneClient__Max_Mana_x                            0x1402FEE40
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140103530
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E9B90
#define CharacterZoneClient__SpellDuration_x                       0x1400EA8C0
#define CharacterZoneClient__TotalEffect_x                         0x1400EBD20
#define CharacterZoneClient__UseSkill_x                            0x1401096D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038D030

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140397DD0
#define CBarterWnd__UpdateInventoryList_x                          0x140397840

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140393B00
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140392B70

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14039A870

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AF4D38

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BE1A0
#define CChatWindowManager__InitContextMenu_x                      0x1403BE330
#define CChatWindowManager__FreeChatWindow_x                       0x1403BD1A0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C66B0
#define CChatWindowManager__CreateChatWindow_x                     0x1403BCBD0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140111CD0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C7720
#define CChatWindow__Clear_x                                       0x1403C8720
#define CChatWindow__WndNotification_x                             0x1403C9990
#define CChatWindow__AddHistory_x                                  0x1403C8230

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405F2680
#define CContextMenu__RemoveMenuItem_x                             0x1405F2A90
#define CContextMenu__RemoveAllMenuItems_x                         0x1405F2A60
#define CContextMenu__CheckMenuItem_x                              0x1405F28D0
#define CContextMenu__SetMenuItem_x                                0x1405F2AB0
#define CContextMenu__AddSeparator_x                               0x1405F2800

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405E4420
#define CContextMenuManager__RemoveMenu_x                          0x1405E4A00
#define CContextMenuManager__PopupMenu_x                           0x1405E4740
#define CContextMenuManager__Flush_x                               0x1405E44A0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D8110

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406C1C40
#define CChatService__GetFriendName_x                              0x1406C1C50

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405D52E0
#define CComboWnd__Draw_x                                          0x1405D53E0
#define CComboWnd__GetCurChoice_x                                  0x1405D56D0
#define CComboWnd__GetListRect_x                                   0x1405D5770
#define CComboWnd__InsertChoice_x                                  0x1405D5AB0
#define CComboWnd__SetColors_x                                     0x1405D5E40
#define CComboWnd__SetChoice_x                                     0x1405D5E00
#define CComboWnd__GetItemCount_x                                  0x1405D5760
#define CComboWnd__GetCurChoiceText_x                              0x1405D5710
#define CComboWnd__GetChoiceText_x                                 0x1405D56A0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405D5B70

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D5DF0
#define CContainerWnd__SetContainer_x                              0x140435EA0
#define CContainerWnd__vftable_x                                   0x140A09E00

// CDisplay
#define CDisplay__cameraType_x                                     0x140E03144
#define CDisplay__ZoneMainUI_x                                     0x14060D150
#define CDisplay__PreZoneMainUI_x                                  0x1401A80D0
#define CDisplay__CleanGameUI_x                                    0x14019A2A0
#define CDisplay__GetClickedActor_x                                0x14019E500
#define CDisplay__GetUserDefinedColor_x                            0x14019F170
#define CDisplay__InitCharSelectUI_x                               0x14019F420
#define CDisplay__ReloadUI_x                                       0x1401AA5B0
#define CDisplay__RestartUI_x                                      0x14020DD90
#define CDisplay__WriteTextHD2_x                                   0x1401B1550
#define CDisplay__TrueDistance_x                                   0x1401B11F0
#define CDisplay__SetViewActor_x                                   0x1401ADAF0
#define CDisplay__GetFloorHeight_x                                 0x14019E760
#define CDisplay__ToggleScreenshotMode_x                           0x1401B0CE0
#define CDisplay__RealRender_World_x                               0x1401A9990

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140617610
#define CEditWnd__DrawCaret_x                                      0x140608D80
#define CEditWnd__EnsureCaretVisible_x                             0x1406092A0
#define CEditWnd__GetCaretPt_x                                     0x140609540
#define CEditWnd__GetCharIndexPt_x                                 0x140609580
#define CEditWnd__GetDisplayString_x                               0x1406097E0
#define CEditWnd__GetHorzOffset_x                                  0x140609A30
#define CEditWnd__GetLineForPrintableChar_x                        0x140609B90
#define CEditWnd__GetSelStartPt_x                                  0x140609E80
#define CEditWnd__GetSTMLSafeText_x                                0x140609CC0
#define CEditWnd__PointFromPrintableChar_x                         0x14060AA40
#define CEditWnd__ReplaceSelection_x                               0x14060AE00
#define CEditWnd__SelectableCharFromPoint_x                        0x14060B2C0
#define CEditWnd__SetEditable_x                                    0x14060B560
#define CEditWnd__SetWindowText_x                                  0x14060B590

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140286830
#define CEverQuest__ClickedPlayer_x                                0x140279890
#define CEverQuest__CreateTargetIndicator_x                        0x14027A190
#define CEverQuest__DoTellWindow_x                                 0x1401119D0
#define CEverQuest__OutputTextToLog_x                              0x1401122C0
#define CEverQuest__DropHeldItemOnGround_x                         0x140288240
#define CEverQuest__dsp_chat_x                                     0x140111400
#define CEverQuest__trimName_x                                     0x1402B3B00
#define CEverQuest__Emote_x                                        0x140288BD0
#define CEverQuest__GetBodyTypeDesc_x                              0x1402899B0
#define CEverQuest__GetClassDesc_x                                 0x140289A10
#define CEverQuest__GetClassThreeLetterCode_x                      0x140289DE0
#define CEverQuest__GetDeityDesc_x                                 0x14028A080
#define CEverQuest__GetLangDesc_x                                  0x14028A4B0
#define CEverQuest__GetRaceDesc_x                                  0x14028A850
#define CEverQuest__InterpretCmd_x                                 0x14028C490
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402A1F40
#define CEverQuest__LMouseUp_x                                     0x14028DFA0
#define CEverQuest__RightClickedOnPlayer_x                         0x14029F2E0
#define CEverQuest__RMouseUp_x                                     0x140298990
#define CEverQuest__SetGameState_x                                 0x1402A4A80
#define CEverQuest__UPCNotificationFlush_x                         0x1402AA480
#define CEverQuest__IssuePetCommand_x                              0x14028DB80
#define CEverQuest__ReportSuccessfulHeal_x                         0x140299D80
#define CEverQuest__ReportSuccessfulHit_x                          0x14029AB90

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403EBA30

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400CA880
#define CGuild__GetGuildName_x                                     0x1400CA8C0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140412910

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C6120
#define CHotButton__SetCheck_x                                     0x1402C63F0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14042C9D0
#define CInvSlotMgr__MoveItem_x                                    0x14042D560
#define CInvSlotMgr__SelectSlot_x                                  0x14042F890

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140429600
#define CInvSlot__SliderComplete_x                                 0x14042AFD0
#define CInvSlot__GetItemBase_x                                    0x140424BA0
#define CInvSlot__UpdateItem_x                                     0x14042B4A0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140431D50

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140453410
#define CItemDisplayWnd__UpdateStrings_x                           0x140456630
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14044FCF0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140451620
#define CItemDisplayWnd__RequestConvertItem_x                      0x140452830

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140521630
#define CSpellDisplayWnd__UpdateStrings_x                          0x1405233C0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14055EE50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14044C370

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x140523200

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015EEE0

// CLabel
#define CLabel__UpdateText_x                                       0x14045DCD0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405D8C80
#define CListWnd__dCListWnd_x                                      0x1405D90C0
#define CListWnd__vftable_x                                        0x140AF2E60
#define CListWnd__AddColumn_x                                      0x1405D9750
#define CListWnd__AddColumn1_x                                     0x1405D97F0
#define CListWnd__AddLine_x                                        0x1405D9950
#define CListWnd__AddString_x                                      0x1405D9EF0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405DA460
#define CListWnd__CalculateVSBRange_x                              0x1405DA740
#define CListWnd__ClearSel_x                                       0x1405DA8E0
#define CListWnd__ClearAllSel_x                                    0x1405DA880
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405DA940
#define CListWnd__Compare_x                                        0x1405DAB00
#define CListWnd__Draw_x                                           0x1405DAFC0
#define CListWnd__DrawColumnSeparators_x                           0x1405DBB50
#define CListWnd__DrawHeader_x                                     0x1405DBC10
#define CListWnd__DrawItem_x                                       0x1405DC2F0
#define CListWnd__DrawLine_x                                       0x1405DCC90
#define CListWnd__DrawSeparator_x                                  0x1405DD150
#define CListWnd__EnableLine_x                                     0x1405DD570
#define CListWnd__EnsureVisible_x                                  0x1405DD5D0
#define CListWnd__ExtendSel_x                                      0x1405DD6D0
#define CListWnd__GetColumnMinWidth_x                              0x1405DDA60
#define CListWnd__GetColumnWidth_x                                 0x1405DDAE0
#define CListWnd__GetCurSel_x                                      0x1405DDBE0
#define CListWnd__GetItemData_x                                    0x1405DDF60
#define CListWnd__GetItemHeight_x                                  0x1405DDFA0
#define CListWnd__GetItemRect_x                                    0x1405DE1D0
#define CListWnd__GetItemText_x                                    0x1405DE470
#define CListWnd__GetSelList_x                                     0x1405DE6D0
#define CListWnd__GetSeparatorRect_x                               0x1405DE8C0
#define CListWnd__InsertLine_x                                     0x1405DFD30
#define CListWnd__RemoveLine_x                                     0x1405E03A0
#define CListWnd__SetColors_x                                      0x1405E0760
#define CListWnd__SetColumnJustification_x                         0x1405E0780
#define CListWnd__SetColumnLabel_x                                 0x1405E0800
#define CListWnd__SetColumnWidth_x                                 0x1405E09A0
#define CListWnd__SetCurSel_x                                      0x1405E0A70
#define CListWnd__SetItemColor_x                                   0x1405E0CE0
#define CListWnd__SetItemData_x                                    0x1405E0D80
#define CListWnd__SetItemText_x                                    0x1405E0FC0
#define CListWnd__Sort_x                                           0x1405E13D0
#define CListWnd__ToggleSel_x                                      0x1405E1540
#define CListWnd__SetColumnsSizable_x                              0x1405E09F0
#define CListWnd__SetItemWnd_x                                     0x1405E10F0
#define CListWnd__GetItemWnd_x                                     0x1405DE660
#define CListWnd__SetItemIcon_x                                    0x1405E0DC0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405DA230
#define CListWnd__SetVScrollPos_x                                  0x1405E1330

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140471690

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A578A8
#define MapViewMap__Clear_x                                        0x140473350
#define MapViewMap__SetZoom_x                                      0x1404797F0
#define MapViewMap__HandleLButtonDown_x                            0x1404762F0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14049BA70
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A23E0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A2BB0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404A64E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404A57E0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404AA9B0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14069E4C0
#define CPacketScrambler__hton_x                                   0x14069E4B0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140602630
#define CSidlManagerBase__FindAnimation1_x                         0x140602570
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140602C70
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140602A10
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140601970
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140601900
#define CSidlManagerBase__CreateXWnd_x                             0x140600F60

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140514450
#define CSidlManager__CreateXWnd_x                                 0x140514610

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405C6690
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405C67C0
#define CSidlScreenWnd__ConvertToRes_x                             0x140611950
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405C6930
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405C5E50
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405C5F20
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405C6190
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405C7020
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405C7250
#define CSidlScreenWnd__GetChildItem_x                             0x1405C73F0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405C7640
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405D1850
#define CSidlScreenWnd__Init1_x                                    0x1405C79B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405C7D20
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405C85F0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405C8FF0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F5CE98
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C9670
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C9E60
#define CSidlScreenWnd__vftable_x                                  0x140AF20E8
#define CSidlScreenWnd__WndNotification_x                          0x1405C9EB0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403428D0
#define CSkillMgr__GetSkillCap_x                                   0x140342C00
#define CSkillMgr__GetNameToken_x                                  0x140342B30
#define CSkillMgr__IsActivatedSkill_x                              0x140342FC0
#define CSkillMgr__IsCombatSkill_x                                 0x140343000
#define CSkillMgr__GetSkillTimerDuration_x                         0x140342F30
#define CSkillMgr__GetSkillLastUsed_x                              0x140342B80

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405E1EB0
#define CSliderWnd__SetValue_x                                     0x1405E26C0
#define CSliderWnd__SetNumTicks_x                                  0x1405E2540

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14051AD20

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405E6E80
#define CStmlWnd__CalculateHSBRange_x                              0x1405D1200
#define CStmlWnd__CalculateVSBRange_x                              0x1405E7DA0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405E8830
#define CStmlWnd__ForceParseNow_x                                  0x1405E88D0
#define CStmlWnd__GetVisibleText_x                                 0x1405E8FA0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405EAD30
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405EAD70
#define CStmlWnd__SetSTMLText_x                                    0x1405F1E00
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405F1FB0
#define CStmlWnd__UpdateHistoryString_x                            0x1405F2350

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405E2A90
#define CTabWnd__DrawCurrentPage_x                                 0x1405E2B30
#define CTabWnd__DrawTab_x                                         0x1405E2F00
#define CTabWnd__GetTabRect_x                                      0x1405E3590
#define CTabWnd__InsertPage_x                                      0x1405E3860
#define CTabWnd__RemovePage_x                                      0x1405E3AF0
#define CTabWnd__SetPage_x                                         0x1405E3C50
#define CTabWnd__UpdatePage_x                                      0x1405E3F50

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14060B9F0
#define CPageWnd__SetTabText_x                                     0x14060BA60

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C3DB0
#define CBroadcast__Get_x                                          0x1400C41E0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F99C0
#define CTextureFont__DrawWrappedText1_x                           0x1405F98C0
#define CTextureFont__DrawWrappedText2_x                           0x1405F9AF0
#define CTextureFont__GetTextExtent_x                              0x1405F9EA0
#define CTextureFont__GetHeight_x                                  0x1405F9E60

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140610070

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405C32A0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D8C060
#define CXStr__gCXStrAccess_x                                      0x140F5C9F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405CC850
#define CXWnd__ClrFocus_x                                          0x1405CCB40
#define CXWnd__Destroy_x                                           0x1405CCCC0
#define CXWnd__DoAllDrawing_x                                      0x1405CCDC0
#define CXWnd__DrawColoredRect_x                                   0x1405CD590
#define CXWnd__DrawTooltip_x                                       0x1405CEC00
#define CXWnd__DrawTooltipAtPoint_x                                0x1405CECC0
#define CXWnd__GetChildItem_x                                      0x1405CF5D0
#define CXWnd__GetChildWndAt_x                                     0x1405CF690
#define CXWnd__GetClientRect_x                                     0x1405CF950
#define CXWnd__GetClientClipRect_x                                 0x1405CF800
#define CXWnd__GetRelativeRect_x                                   0x1405D1340
#define CXWnd__GetScreenClipRect_x                                 0x1405D1450
#define CXWnd__GetScreenRect_x                                     0x1405D15D0
#define CXWnd__GetTooltipRect_x                                    0x1405D1750
#define CXWnd__IsActive_x                                          0x1405D1D10
#define CXWnd__IsDescendantOf_x                                    0x1405D1D40
#define CXWnd__IsReallyVisible_x                                   0x1405D1DB0
#define CXWnd__IsType_x                                            0x1405D1E00
#define CXWnd__Minimize_x                                          0x1405D1F00
#define CXWnd__ProcessTransition_x                                 0x1405D2E10
#define CXWnd__Resize_x                                            0x1405D2F20
#define CXWnd__Right_x                                             0x1405D2FC0
#define CXWnd__SetFocus_x                                          0x1405D3380
#define CXWnd__SetFont_x                                           0x1405D33D0
#define CXWnd__SetKeyTooltip_x                                     0x1405D34E0
#define CXWnd__SetMouseOver_x                                      0x1405D3630
#define CXWnd__SetParent_x                                         0x1405D36B0
#define CXWnd__StartFade_x                                         0x1405D3AE0
#define CXWnd__vftable_x                                           0x140AF26C0
#define CXWnd__CXWnd_x                                             0x1405CB450
#define CXWnd__dCXWnd_x                                            0x1405CBD80

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140616DA0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405F3C70
#define CXWndManager__DrawCursor_x                                 0x1405F3F50
#define CXWndManager__DrawWindows_x                                0x1405F41B0
#define CXWndManager__GetKeyboardFlags_x                           0x1405F4820
#define CXWndManager__HandleKeyboardMsg_x                          0x1405F4860
#define CXWndManager__RemoveWnd_x                                  0x1405F8060

// CDBStr
#define CDBStr__GetString_x                                        0x140198460

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406A8500

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D8F90
#define CCharacterListWnd__EnterWorld_x                            0x1400D7D90
#define CCharacterListWnd__Quit_x                                  0x1400D8F70
#define CCharacterListWnd__UpdateList_x                            0x1400D9CD0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140674ED0
#define ItemBase__CreateItemTagString_x                            0x140675970
#define ItemBase__GetImageNum_x                                    0x1406780F0
#define ItemBase__GetItemValue_x                                   0x140679C20
#define ItemBase__IsEmpty_x                                        0x14067B9A0
#define ItemBase__IsKeyRingItem_x                                  0x14067C130
#define ItemBase__ValueSellMerchant_x                              0x140680320
#define ItemClient__CanDrop_x                                      0x1402C8910
#define ItemClient__CanGoInBag_x                                   0x1402C8A50
#define ItemClient__CreateItemClient_x                             0x1402C8CE0
#define ItemClient__dItemClient_x                                  0x1402C8790

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B8300
#define EQ_LoadingS__Array_x                                       0x140D782B0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14068C410
#define PcBase__GetCombatAbility_x                                 0x14068CD10
#define PcBase__GetCombatAbilityTimer_x                            0x14068CDF0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14068D610
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14068E0E0
#define PcClient__AlertInventoryChanged_x                          0x1402EBED0
#define PcClient__GetConLevel_x                                    0x1402EC620
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402EED20
#define PcClient__HasLoreItem_x                                    0x1402EFDF0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FC810
#define PcZoneClient__RemoveMyAffect_x                             0x1402FFD80

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022E9C0
#define EQGroundItemListManager__Add_x                             0x14022EB70
#define EQGroundItemListManager__Clear_x                           0x14022EC10
#define EQGroundItemListManager__Delete_x                          0x14022ECD0
#define EQGroundItemListManager__Instance_x                        0x14022ED60

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14026ACA0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140192B70

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140660530
#define PlayerBase__CanSee1_x                                      0x140660610
#define PlayerBase__GetVisibilityLineSegment_x                     0x140660B00
#define PlayerBase__HasProperty_x                                  0x140660CE0
#define PlayerBase__IsTargetable_x                                 0x140660DA0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030DC50
#define PlayerClient__GetPcClient_x                                0x140310770
#define PlayerClient__PlayerClient_x                               0x140305ED0
#define PlayerClient__SetNameSpriteState_x                         0x140313EA0
#define PlayerClient__SetNameSpriteTint_x                          0x140314E60
#define PlayerZoneClient__ChangeHeight_x                           0x140323BB0
#define PlayerZoneClient__DoAttack_x                               0x1403248C0
#define PlayerZoneClient__GetLevel_x                               0x140327FE0
#define PlayerZoneClient__IsValidTeleport_x                        0x14026DA10
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6950

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031D060
#define PlayerManagerClient__GetSpawnByName_x                      0x14031D110
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031D210
#define PlayerManagerClient__CreatePlayer_x                        0x14031CB20
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140660060

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CDF20
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CD830
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CD8A0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CDEB0
#define KeypressHandler__HandleKeyDown_x                           0x1402CE040
#define KeypressHandler__HandleKeyUp_x                             0x1402CE160
#define KeypressHandler__SaveKeymapping_x                          0x1402CDD30

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406A6000

// StringTable
#define StringTable__getString_x                                   0x1406A05D0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F5F80
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402FA8C0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FD8F0
#define PcZoneClient__RemovePetEffect_x                            0x140300060
#define PcZoneClient__HasAlternateAbility_x                        0x1402FE540
#define PcZoneClient__CanEquipItem_x                               0x1402F8BD0
#define PcZoneClient__GetItemByID_x                                0x1402FB890
#define PcZoneClient__RemoveBuffEffect_x                           0x1402FFC10
#define PcZoneClient__BandolierSwap_x                              0x1402EBF80

// Doors
#define EQSwitch__UseSwitch_x                                      0x140272530

// IconCache
#define IconCache__GetIcon_x                                       0x1403E0890

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D4B30
#define CContainerMgr__CloseContainer_x                            0x1403D4450
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D4ED0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404D7640

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402BFEE0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140465240
#define CLootWnd__RequestLootSlot_x                                0x140466290

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
#define EQSpellStrings__GetString_x                                0x1400C9390

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140535460
#define CTargetWnd__RefreshTargetBuffs_x                           0x140534B80
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140534380

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14053CD20

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018F5F0
#define CTaskManager__GetTaskStatus_x                              0x14018F700
#define CTaskManager__GetElementDescription_x                      0x14018F280

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E6F90
#define EqSoundManager__PlayScriptMp3_x                            0x1401E5D40
#define EqSoundManager__SoundAssistPlay_x                          0x140347CB0
#define EqSoundManager__WaveInstancePlay_x                         0x140347FF0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405D4880
#define CTextureAnimation__SetCurCell_x                            0x1405D4B90

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BE0D0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406BF490
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406BF510
#define CharacterBase__IsExpansionFlag_x                           0x14020D3E0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403AEDC0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403AF810
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403B0DD0

// messages
#define msg_spell_worn_off_x                                       0x140224AD0
#define msg_new_text_x                                             0x1402202B0
#define __msgTokenTextParam_x                                      0x140217550
#define msgTokenText_x                                             0x140217460

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403499F0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403498F0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406705F0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14045E460

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D99A0
#define CCursorAttachment__IsOkToActivate_x                        0x1403DCE20
#define CCursorAttachment__RemoveAttachment_x                      0x1403DD0D0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14060E4D0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14060E6D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x14060E6E0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401597D0
#define CFindItemWnd__Update_x                                     0x14015A190
#define CFindItemWnd__PickupSelectedItem_x                         0x140152D80

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401643A0
#define LootFiltersManager__GetItemFilterData_x                    0x140164EC0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140165770
#define LootFiltersManager__SetItemLootFilter_x                    0x140165A20

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404B9430

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140342410
#define CResolutionHandler__UpdateResolution_x                     0x1405B8DF0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403D0C70

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406C37D0
#define CDistillerInfo__Instance_x                                 0x1406C36C0

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403FB0C0
#define CGroupWnd__UpdateDisplay_x                                 0x1403FA250

// ItemBase
#define ItemBase__IsLore_x                                         0x14067C270
#define ItemBase__IsLoreEquipped_x                                 0x14067C300

#define MultipleItemMoveManager__ProcessMove_x                     0x1402E1A00

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14026ADE0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14026AD70
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14026ADB0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033C630

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012F700
#define FactionManagerClient__HandleFactionMessage_x               0x14012FAE0
#define FactionManagerClient__GetFactionStanding_x                 0x14012EEF0
#define FactionManagerClient__GetMaxFaction_x                      0x14012EED0
#define FactionManagerClient__GetMinFaction_x                      0x14012ED80

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B60E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14013B190

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C15A0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C0730
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C13C0
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C1340

// CTargetManager
#define CTargetManager__Get_x                                      0x14034ED40

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405CA4F0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008AAB0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140360950

// AchievementManager
#define AchievementManager__Instance_x                             0x140093FE0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406A9090
#define FreeToPlayClient__RestrictionInfo_x                        0x140B07270

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14056C270

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14085BA58
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072FB0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073140
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400732F0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
