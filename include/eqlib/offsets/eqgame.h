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

#define __ClientDate                                               20260813u
#define __ExpectedVersionDate                                     "Aug 13 2026"
#define __ExpectedVersionTime                                     "13:29:05"
#define __ActualVersionDate_x                                      0x140992DB8
#define __ActualVersionTime_x                                      0x140992DA8
#define __ActualVersionBuild_x                                     0x140857890

// Memory Protection
#define __MemChecker0_x                                            0x1402D2B80
#define __MemChecker1_x                                            0x1405ADF40
#define __MemChecker4_x                                            0x14029FDF0
#define __EncryptPad0_x                                            0x140D71C40

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EBA5C0
#define instEQZoneInfo_x                                           0x140EBA7B4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140232670
#define __gfMaxZoomCameraDistance_x                                0x140929078
#define __gfMaxCameraDistance_x                                    0x140AD3214
#define __CurrentSocial_x                                          0x140C260E4 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D65970
#define g_eqCommandStates_x                                        0x140D66A10
#define __CommandList_x                                            0x140D66C50
#define __ScreenMode_x                                             0x140E01E74
#define __gWorld_x                                                 0x140EB4C98
#define __gpbCommandEvent_x                                        0x140EB5000
#define __ServerHost_x                                             0x140EB51E8
#define __Guilds_x                                                 0x140EB9170
#define __MemCheckBitmask_x                                        0x140EBAB03
#define __MemCheckActive_x                                         0x140EBC21D
#define __MouseEventTime_x                                         0x140F2FB90
#define DI8__MouseState_x                                          0x140F33D88
#define __heqmain_x                                                0x140F36218
#define DI8__Mouse_x                                               0x140F36230
#define __HWnd_x                                                   0x140F36238
#define __Mouse_x                                                  0x140F36240
#define DI8__Keyboard_x                                            0x140F36260
#define __LoginName_x                                              0x140F369CC
#define __CurrentMapLabel_x                                        0x140F4A500
#define __LabelCache_x                                             0x140F4B0D0
#define __ChatFilterDefs_x                                         0x140A6D090
#define Teleport_Table_Size_x                                      0x140EB5008
#define Teleport_Table_x                                           0x140EB2A50

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EB5500
#define pinstActiveBanker_x                                        0x140EB4F30
#define pinstActiveCorpse_x                                        0x140EB4F20
#define pinstActiveGMaster_x                                       0x140EB4F28
#define pinstActiveMerchant_x                                      0x140EB4F18
#define pinstAltAdvManager_x                                       0x140E02CF8
#define pinstCEverQuest_x                                          0x140F36278
#define pinstCamActor_x                                            0x140E01E60
#define pinstCDBStr_x                                              0x140E01AB0
#define pinstCDisplay_x                                            0x140EB4FE0
#define pinstControlledPlayer_x                                    0x140EB4FC0
#define pinstCResolutionHandler_x                                  0x140F5B678
#define pinstCSidlManager_x                                        0x140F5C670
#define pinstCXWndManager_x                                        0x140F5C668
#define instDynamicZone_x                                          0x140EB9030 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140EB907E
#define instExpeditionName_x                                       0x140EB90BE
#define pinstDZMember_x                                            0x140EB9148
#define pinstDZTimerInfo_x                                         0x140EB9150
#define pinstEqLogin_x                                             0x140F36310
#define instTribute_x                                              0x140D5E880
#define pinstDeviceInputProxy_x                                    0x140EBA61C
#define pinstEQSoundManager_x                                      0x140E03080
#define pinstEQSpellStrings_x                                      0x140DE6630
#define pinstSGraphicsEngine_x                                     0x140F5B6A8
#define pinstLocalPC_x                                             0x140EB4A80
#define pinstLocalPlayer_x                                         0x140EB4F10
#define pinstCMercenaryClientManager_x                             0x140F314C0
#define pinstModelPlayer_x                                         0x140EB4F40
#define pinstRenderInterface_x                                     0x140F5B6C0
#define pinstSkillMgr_x                                            0x140F33198
#define pinstSpawnManager_x                                        0x140F31898
#define pinstSpellManager_x                                        0x140F33208
#define pinstStringTable_x                                         0x140EB4A88
#define pinstSwitchManager_x                                       0x140EB29B0
#define pinstTarget_x                                              0x140EB4FB8
#define pinstTaskMember_x                                          0x140D5E870 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140EB4F38
#define instTributeActive_x                                        0x140D5E8A9
#define pinstViewActor_x                                           0x140E01E58
#define pinstWorldData_x                                           0x140EB2A48
#define pinstPlayerPath_x                                          0x140F318C0
#define pinstTargetIndicator_x                                     0x140F332B8
#define EQObject_Top_x                                             0x140EB4FE8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F47650
#define pinstCContainerMgr_x                                       0x140E02098
#define pinstCContextMenuManager_x                                 0x140F5C350
#define pinstCInvSlotMgr_x                                         0x140E02078
#define pinstCItemDisplayManager_x                                 0x140F4A0D0
#define pinstCPopupWndManager_x                                    0x140F4A960
#define pinstCSpellDisplayMgr_x                                    0x140F4AFB0
#define pinstCTaskManager_x                                        0x140C277B0
#define pinstEQSuiteTextureLoader_x                                0x140D876F0
#define pinstItemIconCache_x                                       0x140F479B8
#define pinstLootFiltersManager_x                                  0x140E014F8
#define pinstGFViewListener_x                                      0x140F5BB28


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14025CEA0
#define __CastRay_x                                                0x140254F10
#define __CastRay2_x                                               0x140254C00
#define __compress_block_x                                         0x140563A70
#define __ConvertItemTags_x                                        0x1402553A0
#define __CleanItemTags_x                                          0x14008E6C0
#define __CreateCascadeMenuItems_x                                 0x14019B0E0
#define __decompress_block_x                                       0x1405A95C0
#define __DoesFileExist_x                                          0x1405B1FB0
#define __EQGetTime_x                                              0x1405AE4F0
#define __ExecuteCmd_x                                             0x140229B10
#define __FixHeading_x                                             0x14066BCA0
#define __FlushDxKeyboard_x                                        0x140357EF0
#define __get_bearing_x                                            0x14025F1B0
#define __get_melee_range_x                                        0x14025F2A0
#define __GetAnimationCache_x                                      0x1403DE5D0
#define __GetGaugeValueFromEQ_x                                    0x140522890
#define __GetLabelFromEQ_x                                         0x140523E80
#define __GetXTargetType_x                                         0x14066E190   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14066BD20
#define __HelpPath_x                                               0x140F2FA58   // Why?
#define __NewUIINI_x                                               0x14052F8D0   // Why?
#define __ProcessDeviceEvents_x                                    0x1402A03F0
#define __ProcessGameEvents_x                                      0x140294BA0
#define __ProcessKeyboardEvents_x                                  0x1403596D0
#define __ProcessMouseEvents_x                                     0x140296310
#define __SaveColors_x                                             0x1401AB2B0
#define __STMLToText_x                                             0x1405C2840
#define __WndProc_x                                                0x1403566B0
#define CMemoryMappedFile__SetFile_x                               0x140819170
#define DrawNetStatus_x                                            0x1402E2100
#define Util__FastTime_x                                           0x1405AD890
#define __eq_delete_x                                              0x1406E4E78
#define __eq_new_x                                                 0x1406E50D0
#define __CopyLayout_x                                             0x1402CEF60
#define __ThrottleFrameRate_x                                      0x140283CC5
#define __ThrottleFrameRateEnd_x                                   0x140283CCB

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403696C0
#define CAAWnd__Update_x                                           0x140369B20
#define CAAWnd__UpdateSelected_x                                   0x14036B170

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B3860
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400ABD10
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A80C0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B41C0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B6570
#define AltAdvManager__IsAbilityReady_x                            0x1401B6A50
#define AltAdvManager__GetAAById_x                                 0x1401B5E00
#define AltAdvManager__CanTrainAbility_x                           0x1401B5C00
#define AltAdvManager__CanSeeAbility_x                             0x1401B5920

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400DB590
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DC450
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DC6A0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400F0C60
#define CharacterZoneClient__CanUseItem_x                          0x1400F1220
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DD080
#define CharacterZoneClient__CastSpell_x                           0x1400DD120
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400ED090
#define CharacterZoneClient__Cur_HP_x                              0x1400F2A20
#define CharacterZoneClient__Cur_Mana_x                            0x1400F2BE0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400E0580
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F9330
#define CharacterZoneClient__GetBaseSkill_x                        0x1401085B0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E1A20
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F0560
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400FABC0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F9AB0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E1BA0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D1060
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D2F30
#define CharacterZoneClient__GetHPRegen_x                          0x1400FA1E0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F2670
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400FAD60
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E1C20
#define CharacterZoneClient__GetManaRegen_x                        0x1400FBA50
#define CharacterZoneClient__GetModCap_x                           0x140103180
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E1F20
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E20F0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D65B0
#define CharacterZoneClient__HasSkill_x                            0x1400FEBF0
#define CharacterZoneClient__HitBySpell_x                          0x1400E2B60
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E64E0
#define CharacterZoneClient__MakeMeVisible_x                       0x140102C60
#define CharacterZoneClient__Max_Endurance_x                       0x1402FD0F0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x140102FB0
#define CharacterZoneClient__Max_Mana_x                            0x1402FD310  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140103410
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E9B40
#define CharacterZoneClient__SpellDuration_x                       0x1400EA870
#define CharacterZoneClient__TotalEffect_x                         0x1400EBCF0
#define CharacterZoneClient__UseSkill_x                            0x1401095D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038B270

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140396010
#define CBarterWnd__UpdateInventoryList_x                          0x140395A80

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140391D40
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140390DB0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140398930

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AF2CD8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BBF50
#define CChatWindowManager__InitContextMenu_x                      0x1403BC0E0
#define CChatWindowManager__FreeChatWindow_x                       0x1403BAF50
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C4460
#define CChatWindowManager__CreateChatWindow_x                     0x1403BA980

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140111BE0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C54D0
#define CChatWindow__Clear_x                                       0x1403C64D0
#define CChatWindow__WndNotification_x                             0x1403C7740
#define CChatWindow__AddHistory_x                                  0x1403C5FE0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405F00A0
#define CContextMenu__RemoveMenuItem_x                             0x1405F04B0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405F0480
#define CContextMenu__CheckMenuItem_x                              0x1405F02F0
#define CContextMenu__SetMenuItem_x                                0x1405F04D0
#define CContextMenu__AddSeparator_x                               0x1405F0220

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405E1E50
#define CContextMenuManager__RemoveMenu_x                          0x1405E2420
#define CContextMenuManager__PopupMenu_x                           0x1405E2160
#define CContextMenuManager__Flush_x                               0x1405E1ED0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D5EC0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406BFD70
#define CChatService__GetFriendName_x                              0x1406BFD80

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405D2D10
#define CComboWnd__Draw_x                                          0x1405D2E10
#define CComboWnd__GetCurChoice_x                                  0x1405D3100  // unused
#define CComboWnd__GetListRect_x                                   0x1405D31A0
#define CComboWnd__InsertChoice_x                                  0x1405D34E0
#define CComboWnd__SetColors_x                                     0x1405D3870
#define CComboWnd__SetChoice_x                                     0x1405D3830
#define CComboWnd__GetItemCount_x                                  0x1405D3190
#define CComboWnd__GetCurChoiceText_x                              0x1405D3140  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405D30D0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405D35A0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D3BB0
#define CContainerWnd__SetContainer_x                              0x140433C00
#define CContainerWnd__vftable_x                                   0x140A07DA0

// CDisplay
#define CDisplay__cameraType_x                                     0x140E01BFC
#define CDisplay__ZoneMainUI_x                                     0x14060ABB0
#define CDisplay__PreZoneMainUI_x                                  0x1401A7FD0
#define CDisplay__CleanGameUI_x                                    0x14019A1A0
#define CDisplay__GetClickedActor_x                                0x14019E400
#define CDisplay__GetUserDefinedColor_x                            0x14019F070
#define CDisplay__InitCharSelectUI_x                               0x14019F320
#define CDisplay__ReloadUI_x                                       0x1401AA4B0
#define CDisplay__RestartUI_x                                      0x14020DD20
#define CDisplay__WriteTextHD2_x                                   0x1401B1450
#define CDisplay__TrueDistance_x                                   0x1401B10F0
#define CDisplay__SetViewActor_x                                   0x1401AD9F0
#define CDisplay__GetFloorHeight_x                                 0x14019E660
#define CDisplay__ToggleScreenshotMode_x                           0x1401B0BE0
#define CDisplay__RealRender_World_x                               0x1401A9890

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140615070
#define CEditWnd__DrawCaret_x                                      0x1406067C0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140606CE0
#define CEditWnd__GetCaretPt_x                                     0x140606F80  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140606FC0
#define CEditWnd__GetDisplayString_x                               0x140607220
#define CEditWnd__GetHorzOffset_x                                  0x140607470
#define CEditWnd__GetLineForPrintableChar_x                        0x1406075D0
#define CEditWnd__GetSelStartPt_x                                  0x1406078C0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140607700
#define CEditWnd__PointFromPrintableChar_x                         0x140608480
#define CEditWnd__ReplaceSelection_x                               0x140608840
#define CEditWnd__SelectableCharFromPoint_x                        0x140608D00
#define CEditWnd__SetEditable_x                                    0x140608FA0
#define CEditWnd__SetWindowText_x                                  0x140608FD0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140284DA0
#define CEverQuest__ClickedPlayer_x                                0x140278E10
#define CEverQuest__CreateTargetIndicator_x                        0x140279710
#define CEverQuest__DoTellWindow_x                                 0x1401118E0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401121D0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140286790
#define CEverQuest__dsp_chat_x                                     0x140111310 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402B1FE0
#define CEverQuest__Emote_x                                        0x140287120
#define CEverQuest__GetBodyTypeDesc_x                              0x140287F00
#define CEverQuest__GetClassDesc_x                                 0x140287F60
#define CEverQuest__GetClassThreeLetterCode_x                      0x140288330
#define CEverQuest__GetDeityDesc_x                                 0x1402885D0
#define CEverQuest__GetLangDesc_x                                  0x140288A00
#define CEverQuest__GetRaceDesc_x                                  0x140288DA0
#define CEverQuest__InterpretCmd_x                                 0x14028A9E0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402A0460
#define CEverQuest__LMouseUp_x                                     0x14028C4F0
#define CEverQuest__RightClickedOnPlayer_x                         0x14029D800
#define CEverQuest__RMouseUp_x                                     0x140296EA0
#define CEverQuest__SetGameState_x                                 0x1402A2F20
#define CEverQuest__UPCNotificationFlush_x                         0x1402A8960 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14028C0D0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140298290
#define CEverQuest__ReportSuccessfulHit_x                          0x1402990B0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403E97A0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400CA810
#define CGuild__GetGuildName_x                                     0x1400CA850

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140410600

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C4600
#define CHotButton__SetCheck_x                                     0x1402C48D0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14042A760
#define CInvSlotMgr__MoveItem_x                                    0x14042B2F0
#define CInvSlotMgr__SelectSlot_x                                  0x14042D640

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140427360
#define CInvSlot__SliderComplete_x                                 0x140428D30
#define CInvSlot__GetItemBase_x                                    0x1404228D0
#define CInvSlot__UpdateItem_x                                     0x140429200

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14042FB00

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140451230
#define CItemDisplayWnd__UpdateStrings_x                           0x140454480
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14044DAB0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14044F400
#define CItemDisplayWnd__RequestConvertItem_x                      0x140450640

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14051F320
#define CSpellDisplayWnd__UpdateStrings_x                          0x1405210B0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14055CA50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14044A120

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x140520EF0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015EDA0

// CLabel
#define CLabel__UpdateText_x                                       0x14045BAA0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405D66B0
#define CListWnd__dCListWnd_x                                      0x1405D6AF0
#define CListWnd__vftable_x                                        0x140AF0E00
#define CListWnd__AddColumn_x                                      0x1405D7180
#define CListWnd__AddColumn1_x                                     0x1405D7220
#define CListWnd__AddLine_x                                        0x1405D7380
#define CListWnd__AddString_x                                      0x1405D7920
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405D7E90
#define CListWnd__CalculateVSBRange_x                              0x1405D8170
#define CListWnd__ClearSel_x                                       0x1405D8310
#define CListWnd__ClearAllSel_x                                    0x1405D82B0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405D8370
#define CListWnd__Compare_x                                        0x1405D8530
#define CListWnd__Draw_x                                           0x1405D89F0
#define CListWnd__DrawColumnSeparators_x                           0x1405D9580
#define CListWnd__DrawHeader_x                                     0x1405D9640
#define CListWnd__DrawItem_x                                       0x1405D9D20
#define CListWnd__DrawLine_x                                       0x1405DA6C0
#define CListWnd__DrawSeparator_x                                  0x1405DAB80
#define CListWnd__EnableLine_x                                     0x1405DAFA0
#define CListWnd__EnsureVisible_x                                  0x1405DB000
#define CListWnd__ExtendSel_x                                      0x1405DB100
#define CListWnd__GetColumnMinWidth_x                              0x1405DB490
#define CListWnd__GetColumnWidth_x                                 0x1405DB510
#define CListWnd__GetCurSel_x                                      0x1405DB610
#define CListWnd__GetItemData_x                                    0x1405DB990
#define CListWnd__GetItemHeight_x                                  0x1405DB9D0
#define CListWnd__GetItemRect_x                                    0x1405DBC00
#define CListWnd__GetItemText_x                                    0x1405DBEA0
#define CListWnd__GetSelList_x                                     0x1405DC100
#define CListWnd__GetSeparatorRect_x                               0x1405DC2F0
#define CListWnd__InsertLine_x                                     0x1405DD760
#define CListWnd__RemoveLine_x                                     0x1405DDDD0
#define CListWnd__SetColors_x                                      0x1405DE190
#define CListWnd__SetColumnJustification_x                         0x1405DE1B0
#define CListWnd__SetColumnLabel_x                                 0x1405DE230
#define CListWnd__SetColumnWidth_x                                 0x1405DE3D0
#define CListWnd__SetCurSel_x                                      0x1405DE4A0
#define CListWnd__SetItemColor_x                                   0x1405DE710
#define CListWnd__SetItemData_x                                    0x1405DE7B0
#define CListWnd__SetItemText_x                                    0x1405DE9F0
#define CListWnd__Sort_x                                           0x1405DEE00
#define CListWnd__ToggleSel_x                                      0x1405DEF70
#define CListWnd__SetColumnsSizable_x                              0x1405DE420
#define CListWnd__SetItemWnd_x                                     0x1405DEB20
#define CListWnd__GetItemWnd_x                                     0x1405DC090
#define CListWnd__SetItemIcon_x                                    0x1405DE7F0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405D7C60
#define CListWnd__SetVScrollPos_x                                  0x1405DED60

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14046F480

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A55848
#define MapViewMap__Clear_x                                        0x140471140
#define MapViewMap__SetZoom_x                                      0x1404775E0
#define MapViewMap__HandleLButtonDown_x                            0x1404740E0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140499730  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A00C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A08A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404A41D0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404A34D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A86B0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14069C650
#define CPacketScrambler__hton_x                                   0x14069C640

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140600070
#define CSidlManagerBase__FindAnimation1_x                         0x1405FFFB0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1406006B0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140600450
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405FF3A0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405FF330
#define CSidlManagerBase__CreateXWnd_x                             0x1405FE970

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140512190
#define CSidlManager__CreateXWnd_x                                 0x140512350

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405C42B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405C43E0
#define CSidlScreenWnd__ConvertToRes_x                             0x14060F3B0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405C4550
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405C3A70
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405C3B40
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405C3DB0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405C4C30
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405C4E60
#define CSidlScreenWnd__GetChildItem_x                             0x1405C5000
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405C5250
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405CF2A0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405C55C0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405C5930
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405C61F0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405C6BF0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F5B9C8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C7280
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C7A70
#define CSidlScreenWnd__vftable_x                                  0x140AF0088
#define CSidlScreenWnd__WndNotification_x                          0x1405C7AC0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140340E30 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140341160 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140341090
#define CSkillMgr__IsActivatedSkill_x                              0x140341520
#define CSkillMgr__IsCombatSkill_x                                 0x140341560
#define CSkillMgr__GetSkillTimerDuration_x                         0x140341490
#define CSkillMgr__GetSkillLastUsed_x                              0x1403410E0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405DF8E0
#define CSliderWnd__SetValue_x                                     0x1405E00F0
#define CSliderWnd__SetNumTicks_x                                  0x1405DFF70

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140518A60

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405E48A0
#define CStmlWnd__CalculateHSBRange_x                              0x1405CEC80
#define CStmlWnd__CalculateVSBRange_x                              0x1405E57C0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405E6250
#define CStmlWnd__ForceParseNow_x                                  0x1405E62F0
#define CStmlWnd__GetVisibleText_x                                 0x1405E69C0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405E8750
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405E8790
#define CStmlWnd__SetSTMLText_x                                    0x1405EF820
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405EF9D0
#define CStmlWnd__UpdateHistoryString_x                            0x1405EFD70

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405E04C0
#define CTabWnd__DrawCurrentPage_x                                 0x1405E0560
#define CTabWnd__DrawTab_x                                         0x1405E0930
#define CTabWnd__GetTabRect_x                                      0x1405E0FC0
#define CTabWnd__InsertPage_x                                      0x1405E1290
#define CTabWnd__RemovePage_x                                      0x1405E1520
#define CTabWnd__SetPage_x                                         0x1405E1680
#define CTabWnd__UpdatePage_x                                      0x1405E1980

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140609430
#define CPageWnd__SetTabText_x                                     0x1406094A0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C3D40  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C4170


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F73D0
#define CTextureFont__DrawWrappedText1_x                           0x1405F72D0
#define CTextureFont__DrawWrappedText2_x                           0x1405F7500
#define CTextureFont__GetTextExtent_x                              0x1405F78B0
#define CTextureFont__GetHeight_x                                  0x1405F7870

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14060DAD0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405C0EC0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D87060
#define CXStr__gCXStrAccess_x                                      0x140F5B528

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405CA2D0
#define CXWnd__ClrFocus_x                                          0x1405CA5C0
#define CXWnd__Destroy_x                                           0x1405CA740
#define CXWnd__DoAllDrawing_x                                      0x1405CA850
#define CXWnd__DrawColoredRect_x                                   0x1405CB020
#define CXWnd__DrawTooltip_x                                       0x1405CC6A0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405CC760
#define CXWnd__GetChildItem_x                                      0x1405CD070
#define CXWnd__GetChildWndAt_x                                     0x1405CD130
#define CXWnd__GetClientRect_x                                     0x1405CD3D0
#define CXWnd__GetClientClipRect_x                                 0x1405CD2A0
#define CXWnd__GetRelativeRect_x                                   0x1405CEDA0
#define CXWnd__GetScreenClipRect_x                                 0x1405CEEB0
#define CXWnd__GetScreenRect_x                                     0x1405CF020
#define CXWnd__GetTooltipRect_x                                    0x1405CF1A0
#define CXWnd__IsActive_x                                          0x1405CF760
#define CXWnd__IsDescendantOf_x                                    0x1405CF790
#define CXWnd__IsReallyVisible_x                                   0x1405CF800
#define CXWnd__IsType_x                                            0x1405CF850
#define CXWnd__Minimize_x                                          0x1405CF950
#define CXWnd__ProcessTransition_x                                 0x1405D0830
#define CXWnd__Resize_x                                            0x1405D0950
#define CXWnd__Right_x                                             0x1405D09F0
#define CXWnd__SetFocus_x                                          0x1405D0DC0
#define CXWnd__SetFont_x                                           0x1405D0E10
#define CXWnd__SetKeyTooltip_x                                     0x1405D0F00
#define CXWnd__SetMouseOver_x                                      0x1405D1050
#define CXWnd__SetParent_x                                         0x1405D10D0
#define CXWnd__StartFade_x                                         0x1405D1500
#define CXWnd__vftable_x                                           0x140AF0660
#define CXWnd__CXWnd_x                                             0x1405C8EF0
#define CXWnd__dCXWnd_x                                            0x1405C9810

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140614800

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405F1690
#define CXWndManager__DrawCursor_x                                 0x1405F1970
#define CXWndManager__DrawWindows_x                                0x1405F1BD0
#define CXWndManager__GetKeyboardFlags_x                           0x1405F2240
#define CXWndManager__HandleKeyboardMsg_x                          0x1405F2280
#define CXWndManager__RemoveWnd_x                                  0x1405F5A70

// CDBStr
#define CDBStr__GetString_x                                        0x140198360

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406A6680

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D8F20
#define CCharacterListWnd__EnterWorld_x                            0x1400D7D20
#define CCharacterListWnd__Quit_x                                  0x1400D8F00
#define CCharacterListWnd__UpdateList_x                            0x1400D9C60

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140672DF0
#define ItemBase__CreateItemTagString_x                            0x140673880
#define ItemBase__GetImageNum_x                                    0x140675FC0
#define ItemBase__GetItemValue_x                                   0x140677ED0
#define ItemBase__IsEmpty_x                                        0x140679BB0
#define ItemBase__IsKeyRingItem_x                                  0x14067A320
#define ItemBase__ValueSellMerchant_x                              0x14067E4A0
#define ItemClient__CanDrop_x                                      0x1402C6E20
#define ItemClient__CanGoInBag_x                                   0x1402C6F60
#define ItemClient__CreateItemClient_x                             0x1402C71F0
#define ItemClient__dItemClient_x                                  0x1402C6C90

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B8220
#define EQ_LoadingS__Array_x                                       0x140D60D60

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14068A620
#define PcBase__GetCombatAbility_x                                 0x14068AEB0
#define PcBase__GetCombatAbilityTimer_x                            0x14068AF90
#define PcBase__GetItemContainedRealEstateIds_x                    0x14068B7B0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14068C280
#define PcClient__AlertInventoryChanged_x                          0x1402EA3F0
#define PcClient__GetConLevel_x                                    0x1402EAB40  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402ED220
#define PcClient__HasLoreItem_x                                    0x1402EE2F0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FAD00
#define PcZoneClient__RemoveMyAffect_x                             0x1402FE250

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022E5F0
#define EQGroundItemListManager__Add_x                             0x14022E7A0
#define EQGroundItemListManager__Clear_x                           0x14022E840
#define EQGroundItemListManager__Delete_x                          0x14022E900
#define EQGroundItemListManager__Instance_x                        0x14022E990

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14026A220

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140192A60

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14065DF20
#define PlayerBase__CanSee1_x                                      0x14065E000
#define PlayerBase__GetVisibilityLineSegment_x                     0x14065E4F0
#define PlayerBase__HasProperty_x                                  0x14065E6D0
#define PlayerBase__IsTargetable_x                                 0x14065E790
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030C160
#define PlayerClient__GetPcClient_x                                0x14030ECA0
#define PlayerClient__PlayerClient_x                               0x1403043E0
#define PlayerClient__SetNameSpriteState_x                         0x1403123D0
#define PlayerClient__SetNameSpriteTint_x                          0x140313390
#define PlayerZoneClient__ChangeHeight_x                           0x1403220D0
#define PlayerZoneClient__DoAttack_x                               0x140322DE0
#define PlayerZoneClient__GetLevel_x                               0x140326500
#define PlayerZoneClient__IsValidTeleport_x                        0x14026CF90
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6850

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031B580  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14031B630  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031B730
#define PlayerManagerClient__CreatePlayer_x                        0x14031B040
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14065DA30

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CC450
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CBD60
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CBDD0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CC3E0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402CC570
#define KeypressHandler__HandleKeyUp_x                             0x1402CC690
#define KeypressHandler__SaveKeymapping_x                          0x1402CC260  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406A4180  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14069E760

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F4450  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F8D90
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FBDF0
#define PcZoneClient__RemovePetEffect_x                            0x1402FE530
#define PcZoneClient__HasAlternateAbility_x                        0x1402FCA10
#define PcZoneClient__CanEquipItem_x                               0x1402F70A0
#define PcZoneClient__GetItemByID_x                                0x1402F9D70
#define PcZoneClient__RemoveBuffEffect_x                           0x1402FE0E0
#define PcZoneClient__BandolierSwap_x                              0x1402EA4A0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140271AD0

// IconCache
#define IconCache__GetIcon_x                                       0x1403DE600

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D2900
#define CContainerMgr__CloseContainer_x                            0x1403D2220
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D2CA0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404D5350

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402BE3C0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140463010
#define CLootWnd__RequestLootSlot_x                                0x140464060

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E8BB0
#define EQ_Spell__SpellAffects_x                                   0x1401E9FE0
#define EQ_Spell__SpellAffectBase_x                                0x1401E9F40
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E2280
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E2230
#define EQ_Spell__IsSPAStacking_x                                  0x1401E9C50
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E9800
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E90C0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C9320

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140533110
#define CTargetWnd__RefreshTargetBuffs_x                           0x140532830
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140532040

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14053A9C0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018F4F0
#define CTaskManager__GetTaskStatus_x                              0x14018F600
#define CTaskManager__GetElementDescription_x                      0x14018F180

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E6E30
#define EqSoundManager__PlayScriptMp3_x                            0x1401E5BC0
#define EqSoundManager__SoundAssistPlay_x                          0x140346210  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140346550  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405D22B0
#define CTextureAnimation__SetCurCell_x                            0x1405D25C0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BC5B0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406BD600
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406BD680
#define CharacterBase__IsExpansionFlag_x                           0x14020D370

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403ACB70
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403AD5C0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403AEB80

// messages
#define msg_spell_worn_off_x                                       0x1402247B0
#define msg_new_text_x                                             0x14021FFA0
#define __msgTokenTextParam_x                                      0x140217330
#define msgTokenText_x                                             0x140217240

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140347F80
#define SpellManager__GetSpellByGroupAndRank_x                     0x140347E80

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14066E570

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14045C230

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D7730
#define CCursorAttachment__IsOkToActivate_x                        0x1403DAB90
#define CCursorAttachment__RemoveAttachment_x                      0x1403DAE40
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14060BF30
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14060C130
#define CEQSuiteTextureLoader__GetTexture_x                        0x14060C140

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140159680
#define CFindItemWnd__Update_x                                     0x14015A040
#define CFindItemWnd__PickupSelectedItem_x                         0x140152C20

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140164290
#define LootFiltersManager__GetItemFilterData_x                    0x140164DC0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140165670
#define LootFiltersManager__SetItemLootFilter_x                    0x140165920

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404B7140

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140340970
#define CResolutionHandler__UpdateResolution_x                     0x1405B6A10

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403CEA20

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406C1900  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406C17F0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403F8D80
#define CGroupWnd__UpdateDisplay_x                                 0x1403F7F10

// ItemBase
#define ItemBase__IsLore_x                                         0x14067A460
#define ItemBase__IsLoreEquipped_x                                 0x14067A4F0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402DFF30

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14026A360
#define EQPlacedItemManager__GetItemByGuid_x                       0x14026A2F0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14026A330

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033AB70

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012F640
#define FactionManagerClient__HandleFactionMessage_x               0x14012FA20
#define FactionManagerClient__GetFactionStanding_x                 0x14012EE10
#define FactionManagerClient__GetMaxFaction_x                      0x14012EE10
#define FactionManagerClient__GetMinFaction_x                      0x14012ECC0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B6050

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14013AFF0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C1480
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C0610
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C12A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C1220  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14034D2D0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405C80C0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008AA20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14035EB90

// AchievementManager
#define AchievementManager__Instance_x                             0x140093F50

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406A7210
#define FreeToPlayClient__RestrictionInfo_x                        0x140B05200

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140569E90

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140859A38
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072EE0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073070
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140073220

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
