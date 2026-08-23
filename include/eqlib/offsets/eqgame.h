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

#define __ClientDate                                               20260811u
#define __ExpectedVersionDate                                      "Aug 11 2026"
#define __ExpectedVersionTime                                      "12:16:59"
#define __ActualVersionDate_x                                      0x140992DB8
#define __ActualVersionTime_x                                      0x140992DA8
#define __ActualVersionBuild_x                                     0x140D8B908

// Memory Protection
#define __MemChecker0_x                                            0x1402D2870
#define __MemChecker1_x                                            0x1405ADDD0
#define __MemChecker4_x                                            0x14029FB20
#define __EncryptPad0_x                                            0x140D70C40

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EB95C0
#define instEQZoneInfo_x                                           0x140EB97B4

// Misc Globals
#define __do_loot_x                                                0x1402323C0
#define __gfMaxZoomCameraDistance_x                                0x140929078
#define __gfMaxCameraDistance_x                                    0x140AD3214
#define __CurrentSocial_x                                          0x140C250E4
#define __BindList_x                                               0x140D64970
#define g_eqCommandStates_x                                        0x140D65A10
#define __CommandList_x                                            0x140D65C50
#define __ScreenMode_x                                             0x140E00E74
#define __gWorld_x                                                 0x140EB3C98
#define __gpbCommandEvent_x                                        0x140EB4000
#define __ServerHost_x                                             0x140EB41E8
#define __Guilds_x                                                 0x140EB8170
#define __MemCheckBitmask_x                                        0x140EB9B03
#define __MemCheckActive_x                                         0x140EBB21D
#define __MouseEventTime_x                                         0x140F2EB90
#define DI8__MouseState_x                                          0x140F32D78
#define __heqmain_x                                                0x140F35208
#define DI8__Mouse_x                                               0x140F35220
#define __HWnd_x                                                   0x140F35228
#define __Mouse_x                                                  0x140F35230
#define DI8__Keyboard_x                                            0x140F35250
#define __LoginName_x                                              0x140F359BC
#define __CurrentMapLabel_x                                        0x140F494F0
#define __LabelCache_x                                             0x140F4A0C0
#define __ChatFilterDefs_x                                         0x140A6D090
#define Teleport_Table_Size_x                                      0x140EB4008
#define Teleport_Table_x                                           0x140EB1A50

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EB4500
#define pinstActiveBanker_x                                        0x140EB3F30
#define pinstActiveCorpse_x                                        0x140EB3F20
#define pinstActiveGMaster_x                                       0x140EB3F28
#define pinstActiveMerchant_x                                      0x140EB3F18
#define pinstAltAdvManager_x                                       0x140E01CF8
#define pinstCEverQuest_x                                          0x140F35268
#define pinstCamActor_x                                            0x140E00E60
#define pinstCDBStr_x                                              0x140E00AB0
#define pinstCDisplay_x                                            0x140EB3FE0
#define pinstControlledPlayer_x                                    0x140EB3FC0
#define pinstCResolutionHandler_x                                  0x140F5A668
#define pinstCSidlManager_x                                        0x140F5B660
#define pinstCXWndManager_x                                        0x140F5B658
#define instDynamicZone_x                                          0x140EB8030
#define instExpeditionLeader_x                                     0x140EB807E
#define instExpeditionName_x                                       0x140EB80BE
#define pinstDZMember_x                                            0x140EB8148
#define pinstDZTimerInfo_x                                         0x140EB8150
#define pinstEqLogin_x                                             0x140F35300
#define instTribute_x                                              0x140D5D880
#define pinstDeviceInputProxy_x                                    0x140EB961C
#define pinstEQSoundManager_x                                      0x140E02080
#define pinstEQSpellStrings_x                                      0x140DE5630
#define pinstSGraphicsEngine_x                                     0x140F5A698
#define pinstLocalPC_x                                             0x140EB3A80
#define pinstLocalPlayer_x                                         0x140EB3F10
#define pinstCMercenaryClientManager_x                             0x140F304B0
#define pinstModelPlayer_x                                         0x140EB3F40
#define pinstRenderInterface_x                                     0x140F5A6B0
#define pinstSkillMgr_x                                            0x140F32188
#define pinstSpawnManager_x                                        0x140F30888
#define pinstSpellManager_x                                        0x140F321F8
#define pinstStringTable_x                                         0x140EB3A88
#define pinstSwitchManager_x                                       0x140EB19B0
#define pinstTarget_x                                              0x140EB3FB8
#define pinstTaskMember_x                                          0x140D5D870
#define pinstTradeTarget_x                                         0x140EB3F38
#define instTributeActive_x                                        0x140D5D8A9
#define pinstViewActor_x                                           0x140E00E58
#define pinstWorldData_x                                           0x140EB1A48
#define pinstPlayerPath_x                                          0x140F308B0
#define pinstTargetIndicator_x                                     0x140F322A8
#define EQObject_Top_x                                             0x140EB3FE8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F46640
#define pinstCContainerMgr_x                                       0x140E01098
#define pinstCContextMenuManager_x                                 0x140F5B340
#define pinstCInvSlotMgr_x                                         0x140E01078
#define pinstCItemDisplayManager_x                                 0x140F490C0
#define pinstCPopupWndManager_x                                    0x140F49950
#define pinstCSpellDisplayMgr_x                                    0x140F49FA0
#define pinstCTaskManager_x                                        0x140C267B0
#define pinstEQSuiteTextureLoader_x                                0x140D866F0
#define pinstItemIconCache_x                                       0x140F469A8
#define pinstLootFiltersManager_x                                  0x140E004F8
#define pinstGFViewListener_x                                      0x140F5AB18


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14025CBE0
#define __CastRay_x                                                0x140254C50
#define __CastRay2_x                                               0x140254940
#define __compress_block_x                                         0x140563900
#define __ConvertItemTags_x                                        0x1402550E0
#define __CleanItemTags_x                                          0x14008E6C0
#define __CreateCascadeMenuItems_x                                 0x14019AFC0
#define __decompress_block_x                                       0x1405A9450
#define __DoesFileExist_x                                          0x1405B1E40
#define __EQGetTime_x                                              0x1405AE380
#define __ExecuteCmd_x                                             0x140229860
#define __FixHeading_x                                             0x14066B760
#define __FlushDxKeyboard_x                                        0x140357BF0
#define __get_bearing_x                                            0x14025EEF0
#define __get_melee_range_x                                        0x14025EFE0
#define __GetAnimationCache_x                                      0x1403DE630
#define __GetGaugeValueFromEQ_x                                    0x1405226E0
#define __GetLabelFromEQ_x                                         0x140523CC0
#define __GetXTargetType_x                                         0x14066DC50
#define __HeadingDiff_x                                            0x14066B7E0
#define __HelpPath_x                                               0x140F2EA58
#define __NewUIINI_x                                               0x14052F720
#define __ProcessDeviceEvents_x                                    0x1402A0120
#define __ProcessGameEvents_x                                      0x1402948E0
#define __ProcessKeyboardEvents_x                                  0x1403593D0
#define __ProcessMouseEvents_x                                     0x140296040
#define __SaveColors_x                                             0x1401AB190
#define __STMLToText_x                                             0x1405C26D0
#define __WndProc_x                                                0x1403563B0
#define CMemoryMappedFile__SetFile_x                               0x140818A00
#define DrawNetStatus_x                                            0x1402E1DE0
#define Util__FastTime_x                                           0x1405AD720
#define __eq_delete_x                                              0x1406E4708
#define __eq_new_x                                                 0x1406E4960
#define __CopyLayout_x                                             0x1402CEC40
#define __ThrottleFrameRate_x                                      0x140283A05
#define __ThrottleFrameRateEnd_x                                   0x140283A0B

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403696B0
#define CAAWnd__Update_x                                           0x140369B10
#define CAAWnd__UpdateSelected_x                                   0x14036B160

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ABF20
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400ABD10
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A80C0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B41C0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B6430
#define AltAdvManager__IsAbilityReady_x                            0x1401B6910
#define AltAdvManager__GetAAById_x                                 0x1401B5CC0
#define AltAdvManager__CanTrainAbility_x                           0x1401B5AC0
#define AltAdvManager__CanSeeAbility_x                             0x1401B57E0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400DB5A0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DC460
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DC6B0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400F0C50
#define CharacterZoneClient__CanUseItem_x                          0x1400F1210
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DD090
#define CharacterZoneClient__CastSpell_x                           0x1400DD130
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400ED080
#define CharacterZoneClient__Cur_HP_x                              0x1400F2A10
#define CharacterZoneClient__Cur_Mana_x                            0x1400F2BD0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400E0590
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F9320
#define CharacterZoneClient__GetBaseSkill_x                        0x14054E760
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E1A30
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F0550
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400FABB0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F9AA0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E1BB0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D1070
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D2F40
#define CharacterZoneClient__GetHPRegen_x                          0x1400FA1D0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F2660
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400FAC80
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E1C30
#define CharacterZoneClient__GetManaRegen_x                        0x1400FBA40
#define CharacterZoneClient__GetModCap_x                           0x140103170
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E1F30
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E2100
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D65C0
#define CharacterZoneClient__HasSkill_x                            0x1400FEBE0
#define CharacterZoneClient__HitBySpell_x                          0x1400E2B70
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E64F0
#define CharacterZoneClient__MakeMeVisible_x                       0x140102C50
#define CharacterZoneClient__Max_Endurance_x                       0x1402FCDA0
#define CharacterZoneClient__Max_HP_x                              0x140102FA0
#define CharacterZoneClient__Max_Mana_x                            0x1402FCFC0
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140103400
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E9B30
#define CharacterZoneClient__SpellDuration_x                       0x1400EA860
#define CharacterZoneClient__TotalEffect_x                         0x1400EBCE0
#define CharacterZoneClient__UseSkill_x                            0x1401095C0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038B260

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140396000

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140391D30
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140395C80

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140398920

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AF2CD8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BBF50
#define CChatWindowManager__InitContextMenu_x                      0x1403BC0E0
#define CChatWindowManager__FreeChatWindow_x                       0x1403BAF50
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C4460
#define CChatWindowManager__CreateChatWindow_x                     0x1403BA980

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140111BC0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C54D0
#define CChatWindow__Clear_x                                       0x1403C64D0
#define CChatWindow__WndNotification_x                             0x1403C7740
#define CChatWindow__AddHistory_x                                  0x1403C5FE0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405EFFB0
#define CContextMenu__RemoveMenuItem_x                             0x1405F03C0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405F0390
#define CContextMenu__CheckMenuItem_x                              0x1405F0200
#define CContextMenu__SetMenuItem_x                                0x1405F03E0
#define CContextMenu__AddSeparator_x                               0x1405F0130

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405E1D50
#define CContextMenuManager__RemoveMenu_x                          0x1405E2330
#define CContextMenuManager__PopupMenu_x                           0x1405E2070
#define CContextMenuManager__Flush_x                               0x1405E1DD0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D5EE0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406BF610
#define CChatService__GetFriendName_x                              0x1406BF620

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405D2C20
#define CComboWnd__Draw_x                                          0x1405D2D20
#define CComboWnd__GetCurChoice_x                                  0x1405D3010
#define CComboWnd__GetListRect_x                                   0x1405D30B0
#define CComboWnd__InsertChoice_x                                  0x1405D33F0
#define CComboWnd__SetColors_x                                     0x1405D3780
#define CComboWnd__SetChoice_x                                     0x1405D3740
#define CComboWnd__GetItemCount_x                                  0x1405D30A0
#define CComboWnd__GetCurChoiceText_x                              0x1405D3050
#define CComboWnd__GetChoiceText_x                                 0x1405D2FE0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405D34B0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D3BC0
#define CContainerWnd__SetContainer_x                              0x1403D4D30
#define CContainerWnd__vftable_x                                   0x140A07DA0

// CDisplay
#define CDisplay__cameraType_x                                     0x140E00BFC
#define CDisplay__ZoneMainUI_x                                     0x14060AA80
#define CDisplay__PreZoneMainUI_x                                  0x1401A7EB0
#define CDisplay__CleanGameUI_x                                    0x14019A080
#define CDisplay__GetClickedActor_x                                0x14019E2E0
#define CDisplay__GetUserDefinedColor_x                            0x14019EF50
#define CDisplay__InitCharSelectUI_x                               0x14019F200
#define CDisplay__ReloadUI_x                                       0x1401AA390
#define CDisplay__RestartUI_x                                      0x14020DAC0
#define CDisplay__WriteTextHD2_x                                   0x1401B1330
#define CDisplay__TrueDistance_x                                   0x1401B0FD0
#define CDisplay__SetViewActor_x                                   0x1401AD8D0
#define CDisplay__GetFloorHeight_x                                 0x14019E540
#define CDisplay__ToggleScreenshotMode_x                           0x1401B0AC0
#define CDisplay__RealRender_World_x                               0x1401A9770

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140614F40
#define CEditWnd__DrawCaret_x                                      0x1406066B0
#define CEditWnd__EnsureCaretVisible_x                             0x140606BD0
#define CEditWnd__GetCaretPt_x                                     0x140606E70
#define CEditWnd__GetCharIndexPt_x                                 0x140606EB0
#define CEditWnd__GetDisplayString_x                               0x140607110
#define CEditWnd__GetHorzOffset_x                                  0x140607360
#define CEditWnd__GetLineForPrintableChar_x                        0x1406074C0
#define CEditWnd__GetSelStartPt_x                                  0x1406077B0
#define CEditWnd__GetSTMLSafeText_x                                0x1406075F0
#define CEditWnd__PointFromPrintableChar_x                         0x140608370
#define CEditWnd__ReplaceSelection_x                               0x140608730
#define CEditWnd__SelectableCharFromPoint_x                        0x140608BF0
#define CEditWnd__SetEditable_x                                    0x140608E90
#define CEditWnd__SetWindowText_x                                  0x140608EC0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140284AE0
#define CEverQuest__ClickedPlayer_x                                0x140278B50
#define CEverQuest__CreateTargetIndicator_x                        0x140279450
#define CEverQuest__DoTellWindow_x                                 0x1401118C0
#define CEverQuest__OutputTextToLog_x                              0x1401121B0
#define CEverQuest__DropHeldItemOnGround_x                         0x1402864D0
#define CEverQuest__dsp_chat_x                                     0x1401112F0
#define CEverQuest__trimName_x                                     0x1402B1D10
#define CEverQuest__Emote_x                                        0x140286E60
#define CEverQuest__GetBodyTypeDesc_x                              0x140287C40
#define CEverQuest__GetClassDesc_x                                 0x140287CA0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140288070
#define CEverQuest__GetDeityDesc_x                                 0x140288310
#define CEverQuest__GetLangDesc_x                                  0x140288740
#define CEverQuest__GetRaceDesc_x                                  0x140288AE0
#define CEverQuest__InterpretCmd_x                                 0x14028A720
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402A0190
#define CEverQuest__LMouseUp_x                                     0x14028C230
#define CEverQuest__RightClickedOnPlayer_x                         0x14029D530
#define CEverQuest__RMouseUp_x                                     0x140296BD0
#define CEverQuest__SetGameState_x                                 0x1402A2C50
#define CEverQuest__UPCNotificationFlush_x                         0x1402A8690
#define CEverQuest__IssuePetCommand_x                              0x14028BE10
#define CEverQuest__ReportSuccessfulHeal_x                         0x140297FC0
#define CEverQuest__ReportSuccessfulHit_x                          0x140298DE0
#define CEverQuest__PlayActionVisualEffect_x                                 0x1402A39D0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403E9800

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400CA800
#define CGuild__GetGuildName_x                                     0x1400CA840

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1404106D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C4330
#define CHotButton__SetCheck_x                                     0x1402C4600

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14042A7B0
#define CInvSlotMgr__MoveItem_x                                    0x14042B340
#define CInvSlotMgr__SelectSlot_x                                  0x14042D670

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1404273E0
#define CInvSlot__SliderComplete_x                                 0x140428DB0
#define CInvSlot__GetItemBase_x                                    0x140422950
#define CInvSlot__UpdateItem_x                                     0x140429280

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14042FB30

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140451180
#define CItemDisplayWnd__UpdateStrings_x                           0x1404543A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14044DA60
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14044F390
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404505A0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14051F160
#define CSpellDisplayWnd__UpdateStrings_x                          0x140520EF0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14055C8E0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14044A0E0

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x140520D30

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015ED10

// CLabel
#define CLabel__UpdateText_x                                       0x14045B9B0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405D65C0
#define CListWnd__dCListWnd_x                                      0x1405D6A00
#define CListWnd__vftable_x                                        0x140AF0E00
#define CListWnd__AddColumn_x                                      0x1405D7090
#define CListWnd__AddColumn1_x                                     0x1405D7130
#define CListWnd__AddLine_x                                        0x1405D7290
#define CListWnd__AddString_x                                      0x1405D7830
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405D7DA0
#define CListWnd__CalculateVSBRange_x                              0x1405D8080
#define CListWnd__ClearSel_x                                       0x1405D8220
#define CListWnd__ClearAllSel_x                                    0x1405D81C0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405D8280
#define CListWnd__Compare_x                                        0x1405D8440
#define CListWnd__Draw_x                                           0x1405D8900
#define CListWnd__DrawColumnSeparators_x                           0x1405D9490
#define CListWnd__DrawHeader_x                                     0x1405D9550
#define CListWnd__DrawItem_x                                       0x1405D9C30
#define CListWnd__DrawLine_x                                       0x1405DA5D0
#define CListWnd__DrawSeparator_x                                  0x1405DAA90
#define CListWnd__EnableLine_x                                     0x1405DAEB0
#define CListWnd__EnsureVisible_x                                  0x1405DAF10
#define CListWnd__ExtendSel_x                                      0x1405DB010
#define CListWnd__GetColumnMinWidth_x                              0x1405DB3A0
#define CListWnd__GetColumnWidth_x                                 0x1405DB420
#define CListWnd__GetCurSel_x                                      0x1405DB520
#define CListWnd__GetItemData_x                                    0x1405DB8A0
#define CListWnd__GetItemHeight_x                                  0x1405DB8E0
#define CListWnd__GetItemRect_x                                    0x1405DBB10
#define CListWnd__GetItemText_x                                    0x1405DBDB0
#define CListWnd__GetSelList_x                                     0x1405DC010
#define CListWnd__GetSeparatorRect_x                               0x1405DC200
#define CListWnd__InsertLine_x                                     0x1405DD670
#define CListWnd__RemoveLine_x                                     0x1405DDCE0
#define CListWnd__SetColors_x                                      0x1405DE0A0
#define CListWnd__SetColumnJustification_x                         0x1405DE0C0
#define CListWnd__SetColumnLabel_x                                 0x1405DE140
#define CListWnd__SetColumnWidth_x                                 0x1405DE2E0
#define CListWnd__SetCurSel_x                                      0x1405DE3B0
#define CListWnd__SetItemColor_x                                   0x1405DE620
#define CListWnd__SetItemData_x                                    0x1405DE6C0
#define CListWnd__SetItemText_x                                    0x1405DE900
#define CListWnd__Sort_x                                           0x1405DED10
#define CListWnd__ToggleSel_x                                      0x1405DEE80
#define CListWnd__SetColumnsSizable_x                              0x1405DE330
#define CListWnd__SetItemWnd_x                                     0x1405DEA30
#define CListWnd__GetItemWnd_x                                     0x1405DBFA0
#define CListWnd__SetItemIcon_x                                    0x1405DE700
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405D7B70
#define CListWnd__SetVScrollPos_x                                  0x1405DEC70

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14046F370

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A55848
#define MapViewMap__Clear_x                                        0x140471030
#define MapViewMap__SetZoom_x                                      0x1404774D0
#define MapViewMap__HandleLButtonDown_x                            0x140473FD0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140499620
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14049FF90
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A0760
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404A4080
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404A3380
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A8550

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14069BF00
#define CPacketScrambler__hton_x                                   0x14069BEF0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405FFF60
#define CSidlManagerBase__FindAnimation1_x                         0x1405FFEA0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1406005A0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140600340
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405FF2A0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405FF230
#define CSidlManagerBase__CreateXWnd_x                             0x1405FE890

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140511FD0
#define CSidlManager__CreateXWnd_x                                 0x140512190

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405C4140
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405C4270
#define CSidlScreenWnd__ConvertToRes_x                             0x14060F280
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405C43E0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405C3900
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405C39D0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405C3C40
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405C4AD0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405C4D00
#define CSidlScreenWnd__GetChildItem_x                             0x1405C4EA0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405C50F0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405CF190
#define CSidlScreenWnd__Init1_x                                    0x1405C5380
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405C57D0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405C60A0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405C6AA0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F5A9B8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C7120
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C7910
#define CSidlScreenWnd__vftable_x                                  0x140AF0088
#define CSidlScreenWnd__WndNotification_x                          0x1405C7960

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140340B30
#define CSkillMgr__GetSkillCap_x                                   0x140340E60
#define CSkillMgr__GetNameToken_x                                  0x140340D90
#define CSkillMgr__IsActivatedSkill_x                              0x140341220
#define CSkillMgr__IsCombatSkill_x                                 0x140341260
#define CSkillMgr__GetSkillTimerDuration_x                         0x140341190
#define CSkillMgr__GetSkillLastUsed_x                              0x140340DE0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405DF7E0
#define CSliderWnd__SetValue_x                                     0x1405DFFF0
#define CSliderWnd__SetNumTicks_x                                  0x1405DFE70

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1405188A0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405E47B0
#define CStmlWnd__CalculateHSBRange_x                              0x1405CEB40
#define CStmlWnd__CalculateVSBRange_x                              0x1405E56D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405E6160
#define CStmlWnd__ForceParseNow_x                                  0x1405E5760
#define CStmlWnd__GetVisibleText_x                                 0x1405E68D0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405E8660
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405E86A0
#define CStmlWnd__SetSTMLText_x                                    0x1405EF730
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405EF8E0
#define CStmlWnd__UpdateHistoryString_x                            0x1405EFC80

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405E03C0
#define CTabWnd__DrawCurrentPage_x                                 0x1405E0460
#define CTabWnd__DrawTab_x                                         0x1405E0830
#define CTabWnd__GetTabRect_x                                      0x1405E0EC0
#define CTabWnd__InsertPage_x                                      0x1405E1190
#define CTabWnd__RemovePage_x                                      0x1405E1420
#define CTabWnd__SetPage_x                                         0x1405E1580
#define CTabWnd__UpdatePage_x                                      0x1405E1880

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140609320
#define CPageWnd__SetTabText_x                                     0x140609390

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C3D20
#define CBroadcast__Get_x                                          0x1400C4150


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F72F0
#define CTextureFont__DrawWrappedText1_x                           0x1405F71F0
#define CTextureFont__DrawWrappedText2_x                           0x1405F7420
#define CTextureFont__GetTextExtent_x                              0x1405F77D0
#define CTextureFont__GetHeight_x                                  0x1405F7790

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14060D9A0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405C0D50

// CXStr
#define CXStr__gFreeLists_x                                        0x140D86060
#define CXStr__gCXStrAccess_x                                      0x140F5A518

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405CA190
#define CXWnd__ClrFocus_x                                          0x1405CA480
#define CXWnd__Destroy_x                                           0x1405CA600
#define CXWnd__DoAllDrawing_x                                      0x1405CA700
#define CXWnd__DrawColoredRect_x                                   0x1405CAED0
#define CXWnd__DrawTooltip_x                                       0x1405CC540
#define CXWnd__DrawTooltipAtPoint_x                                0x1405CC600
#define CXWnd__GetChildItem_x                                      0x1405CCF10
#define CXWnd__GetChildWndAt_x                                     0x1405CCFD0
#define CXWnd__GetClientRect_x                                     0x1405CD290
#define CXWnd__GetClientClipRect_x                                 0x1405CD140
#define CXWnd__GetRelativeRect_x                                   0x1405CEC80
#define CXWnd__GetScreenClipRect_x                                 0x1405CED90
#define CXWnd__GetScreenRect_x                                     0x1405CEF10
#define CXWnd__GetTooltipRect_x                                    0x1405CF090
#define CXWnd__IsActive_x                                          0x1405CF650
#define CXWnd__IsDescendantOf_x                                    0x1405CEBF0
#define CXWnd__IsReallyVisible_x                                   0x1405CF6F0
#define CXWnd__IsType_x                                            0x1405CF740
#define CXWnd__Minimize_x                                          0x1405CF840
#define CXWnd__ProcessTransition_x                                 0x1405D0750
#define CXWnd__Resize_x                                            0x1405D0860
#define CXWnd__Right_x                                             0x1405D0900
#define CXWnd__SetFocus_x                                          0x1405D0CC0
#define CXWnd__SetFont_x                                           0x1405D0D10
#define CXWnd__SetKeyTooltip_x                                     0x1405D0E20
#define CXWnd__SetMouseOver_x                                      0x1405D0F70
#define CXWnd__SetParent_x                                         0x1405D0FF0
#define CXWnd__StartFade_x                                         0x1405D1420
#define CXWnd__vftable_x                                           0x140AF0660
#define CXWnd__CXWnd_x                                             0x1405C8D90
#define CXWnd__dCXWnd_x                                            0x1405C96C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1406146D0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405F15A0
#define CXWndManager__DrawCursor_x                                 0x1405F1880
#define CXWndManager__DrawWindows_x                                0x1405F1AE0
#define CXWndManager__GetKeyboardFlags_x                           0x1405F2150
#define CXWndManager__HandleKeyboardMsg_x                          0x1405F2190
#define CXWndManager__RemoveWnd_x                                  0x1405F5990

// CDBStr
#define CDBStr__GetString_x                                        0x140198240

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406A5F40

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D8F30
#define CCharacterListWnd__EnterWorld_x                            0x1400D7D30
#define CCharacterListWnd__Quit_x                                  0x1400D8F10
#define CCharacterListWnd__UpdateList_x                            0x1400D9C70

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140672910
#define ItemBase__CreateItemTagString_x                            0x1406733B0
#define ItemBase__GetImageNum_x                                    0x140675C10
#define ItemBase__GetItemValue_x                                   0x140677660
#define ItemBase__IsEmpty_x                                        0x1406793E0
#define ItemBase__IsKeyRingItem_x                                  0x140679B70
#define ItemBase__ValueSellMerchant_x                              0x14067DD60
#define ItemClient__CanDrop_x                                      0x1402C6B20
#define ItemClient__CanGoInBag_x                                   0x1402C6C60
#define ItemClient__CreateItemClient_x                             0x1402C6EF0
#define ItemClient__dItemClient_x                                  0x1402C69A0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B80E0
#define EQ_LoadingS__Array_x                                       0x140D5FD60

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140689EC0
#define PcBase__GetCombatAbility_x                                 0x14068A750
#define PcBase__GetCombatAbilityTimer_x                            0x14068A830
#define PcBase__GetItemContainedRealEstateIds_x                    0x14068B050
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14068BB20
#define PcClient__AlertInventoryChanged_x                          0x1402EA0E0
#define PcClient__GetConLevel_x                                    0x1402EA830
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402ECF10
#define PcClient__HasLoreItem_x                                    0x1402EDFE0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FA9D0
#define PcZoneClient__RemoveMyAffect_x                             0x1402FDF00

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022E340
#define EQGroundItemListManager__Add_x                             0x14022E4F0
#define EQGroundItemListManager__Clear_x                           0x14022E590
#define EQGroundItemListManager__Delete_x                          0x14022E650
#define EQGroundItemListManager__Instance_x                        0x14022E6E0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140269F60

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140192960

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14065DDF0
#define PlayerBase__CanSee1_x                                      0x14065DED0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14065E3C0
#define PlayerBase__HasProperty_x                                  0x14065E5A0
#define PlayerBase__IsTargetable_x                                 0x14065E660
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030BE20
#define PlayerClient__GetPcClient_x                                0x14030E960
#define PlayerClient__PlayerClient_x                               0x1403040A0
#define PlayerClient__SetNameSpriteState_x                         0x140312090
#define PlayerClient__SetNameSpriteTint_x                          0x140313050
#define PlayerZoneClient__ChangeHeight_x                           0x140321DC0
#define PlayerZoneClient__DoAttack_x                               0x140322AD0
#define PlayerZoneClient__GetLevel_x                               0x1403261F0
#define PlayerZoneClient__IsValidTeleport_x                        0x14026CCD0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6730

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031B270
#define PlayerManagerClient__GetSpawnByName_x                      0x14031B320
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031B420
#define PlayerManagerClient__CreatePlayer_x                        0x14031AD30
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14065D900

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CC130
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CBA40
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CBAB0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CC0C0
#define KeypressHandler__HandleKeyDown_x                           0x1402CC250
#define KeypressHandler__HandleKeyUp_x                             0x1402CC370
#define KeypressHandler__SaveKeymapping_x                          0x1402CBF40

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406A3A40

// StringTable
#define StringTable__getString_x                                   0x14069E010

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F4140
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F8A80
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FBAB0
#define PcZoneClient__RemovePetEffect_x                            0x1402FE1E0
#define PcZoneClient__HasAlternateAbility_x                        0x1402FC6C0
#define PcZoneClient__CanEquipItem_x                               0x1402F6D90
#define PcZoneClient__GetItemByID_x                                0x1402F9A50
#define PcZoneClient__RemoveBuffEffect_x                           0x1402FDD90
#define PcZoneClient__BandolierSwap_x                              0x1402EA190

// Doors
#define EQSwitch__UseSwitch_x                                      0x140271810

// IconCache
#define IconCache__GetIcon_x                                       0x1403DE660

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D2900
#define CContainerMgr__CloseContainer_x                            0x1403D2220
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D2CA0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404D51E0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402BE0F0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140462F20
#define CLootWnd__RequestLootSlot_x                                0x140463F70

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E8AC0
#define EQ_Spell__SpellAffects_x                                   0x1401E9EF0
#define EQ_Spell__SpellAffectBase_x                                0x1401E9E50
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E2290
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E2240
#define EQ_Spell__IsSPAStacking_x                                  0x1401E9B60
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E9710
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E8FD0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C9310

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140532F70
#define CTargetWnd__RefreshTargetBuffs_x                           0x140532690
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140531E90

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14053A820

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018F3F0
#define CTaskManager__GetTaskStatus_x                              0x14018F500
#define CTaskManager__GetElementDescription_x                      0x14018F080

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E6D40
#define EqSoundManager__PlayScriptMp3_x                            0x1401E5AD0
#define EqSoundManager__SoundAssistPlay_x                          0x140345F10
#define EqSoundManager__WaveInstancePlay_x                         0x140346250

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405D21C0
#define CTextureAnimation__SetCurCell_x                            0x1405D24D0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BC2E0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406BCEA0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406BCF20
#define CharacterBase__IsExpansionFlag_x                           0x14020D110

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403ACB70
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403AD5C0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403AEB80

// messages
#define msg_spell_worn_off_x                                       0x140224500
#define msg_new_text_x                                             0x14021FCF0
#define __msgTokenTextParam_x                                      0x1402170C0
#define msgTokenText_x                                             0x140216FD0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140347C80
#define SpellManager__GetSpellByGroupAndRank_x                     0x140347B80

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14066E030

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14045C140

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D7770
#define CCursorAttachment__IsOkToActivate_x                        0x1403DABF0
#define CCursorAttachment__RemoveAttachment_x                      0x1403DAEA0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14060BE00
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14060C000
#define CEQSuiteTextureLoader__GetTexture_x                        0x14060C010

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140159600
#define CFindItemWnd__Update_x                                     0x140159FC0
#define CFindItemWnd__PickupSelectedItem_x                         0x140152BB0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401641D0
#define LootFiltersManager__GetItemFilterData_x                    0x140164CF0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401655A0
#define LootFiltersManager__SetItemLootFilter_x                    0x140165850

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404B6FD0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140340670
#define CResolutionHandler__UpdateResolution_x                     0x1405B68A0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403CEA20

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406C11A0
#define CDistillerInfo__Instance_x                                 0x1406C1090

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403F8E80
#define CGroupWnd__UpdateDisplay_x                                 0x1403F8010

// ItemBase
#define ItemBase__IsLore_x                                         0x140679CB0
#define ItemBase__IsLoreEquipped_x                                 0x140678820

#define MultipleItemMoveManager__ProcessMove_x                     0x1402DFC10

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14026A0A0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14026A030
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14026A070

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033A870

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012F5F0
#define FactionManagerClient__HandleFactionMessage_x               0x14012F9D0
#define FactionManagerClient__GetFactionStanding_x                 0x14012EDC0
#define FactionManagerClient__GetMaxFaction_x                      0x14012EDC0
#define FactionManagerClient__GetMinFaction_x                      0x14012EC70

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B6050

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14013AFA0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C1330
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C04C0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C1150
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C10D0

// CTargetManager
#define CTargetManager__Get_x                                      0x14034CFD0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405C7F60

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008AA20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14035EB80

// AchievementManager
#define AchievementManager__Instance_x                             0x140093F50

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406A6AD0
#define FreeToPlayClient__RestrictionInfo_x                        0x140B05200

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140569D20

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140859A38
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072EE0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073070
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140073220

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
