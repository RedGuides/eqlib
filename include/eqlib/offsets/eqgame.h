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

#define __ClientDate                                       20260511u
#define __ExpectedVersionDate                              "May 11 2026"
#define __ExpectedVersionTime                              "14:56:31"
#define __ActualVersionDate_x                              0x14098D1D8
#define __ActualVersionTime_x                              0x14098D1C8
#define __ActualVersionBuild_x                             0x140922380

// Memory Protection
#define __MemChecker0_x                                    0x1402CD3D0
#define __MemChecker1_x                                    0x1405A7B90
#define __MemChecker4_x                                    0x14029A6B0
#define __EncryptPad0_x                                    0x140D6AC20

// EverQuestInfo
#define pinstEverQuestInfo_x                               0x140EB35C0
#define instEQZoneInfo_x                                   0x140EB37B4

// Misc Globals
#define __do_loot_x                                        0x14022CD80
#define __gfMaxZoomCameraDistance_x                        0x140923638
#define __gfMaxCameraDistance_x                            0x140ACD114
#define __CurrentSocial_x                                  0x140C1F0D4
#define __BindList_x                                       0x140D5E950
#define g_eqCommandStates_x                                0x140D5F9F0
#define __CommandList_x                                    0x140D5FC30
#define __ScreenMode_x                                     0x140DFAE94
#define __gWorld_x                                         0x140EABCF0
#define __gpbCommandEvent_x                                0x140EABFE8
#define __ServerHost_x                                     0x140EAC1D8
#define __Guilds_x                                         0x140EB2170
#define __MemCheckBitmask_x                                0x140EB3B03
#define __MemCheckActive_x                                 0x140EB521D
#define __MouseEventTime_x                                 0x140F28B90
#define DI8__MouseState_x                                  0x140F2CD78
#define __heqmain_x                                        0x140F2F208
#define DI8__Mouse_x                                       0x140F2F220
#define __HWnd_x                                           0x140F2F228
#define __Mouse_x                                          0x140F2F230
#define DI8__Keyboard_x                                    0x140F2F250
#define __LoginName_x                                      0x140F2F9BC
#define __CurrentMapLabel_x                                0x140F434F0
#define __LabelCache_x                                     0x140F440C0
#define __ChatFilterDefs_x                                 0x140A67070
#define Teleport_Table_Size_x                              0x140EAC074
#define Teleport_Table_x                                   0x140EAC500

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                        0x140EAE500
#define pinstActiveBanker_x                                0x140EABF18
#define pinstActiveCorpse_x                                0x140EABF08
#define pinstActiveGMaster_x                               0x140EABF10
#define pinstActiveMerchant_x                              0x140EABF00
#define pinstAltAdvManager_x                               0x140DFBCE8
#define pinstCEverQuest_x                                  0x140F2F268
#define pinstCamActor_x                                    0x140DFAE80
#define pinstCDBStr_x                                      0x140DFAAA0
#define pinstCDisplay_x                                    0x140EABFC8
#define pinstControlledPlayer_x                            0x140EABFA8
#define pinstCResolutionHandler_x                          0x140F54668
#define pinstCSidlManager_x                                0x140F55660
#define pinstCXWndManager_x                                0x140F55658
#define instDynamicZone_x                                  0x140EB2030
#define instExpeditionLeader_x                             0x140EB207E
#define instExpeditionName_x                               0x140EB20BE
#define pinstDZMember_x                                    0x140EB2148
#define pinstDZTimerInfo_x                                 0x140EB2150
#define pinstEqLogin_x                                     0x140F2F300
#define instTribute_x                                      0x140D57870
#define pinstDeviceInputProxy_x                            0x140EB361C
#define pinstEQSoundManager_x                              0x140DFC070
#define pinstEQSpellStrings_x                              0x140DDF620
#define pinstSGraphicsEngine_x                             0x140F54698
#define pinstLocalPC_x                                     0x140EABA68
#define pinstLocalPlayer_x                                 0x140EABCF8
#define pinstCMercenaryClientManager_x                     0x140F2A4A8
#define pinstModelPlayer_x                                 0x140EABF28
#define pinstRenderInterface_x                             0x140F546B0
#define pinstSkillMgr_x                                    0x140F2C188
#define pinstSpawnManager_x                                0x140F2A888
#define pinstSpellManager_x                                0x140F2C1F8
#define pinstStringTable_x                                 0x140EABA70
#define pinstSwitchManager_x                               0x140EAB9A0
#define pinstTarget_x                                      0x140EABFA0
#define pinstTaskMember_x                                  0x140D57860
#define pinstTradeTarget_x                                 0x140EABF20
#define instTributeActive_x                                0x140D57899
#define pinstViewActor_x                                   0x140DFAE78
#define pinstWorldData_x                                   0x140EABA30
#define pinstPlayerPath_x                                  0x140F2A8B0
#define pinstTargetIndicator_x                             0x140F2C2A8
#define EQObject_Top_x                                     0x140EABFD0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                          0x140F40640
#define pinstCContainerMgr_x                               0x140DFAF18
#define pinstCContextMenuManager_x                         0x140F55340
#define pinstCInvSlotMgr_x                                 0x140DFAF08
#define pinstCItemDisplayManager_x                         0x140F430C0
#define pinstCPopupWndManager_x                            0x140F43950
#define pinstCSpellDisplayMgr_x                            0x140F43FA0
#define pinstCTaskManager_x                                0x140C207A0
#define pinstEQSuiteTextureLoader_x                        0x140D806D0
#define pinstItemIconCache_x                               0x140F409A8
#define pinstLootFiltersManager_x                          0x140DFA4E8
#define pinstGFViewListener_x                              0x140F54B18


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                              0x140257760
#define __CastRay_x                                        0x14024F800
#define __CastRay2_x                                       0x14024F4F0
#define __compress_block_x                                 0x14055CF50
#define __ConvertItemTags_x                                0x14024FC90
#define __CleanItemTags_x                                  0x14008C740
#define __CreateCascadeMenuItems_x                         0x140196250
#define __decompress_block_x                               0x1405A3380
#define __DoesFileExist_x                                  0x1405ABC00
#define __EQGetTime_x                                      0x1405A8140
#define __ExecuteCmd_x                                     0x140224230
#define __FixHeading_x                                     0x1406652B0
#define __FlushDxKeyboard_x                                0x140352340
#define __get_bearing_x                                    0x140259A80
#define __get_melee_range_x                                0x140259B70
#define __GetAnimationCache_x                              0x1403D79F0
#define __GetGaugeValueFromEQ_x                            0x14051B830
#define __GetLabelFromEQ_x                                 0x14051CE20
#define __GetXTargetType_x                                 0x1406677A0
#define __HeadingDiff_x                                    0x140665330
#define __HelpPath_x                                       0x140F28A58
#define __NewUIINI_x                                       0x140528860
#define __ProcessDeviceEvents_x                            0x14029ACB0
#define __ProcessGameEvents_x                              0x14028F470
#define __ProcessKeyboardEvents_x                          0x140353B20
#define __ProcessMouseEvents_x                             0x140290BD0
#define __SaveColors_x                                     0x1401A61B0
#define __STMLToText_x                                     0x1405BC6D0
#define __WndProc_x                                        0x140350B00
#define CMemoryMappedFile__SetFile_x                       0x140814510
#define DrawNetStatus_x                                    0x1402DC960
#define Util__FastTime_x                                   0x1405A7650
#define __eq_delete_x                                      0x1406E0528
#define __eq_new_x                                         0x1406E0780
#define __CopyLayout_x                                     0x1402C97A0
#define __ThrottleFrameRate_x                              0x14027E527
#define __ThrottleFrameRateEnd_x                           0x14027E52D

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                              0x140363650
#define CAAWnd__Update_x                                   0x140363950
#define CAAWnd__UpdateSelected_x                           0x140364B70

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                0x1400B0860
#define CAdvancedLootWnd__DoSharedAdvLootAction_x          0x1400A9160
#define CAdvancedLootWnd__AddPlayerToList_x                0x14086E320
#define CAdvancedLootWnd__UpdateMasterLooter_x             0x1400B11C0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                0x1401B14C0
#define AltAdvManager__IsAbilityReady_x                    0x1401B1960
#define AltAdvManager__GetAAById_x                         0x1401B0D50
#define AltAdvManager__CanTrainAbility_x                   0x1401B0B50
#define AltAdvManager__CanSeeAbility_x                     0x1401B0800

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                0x1400D8460
#define CharacterZoneClient__CalcAffectChange_x            0x1400D9320
#define CharacterZoneClient__CalcAffectChangeGeneric_x     0x1400D9570
#define CharacterZoneClient__CanMedOnHorse_x               0x1400ED8D0
#define CharacterZoneClient__CanUseItem_x                  0x1400EDE90
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x    0x1400D9F50
#define CharacterZoneClient__CastSpell_x                   0x1400D9FF0
#define CharacterZoneClient__CharacterZoneClient_x         0x1400E9D50
#define CharacterZoneClient__Cur_HP_x                      0x1400EF620
#define CharacterZoneClient__Cur_Mana_x                    0x1400EF7E0
#define CharacterZoneClient__FindAffectSlot_x              0x1400DD2A0
#define CharacterZoneClient__GetAdjustedSkill_x            0x1400F5F30
#define CharacterZoneClient__GetBaseSkill_x                0x140104550
#define CharacterZoneClient__GetCastingTimeModifier_x      0x1400DE740
#define CharacterZoneClient__GetCurrentMod_x               0x1400ED1D0
#define CharacterZoneClient__GetCursorItemCount_x          0x1400F77C0
#define CharacterZoneClient__GetEnduranceRegen_x           0x1400F66B0
#define CharacterZoneClient__GetFirstEffectSlot_x          0x1400DE8C0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x 0x1400CDE40
#define CharacterZoneClient__GetFocusDurationMod_x         0x1400CFD10
#define CharacterZoneClient__GetHPRegen_x                  0x1400F6DE0
#define CharacterZoneClient__GetItemCountInInventory_x     0x1400EF270
#define CharacterZoneClient__GetItemCountWorn_x            0x1400F5FD0
#define CharacterZoneClient__GetLastEffectSlot_x           0x1400DE940
#define CharacterZoneClient__GetManaRegen_x                0x1400F8650
#define CharacterZoneClient__GetModCap_x                   0x1400FFD00
#define CharacterZoneClient__GetOpenEffectSlot_x           0x1400DEBD0
#define CharacterZoneClient__GetPCSpellAffect_x            0x1400DEDA0
#define CharacterZoneClient__GetPctModAndMin_x             0x1400D3390
#define CharacterZoneClient__HasSkill_x                    0x1400FB780
#define CharacterZoneClient__HitBySpell_x                  0x1400DF810
#define CharacterZoneClient__IsStackBlocked_x              0x1400E31B0
#define CharacterZoneClient__MakeMeVisible_x               0x1400FF7E0
#define CharacterZoneClient__Max_Endurance_x               0x1402F7850
#define CharacterZoneClient__Max_HP_x                      0x1400FFB30
#define CharacterZoneClient__Max_Mana_x                    0x1402F7A70
#define CharacterZoneClient__NotifyPCAffectChange_x        0x1400FFF90
#define CharacterZoneClient__RemovePCAffectex_x            0x1400E67F0
#define CharacterZoneClient__SpellDuration_x               0x1400E7520
#define CharacterZoneClient__TotalEffect_x                 0x1400E89B0
#define CharacterZoneClient__UseSkill_x                    0x140105580


// CBankWnd
#define CBankWnd__WndNotification_x                        0x140384A20

// CBarterWnd
#define CBarterWnd__WndNotification_x                      0x14038F840

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                0x14038B510
#define CBarterSearchWnd__UpdateInventoryList_x            0x14038F2B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x            0x1403920A0

// CButtonWnd
#define CButtonWnd__vftable_x                              0x140AECBB0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x             0x1403B5310
#define CChatWindowManager__InitContextMenu_x              0x1403B54A0
#define CChatWindowManager__FreeChatWindow_x               0x1403B4310
#define CChatWindowManager__SetLockedActiveChatWindow_x    0x1403BD820
#define CChatWindowManager__CreateChatWindow_x             0x1403B3D40

// ChatManagerClient
#define ChatManagerClient__Instance_x                      0x14010DB80

// CChatWindow
#define CChatWindow__CChatWindow_x                         0x1403BE890
#define CChatWindow__Clear_x                               0x1403BF8A0
#define CChatWindow__WndNotification_x                     0x1403C0B10
#define CChatWindow__AddHistory_x                          0x1403BF3A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                        0x1405E9F20
#define CContextMenu__RemoveMenuItem_x                     0x1405EA330
#define CContextMenu__RemoveAllMenuItems_x                 0x1405EA300
#define CContextMenu__CheckMenuItem_x                      0x1405EA170
#define CContextMenu__SetMenuItem_x                        0x1405EA350
#define CContextMenu__AddSeparator_x                       0x1405EA0A0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                     0x1405DBCB0
#define CContextMenuManager__RemoveMenu_x                  0x1405DC280
#define CContextMenuManager__PopupMenu_x                   0x1405DBFC0
#define CContextMenuManager__Flush_x                       0x1405DBD30
#define CContextMenuManager__CreateDefaultMenu_x           0x1403CF290

// CChatService
#define CChatService__GetNumberOfFriends_x                 0x1406BA180
#define CChatService__GetFriendName_x                      0x1406BA190

// CComboWnd
#define CComboWnd__DeleteAll_x                             0x1405CCB80
#define CComboWnd__Draw_x                                  0x1405CCC80
#define CComboWnd__GetCurChoice_x                          0x1405CCFE0
#define CComboWnd__GetListRect_x                           0x1405CD000
#define CComboWnd__InsertChoice_x                          0x1405CD340
#define CComboWnd__SetColors_x                             0x1405CD6D0
#define CComboWnd__SetChoice_x                             0x1405CD690
#define CComboWnd__GetItemCount_x                          0x1405CCFF0
#define CComboWnd__GetCurChoiceText_x                      0x1405CCFA0
#define CComboWnd__GetChoiceText_x                         0x1405CCF30
#define CComboWnd__InsertChoiceAtIndex_x                   0x1405CD400

// CContainerWnd
#define CContainerWnd__HandleCombine_x                     0x1403CCF80
#define CContainerWnd__SetContainer_x                      0x14042CAF0
#define CContainerWnd__vftable_x                           0x140A01F50

// CDisplay
#define CDisplay__cameraType_x                             0x140DFABAC
#define CDisplay__ZoneMainUI_x                             0x140604450
#define CDisplay__PreZoneMainUI_x                          0x1401A30B0
#define CDisplay__CleanGameUI_x                            0x140195310
#define CDisplay__GetClickedActor_x                        0x140199530
#define CDisplay__GetUserDefinedColor_x                    0x14019A1A0
#define CDisplay__InitCharSelectUI_x                       0x14019A450
#define CDisplay__ReloadUI_x                               0x1401A53B0
#define CDisplay__RestartUI_x                              0x140208680
#define CDisplay__WriteTextHD2_x                           0x1401AC3D0
#define CDisplay__TrueDistance_x                           0x1401AC070
#define CDisplay__SetViewActor_x                           0x1401A88E0
#define CDisplay__GetFloorHeight_x                         0x140199790
#define CDisplay__ToggleScreenshotMode_x                   0x1401ABB60
#define CDisplay__RealRender_World_x                       0x1401A4780

// CEditWnd
#define CEditBaseWnd__SetSel_x                             0x14060E910
#define CEditWnd__DrawCaret_x                              0x1405F5510
#define CEditWnd__EnsureCaretVisible_x                     0x140600580
#define CEditWnd__GetCaretPt_x                             0x140600820
#define CEditWnd__GetCharIndexPt_x                         0x140600860
#define CEditWnd__GetDisplayString_x                       0x140600AC0
#define CEditWnd__GetHorzOffset_x                          0x140600D10
#define CEditWnd__GetLineForPrintableChar_x                0x140600E70
#define CEditWnd__GetSelStartPt_x                          0x140601160
#define CEditWnd__GetSTMLSafeText_x                        0x140600FA0
#define CEditWnd__PointFromPrintableChar_x                 0x140601D20
#define CEditWnd__ReplaceSelection_x                       0x1406020E0
#define CEditWnd__SelectableCharFromPoint_x                0x1406025A0
#define CEditWnd__SetEditable_x                            0x140602840
#define CEditWnd__SetWindowText_x                          0x140602870

// CEverQuest
#define CEverQuest__DoPercentConvert_x                     0x14027F600
#define CEverQuest__ClickedPlayer_x                        0x1402737F0
#define CEverQuest__CreateTargetIndicator_x                0x1402740F0
#define CEverQuest__DoTellWindow_x                         0x14010D880
#define CEverQuest__OutputTextToLog_x                      0x14010E170
#define CEverQuest__DropHeldItemOnGround_x                 0x140280FF0
#define CEverQuest__dsp_chat_x                             0x14010D2B0
#define CEverQuest__trimName_x                             0x1402AC890
#define CEverQuest__Emote_x                                0x1402819E0
#define CEverQuest__GetBodyTypeDesc_x                      0x1402827C0
#define CEverQuest__GetClassDesc_x                         0x140282820
#define CEverQuest__GetClassThreeLetterCode_x              0x140282BF0
#define CEverQuest__GetDeityDesc_x                         0x140282EA0
#define CEverQuest__GetLangDesc_x                          0x1406718C0
#define CEverQuest__GetRaceDesc_x                          0x140283670
#define CEverQuest__InterpretCmd_x                         0x1402852B0
#define CEverQuest__LeftClickedOnPlayer_x                  0x14029AD20
#define CEverQuest__LMouseUp_x                             0x140286DC0
#define CEverQuest__RightClickedOnPlayer_x                 0x1402980C0
#define CEverQuest__RMouseUp_x                             0x140291760
#define CEverQuest__SetGameState_x                         0x14029D7D0
#define CEverQuest__UPCNotificationFlush_x                 0x1402A3210
#define CEverQuest__IssuePetCommand_x                      0x1402869A0
#define CEverQuest__ReportSuccessfulHeal_x                 0x140292B50
#define CEverQuest__ReportSuccessfulHit_x                  0x140293970

// CGaugeWnd
#define CGaugeWnd__Draw_x                                  0x1403E2BB0

// CGuild
#define CGuild__FindMemberByName_x                         0x1400C7620
#define CGuild__GetGuildName_x                             0x1400C7660

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                       0x140409AC0

//CHotButton
#define CHotButton__SetButtonSize_x                        0x1402BEE50
#define CHotButton__SetCheck_x                             0x1402BF140

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                         0x140423950
#define CInvSlotMgr__MoveItem_x                            0x1404244E0
#define CInvSlotMgr__SelectSlot_x                          0x140426820

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                        0x140420710
#define CInvSlot__SliderComplete_x                         0x140421F40
#define CInvSlot__GetItemBase_x                            0x14041BD50
#define CInvSlot__UpdateItem_x                             0x140422420

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                         0x140428A30

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                         0x14044A130
#define CItemDisplayWnd__UpdateStrings_x                   0x14044D330
#define CItemDisplayWnd__InsertAugmentRequest_x            0x140446A00
#define CItemDisplayWnd__RemoveAugmentRequest_x            0x140448330
#define CItemDisplayWnd__RequestConvertItem_x              0x140449550

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                       0x1405182A0
#define CSpellDisplayWnd__UpdateStrings_x                  0x14051A030

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                   0x140555AD0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x        0x140443080

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                  0x140519E70

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                   0x14015ACB0

// CLabel
#define CLabel__UpdateText_x                               0x140454940

// CListWnd
#define CListWnd__CListWnd_x                               0x1405D0510
#define CListWnd__dCListWnd_x                              0x1405D0950
#define CListWnd__vftable_x                                0x140AEAD00
#define CListWnd__AddColumn_x                              0x1405D0FE0
#define CListWnd__AddColumn1_x                             0x1405D1080
#define CListWnd__AddLine_x                                0x1405D11E0
#define CListWnd__AddString_x                              0x1405D1780
#define CListWnd__CalculateFirstVisibleLine_x              0x1405D1CF0
#define CListWnd__CalculateVSBRange_x                      0x1405D1FD0
#define CListWnd__ClearSel_x                               0x1405D2180
#define CListWnd__ClearAllSel_x                            0x1405D2120
#define CListWnd__CloseAndUpdateEditWindow_x               0x1405D21E0
#define CListWnd__Compare_x                                0x1405D23A0
#define CListWnd__Draw_x                                   0x1405D2860
#define CListWnd__DrawColumnSeparators_x                   0x1405D33F0
#define CListWnd__DrawHeader_x                             0x1405D34B0
#define CListWnd__DrawItem_x                               0x1405D3B90
#define CListWnd__DrawLine_x                               0x1405D4530
#define CListWnd__DrawSeparator_x                          0x1405D49F0
#define CListWnd__EnableLine_x                             0x1405D4E10
#define CListWnd__EnsureVisible_x                          0x1405D4E70
#define CListWnd__ExtendSel_x                              0x1405D4F70
#define CListWnd__GetColumnMinWidth_x                      0x1405D5300
#define CListWnd__GetColumnWidth_x                         0x1405D5380
#define CListWnd__GetCurSel_x                              0x1405D5480
#define CListWnd__GetItemData_x                            0x1405D5800
#define CListWnd__GetItemHeight_x                          0x1405D5840
#define CListWnd__GetItemRect_x                            0x1405D5A70
#define CListWnd__GetItemText_x                            0x1405D5D10
#define CListWnd__GetSelList_x                             0x1405D5F70
#define CListWnd__GetSeparatorRect_x                       0x1405D6160
#define CListWnd__InsertLine_x                             0x1405D75C0
#define CListWnd__RemoveLine_x                             0x1405D7C30
#define CListWnd__SetColors_x                              0x1405D7FF0
#define CListWnd__SetColumnJustification_x                 0x1405D8010
#define CListWnd__SetColumnLabel_x                         0x1405D8090
#define CListWnd__SetColumnWidth_x                         0x1405D8230
#define CListWnd__SetCurSel_x                              0x1405D8300
#define CListWnd__SetItemColor_x                           0x1405D8570
#define CListWnd__SetItemData_x                            0x1405D8610
#define CListWnd__SetItemText_x                            0x1405D8850
#define CListWnd__Sort_x                                   0x1405D8C60
#define CListWnd__ToggleSel_x                              0x1405D8DD0
#define CListWnd__SetColumnsSizable_x                      0x1405D8280
#define CListWnd__SetItemWnd_x                             0x1405D8980
#define CListWnd__GetItemWnd_x                             0x1405D5F00
#define CListWnd__SetItemIcon_x                            0x1405D8650
#define CListWnd__CalculateCustomWindowPositions_x         0x1405D1AC0
#define CListWnd__SetVScrollPos_x                          0x1405D8BC0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                         0x140468340

// MapViewMap
#define MapViewMap__vftable_x                              0x140A4F8E0
#define MapViewMap__Clear_x                                0x14046A000
#define MapViewMap__SetZoom_x                              0x1404706E0
#define MapViewMap__HandleLButtonDown_x                    0x14046D1E0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x              0x1404927A0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x 0x140499120
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x 0x140499900
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x 0x14049D240
#define CMerchantWnd__SelectBuySellSlot_x                  0x14049C540
#define CMerchantWnd__PurchasePageHandler__UpdateList_x    0x1404A16E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                           0x140695180
#define CPacketScrambler__hton_x                           0x140695170

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x         0x1405F9920
#define CSidlManagerBase__FindAnimation1_x                 0x1405F9860
#define CSidlManagerBase__FindScreenPieceTemplate_x        0x1405F9F60
#define CSidlManagerBase__FindScreenPieceTemplate1_x       0x1405F9D00
#define CSidlManagerBase__CreateXWndFromTemplate_x         0x1405F8C60
#define CSidlManagerBase__CreateXWndFromTemplate1_x        0x1405F8BF0
#define CSidlManagerBase__CreateXWnd_x                     0x1405F8250

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                 0x14050B100
#define CSidlManager__CreateXWnd_x                         0x14050B2C0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                0x1405BE1C0
#define CSidlScreenWnd__CalculateVSBRange_x                0x1405BE2E0
#define CSidlScreenWnd__ConvertToRes_x                     0x140608C50
#define CSidlScreenWnd__CreateChildrenFromSidl_x           0x1405BE460
#define CSidlScreenWnd__CSidlScreenWnd1_x                  0x1405BD900
#define CSidlScreenWnd__CSidlScreenWnd2_x                  0x1405BD9D0
#define CSidlScreenWnd__dCSidlScreenWnd_x                  0x1405BDBE0
#define CSidlScreenWnd__DrawSidlPiece_x                    0x1405BEB40
#define CSidlScreenWnd__EnableIniStorage_x                 0x1405BED70
#define CSidlScreenWnd__GetChildItem_x                     0x1405BEF10
#define CSidlScreenWnd__GetSidlPiece_x                     0x1405BF160
#define CSidlScreenWnd__HandleLButtonUp_x                  0x1405C9250
#define CSidlScreenWnd__Init1_x                            0x1405BF4D0
#define CSidlScreenWnd__LoadIniInfo_x                      0x1405BF840
#define CSidlScreenWnd__LoadIniListWnd_x                   0x1405C00F0
#define CSidlScreenWnd__LoadSidlScreen_x                   0x1405C0AF0
#define CSidlScreenWnd__m_layoutCopy_x                     0x140F549B8
#define CSidlScreenWnd__StoreIniInfo_x                     0x1405C1180
#define CSidlScreenWnd__StoreIniVis_x                      0x1405C1960
#define CSidlScreenWnd__vftable_x                          0x140AE9F88
#define CSidlScreenWnd__WndNotification_x                  0x1405C19B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                           0x14033B2D0
#define CSkillMgr__GetSkillCap_x                           0x14033B5F0
#define CSkillMgr__GetNameToken_x                          0x14033B520
#define CSkillMgr__IsActivatedSkill_x                      0x14033B9B0
#define CSkillMgr__IsCombatSkill_x                         0x14033B9F0
#define CSkillMgr__GetSkillTimerDuration_x                 0x14033B920
#define CSkillMgr__GetSkillLastUsed_x                      0x14033B570

// CSliderWnd
#define CSliderWnd__GetValue_x                             0x1405D9740
#define CSliderWnd__SetValue_x                             0x1405D9F50
#define CSliderWnd__SetNumTicks_x                          0x1405D9DD0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                       0x140511970

// CStmlWnd
#define CStmlWnd__AppendSTML_x                             0x1405DE700
#define CStmlWnd__CalculateHSBRange_x                      0x1405DF5B0
#define CStmlWnd__CalculateVSBRange_x                      0x1405DF630
#define CStmlWnd__FastForwardToEndOfTag_x                  0x1405E00D0
#define CStmlWnd__ForceParseNow_x                          0x1405E0170
#define CStmlWnd__GetVisibleText_x                         0x1405E0840
#define CStmlWnd__MakeStmlColorTag_x                       0x1405E25D0
#define CStmlWnd__MakeWndNotificationTag_x                 0x1405E2610
#define CStmlWnd__SetSTMLText_x                            0x1405E96A0
#define CStmlWnd__StripFirstSTMLLines_x                    0x1405E9850
#define CStmlWnd__UpdateHistoryString_x                    0x1405E9BF0

// CTabWnd
#define CTabWnd__Draw_x                                    0x1405DA320
#define CTabWnd__DrawCurrentPage_x                         0x1405DA3C0
#define CTabWnd__DrawTab_x                                 0x1405DA790
#define CTabWnd__GetTabRect_x                              0x1405DAE20
#define CTabWnd__InsertPage_x                              0x1405DB0F0
#define CTabWnd__RemovePage_x                              0x1405DB380
#define CTabWnd__SetPage_x                                 0x1405DB4E0
#define CTabWnd__UpdatePage_x                              0x1405DB7E0

// CPageWnd
#define CPageWnd__FlashTab_x                               0x140602CD0
#define CPageWnd__SetTabText_x                             0x140602D40

// CTextOverlay
#define CTextOverlay__DisplayText_x                        0x1400C0B20
#define CBroadcast__Get_x                                  0x1400C0F50


// CTextureFont
#define CTextureFont__DrawWrappedText_x                    0x1405F1190
#define CTextureFont__DrawWrappedText1_x                   0x1405F1090
#define CTextureFont__DrawWrappedText2_x                   0x1405F12C0
#define CTextureFont__GetTextExtent_x                      0x1405F1670
#define CTextureFont__GetHeight_x                          0x1405F1630

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                      0x140607370

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                     0x1405BAD50

// CXStr
#define CXStr__gFreeLists_x                                0x140D80040
#define CXStr__gCXStrAccess_x                              0x140F54518

// CXWnd
#define CXWnd__BringToTop_x                                0x1405C4190
#define CXWnd__ClrFocus_x                                  0x1405C4480
#define CXWnd__Destroy_x                                   0x1405C4600
#define CXWnd__DoAllDrawing_x                              0x1405C4710
#define CXWnd__DrawColoredRect_x                           0x1405C4ED0
#define CXWnd__DrawTooltip_x                               0x1405C6560
#define CXWnd__DrawTooltipAtPoint_x                        0x1405C6620
#define CXWnd__GetChildItem_x                              0x1405C6F20
#define CXWnd__GetChildWndAt_x                             0x1405C6FE0
#define CXWnd__GetClientRect_x                             0x1405C7290
#define CXWnd__GetClientClipRect_x                         0x1405C7140
#define CXWnd__GetRelativeRect_x                           0x1405C8C50
#define CXWnd__GetScreenClipRect_x                         0x1405C8D60
#define CXWnd__GetScreenRect_x                             0x1405C8ED0
#define CXWnd__GetTooltipRect_x                            0x1405C9050
#define CXWnd__IsActive_x                                  0x1405C9610
#define CXWnd__IsDescendantOf_x                            0x1405C9640
#define CXWnd__IsReallyVisible_x                           0x1405C96B0
#define CXWnd__IsType_x                                    0x1405C9700
#define CXWnd__Minimize_x                                  0x1405C9800
#define CXWnd__ProcessTransition_x                         0x1405CA6C0
#define CXWnd__Resize_x                                    0x1405CA7E0
#define CXWnd__Right_x                                     0x1405CA880
#define CXWnd__SetFocus_x                                  0x1405CAC30
#define CXWnd__SetFont_x                                   0x1405CAC80
#define CXWnd__SetKeyTooltip_x                             0x1405CAD90
#define CXWnd__SetMouseOver_x                              0x1405CAED0
#define CXWnd__SetParent_x                                 0x1405CAF50
#define CXWnd__StartFade_x                                 0x1405CB3A0
#define CXWnd__vftable_x                                   0x140AEA560
#define CXWnd__CXWnd_x                                     0x1405C2DD0
#define CXWnd__dCXWnd_x                                    0x1405C36D0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                     0x14060E0A0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                  0x1405EB510
#define CXWndManager__DrawCursor_x                         0x1405EB7F0
#define CXWndManager__DrawWindows_x                        0x1405EBA50
#define CXWndManager__GetKeyboardFlags_x                   0x1405EC0C0
#define CXWndManager__HandleKeyboardMsg_x                  0x1405EC100
#define CXWndManager__RemoveWnd_x                          0x1405EF810

// CDBStr
#define CDBStr__GetString_x                                0x1401934D0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                0x14069F170

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x               0x1400D5DF0
#define CCharacterListWnd__EnterWorld_x                    0x1400D4BF0
#define CCharacterListWnd__Quit_x                          0x14012AFD0
#define CCharacterListWnd__UpdateList_x                    0x1400D6B30

// ItemClient
#define ItemBase__CanGemFitInSlot_x                        0x14066C3F0
#define ItemBase__CreateItemTagString_x                    0x14066CE70
#define ItemBase__GetImageNum_x                            0x14066F580
#define ItemBase__GetItemValue_x                           0x140671150
#define ItemBase__IsEmpty_x                                0x140672E50
#define ItemBase__IsKeyRingItem_x                          0x140673560
#define ItemBase__ValueSellMerchant_x                      0x140677710
#define ItemClient__CanDrop_x                              0x1402C1690
#define ItemClient__CanGoInBag_x                           0x1402C17C0
#define ItemClient__CreateItemClient_x                     0x1402C1A50
#define ItemClient__dItemClient_x                          0x1402C1500

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                      0x1401B3130
#define EQ_LoadingS__Array_x                               0x140D59D40

// PcClient
#define PcBase__GetAlternateAbilityId_x                    0x140683830
#define PcBase__GetCombatAbility_x                         0x140683F20
#define PcBase__GetCombatAbilityTimer_x                    0x140683FC0
#define PcBase__GetItemContainedRealEstateIds_x            0x140684790
#define PcBase__GetNonArchivedOwnedRealEstates_x           0x140685210
#define PcClient__AlertInventoryChanged_x                  0x1402E4C50
#define PcClient__GetConLevel_x                            0x1402E53A0
#define PcClient__GetMeleeSpellFromSkillIndex_x            0x1402E7AA0
#define PcClient__HasLoreItem_x                            0x1402E8B40
#define PcZoneClient__GetItemRecastTimer_x                 0x1402F54C0
#define PcZoneClient__RemoveMyAffect_x                     0x1402F8980

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                       0x140228D10
#define EQGroundItemListManager__Add_x                     0x140228EC0
#define EQGroundItemListManager__Clear_x                   0x140228F60
#define EQGroundItemListManager__Delete_x                  0x140229020
#define EQGroundItemListManager__Instance_x                0x1402290B0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                         0x140264970

// CTribute
#define CTribute__GetActiveFavorCost_x                     0x14018DC50

// PlayerClient
#define PlayerBase__CanSee_x                               0x1406576F0
#define PlayerBase__CanSee1_x                              0x1406577D0
#define PlayerBase__GetVisibilityLineSegment_x             0x140657CC0
#define PlayerBase__HasProperty_x                          0x140657EA0
#define PlayerBase__IsTargetable_x                         0x140657F60
#define PlayerClient__ChangeBoneStringSprite_x             0x140306720
#define PlayerClient__GetPcClient_x                        0x140309260
#define PlayerClient__PlayerClient_x                       0x1402FEA50
#define PlayerClient__SetNameSpriteState_x                 0x14030C990
#define PlayerClient__SetNameSpriteTint_x                  0x14030D950
#define PlayerZoneClient__ChangeHeight_x                   0x14031C580
#define PlayerZoneClient__DoAttack_x                       0x14031D290
#define PlayerZoneClient__GetLevel_x                       0x1403209E0
#define PlayerZoneClient__IsValidTeleport_x                0x1402676F0
#define PlayerZoneClient__LegalPlayerRace_x                0x1401A1930

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                0x140315A50
#define PlayerManagerClient__GetSpawnByName_x              0x140315B00
#define PlayerManagerClient__GetPlayerFromPartialName_x    0x140315C00
#define PlayerManagerClient__CreatePlayer_x                0x140315510
#define PlayerManagerBase__PrepForDestroyPlayer_x          0x140657200

// KeyPressHandler
#define KeypressHandler__Get_x                             0x1402C6C90
#define KeypressHandler__AttachAltKeyToEqCommand_x         0x1402C65A0
#define KeypressHandler__AttachKeyToEqCommand_x            0x1402C6610
#define KeypressHandler__ClearCommandStateArray_x          0x1402C6C20
#define KeypressHandler__HandleKeyDown_x                   0x1402C6DB0
#define KeypressHandler__HandleKeyUp_x                     0x1402C6ED0
#define KeypressHandler__SaveKeymapping_x                  0x1402C6AA0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x               0x14069CC80

// StringTable
#define StringTable__getString_x                           0x1406968A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                    0x1402EEC60
#define PcZoneClient__DestroyHeldItemOrMoney_x             0x1402F35F0
#define PcZoneClient__GetPcSkillLimit_x                    0x1402F65A0
#define PcZoneClient__RemovePetEffect_x                    0x1402F8C60
#define PcZoneClient__HasAlternateAbility_x                0x1402F7180
#define PcZoneClient__CanEquipItem_x                       0x1402F1880
#define PcZoneClient__GetItemByID_x                        0x1402F4540
#define PcZoneClient__RemoveBuffEffect_x                   0x1402F8810
#define PcZoneClient__BandolierSwap_x                      0x1402E4D00

// Doors
#define EQSwitch__UseSwitch_x                              0x14026C360

// IconCache
#define IconCache__GetIcon_x                               0x1403D7A20

// CContainerMgr
#define CContainerMgr__OpenContainer_x                     0x1403CBCD0
#define CContainerMgr__CloseContainer_x                    0x1403CB5F0
#define CContainerMgr__OpenExperimentContainer_x           0x1403CC070

// CQuantityWnd
#define CQuantityWnd__Open_x                               0x1404CE350

// CHelpWnd
#define CHelpWnd__SetFile_x                                0x1402B8BD0

// CLootWnd
#define CLootWnd__LootAll_x                                0x14045BEC0
#define CLootWnd__RequestLootSlot_x                        0x14045CF10

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                    0x1401E3950
#define EQ_Spell__SpellAffects_x                           0x1401E4C30
#define EQ_Spell__SpellAffectBase_x                        0x1401E4B90
#define EQ_Spell__GetSpellAffectBySlot_x                   0x1400DEF30
#define EQ_Spell__GetSpellAffectByIndex_x                  0x1400DEEE0
#define EQ_Spell__IsSPAStacking_x                          0x1401E4860
#define EQ_Spell__IsSPAIgnoredByStacking_x                 0x1401E4410
#define EQ_Spell__IsDegeneratingLevelMod_x                 0x1401E3CD0

// EQSpellStrings
#define EQSpellStrings__GetString_x                        0x1400C6130

// CTargetWnd
#define CTargetWnd__WndNotification_x                      0x14052C0B0
#define CTargetWnd__RefreshTargetBuffs_x                   0x14052B7D0
#define CTargetWnd__HandleBuffRemoveRequest_x              0x14052AFD0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                       0x140533960

// CTaskManager
#define CTaskManager__GetEntry_x                           0x14018A6D0
#define CTaskManager__GetTaskStatus_x                      0x14018A7E0
#define CTaskManager__GetElementDescription_x              0x14018A360

// EqSoundManager
#define EqSoundManager__WavePlay_x                         0x1401E1C70
#define EqSoundManager__PlayScriptMp3_x                    0x1401E0A00
#define EqSoundManager__SoundAssistPlay_x                  0x1403406A0
#define EqSoundManager__WaveInstancePlay_x                 0x1403409E0

// CTextureAnimation
#define CTextureAnimation__Draw_x                          0x1405CC120
#define CTextureAnimation__SetCurCell_x                    0x1405CC430

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                     0x1402B6DC0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x              0x1406B78F0
#define CharacterBase__GetItemByGlobalIndex1_x             0x1406B7970
#define CharacterBase__IsExpansionFlag_x                   0x140207CD0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x              0x1403A61F0
#define CCastSpellWnd__IsBardSongPlaying_x                 0x1403A6C60
#define CCastSpellWnd__RefreshSpellGemButtons_x            0x1403A81D0

// messages
#define msg_spell_worn_off_x                               0x140496FC0
#define msg_new_text_x                                     0x14021A6D0
#define __msgTokenTextParam_x                              0x140211A80
#define msgTokenText_x                                     0x140211990

// SpellManager
#define Spellmanager__LoadTextSpells_x                     0x140342410
#define SpellManager__GetSpellByGroupAndRank_x             0x140342310

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140667B80

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                            0x1404550D0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                0x1403D0B10
#define CCursorAttachment__IsOkToActivate_x                0x1403D3FB0
#define CCursorAttachment__RemoveAttachment_x              0x1403D4260
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x             0x1406057D0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x          0x1406059D0
#define CEQSuiteTextureLoader__GetTexture_x                0x1406059E0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                    0x140155520
#define CFindItemWnd__Update_x                             0x140155EE0
#define CFindItemWnd__PickupSelectedItem_x                 0x14014EB70

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x            0x1401601A0
#define LootFiltersManager__GetItemFilterData_x            0x140160CD0
#define LootFiltersManager__RemoveItemLootFilter_x         0x140161580
#define LootFiltersManager__SetItemLootFilter_x            0x140161830

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                  0x1404B0150

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x             0x14033AE90
#define CResolutionHandler__UpdateResolution_x             0x1405B08B0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                            0x1403C7DF0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x               0x1406BBD00
#define CDistillerInfo__Instance_x                         0x1406BBBF0

// CGroupWnd
#define CGroupWnd__WndNotification_x                       0x1403F2240
#define CGroupWnd__UpdateDisplay_x                         0x1403F13B0

// ItemBase
#define ItemBase__IsLore_x                                 0x1406736A0
#define ItemBase__IsLoreEquipped_x                         0x140673730

#define MultipleItemMoveManager__ProcessMove_x             0x1402DA790

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                    0x140264AD0
#define EQPlacedItemManager__GetItemByGuid_x               0x140264A60
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140264AA0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                0x140335090

// FactionManagerClient
#define FactionManagerClient__Instance_x                   0x14012B6A0
#define FactionManagerClient__HandleFactionMessage_x       0x14012BA80
#define FactionManagerClient__GetFactionStanding_x         0x14012AE70
#define FactionManagerClient__GetMaxFaction_x              0x14012AE70
#define FactionManagerClient__GetMinFaction_x              0x14012AD20

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                0x1400B2EC0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                   0x140137050

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x 0x1401BC1A0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x 0x1401BB340
#define CAltAbilityData__GetMercCurrentRank_x              0x1401BBFC0
#define CAltAbilityData__GetMercMaxRank_x                  0x1401BBF40

// CTargetManager
#define CTargetManager__Get_x                              0x140347720

// KeyCombo
#define KeyCombo__GetTextDescription_x                     0x1405C1FA0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                    0x140088E20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                 0x140358FB0

// AchievementManager
#define AchievementManager__Instance_x                     0x140091FD0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                       0x14069FD00
#define FreeToPlayClient__RestrictionInfo_x                0x140AFEF60

// UdpConnection
#define UdpConnection__GetStats_x                          0x140563370

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                            0x1408548E8
#define CGFScreenWnd__CGFScreenWnd_x                       0x140072AD0
#define CGFScreenWnd__CGFScreenWnd1_x                      0x140072C60
#define CGFScreenWnd__dCGFScreenWnd_x                      0x140072E10

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
