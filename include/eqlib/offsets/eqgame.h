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

#define __ClientDate                                               20261027u
#define __ExpectedVersionDate                                     "Oct 27 2026"
#define __ExpectedVersionTime                                     "10:18:55"
#define __ActualVersionDate_x                                      0x1409A0DD0
#define __ActualVersionTime_x                                      0x1409A0DC0
#define __ActualVersionBuild_x                                     0x140935DA0

// Memory Protection
#define __MemChecker0_x                                            0x1402D54B0
#define __MemChecker1_x                                            0x1405B83D0
#define __MemChecker4_x                                            0x1402A26E0
#define __EncryptPad0_x                                            0x140D91FC0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140ECAB30
#define instEQZoneInfo_x                                           0x140ECAD24 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402393B0
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
#define __allowslashcommand_x                                      0x14025DFC0
#define __CastRay_x                                                0x140256010
#define __CastRay2_x                                               0x140255D00
#define __compress_block_x                                         0x14056DE50
#define __ConvertItemTags_x                                        0x1402564A0
#define __CleanItemTags_x                                          0x14008EA60
#define __CreateCascadeMenuItems_x                                 0x14019B4C0
#define __decompress_block_x                                       0x1405B3A50
#define __DoesFileExist_x                                          0x1405BCF50
#define __EQGetTime_x                                              0x1405B8980
#define __ExecuteCmd_x                                             0x14022A920
#define __FixHeading_x                                             0x140676750
#define __FlushDxKeyboard_x                                        0x14035A800
#define __get_bearing_x                                            0x140260390
#define __get_melee_range_x                                        0x140260480
#define __GetAnimationCache_x                                      0x1403E1250
#define __GetGaugeValueFromEQ_x                                    0x14052CBD0
#define __GetLabelFromEQ_x                                         0x14052E1C0
#define __GetXTargetType_x                                         0x140678C40   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406767D0
#define __HelpPath_x                                               0x140F3FFE8   // Why?
#define __NewUIINI_x                                               0x140539C20   // Why?
#define __ProcessDeviceEvents_x                                    0x1402A2CE0
#define __ProcessGameEvents_x                                      0x1402973E0
#define __ProcessKeyboardEvents_x                                  0x14035BFE0
#define __ProcessMouseEvents_x                                     0x140298B70
#define __SaveColors_x                                             0x1401AB6A0
#define __STMLToText_x                                             0x1405CD7E0
#define __WndProc_x                                                0x140358EE0
#define CMemoryMappedFile__SetFile_x                               0x1408251A0
#define DrawNetStatus_x                                            0x1402E4A20
#define Util__FastTime_x                                           0x1405B7D20
#define __eq_delete_x                                              0x1406EFAD8
#define __eq_new_x                                                 0x1406EFD30
#define __CopyLayout_x                                             0x1402D1890
#define __ThrottleFrameRate_x                                      0x140286165
#define __ThrottleFrameRateEnd_x                                   0x14028616B

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14036BFD0
#define CAAWnd__Update_x                                           0x14036C430
#define CAAWnd__UpdateSelected_x                                   0x14036DA80

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC2C0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400AC0B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1400A8460
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B4560

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B6950
#define AltAdvManager__IsAbilityReady_x                            0x1401B6E30
#define AltAdvManager__GetAAById_x                                 0x1401B61E0
#define AltAdvManager__CanTrainAbility_x                           0x1401B5FE0
#define AltAdvManager__CanSeeAbility_x                             0x1401B5D00

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400DB960
#define CharacterZoneClient__CalcAffectChange_x                    0x1400DC820
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400DCA70
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400F0FF0
#define CharacterZoneClient__CanUseItem_x                          0x1400F15B0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400DD450
#define CharacterZoneClient__CastSpell_x                           0x1400DD4F0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400ED420
#define CharacterZoneClient__Cur_HP_x                              0x1400F2E40
#define CharacterZoneClient__Cur_Mana_x                            0x1400F3000
#define CharacterZoneClient__FindAffectSlot_x                      0x1400E0950
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F9750
#define CharacterZoneClient__GetBaseSkill_x                        0x140108A40  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400E1DF0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400F08F0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400FAFE0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F9ED0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400E1F70
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400D1420
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400D32F0
#define CharacterZoneClient__GetHPRegen_x                          0x1400FA600
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400F2A90
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400FB180
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400E1FF0
#define CharacterZoneClient__GetManaRegen_x                        0x1400FBE70
#define CharacterZoneClient__GetModCap_x                           0x140103610
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400E22F0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400E24C0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D69A0
#define CharacterZoneClient__HasSkill_x                            0x1400FF010
#define CharacterZoneClient__HitBySpell_x                          0x1400E2F30
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E68B0
#define CharacterZoneClient__MakeMeVisible_x                       0x1401030F0
#define CharacterZoneClient__Max_Endurance_x                       0x1402FFA30  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x140103440
#define CharacterZoneClient__Max_Mana_x                            0x1402FFC50  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1401038A0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E9EF0
#define CharacterZoneClient__SpellDuration_x                       0x1400EAC20
#define CharacterZoneClient__TotalEffect_x                         0x1400EC080
#define CharacterZoneClient__UseSkill_x                            0x140109A40


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14038DB40

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403988B0
#define CBarterWnd__UpdateInventoryList_x                          0x140398320

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403945E0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140393650

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14039B350

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140B00E68

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403BEBE0
#define CChatWindowManager__InitContextMenu_x                      0x1403BED70
#define CChatWindowManager__FreeChatWindow_x                       0x1403BDBE0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403C70F0
#define CChatWindowManager__CreateChatWindow_x                     0x1403BD610

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140112010

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403C8160
#define CChatWindow__Clear_x                                       0x1403C9150
#define CChatWindow__WndNotification_x                             0x1403CA3A0
#define CChatWindow__AddHistory_x                                  0x1403C8C60

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405FB1A0
#define CContextMenu__RemoveMenuItem_x                             0x1405FB5B0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405FB580
#define CContextMenu__CheckMenuItem_x                              0x1405FB3F0
#define CContextMenu__SetMenuItem_x                                0x1405FB5D0
#define CContextMenu__AddSeparator_x                               0x1405FB320

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405ECFC0
#define CContextMenuManager__RemoveMenu_x                          0x1405ED590
#define CContextMenuManager__PopupMenu_x                           0x1405ED2D0
#define CContextMenuManager__Flush_x                               0x1405ED040
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403D8B00

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406CA730
#define CChatService__GetFriendName_x                              0x1406CA740

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405DDCF0
#define CComboWnd__Draw_x                                          0x1405DDDF0
#define CComboWnd__GetCurChoice_x                                  0x1405DE0E0  // unused
#define CComboWnd__GetListRect_x                                   0x1405DE180
#define CComboWnd__InsertChoice_x                                  0x1405DE4C0
#define CComboWnd__SetColors_x                                     0x1405DE850
#define CComboWnd__SetChoice_x                                     0x1405DE810
#define CComboWnd__GetItemCount_x                                  0x1405DE170
#define CComboWnd__GetCurChoiceText_x                              0x1405DE120  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405DE0B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405DE580

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403D67E0
#define CContainerWnd__SetContainer_x                              0x1403D7950
#define CContainerWnd__vftable_x                                   0x140A15DF0

// CDisplay
#define CDisplay__cameraType_x                                     0x140E12204
#define CDisplay__ZoneMainUI_x                                     0x140615C80
#define CDisplay__PreZoneMainUI_x                                  0x1401A83B0
#define CDisplay__CleanGameUI_x                                    0x14019A580
#define CDisplay__GetClickedActor_x                                0x14019E7E0
#define CDisplay__GetUserDefinedColor_x                            0x14019F450
#define CDisplay__InitCharSelectUI_x                               0x14019F700
#define CDisplay__ReloadUI_x                                       0x1401AA890
#define CDisplay__RestartUI_x                                      0x14020E410
#define CDisplay__WriteTextHD2_x                                   0x1401B1840
#define CDisplay__TrueDistance_x                                   0x1401B14E0
#define CDisplay__SetViewActor_x                                   0x1401ADDE0
#define CDisplay__GetFloorHeight_x                                 0x14019EA40
#define CDisplay__ToggleScreenshotMode_x                           0x1401B0FD0
#define CDisplay__RealRender_World_x                               0x1401A9C70

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140620130
#define CEditWnd__DrawCaret_x                                      0x140611850  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140611D70
#define CEditWnd__GetCaretPt_x                                     0x140612010  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140612050
#define CEditWnd__GetDisplayString_x                               0x1406122B0
#define CEditWnd__GetHorzOffset_x                                  0x140612500
#define CEditWnd__GetLineForPrintableChar_x                        0x140612660
#define CEditWnd__GetSelStartPt_x                                  0x140612950  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140612790
#define CEditWnd__PointFromPrintableChar_x                         0x140613590
#define CEditWnd__ReplaceSelection_x                               0x140613940
#define CEditWnd__SelectableCharFromPoint_x                        0x140613E00
#define CEditWnd__SetEditable_x                                    0x1406140A0
#define CEditWnd__SetWindowText_x                                  0x1406140D0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140287240
#define CEverQuest__ClickedPlayer_x                                0x14027A2A0
#define CEverQuest__CreateTargetIndicator_x                        0x14027ABA0
#define CEverQuest__DoTellWindow_x                                 0x140111D10 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140112600 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140288FE0
#define CEverQuest__dsp_chat_x                                     0x140111740 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402B4910
#define CEverQuest__Emote_x                                        0x140289970
#define CEverQuest__GetBodyTypeDesc_x                              0x14028A710
#define CEverQuest__GetClassDesc_x                                 0x14028A770
#define CEverQuest__GetClassThreeLetterCode_x                      0x14028AB40
#define CEverQuest__GetDeityDesc_x                                 0x14028ADE0
#define CEverQuest__GetLangDesc_x                                  0x14028B210
#define CEverQuest__GetRaceDesc_x                                  0x14028B5B0
#define CEverQuest__InterpretCmd_x                                 0x14028D1F0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402A2D50
#define CEverQuest__LMouseUp_x                                     0x14028ED00
#define CEverQuest__RightClickedOnPlayer_x                         0x1402A00F0
#define CEverQuest__RMouseUp_x                                     0x1402997A0
#define CEverQuest__SetGameState_x                                 0x1402A5890
#define CEverQuest__UPCNotificationFlush_x                         0x1402AB290 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14028E8E0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14029AB90
#define CEverQuest__ReportSuccessfulHit_x                          0x14029B9A0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403EC3F0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400CABC0
#define CGuild__GetGuildName_x                                     0x1400CAC00

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1404132A0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402C6F60
#define CHotButton__SetCheck_x                                     0x1402C7230

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14042EB30
#define CInvSlotMgr__MoveItem_x                                    0x14042FC40
#define CInvSlotMgr__SelectSlot_x                                  0x140432290

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14042A350
#define CInvSlot__SliderComplete_x                                 0x14042BD40
#define CInvSlot__GetItemBase_x                                    0x140425640
#define CInvSlot__UpdateItem_x                                     0x14042C210

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404348E0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140455FF0
#define CItemDisplayWnd__UpdateStrings_x                           0x140459200
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140452900
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140454200
#define CItemDisplayWnd__RequestConvertItem_x                      0x140455410

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140529640
#define CSpellDisplayWnd__UpdateStrings_x                          0x14052B3D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140566E50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14044EFB0

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x14052B210

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015F200

// CLabel
#define CLabel__UpdateText_x                                       0x1404608B0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405E1690
#define CListWnd__dCListWnd_x                                      0x1405E1AD0
#define CListWnd__vftable_x                                        0x140AFEF90
#define CListWnd__AddColumn_x                                      0x1405E2160
#define CListWnd__AddColumn1_x                                     0x1405E2200
#define CListWnd__AddLine_x                                        0x1405E2360
#define CListWnd__AddString_x                                      0x1405E2900
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405E2E70
#define CListWnd__CalculateVSBRange_x                              0x1405E3150
#define CListWnd__ClearSel_x                                       0x1405E32F0
#define CListWnd__ClearAllSel_x                                    0x1405E3290
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405E3350
#define CListWnd__Compare_x                                        0x1405E3510
#define CListWnd__Draw_x                                           0x1405E39D0
#define CListWnd__DrawColumnSeparators_x                           0x1405E4560
#define CListWnd__DrawHeader_x                                     0x1405E4620
#define CListWnd__DrawItem_x                                       0x1405E4D00
#define CListWnd__DrawLine_x                                       0x1405E56A0
#define CListWnd__DrawSeparator_x                                  0x1405E5B60
#define CListWnd__EnableLine_x                                     0x1405E5F80
#define CListWnd__EnsureVisible_x                                  0x1405E5FE0
#define CListWnd__ExtendSel_x                                      0x1405E60D0
#define CListWnd__GetColumnMinWidth_x                              0x1405E6460
#define CListWnd__GetColumnWidth_x                                 0x1405E64E0
#define CListWnd__GetCurSel_x                                      0x1405E65E0
#define CListWnd__GetItemData_x                                    0x1405E6950
#define CListWnd__GetItemHeight_x                                  0x1405E6990
#define CListWnd__GetItemRect_x                                    0x1405E6BC0
#define CListWnd__GetItemText_x                                    0x1405E6E60
#define CListWnd__GetSelList_x                                     0x1405E70C0
#define CListWnd__GetSeparatorRect_x                               0x1405E72B0
#define CListWnd__InsertLine_x                                     0x1405E8710
#define CListWnd__RemoveLine_x                                     0x1405E8D80
#define CListWnd__SetColors_x                                      0x1405E9140
#define CListWnd__SetColumnJustification_x                         0x1405E9160
#define CListWnd__SetColumnLabel_x                                 0x1405E91E0
#define CListWnd__SetColumnWidth_x                                 0x1405E9380
#define CListWnd__SetCurSel_x                                      0x1405E9450
#define CListWnd__SetItemColor_x                                   0x1405E96C0
#define CListWnd__SetItemData_x                                    0x1405E9760
#define CListWnd__SetItemText_x                                    0x1405E99A0
#define CListWnd__Sort_x                                           0x1405E9DB0
#define CListWnd__ToggleSel_x                                      0x1405E9F20
#define CListWnd__SetColumnsSizable_x                              0x1405E93D0
#define CListWnd__SetItemWnd_x                                     0x1405E9AD0
#define CListWnd__GetItemWnd_x                                     0x1405E7050
#define CListWnd__SetItemIcon_x                                    0x1405E97A0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405E2C40
#define CListWnd__SetVScrollPos_x                                  0x1405E9D10

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404742A0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A638A8
#define MapViewMap__Clear_x                                        0x140475F50
#define MapViewMap__SetZoom_x                                      0x14047C3F0
#define MapViewMap__HandleLButtonDown_x                            0x140478EF0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14049EF40  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A7270
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A7A80
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404AD810
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404ABF10
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404B2130

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406A6EE0
#define CPacketScrambler__hton_x                                   0x1406A6ED0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14060B130
#define CSidlManagerBase__FindAnimation1_x                         0x14060B070
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14060B770
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14060B510
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14060A470
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14060A400
#define CSidlManagerBase__CreateXWnd_x                             0x140609A70

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14051C460
#define CSidlManager__CreateXWnd_x                                 0x14051C620

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405CF250
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405CF370
#define CSidlScreenWnd__ConvertToRes_x                             0x14061A470 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405CF4D0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405CEA10
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405CEAE0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405CED50
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405CFBC0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405CFDF0
#define CSidlScreenWnd__GetChildItem_x                             0x1405CFF80
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405D01D0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405DA2C0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405D0540
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405D08B0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405D1160
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405D1B50
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F6BF08
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405D21C0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405D29B0
#define CSidlScreenWnd__vftable_x                                  0x140AFE218
#define CSidlScreenWnd__WndNotification_x                          0x1405D2A00

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140343690 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1403439C0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403438F0
#define CSkillMgr__IsActivatedSkill_x                              0x140343D80
#define CSkillMgr__IsCombatSkill_x                                 0x140343DC0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140343CF0
#define CSkillMgr__GetSkillLastUsed_x                              0x140343940

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405EA890
#define CSliderWnd__SetValue_x                                     0x1405EB0A0
#define CSliderWnd__SetNumTicks_x                                  0x1405EAF20

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140522D30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405EFA10
#define CStmlWnd__CalculateHSBRange_x                              0x1405D9CA0
#define CStmlWnd__CalculateVSBRange_x                              0x1405F0920
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405F1390
#define CStmlWnd__ForceParseNow_x                                  0x1405F1430
#define CStmlWnd__GetVisibleText_x                                 0x1405F1AF0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405F3860
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405F38A0
#define CStmlWnd__SetSTMLText_x                                    0x1405FA930
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405FAAE0
#define CStmlWnd__UpdateHistoryString_x                            0x1405FAE80

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405EB650
#define CTabWnd__DrawCurrentPage_x                                 0x1405EB6F0
#define CTabWnd__DrawTab_x                                         0x1405EBAC0
#define CTabWnd__GetTabRect_x                                      0x1405EC150
#define CTabWnd__InsertPage_x                                      0x1405EC420
#define CTabWnd__RemovePage_x                                      0x1405EC6A0
#define CTabWnd__SetPage_x                                         0x1405EC800
#define CTabWnd__UpdatePage_x                                      0x1405ECB00

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140614520
#define CPageWnd__SetTabText_x                                     0x140614590

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C40D0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C4500


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1406024D0
#define CTextureFont__DrawWrappedText1_x                           0x1406023D0
#define CTextureFont__DrawWrappedText2_x                           0x140602600
#define CTextureFont__GetTextExtent_x                              0x1406029B0
#define CTextureFont__GetHeight_x                                  0x140602970

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140618B90

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405CBE60

// CXStr
#define CXStr__gFreeLists_x                                        0x140D9B050
#define CXStr__gCXStrAccess_x                                      0x140F6BA68

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405D5340
#define CXWnd__ClrFocus_x                                          0x1405D5630
#define CXWnd__Destroy_x                                           0x1405D57B0
#define CXWnd__DoAllDrawing_x                                      0x1405D58C0
#define CXWnd__DrawColoredRect_x                                   0x1405D6070
#define CXWnd__DrawTooltip_x                                       0x1405D76E0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405D77A0
#define CXWnd__GetChildItem_x                                      0x1405D80B0
#define CXWnd__GetChildWndAt_x                                     0x1405D8170
#define CXWnd__GetClientRect_x                                     0x1405D8420
#define CXWnd__GetClientClipRect_x                                 0x1405D82D0
#define CXWnd__GetRelativeRect_x                                   0x1405D9DE0
#define CXWnd__GetScreenClipRect_x                                 0x1405D9EE0
#define CXWnd__GetScreenRect_x                                     0x1405DA050
#define CXWnd__GetTooltipRect_x                                    0x1405DA1C0
#define CXWnd__IsActive_x                                          0x1405DA780
#define CXWnd__IsDescendantOf_x                                    0x1405DA7B0
#define CXWnd__IsReallyVisible_x                                   0x1405DA820
#define CXWnd__IsType_x                                            0x1405DA870
#define CXWnd__Minimize_x                                          0x1405DA970
#define CXWnd__ProcessTransition_x                                 0x1405DB880
#define CXWnd__Resize_x                                            0x1405DB9A0
#define CXWnd__Right_x                                             0x1405DBA40
#define CXWnd__SetFocus_x                                          0x1405DBE10
#define CXWnd__SetFont_x                                           0x1405DBE60
#define CXWnd__SetKeyTooltip_x                                     0x1405DBF70
#define CXWnd__SetMouseOver_x                                      0x1405DC0A0
#define CXWnd__SetParent_x                                         0x1405DC120
#define CXWnd__StartFade_x                                         0x1405DC550
#define CXWnd__vftable_x                                           0x140AFE7F0
#define CXWnd__CXWnd_x                                             0x1405D3FA0
#define CXWnd__dCXWnd_x                                            0x1405D48C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14061F8C0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405FC780
#define CXWndManager__DrawCursor_x                                 0x1405FCA60
#define CXWndManager__DrawWindows_x                                0x1405FCCC0
#define CXWndManager__GetKeyboardFlags_x                           0x1405FD330
#define CXWndManager__HandleKeyboardMsg_x                          0x1405FD370
#define CXWndManager__RemoveWnd_x                                  0x140600B60

// CDBStr
#define CDBStr__GetString_x                                        0x140198740

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406B0FF0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D92F0
#define CCharacterListWnd__EnterWorld_x                            0x1400D80F0
#define CCharacterListWnd__Quit_x                                  0x1400D92D0
#define CCharacterListWnd__UpdateList_x                            0x1400DA030

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14067D920
#define ItemBase__CreateItemTagString_x                            0x14067E3B0
#define ItemBase__GetImageNum_x                                    0x140680B20
#define ItemBase__GetItemValue_x                                   0x140682630
#define ItemBase__IsEmpty_x                                        0x1406843B0
#define ItemBase__IsKeyRingItem_x                                  0x140684B40
#define ItemBase__ValueSellMerchant_x                              0x140688D30
#define ItemClient__CanDrop_x                                      0x1402C9750
#define ItemClient__CanGoInBag_x                                   0x1402C9890
#define ItemClient__CreateItemClient_x                             0x1402C9B20
#define ItemClient__dItemClient_x                                  0x1402C95C0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B8600
#define EQ_LoadingS__Array_x                                       0x140D872B0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140694EB0
#define PcBase__GetCombatAbility_x                                 0x140695740
#define PcBase__GetCombatAbilityTimer_x                            0x140695820
#define PcBase__GetItemContainedRealEstateIds_x                    0x140696040
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140696B10
#define PcClient__AlertInventoryChanged_x                          0x1402ECD20
#define PcClient__GetConLevel_x                                    0x1402ED470  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402EFB70
#define PcClient__HasLoreItem_x                                    0x1402F0C50
#define PcZoneClient__GetItemRecastTimer_x                         0x1402FD650
#define PcZoneClient__RemoveMyAffect_x                             0x140300B90

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14022F400
#define EQGroundItemListManager__Add_x                             0x14022F5B0
#define EQGroundItemListManager__Clear_x                           0x14022F650
#define EQGroundItemListManager__Delete_x                          0x14022F710
#define EQGroundItemListManager__Instance_x                        0x14022F7A0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14026B670

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140192E90

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140669040
#define PlayerBase__CanSee1_x                                      0x140669120
#define PlayerBase__GetVisibilityLineSegment_x                     0x140669610
#define PlayerBase__HasProperty_x                                  0x1406697F0
#define PlayerBase__IsTargetable_x                                 0x1406698B0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14030EA60
#define PlayerClient__GetPcClient_x                                0x140311580
#define PlayerClient__PlayerClient_x                               0x140306CE0
#define PlayerClient__SetNameSpriteState_x                         0x140314CB0
#define PlayerClient__SetNameSpriteTint_x                          0x140315C70
#define PlayerZoneClient__ChangeHeight_x                           0x140324980
#define PlayerZoneClient__DoAttack_x                               0x140325690
#define PlayerZoneClient__GetLevel_x                               0x140328DB0
#define PlayerZoneClient__IsValidTeleport_x                        0x14026E3E0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A6C30

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14031DE30  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14031DEE0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14031DFE0
#define PlayerManagerClient__CreatePlayer_x                        0x14031D8F0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140668B70

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402CED80
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402CE690
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402CE700
#define KeypressHandler__ClearCommandStateArray_x                  0x1402CED10  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402CEEA0
#define KeypressHandler__HandleKeyUp_x                             0x1402CEFC0
#define KeypressHandler__SaveKeymapping_x                          0x1402CEB90  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406AEAF0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406A90C0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402F6DC0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402FB700
#define PcZoneClient__GetPcSkillLimit_x                            0x1402FE710
#define PcZoneClient__RemovePetEffect_x                            0x140300E70
#define PcZoneClient__HasAlternateAbility_x                        0x1402FF350
#define PcZoneClient__CanEquipItem_x                               0x1402F9A10
#define PcZoneClient__GetItemByID_x                                0x1402FC6D0
#define PcZoneClient__RemoveBuffEffect_x                           0x140300A20
#define PcZoneClient__BandolierSwap_x                              0x1402ECDD0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140272F20

// IconCache
#define IconCache__GetIcon_x                                       0x1403E1280

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403D5530
#define CContainerMgr__CloseContainer_x                            0x1403D4E50
#define CContainerMgr__OpenExperimentContainer_x                   0x1403D58D0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404DF6D0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402C0D60

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140467E10
#define CLootWnd__RequestLootSlot_x                                0x140468E80

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E9070
#define EQ_Spell__SpellAffects_x                                   0x1401EA4A0
#define EQ_Spell__SpellAffectBase_x                                0x1401EA400
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400E2650
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400E2600
#define EQ_Spell__IsSPAStacking_x                                  0x1401EA110
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E9CC0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E9580

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C96D0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14053D460
#define CTargetWnd__RefreshTargetBuffs_x                           0x14053CB80
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14053C380

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140544D20  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018F920
#define CTaskManager__GetTaskStatus_x                              0x14018FA30
#define CTaskManager__GetElementDescription_x                      0x14018F5B0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E72F0
#define EqSoundManager__PlayScriptMp3_x                            0x1401E60A0
#define EqSoundManager__SoundAssistPlay_x                          0x140348A70  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140348DB0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405DD2A0
#define CTextureAnimation__SetCurCell_x                            0x1405DD5B0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402BEF50

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406C7F80
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406C8000
#define CharacterBase__IsExpansionFlag_x                           0x14020DA60

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403AF840
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403B0290
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403B1850

// messages
#define msg_spell_worn_off_x                                       0x140225510
#define msg_new_text_x                                             0x140220D50
#define __msgTokenTextParam_x                                      0x140217BD0
#define msgTokenText_x                                             0x140217AE0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14034A7B0
#define SpellManager__GetSpellByGroupAndRank_x                     0x14034A6B0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140679020

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140461040

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403DA390
#define CCursorAttachment__IsOkToActivate_x                        0x1403DD810
#define CCursorAttachment__RemoveAttachment_x                      0x1403DDAC0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140616FF0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1406171F0
#define CEQSuiteTextureLoader__GetTexture_x                        0x140617200

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140159AE0
#define CFindItemWnd__Update_x                                     0x14015A4A0
#define CFindItemWnd__PickupSelectedItem_x                         0x140153090

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401646C0
#define LootFiltersManager__GetItemFilterData_x                    0x1401651F0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140165AA0
#define LootFiltersManager__SetItemLootFilter_x                    0x140165D50

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404C13B0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403431D0
#define CResolutionHandler__UpdateResolution_x                     0x1405C19B0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403D1670

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406CC2C0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406CC1B0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403FBA30
#define CGroupWnd__UpdateDisplay_x                                 0x1403FABC0

// ItemBase
#define ItemBase__IsLore_x                                         0x140684C80
#define ItemBase__IsLoreEquipped_x                                 0x140684D10

#define MultipleItemMoveManager__ProcessMove_x                     0x1402E2850

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14026B7B0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14026B740
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14026B780

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14033D3F0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012FA30
#define FactionManagerClient__HandleFactionMessage_x               0x14012FE10
#define FactionManagerClient__GetFactionStanding_x                 0x14012F130
#define FactionManagerClient__GetMaxFaction_x                      0x14012F200
#define FactionManagerClient__GetMinFaction_x                      0x14012F0B0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B63F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14013B4D0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C18A0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C0A30
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C16C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C1640  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14034FB00

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405D3040

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x14008ADC0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1403614A0

// AchievementManager
#define AchievementManager__Instance_x                             0x1400942F0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406B1B80
#define FreeToPlayClient__RestrictionInfo_x                        0x140B13CD0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140574270

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140867A58
#define CGFScreenWnd__CGFScreenWnd_x                               0x1400732D0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140073460
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140073610

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
