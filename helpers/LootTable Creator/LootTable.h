/**
  /////////////////////////////////////////////////////////////////////////////
  Exile Mod Loot Table Template
  /////////////////////////////////////////////////////////////////////////////

  Format of this file is the following:

  > LootTableName
  Spawn Chance %, Item Class Name

  You can add one item to multiple loot tables.

  Be careful with spawn chance values! They do not define how common an item is
  in general, but how common it is in relation to all the other items of that
  loot table. Values from 0..100 are allowed. The higher the chance, the more
  often will it spawn.
*/

///////////////////////////////////////////////////////////////////////////////
// Slums/Ghetto, Farms, Village Houses, Castle etc.
// Spawn Guerilla things :)
///////////////////////////////////////////////////////////////////////////////
> CivillianLowerClass

// Food
200, Exile_Item_PlasticBottleEmpty
50, Exile_Item_PlasticBottleFreshWater
30, Exile_Item_Energydrink
40, Exile_Item_Beer
150, Exile_Item_GloriousKnakworst
170, Exile_Item_SausageGravy
170, Exile_Item_ChristmasTinner
170, Exile_Item_BBQSandwich
190, Exile_Item_Surstromming
200, Exile_Item_Catfood

20, Exile_Item_ChristmasTinner_Cooked
20, Exile_Item_BBQSandwich_Cooked
20, Exile_Item_GloriousKnakworst_Cooked
20, Exile_Item_SausageGravy_Cooked
20, Exile_Item_Surstromming_Cooked
20, Exile_Item_Catfood_Cooked

// Pistols
80, hgun_ACPC2_F            // ACP-C2 .45
80, hgun_P07_F              // P07 9 mm
80, hgun_Rook40_F           // Rook-40 9 mm
50, hgun_Pistol_heavy_01_F  // 4-five .45
50, hgun_Pistol_heavy_02_F  // Zubr .45
50, hgun_Pistol_Signal_F    // Starter Pistol
50, RH_deagle
50, RH_deagleg
50, RH_deagles
50, RH_deaglem
80, RH_cz75
80, RH_sw659
80, RH_usp
80, RH_mak
80, RH_m1911
80, RH_kimber
80, RH_kimber_nw
80, RH_uspm
80, RH_m9
80, RH_m9c
80, RH_vz61
80, RH_g18
80, RH_g17
80, RH_tt33
80, RH_mk2
80, RH_p226
80, RH_p226s
80, RH_g19
80, RH_g19t
80, RH_vp70
80, RH_mateba
50, RH_python
50, RH_mp412
50, RH_bull
50, RH_bullb
80, RH_ttracker
80, RH_ttracker_g
80, RH_fnp45
80, RH_fnp45t
80, RH_fn57
80, RH_fn57_g
80, RH_fn57_t
80, RH_gsh18
80, RH_tec9
50, RH_muzi

// Pistol Magazines
90, 11Rnd_45ACP_Mag       // 4-five
90, 16Rnd_9x21_Mag        // PDW2000, P07, ROOK-40
90, 30Rnd_9x21_Mag        // Sting, PDW2000, P07, ROOK-40
60, 6Rnd_45ACP_Cylinder   // Zubr
30, 6Rnd_GreenSignal_F    // Starter Pistol
30, 6Rnd_RedSignal_F      // Starter Pistol
90, 9Rnd_45ACP_Mag        // ACP-C2
30, RH_7Rnd_50_AE
60, RH_16Rnd_9x19_cz
60, RH_14Rnd_9x19_sw
60, RH_12Rnd_45cal_usp
60, RH_8Rnd_9x18_Mak
60, RH_7Rnd_45cal_m1911
60, RH_16Rnd_40cal_usp
60, RH_15Rnd_9x19_M9
60, RH_20Rnd_32cal_vz61
60, RH_33Rnd_9x19_g18
60, RH_17Rnd_9x19_g17
60, RH_8Rnd_762_tt33
60, RH_10Rnd_22LR_mk2
60, RH_15Rnd_9x19_SIG
60, RH_18Rnd_9x19_VP
60, RH_6Rnd_44_Mag
60, RH_6Rnd_357_Mag
60, RH_6Rnd_454_Mag
60, RH_6Rnd_45ACP_Mag
60, RH_15Rnd_45cal_fnp
60, RH_20Rnd_57x28_FN
60, RH_18Rnd_9x19_gsh
60, RH_32Rnd_9x19_tec
60, RH_30Rnd_9x19_UZI

// Pistol Items
50, muzzle_snds_L
50, muzzle_snds_acp
20, optic_Yorris      // No one needs this crap
20, optic_MRD
20, RH_demz
20, RH_gemtech9
20, RH_A26
20, RH_suppr9
20, RH_aacusp
20, RH_gemtech45
20, RH_osprey
20, RH_fhusp
20, RH_x2
20, RH_m6x
20, RH_x300
20, RH_pmsd
20, RH_pmir
20, RH_matchsd
20, RH_m9qd
20, RH_vp70stock
20, RH_docter
20, RH_sfn57
20, RH_tecsd
20, RH_muzisd

// SMG Ammo
40, 30Rnd_45ACP_Mag_SMG_01                // Vermin SMG
40, 30Rnd_45ACP_Mag_SMG_01_Tracer_Green   // Vermin SMG
40, hlc_30Rnd_9x19_B_MP5
40, hlc_30Rnd_9x19_GD_MP5
40, hlc_30Rnd_9x19_SD_MP5
40, hlc_30Rnd_10mm_B_MP5
40, hlc_30Rnd_10mm_JHP_MP5

// SMGs
30, SMG_01_F        // Vermin SMG .45 ACP
30, SMG_02_F        // Sting 9 mm
30, hgun_PDW2000_F  // PDW2000 9 mm
30, hlc_smg_mp5a2
30, hlc_smg_mp5a3
30, hlc_smg_mp5a4
30, hlc_smg_mp5n
30, hlc_smg_mp510
30, hlc_smg_mp5sd5
30, hlc_smg_mp5sd6
30, hlc_smg_9mmar


// SMG Items
50, optic_Holosight_smg
50, optic_ACO_grn_smg
50, optic_Aco_smg
50, optic_ACO_grn
50, optic_Aco


// Backpacks
75, B_OutdoorPack_blk
75, B_OutdoorPack_tan
75, B_OutdoorPack_blu
70, B_HuntingBackpack
60, B_AssaultPack_khk
60, B_AssaultPack_dgtl
60, B_AssaultPack_rgr
60, B_AssaultPack_sgg
60, B_AssaultPack_blk
60, B_AssaultPack_cbr
60, B_AssaultPack_mcamo
60, B_Kitbag_mcamo
60, B_Kitbag_sgg
60, B_Kitbag_cbr
50, B_FieldPack_blk
50, B_FieldPack_ocamo
50, B_FieldPack_oucamo
50, B_FieldPack_cbr
50, B_Bergen_sgg
50, B_Bergen_mcamo
50, B_Bergen_rgr
50, B_Bergen_blk

// Rifles
40, arifle_Katiba_F       // Katiba 6.5 mm
40, arifle_Katiba_GL_F    // Katiba GL 6.5 mm
30, arifle_SDAR_F         // SDAR 5.56 mm
40, arifle_TRG21_F        // TRG-21 5.56 mm
40, arifle_TRG20_F        // TRG-20 5.56 mm
40, RH_m4
40, RH_m4_m203
40, RH_m4_ris
40, RH_m4_ris_m203
40, RH_m4_ris_m203s
40, RH_m4a1_ris
40, RH_m4a1_ris_m203
40, RH_m4a1_ris_m203s

// Rifle Items
30, muzzle_snds_M
30, muzzle_snds_H
30, optic_Arco
30, optic_Hamr
30, optic_Holosight
40, acc_flashlight
30, acc_pointer_IR
30, optic_MRCO
30, optic_DMS
30, RH_eotech553
30, RH_eotech553mag
30, RH_eotech553_tan
30, RH_eotech553mag_tan
30, RH_eotexps3
30, RH_eotexps3_tan
30, RH_eothhs1
30, RH_eothhs1_tan
30, RH_compm4s
30, RH_compm2
30, RH_compm2l
30, RH_compm2_tan
30, RH_compm2l_tan
30, RH_t1
30, RH_t1_tan
30, RH_reflex
30, RH_shortdot
30, RH_m3lr
30, RH_ta01nsn
30, RH_ta01nsn_2D
30, RH_ta31rco
30, RH_ta31rco_2D
30, RH_ta31rmr
30, RH_ta31rmr_2D
30, RH_ta01nsn_tan
30, RH_ta01nsn_tan_2D
30, RH_ta31rco_tan
30, RH_ta31rco_tan_2D
30, RH_ta31rmr_tan
30, RH_ta31rmr_tan_2D
30, RH_ta648
30, RH_accupoint
30, RH_leu_mk4
30, RH_c79
30, RH_c79_2D
30, RH_m145
30, RH_barska_rds
30, RH_cmore
30, RH_LTdocter
30, RH_LTdocterl
30, RH_zpoint
30, RH_anpvs4
30, RH_anpvs10
30, RH_pas13cl
30, RH_pas13cm
30, RH_pas13cmg
30, RH_pas13ch
30, RH_peq15
30, RH_peq15_top
30, RH_peq15b
30, RH_peq15b_top
30, RH_peq2
30, RH_peq2_top
30, RH_SFM952V
30, RH_SFM952V_tan
30, RH_qdss_nt4
30, RH_qdss_nt4_tg
30, RH_qdss_nt4_des
30, RH_qdss_nt4_wdl
30, RH_saker
30, RH_saker_tg
30, RH_saker_des
30, RH_saker_wdl
30, RH_Saker762
30, RH_Saker762_tg
30, RH_Saker762_des
30, RH_Saker762_wdl
30, RH_fa556
30, RH_fa556_tg
30, RH_fa556_des
30, RH_fa556_wdl
30, RH_fa762
30, RH_fa762_tg
30, RH_fa762_des
30, RH_fa762_wdl
30, RH_spr_mbs
30, RH_spr_mbs_tg
30, RH_spr_mbs_des
30, RH_spr_mbs_wdl
30, RH_tundra
30, RH_tundra_tg
30, RH_tundra_des
30, RH_tundra_wdl
30, RH_m110sd
30, RH_m110sd_t


// Rifle Ammo
50, 20Rnd_556x45_UW_mag            			// SDAR
70, 30Rnd_556x45_Stanag            			// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
70, 30Rnd_556x45_Stanag_Tracer_Green     	// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
70, 30Rnd_556x45_Stanag_Tracer_Red     		// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
70, 30Rnd_556x45_Stanag_Tracer_Yellow    	// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
70, 30Rnd_65x39_caseless_green       		// Katiba
70, 30Rnd_65x39_caseless_green_mag_Tracer   // Katiba


// Items
15, Binocular
10, Exile_Item_CamoTentKit
65, Exile_Item_CookingPot
40, Exile_Item_DuctTape
40, Exile_Item_LightBulb
40, Exile_Item_Matches
15, Exile_Item_InstaDoc
25, ItemGPS

// Chem lights
100, Chemlight_blue
100, Chemlight_green
100, Chemlight_red
100, Chemlight_yellow

// Road flares
80, FlareGreen_F
80, FlareRed_F
80, FlareWhite_F
80, FlareYellow_F

// Uniforms
50, U_C_Poor_1
50, U_C_Poor_2
50, U_C_Poor_shorts_1
50, U_C_HunterBody_grn

40, U_C_Poloshirt_salmon
40, U_C_Poloshirt_tricolour
40, U_C_Poloshirt_stripped
40, U_C_Poloshirt_burgundy
40, U_C_Poloshirt_blue

// Guerilla Headgear
30, H_Booniehat_khk
30, H_Booniehat_indp
30, H_Booniehat_mcamo
30, H_Booniehat_grn
30, H_Booniehat_tan
30, H_Booniehat_dirty
30, H_Booniehat_dgtl
30, H_Booniehat_khk_hs

20, H_Bandanna_khk
20, H_Bandanna_khk_hs
20, H_Bandanna_cbr
20, H_Bandanna_sgg
20, H_Bandanna_gry
20, H_Bandanna_camo
20, H_Bandanna_mcamo
20, H_BandMask_blk

10, H_Beret_blk
10, H_Beret_red
10, H_Beret_grn
10, H_Beret_grn_SF
10, H_Beret_brn_SF
10, H_Beret_ocamo
10, H_Beret_02
10, H_Beret_Colonel

15, H_Hat_camo
15, H_Cap_brn_SPECOPS
15, H_Cap_tan_specops_US
15, H_Cap_khaki_specops_UK
15, H_Watchcap_blk
15, H_Watchcap_khk
15, H_Watchcap_camo
15, H_Watchcap_sgg
15, H_TurbanO_blk

10, H_Shemag_khk
10, H_Shemag_tan
10, H_Shemag_olive
10, H_Shemag_olive_hs
10, H_ShemagOpen_khk
10, H_ShemagOpen_tan

40, U_PMC_GTShirt_DJeans
40, U_PMC_GTShirt_SJeans
40, U_PMC_BlkTShirt_DJeans
40, U_PMC_BlkTShirt_SJeans
40, U_PMC_BluTShirt_SJeans
40, U_PMC_WTShirt_DJeans
40, U_PMC_BluePlaidShirt_BeigeCords
40, U_PMC_RedPlaidShirt_DenimCords
40, U_PMC_BlackPoloShirt_BeigeCords

// Guerilla Vests
15, V_BandollierB_khk
15, V_BandollierB_cbr
15, V_BandollierB_rgr
15, V_BandollierB_blk
15, V_BandollierB_oli
10, V_Chestrig_khk
10, V_Chestrig_rgr
10, V_Chestrig_blk
10, V_Chestrig_oli
15, V_HarnessO_brn
15, V_HarnessOGL_brn
15, V_HarnessO_gry
15, V_HarnessOGL_gry
15, V_HarnessOSpec_brn
15, V_HarnessOSpec_gry

5, V_I_G_resistanceLeader_F

// Guerilla Uniforms
40, U_IG_Guerilla1_1
40, U_IG_Guerilla2_1
40, U_IG_Guerilla2_2
40, U_IG_Guerilla2_3
40, U_IG_Guerilla3_1
40, U_IG_Guerilla3_2

10, U_IG_leader
5, U_I_G_resistanceLeader_F

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> CivillianUpperClass

200, Exile_Item_PlasticBottleEmpty
50, Exile_Item_PlasticBottleFreshWater
30, Exile_Item_Energydrink
40, Exile_Item_Beer
150, Exile_Item_GloriousKnakworst
170, Exile_Item_SausageGravy
170, Exile_Item_ChristmasTinner
170, Exile_Item_BBQSandwich
190, Exile_Item_Surstromming
200, Exile_Item_Catfood
20, Exile_Item_ChristmasTinner_Cooked
20, Exile_Item_BBQSandwich_Cooked
20, Exile_Item_GloriousKnakworst_Cooked
20, Exile_Item_SausageGravy_Cooked
20, Exile_Item_Surstromming_Cooked
20, Exile_Item_Catfood_Cooked

// Pistols
70, hgun_ACPC2_F              // ACP-C2 .45
70, hgun_P07_F                // P07 9 mm
70, hgun_Rook40_F             // Rook-40 9 mm
50, hgun_Pistol_heavy_01_F    // 4-five .45
50, hgun_Pistol_heavy_02_F    // Zubr .45
35, hgun_Pistol_Signal_F      // Starter Pistol
50, RH_deagle
50, RH_deagleg
50, RH_deagles
50, RH_deaglem
70, RH_cz75
70, RH_sw659
70, RH_usp
70, RH_mak
70, RH_m1911
70, RH_kimber
70, RH_kimber_nw
70, RH_uspm
70, RH_m9
70, RH_m9c
70, RH_vz61
70, RH_g18
70, RH_g17
70, RH_tt33
70, RH_mk2
70, RH_p226
70, RH_p226s
70, RH_g19
70, RH_g19t
70, RH_vp70
70, RH_mateba
50, RH_python
50, RH_mp412
50, RH_bull
50, RH_bullb
70, RH_ttracker
70, RH_ttracker_g
70, RH_fnp45
70, RH_fnp45t
70, RH_fn57
70, RH_fn57_g
70, RH_fn57_t
70, RH_gsh18
70, RH_tec9
50, RH_muzi

// Pistol Magazines
80, 11Rnd_45ACP_Mag      // 4-five
80, 16Rnd_9x21_Mag       // PDW2000, P07, ROOK-40
80, 30Rnd_9x21_Mag       // Sting, PDW2000, P07, ROOK-40
70, 6Rnd_45ACP_Cylinder  // Zubr
50, 6Rnd_GreenSignal_F   // Starter Pistol
50, 6Rnd_RedSignal_F     // Starter Pistol
70, 9Rnd_45ACP_Mag       // ACP-C2
50, RH_7Rnd_50_AE
70, RH_16Rnd_9x19_cz
70, RH_14Rnd_9x19_sw
70, RH_12Rnd_45cal_usp
70, RH_8Rnd_9x18_Mak
70, RH_7Rnd_45cal_m1911
70, RH_16Rnd_40cal_usp
70, RH_15Rnd_9x19_M9
70, RH_20Rnd_32cal_vz61
70, RH_33Rnd_9x19_g18
70, RH_17Rnd_9x19_g17
70, RH_8Rnd_762_tt33
70, RH_10Rnd_22LR_mk2
70, RH_15Rnd_9x19_SIG
70, RH_18Rnd_9x19_VP
70, RH_6Rnd_44_Mag
70, RH_6Rnd_357_Mag
70, RH_6Rnd_454_Mag
70, RH_6Rnd_45ACP_Mag
70, RH_15Rnd_45cal_fnp
70, RH_20Rnd_57x28_FN
70, RH_18Rnd_9x19_gsh
70, RH_32Rnd_9x19_tec
70, RH_30Rnd_9x19_UZI

// Pistol Items
25, muzzle_snds_L
25, muzzle_snds_acp
10, optic_Yorris
10, optic_MRD
25, RH_demz
25, RH_gemtech9
25, RH_A26
25, RH_suppr9
25, RH_aacusp
25, RH_gemtech45
25, RH_osprey
25, RH_fhusp
25, RH_x2
25, RH_m6x
25, RH_x300
25, RH_pmsd
25, RH_pmir
25, RH_matchsd
25, RH_m9qd
25, RH_vp70stock
25, RH_docter
25, RH_sfn57
25, RH_tecsd
25, RH_muzisd

// Backpacks
85, B_OutdoorPack_blk
85, B_OutdoorPack_tan
85, B_OutdoorPack_blu
70, B_HuntingBackpack

// Uniforms
100, U_C_Poloshirt_salmon
100, U_C_Poloshirt_tricolour
100, U_C_Poloshirt_stripped
100, U_C_Poloshirt_burgundy
100, U_C_Poloshirt_blue

65, U_PMC_BluePlaidShirt_BeigeCords
65, U_PMC_RedPlaidShirt_DenimCords
65, U_PMC_BlackPoloShirt_BeigeCords
65, U_PMC_BluPolo_BgPants
65, U_PMC_BgPolo_GrnPants
65, U_PMC_BlckPolo_BgPants
65, U_PMC_BlckPolo_BluPants
65, U_PMC_BluPolo_GrnPants
65, U_PMC_BrnPolo_BgPants
65, U_PMC_BrnPolo_BluPants
65, U_PMC_GrnPolo_BgPants
65, U_PMC_WhtPolo_BgPants
65, U_PMC_WhtPolo_BluPants
65, U_PMC_WhtPolo_GrnPants
65, U_PMC_CombatUniformRS_BSGPBB
65, U_PMC_CombatUniformRS_BSGPSB
65, U_PMC_CombatUniformRS_BSSPBB
65, U_PMC_CombatUniformRS_BSSPSB
65, U_PMC_CombatUniformRS_GSBPBB
65, U_PMC_CombatUniformRS_GSSPBB
65, U_PMC_CombatUniformRS_IndPBSBB
65, U_PMC_CombatUniformRS_SSBPBB
65, U_PMC_CombatUniformRS_SSGPBB
65, U_PMC_CombatUniformRS_SSGPSB
65, U_PMC_CombatUniformRS_ChckDBS_GPSB
65, U_PMC_CombatUniformRS_ChckLB_GPBB
65, U_PMC_CombatUniformRS_ChckLR_SPBB
65, U_PMC_CombatUniformRS_ChckP_BPBB
65, U_PMC_CombatUniformLS_BSGPBB
65, U_PMC_CombatUniformLS_BSGPSB
65, U_PMC_CombatUniformLS_BSSPBB
65, U_PMC_CombatUniformLS_BSSPSB
65, U_PMC_CombatUniformLS_GSBPBB
65, U_PMC_CombatUniformLS_GSSPBB
65, U_PMC_CombatUniformLS_IndPBSBB
65, U_PMC_CombatUniformLS_SSBPBB
65, U_PMC_CombatUniformLS_SSGPBB
65, U_PMC_CombatUniformLS_SSGPSB
65, U_PMC_CombatUniformLS_ChckDBS_GPSB
65, U_PMC_CombatUniformLS_ChckLB_GPBB
65, U_PMC_CombatUniformLS_ChckLR_SPBB
65, U_PMC_CombatUniformLS_ChckP_BPBB

50, U_C_Journalist
50, U_C_Scientist
50, U_Rangemaster

5, U_OrestesBody
5, U_NikosBody
5, U_NikosAgedBody

// Vests
50, V_Rangemaster_belt
50, V_Press_F
50, V_TacVest_blk_POLICE

// Headgear
60, H_Bandanna_surfer
60, H_Beret_blk_POLICE
60, H_Cap_blk
60, H_Cap_blk_Raven
60, H_Cap_blu
60, H_Cap_grn
60, H_Cap_headphones
60, H_Cap_oli
60, H_Cap_press
60, H_Cap_red
60, H_Cap_tan
60, H_Hat_blue
60, H_Hat_brown
60, H_Hat_checker
60, H_Hat_grey
60, H_Hat_tan
60, H_StrawHat
60, H_StrawHat_dark

// Rifles
70, arifle_Katiba_F       // Katiba 6.5 mm
60, arifle_MXC_F          // MXC 6.5 mm
60, arifle_MX_F           // MX 6.5 mm
60, arifle_MX_GL_F        // MX 3GL 6.5 mm
50, arifle_MXM_F          // MXM 6.5 mm
50, arifle_SDAR_F         // SDAR 5.56 mm
70, arifle_TRG21_F        // TRG-21 5.56 mm
70, arifle_TRG20_F        // TRG-20 5.56 mm
70, arifle_Mk20_F         // Mk20 5.56 mm
70, arifle_Mk20C_F        // Mk20C 5.56 mm


// Rifle Items
25, muzzle_snds_M
25, muzzle_snds_H
40, optic_Arco
40, optic_Hamr
40, optic_Holosight
70, acc_flashlight
70, acc_pointer_IR
60, optic_MRCO
60, optic_DMS


// Rifle Ammo
60, 20Rnd_556x45_UW_mag                     // SDAR
80, 30Rnd_556x45_Stanag                     // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
50, 30Rnd_556x45_Stanag_Tracer_Green        // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
50, 30Rnd_556x45_Stanag_Tracer_Red          // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
50, 30Rnd_556x45_Stanag_Tracer_Yellow       // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
80, 30Rnd_65x39_caseless_green              // Katiba
50, 30Rnd_65x39_caseless_green_mag_Tracer   // Katiba
80, 30Rnd_65x39_caseless_mag                // MX/C/M/SW/3GL
50, 30Rnd_65x39_caseless_mag_Tracer         // MX/C/M/SW/3GL
70, 29rnd_300BLK_STANAG						//30 Round magazine of .300 Blackout FMJ
70, 29rnd_300BLK_STANAG_T	 				//30 Round magazine of .300 Blackout Tracer Rounds
70, 29rnd_300BLK_STANAG_S	 				//30 Round magazine of .300 Blackout FMJ "cold" loads for optimum sound suppression.


///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
> Shop

// Smoke Nades
50, SmokeShell
50, SmokeShellRed
50, SmokeShellGreen
50, SmokeShellYellow
50, SmokeShellPurple
50, SmokeShellBlue
50, SmokeShellOrange
50, hlc_GRD_White
50, hlc_GRD_red
50, hlc_GRD_green
50, hlc_GRD_blue
50, hlc_GRD_orange
50, hlc_GRD_purple

// Pistols
100, hgun_ACPC2_F             // ACP-C2 .45
100, hgun_Rook40_F            // Rook-40 9 mm
100, hgun_P07_F               // P07 9 mm
70, hgun_Pistol_heavy_01_F    // 4-five .45
70, hgun_Pistol_heavy_02_F    // Zubr .45
50, hgun_Pistol_Signal_F      // Starter Pistol
50, RH_deagle
50, RH_deagleg
50, RH_deagles
50, RH_deaglem
70, RH_cz75
70, RH_sw659
70, RH_usp
70, RH_mak
70, RH_m1911
70, RH_kimber
70, RH_kimber_nw
70, RH_uspm
70, RH_m9
70, RH_m9c
70, RH_vz61
70, RH_g18
70, RH_g17
70, RH_tt33
70, RH_mk2
70, RH_p226
70, RH_p226s
70, RH_g19
70, RH_g19t
70, RH_vp70
70, RH_mateba
70, RH_python
70, RH_mp412
50, RH_bull
50, RH_bullb
50, RH_ttracker
50, RH_ttracker_g
50, RH_fnp45
50, RH_fnp45t
50, RH_fn57
50, RH_fn57_g
50, RH_fn57_t
50, RH_gsh18
50, RH_tec9
50, RH_muzi

// Pistol Magazines
80, 11Rnd_45ACP_Mag    // 4-five
80, 16Rnd_9x21_Mag       // PDW2000, P07, ROOK-40
80, 30Rnd_9x21_Mag       // Sting, PDW2000, P07, ROOK-40
70, 6Rnd_45ACP_Cylinder  // Zubr
60, 6Rnd_GreenSignal_F     // Starter Pistol
60, 6Rnd_RedSignal_F   // Starter Pistol
80, 9Rnd_45ACP_Mag       // ACP-C2
50, RH_7Rnd_50_AE
70, RH_16Rnd_9x19_cz
70, RH_14Rnd_9x19_sw
70, RH_12Rnd_45cal_usp
70, RH_8Rnd_9x18_Mak
70, RH_7Rnd_45cal_m1911
70, RH_16Rnd_40cal_usp
70, RH_15Rnd_9x19_M9
70, RH_20Rnd_32cal_vz61
70, RH_33Rnd_9x19_g18
70, RH_17Rnd_9x19_g17
70, RH_8Rnd_762_tt33
70, RH_10Rnd_22LR_mk2
70, RH_15Rnd_9x19_SIG
70, RH_18Rnd_9x19_VP
70, RH_6Rnd_44_Mag
70, RH_6Rnd_357_Mag
70, RH_6Rnd_454_Mag
70, RH_6Rnd_45ACP_Mag
70, RH_15Rnd_45cal_fnp
70, RH_20Rnd_57x28_FN
70, RH_18Rnd_9x19_gsh
70, RH_32Rnd_9x19_tec
70, RH_30Rnd_9x19_UZI

// Pistol Items
25, muzzle_snds_L
25, muzzle_snds_acp
10, optic_Yorris
10, optic_MRD
10, RH_demz
10, RH_gemtech9
10, RH_A26
10, RH_suppr9
10, RH_aacusp
10, RH_gemtech45
10, RH_osprey
10, RH_fhusp
10, RH_x2
10, RH_m6x
10, RH_x300
10, RH_pmsd
10, RH_pmir
10, RH_matchsd
10, RH_m9qd
10, RH_vp70stock
10, RH_docter
10, RH_sfn57
10, RH_tecsd
10, RH_muzisd



200, Exile_Item_PlasticBottleEmpty
50, Exile_Item_PlasticBottleFreshWater
30, Exile_Item_Energydrink
40, Exile_Item_Beer
150, Exile_Item_GloriousKnakworst
170, Exile_Item_SausageGravy
170, Exile_Item_ChristmasTinner
170, Exile_Item_BBQSandwich
190, Exile_Item_Surstromming
200, Exile_Item_Catfood

20, Exile_Item_ChristmasTinner_Cooked
20, Exile_Item_BBQSandwich_Cooked
20, Exile_Item_GloriousKnakworst_Cooked
20, Exile_Item_SausageGravy_Cooked
20, Exile_Item_Surstromming_Cooked
20, Exile_Item_Catfood_Cooked

15, Binocular
10, Exile_Item_CamoTentKit
65, Exile_Item_CookingPot
40, Exile_Item_DuctTape
80, Exile_Item_LightBulb
40, Exile_Item_Matches
50, Exile_Item_InstaDoc
25, ItemGPS

///////////////////////////////////////////////////////////////////////////////
// Factories, Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> Industrial

10, Exile_Item_DuctTape
30, Exile_Item_ExtensionCord
5, Exile_Item_FloodLightKit
50, Exile_Item_FuelCanisterEmpty
40, Exile_Item_FuelCanisterFull
25, Exile_Item_JunkMetal
20, Exile_Item_LightBulb
10, Exile_Item_MetalBoard
5, Exile_Item_PortableGeneratorKit
10, Exile_Item_Rope
10, Exile_Magazine_Battery
50, Exile_Melee_Axe

///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleService

10, Exile_Item_DuctTape
50, Exile_Item_FuelCanisterEmpty
40, Exile_Item_FuelCanisterFull
25, Exile_Item_JunkMetal
20, Exile_Item_LightBulb
10, Exile_Item_MetalBoard
10, Exile_Magazine_Battery

///////////////////////////////////////////////////////////////////////////////
// Towers, Barracks, Hangars etc.
///////////////////////////////////////////////////////////////////////////////
> Military

// LMGs
50, arifle_MX_SW_Black_F   // MX SW 6.5 mm (Black)
50, arifle_MX_SW_F         // MX SW 6.5 mm
50, LMG_Mk200_F            // Mk200 6.5 mm
50, LMG_Zafir_F            // Zafir 7.62 mm
20, hlc_lmg_M60E4
50, hlc_lmg_minimipara
50, hlc_lmg_minimi
50, hlc_lmg_minimi_railed
50, hlc_lmg_m249para
50, hlc_lmg_M249E2
50, hlc_m249_pip1
50, hlc_m249_pip2
50, hlc_m249_pip3
50, hlc_m249_pip4

// LMG Ammo
70, 100Rnd_65x39_caseless_mag      // MX SW
60, 100Rnd_65x39_caseless_mag_Tracer   // MX SW
70, 150Rnd_762x54_Box          // Zafir
60, 150Rnd_762x54_Box_Tracer       // Zafir
60, 200Rnd_65x39_Belt          // Mk200
//50, 200Rnd_65x39_Belt_Tracer_Green   // Mk200
50, 200Rnd_65x39_Belt_Tracer_Red     // Mk200
//50, 200Rnd_65x39_Belt_Tracer_Yellow    // Mk200
30, 130Rnd_338_Mag
30, 150Rnd_93x64_Mag
20, hlc_100Rnd_762x51_B_M60E4
20, hlc_100Rnd_762x51_T_M60E4
20, hlc_100Rnd_762x51_M_M60E4
50, hlc_200rnd_556x45_M_SAW
50, hlc_200rnd_556x45_T_SAW
50, hlc_200rnd_556x45_B_SAW


// Rifles
80, arifle_Katiba_F    	 			// Katiba 6.5 mm
70, arifle_Katiba_GL_F   			// Katiba GL 6.5 mm
70, arifle_MXC_F     	 			// MXC 6.5 mm
70, arifle_MX_F      		 		// MX 6.5 mm
35, arifle_MX_GL_F     		 		// MX 3GL 6.5 mm
50, arifle_MXM_F     		 		// MXM 6.5 mm
20, arifle_MXM_Black_F 		 		// MXM 6.5 mm (Black)
60, arifle_SDAR_F    	 			// SDAR 5.56 mm
70, arifle_TRG21_F     		 		// TRG-21 5.56 mm
70, arifle_TRG20_F   	  			// TRG-20 5.56 mm
30, arifle_TRG21_GL_F  	 			// TRG-21 EGLM 5.56 mm
60, arifle_Mk20_F    	 			// Mk20 5.56 mm
60, arifle_Mk20C_F   		 		// Mk20C 5.56 mm
30, arifle_Mk20_GL_F   		 		// Mk20 EGLM 5.56 mm
20, arifle_MXC_Black_F   			// MXC 6.5 mm (Black)
20, arifle_MX_Black_F  	 			// MX 6.5 mm (Black)
20, arifle_MX_GL_Black_F 			// MX 3GL 6.5 mm (Black)
45, hlc_rifle_ak74
45, hlc_rifle_aks74
45, hlc_rifle_aks74u
45, hlc_rifle_ak47
45, hlc_rifle_akm
45, hlc_rifle_rpk
45, hlc_rifle_ak12
45, hlc_rifle_akmgl
45, hlc_rifle_aks74_GL
45, hlc_rifle_RU556
45, hlc_rifle_RU5562
30, hlc_rifle_Colt727
30, hlc_rifle_Colt727_GL
30, hlc_rifle_bcmjack
30, hlc_rifle_Bushmaster300
30, hlc_rifle_vendimus
30, hlc_rifle_SAMR
30, hlc_rifle_honeybase
30, hlc_rifle_honeybadger
55, hlc_rifle_aug
55, hlc_rifle_auga1_t
55, hlc_rifle_auga1_B
55, hlc_rifle_auga1carb
55, hlc_rifle_auga1carb_t
55, hlc_rifle_auga1carb_b
55, hlc_rifle_aughbar
55, hlc_rifle_aughbar_b
55, hlc_rifle_aughbar_t
55, hlc_rifle_augpara
55, hlc_rifle_augpara_b
55, hlc_rifle_augpara_t
55, hlc_rifle_auga2
55, hlc_rifle_auga2_b
55, hlc_rifle_auga2_t
55, hlc_rifle_auga2carb
55, hlc_rifle_auga2carb_t
55, hlc_rifle_auga2carb_b
55, hlc_rifle_auga2lsw
55, hlc_rifle_auga2lsw_t
55, hlc_rifle_auga2lsw_b
55, hlc_rifle_auga2para
55, hlc_rifle_auga2para_b
55, hlc_rifle_auga2para_t
60, hlc_rifle_augsr
60, hlc_rifle_augsr_b
60, hlc_rifle_augsr_t
60, hlc_rifle_augsrcarb
60, hlc_rifle_augsrcarb_t
60, hlc_rifle_augsrcarb_b
60, hlc_rifle_augsrhbar
60, hlc_rifle_augsrhbar_b
60, hlc_rifle_augsrhbar_t
50, hlc_rifle_auga3
50, hlc_rifle_auga3_bl
50, hlc_rifle_auga3_b
50, hlc_rifle_auga3_GL
50, hlc_rifle_auga3_GL_BL
50, hlc_rifle_auga3_GL_B
35, RH_m4
35, RH_m4_m203
35, RH_m4_ris
35, RH_m4_ris_m203
35, RH_m4_ris_m203s
35, RH_m4a1_ris
35, RH_m4a1_ris_m203
35, RH_m4a1_ris_m203s
35, RH_m4sbr
35, RH_m4sbr_g
35, RH_m4sbr_b
45, RH_m16a1
45, RH_m16a1gl
45, RH_m16a2
45, RH_m16a2gl
45, RH_m16a3
45, RH_m16a4
45, RH_m16a4gl
45, RH_m16a4_m
50, RH_mk12mod1
50, RH_samr
50, RH_m4m
50, RH_m4m_g
50, RH_m4m_b
50, RH_m4_moe
50, RH_m4_moe_g
50, RH_m4_moe_b
50, RH_m4a6
50, RH_m16a6
50, RH_hb
50, RH_hb_b
50, RH_hk416
50, RH_hk416c
50, RH_hk416s
50, RH_m27iar
50, RH_ar10
50, RH_mk11
50, RH_m110
50, RH_sr25ec
50, RH_sbr9
50, RH_m4_tg
50, RH_m4_des
50, RH_m4_wdl
50, RH_m4_m203_tg
50, RH_m4_m203_des
50, RH_m4_m203_wdl
50, RH_m4a1_ris_tg
50, RH_m4a1_ris_des
50, RH_m4a1_ris_wdl
50, RH_m4a1_ris_m203_tg
50, RH_m4a1_ris_m203_des
50, RH_m4a1_ris_m203_wdl
50, RH_m4a1_ris_m203s_tg
50, RH_m4a1_ris_m203s_des
50, RH_m4a1_ris_m203s_wdl
50, RH_m4_ris_m_tg
50, RH_m4_ris_m_des
50, RH_m4_ris_m_wdl
50, RH_m4a6_tg
50, RH_m4a6_des
50, RH_m4a6_wdl
50, RH_m16a4_tg
50, RH_m16a4_des
50, RH_m16a4_wdl
50, RH_m16a4gl_tg
50, RH_m16a4gl_des
50, RH_m16a4gl_wdl
50, RH_m16a4_m_tg
50, RH_m16a4_m_des
50, RH_m16a4_m_wdl
50, RH_hk416_tg
50, RH_hk416_des
50, RH_hk416_wdl
50, RH_hk416s_tg
50, RH_hk416s_des
50, RH_hk416s_wdl
50, RH_hk416c_tg
50, RH_hk416c_des
50, RH_hk416c_wdl
50, RH_m27iar_tg
50, RH_m27iar_des
50, RH_m27iar_wdl
50, RH_m16a6_tg
50, RH_m16a6_des
50, RH_m16a6_wdl
50, RH_Mk12mod1_tg
50, RH_Mk12mod1_des
50, RH_Mk12mod1_wdl
50, RH_SAMR_tg
50, RH_SAMR_des
50, RH_SAMR_wdl
50, RH_sbr9_tg
50, RH_sbr9_des
50, RH_sbr9_wdl

// Rifle Items
25, muzzle_snds_M
25, muzzle_snds_H
50, optic_Arco
50, optic_Hamr
50, optic_Holosight
60, acc_pointer_IR
50, optic_MRCO
70, acc_flashlight
45, HLC_Optic_PSO1
45, HLC_Optic_1p29
45, hlc_optic_kobra
45, hlc_muzzle_545SUP_AK
45, hlc_muzzle_762SUP_AK
45, hlc_muzzle_556NATO_KAC
45, hlc_muzzle_300blk_KAC
45, hlc_muzzle_snds_AUG
45, hlc_muzzle_snds_a6AUG
45, RH_eotech553
45, RH_eotech553mag
45, RH_eotech553_tan
45, RH_eotech553mag_tan
45, RH_eotexps3
45, RH_eotexps3_tan
45, RH_eothhs1
45, RH_eothhs1_tan
45, RH_compm4s
45, RH_compm2
45, RH_compm2l
45, RH_compm2_tan
45, RH_compm2l_tan
45, RH_t1
45, RH_t1_tan
45, RH_reflex
45, RH_shortdot
45, RH_m3lr
45, RH_ta01nsn
45, RH_ta01nsn_2D
45, RH_ta31rco
45, RH_ta31rco_2D
45, RH_ta31rmr
45, RH_ta31rmr_2D
45, RH_ta01nsn_tan
45, RH_ta01nsn_tan_2D
45, RH_ta31rco_tan
45, RH_ta31rco_tan_2D
45, RH_ta31rmr_tan
45, RH_ta31rmr_tan_2D
45, RH_ta648
45, RH_accupoint
45, RH_leu_mk4
45, RH_c79
45, RH_c79_2D
45, RH_m145
45, RH_barska_rds
45, RH_cmore
45, RH_LTdocter
45, RH_LTdocterl
45, RH_zpoint
45, RH_anpvs4
45, RH_anpvs10
45, RH_pas13cl
45, RH_pas13cm
45, RH_pas13cmg
45, RH_pas13ch

45, RH_peq15
45, RH_peq15_top
45, RH_peq15b
45, RH_peq15b_top
45, RH_peq2
45, RH_peq2_top
45, RH_SFM952V
45, RH_SFM952V_tan

45, RH_qdss_nt4
45, RH_qdss_nt4_tg
45, RH_qdss_nt4_des
45, RH_qdss_nt4_wdl
45, RH_saker
45, RH_saker_tg
45, RH_saker_des
45, RH_saker_wdl
45, RH_Saker762
45, RH_Saker762_tg
45, RH_Saker762_des
45, RH_Saker762_wdl
45, RH_fa556
45, RH_fa556_tg
45, RH_fa556_des
45, RH_fa556_wdl
45, RH_fa762
45, RH_fa762_tg
45, RH_fa762_des
45, RH_fa762_wdl
45, RH_spr_mbs
45, RH_spr_mbs_tg
45, RH_spr_mbs_des
45, RH_spr_mbs_wdl
45, RH_tundra
45, RH_tundra_tg
45, RH_tundra_des
45, RH_tundra_wdl
45, RH_m110sd
45, RH_m110sd_t
45, RH_HBLM
45, RH_HBLM_tg
45, RH_HBLM_des
45, RH_HBLM_wdl
45, RH_TD_ACB
45, RH_TD_ACB_g
45, RH_TD_ACB_b

// Rifle Ammo
35, 20Rnd_556x45_UW_mag            // SDAR
50, 30Rnd_556x45_Stanag            // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
40, 30Rnd_556x45_Stanag_Tracer_Green     // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
40, 30Rnd_556x45_Stanag_Tracer_Red     // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
40, 30Rnd_556x45_Stanag_Tracer_Yellow    // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
50, 30Rnd_65x39_caseless_green       // Katiba
40, 30Rnd_65x39_caseless_green_mag_Tracer  // Katiba
50, 30Rnd_65x39_caseless_mag         // MX/C/M/SW/3GL
40, 30Rnd_65x39_caseless_mag_Tracer      // MX/C/M/SW/3GL
40, 29rnd_300BLK_STANAG
40, 29rnd_300BLK_STANAG_T
40, 29rnd_300BLK_STANAG_S
40, hlc_30rnd_556x45_EPR
40, hlc_30rnd_556x45_SOST
40, hlc_30rnd_556x45_SPR
40, hlc_30Rnd_545x39_B_AK
40, hlc_30Rnd_545x39_T_AK
40, hlc_30Rnd_545x39_EP_AK
40, hlc_45Rnd_545x39_t_rpk
40, hlc_30Rnd_762x39_b_ak
40, hlc_30Rnd_762x39_t_ak
40, hlc_45Rnd_762x39_t_rpk
40, hlc_45Rnd_762x39_m_rpk
40, hlc_30Rnd_556x45_B_AUG
40, hlc_30Rnd_556x45_SOST_AUG
40, hlc_30Rnd_556x45_SPR_AUG
40, hlc_30Rnd_556x45_T_AUG
40, hlc_40Rnd_556x45_B_AUG
40, hlc_40Rnd_556x45_SOST_AUG
40, hlc_40Rnd_556x45_SPR_AUG
40, hlc_25Rnd_9x19mm_M882_AUG
40, hlc_25Rnd_9x19mm_JHP_AUG
40, hlc_25Rnd_9x19mm_subsonic_AUG
40, RH_30Rnd_556x45_M855A1
40, RH_30Rnd_556x45_Mk262
40, RH_30Rnd_556x45_Mk318
40, RH_20Rnd_556x45_M855A1
40, RH_20Rnd_556x45_Mk262
40, RH_20Rnd_556x45_Mk318
40, RH_60Rnd_556x45_M855A1
40, RH_60Rnd_556x45_Mk262
40, RH_60Rnd_556x45_Mk318
40, RH_30Rnd_68x43_FMJ
40, RH_30Rnd_68x43_Match
40, RH_30Rnd_762x35_FMJ
40, RH_30Rnd_762x35_Match
40, RH_30Rnd_762x35_MSB
40, RH_20Rnd_762x51_M80A1
40, RH_20Rnd_762x51_Mk316LR
40, RH_20Rnd_762x51_Mk319
40, RH_20Rnd_762x51_LFMJSB
40, RH_20Rnd_762x51_AR10
40, RH_32Rnd_9mm_M822
40, RH_32Rnd_9mm_HP
40, RH_32Rnd_9mm_HPSB

// Snipers
25, srifle_DMR_01_F  	 // Rahim 7.62 mm
25, srifle_EBR_F 		 // Mk18 ABR 7.62 mm
20, srifle_GM6_F   	 	 // GM6 Lynx 12.7 mm
20, srifle_LRR_F  		 // M320 LRR .408
25, hlc_rifle_l1a1slr
25, hlc_rifle_SLR
25, hlc_rifle_STG58F
25, hlc_rifle_FAL5061
25, hlc_rifle_c1A1
25, hlc_rifle_LAR
25, hlc_rifle_SLRchopmod
25, hlc_rifle_falosw
25, hlc_rifle_osw_GL
25, hlc_rifle_g3sg1
25, hlc_rifle_psg1
25, hlc_rifle_g3a3
25, hlc_rifle_g3ka4
25, HLC_Rifle_g3ka4_GL
25, hlc_rifle_hk51
25, hlc_rifle_hk53
25, hlc_rifle_M14
25, hlc_rifle_M21
25, hlc_rifle_M14DMR
25, hlc_rifle_m14sopmod
25, hlc_rifle_awcovert
25, hlc_rifle_awcovert_BL
25, hlc_rifle_awcovert_FDE
25, hlc_rifle_awmagnum
25, hlc_rifle_awmagnum_BL
25, hlc_rifle_awmagnum_FDE
25, hlc_rifle_awMagnum_FDE_ghillie
25, hlc_rifle_awMagnum_BL_ghillie
25, hlc_rifle_awMagnum_OD_ghillie

// Sniper Ammo
25, 5Rnd_127x108_Mag     // GM6 Lynx
25, 7Rnd_408_Mag       // M320 LRR
40, 10Rnd_762x51_Mag     // Rahim
40, 20Rnd_762x51_Mag     // Mk18 ABR
15, 5Rnd_127x108_APDS_Mag  // GM6 Lynx
15, hlc_5rnd_300WM_FMJ_AWM
15, hlc_5rnd_300WM_AP_AWM
15, hlc_5rnd_300WM_BTSP_AWM
15, hlc_5rnd_300WM_mk248_AWM
15, hlc_5rnd_300WM_SBT_AWM
15, hlc_20Rnd_762x51_B_G3
15, hlc_20rnd_762x51_T_G3
15, hlc_50rnd_762x51_M_G3
15, hlc_20Rnd_762x51_B_M14
15, hlc_20rnd_762x51_T_M14
15, hlc_50rnd_762x51_M_M14
15, hlc_20Rnd_762x51_B_fal
15, hlc_20Rnd_762x51_t_fal
15, hlc_20Rnd_762x51_S_fal
15, hlc_50rnd_762x51_M_FAL

// Sniper Items
25, muzzle_snds_B
35, optic_DMS
35, optic_SOS
35, optic_LRPS
25, hlc_optic_artel_m14
25, hlc_optic_LRT_m14
25, hlc_optic_suit
25, HLC_Optic_ZFSG1
25, hlc_optic_accupoint_g3
25, hlc_muzzle_snds_HK33
25, hlc_muzzle_snds_G3
25, hlc_muzzle_snds_M14
25, hlc_muzzle_snds_fal

// Noob Tube Nades
30, 1Rnd_HE_Grenade_shell
15, 3Rnd_HE_Grenade_shell
25, hlc_VOG25_AK

// Smoke Nades
35, SmokeShell
35, SmokeShellRed
35, SmokeShellGreen
35, SmokeShellYellow
35, SmokeShellPurple
35, SmokeShellBlue
35, SmokeShellOrange
35, hlc_GRD_White
35, hlc_GRD_red
35, hlc_GRD_green
35, hlc_GRD_blue
35, hlc_GRD_orange
35, hlc_GRD_purple

// Noob Tube Flares
15, 3Rnd_UGL_FlareGreen_F
15, 3Rnd_UGL_FlareRed_F
15, 3Rnd_UGL_FlareWhite_F
15, 3Rnd_UGL_FlareYellow_F
35, UGL_FlareGreen_F
35, UGL_FlareRed_F
35, UGL_FlareWhite_F
35, UGL_FlareYellow_F

// No Infrared for now
//UGL_FlareCIR_F
//3Rnd_UGL_FlareCIR_F

// Noob Tube Smokes
35, 1Rnd_Smoke_Grenade_shell
35, 1Rnd_SmokeBlue_Grenade_shell
35, 1Rnd_SmokeGreen_Grenade_shell
35, 1Rnd_SmokeOrange_Grenade_shell
35, 1Rnd_SmokePurple_Grenade_shell
35, 1Rnd_SmokeRed_Grenade_shell
35, 1Rnd_SmokeYellow_Grenade_shell
15, 3Rnd_Smoke_Grenade_shell
15, 3Rnd_SmokeBlue_Grenade_shell
15, 3Rnd_SmokeGreen_Grenade_shell
15, 3Rnd_SmokeOrange_Grenade_shell
15, 3Rnd_SmokePurple_Grenade_shell
15, 3Rnd_SmokeRed_Grenade_shell
15, 3Rnd_SmokeYellow_Grenade_shell

// Explosives
25, HandGrenade
25, MiniGrenade

// Items
70, Binocular
50, ItemRadio
40, ItemGPS
50, NVGoggles
50, Exile_Item_InstaDoc

// Backpacks
70, B_OutdoorPack_blk
70, B_OutdoorPack_tan
70, B_OutdoorPack_blu
60, B_HuntingBackpack

50, B_AssaultPack_khk
50, B_AssaultPack_dgtl
50, B_AssaultPack_rgr
50, B_AssaultPack_sgg
50, B_AssaultPack_blk
50, B_AssaultPack_cbr
50, B_AssaultPack_mcamo

40, B_Kitbag_mcamo
40, B_Kitbag_sgg
40, B_Kitbag_cbr

20, B_FieldPack_blk
20, B_FieldPack_ocamo
20, B_FieldPack_oucamo
20, B_FieldPack_cbr

15, B_Bergen_sgg
15, B_Bergen_mcamo
15, B_Bergen_rgr
15, B_Bergen_blk

// Headgear
70, H_MilCap_ocamo
70, H_MilCap_mcamo
70, H_MilCap_oucamo
70, H_MilCap_blue
70, H_MilCap_rucamo
70, H_MilCap_dgtl
70, H_HelmetB
70, H_HelmetB_paint
70, H_HelmetB_light
70, H_HelmetB_plain_blk
70, H_HelmetSpecB
70, H_HelmetSpecB_paint1
70, H_HelmetSpecB_paint2
70, H_HelmetSpecB_blk
70, H_HelmetIA
70, H_HelmetIA_net
70, H_HelmetIA_camo
70, H_HelmetB_grass
70, H_HelmetB_snakeskin
70, H_HelmetB_desert
70, H_HelmetB_black
70, H_HelmetB_sand
70, H_HelmetB_light_grass
70, H_HelmetB_light_snakeskin
70, H_HelmetB_light_desert
70, H_HelmetB_light_black
70, H_HelmetB_light_sand

40, H_HelmetCrew_B
40, H_HelmetCrew_O
40, H_HelmetCrew_I

30, H_PilotHelmetFighter_B
30, H_PilotHelmetFighter_O
30, H_PilotHelmetFighter_I

30, H_PilotHelmetHeli_B
30, H_PilotHelmetHeli_O
30, H_PilotHelmetHeli_I

25, H_HelmetB_camo

30, H_CrewHelmetHeli_B
30, H_CrewHelmetHeli_O
30, H_CrewHelmetHeli_I

25, H_BandMask_khk
25, H_BandMask_reaper
25, H_BandMask_demon

10, H_HelmetO_oucamo
10, H_HelmetLeaderO_oucamo
10, H_HelmetSpecO_ocamo
10, H_HelmetSpecO_blk
10, H_HelmetO_ocamo
10, H_HelmetLeaderO_ocamo

// Vests
70, V_Rangemaster_belt
70, V_PlateCarrier1_blk
70, V_PlateCarrier1_rgr
70, V_PlateCarrier2_rgr
70, V_PlateCarrier3_rgr
70, V_PlateCarrierGL_rgr
70, V_PlateCarrierIA1_dgtl
70, V_PlateCarrierIA2_dgtl
70, V_PlateCarrierIAGL_dgtl
70, V_PlateCarrierSpec_rgr

50, V_TacVest_blk
50, V_TacVest_brn
50, V_TacVest_camo
50, V_TacVest_khk
50, V_TacVest_oli
50, V_TacVestCamo_khk
50, V_TacVestIR_blk

30, V_RebreatherB
30, V_RebreatherIR
30, V_RebreatherIA

10, V_PlateCarrierL_CTRG
10, V_PlateCarrierH_CTRG

// Uniforms
70, U_B_CTRG_1             // CTRG Combat Uniform (UBACS)
70, U_B_CTRG_2             // CTRG Combat Uniform (UBACS2)
70, U_B_CTRG_3             // CTRG Combat Uniform (Tee)
50, U_B_CombatUniform_mcam       // Combat Fatigues (MTP)
70, U_B_CombatUniform_mcam_tshirt  // Combat Fatigues (MTP) (Tee)
70, U_B_CombatUniform_mcam_vest  // Recon Fatigues (MTP)
90, U_B_CombatUniform_mcam_worn  // Worn Combat Fatigues (MTP)
30, U_B_SpecopsUniform_sgg       // Specop Fatigues (Sage)
20, U_O_OfficerUniform_ocamo     // Officer Fatigues (Hex)
20, U_I_OfficerUniform         // Combat Fatigues [AAF] (Tee)
35, U_I_CombatUniform        // Combat Fatigues [AAF]
35, U_I_CombatUniform_tshirt     // Combat Fatigues [AAF] (Tee)
35, U_I_CombatUniform_shortsleeve  // Combat Fatigues [AAF]

15, U_B_GhillieSuit        // Ghillie Suit [NATO]
15, U_O_GhillieSuit        // Ghillie Suit [CSAT]
15, U_I_GhillieSuit        // Ghillie Suit [AAF]

35, U_B_HeliPilotCoveralls       // Heli Pilot Coveralls
35, U_O_PilotCoveralls         // Pilot Coveralls [CSAT]
35, U_B_PilotCoveralls         // Pilot Coveralls [NATO]
35, U_I_pilotCoveralls         // Pilot Coveralls [AAF]
35, U_I_HeliPilotCoveralls       // Heli Pilot Coveralls

25, U_B_Wetsuit          // Wetsuit [NATO]
25, U_O_Wetsuit          // Wetsuit [CSAT]
25, U_I_Wetsuit          // Wetsuit [AAF]

15, U_O_CombatUniform_ocamo    // Heli Pilot Coveralls
15, U_O_CombatUniform_oucamo     // Fatigues (Urban) [CSAT]
15, U_O_SpecopsUniform_ocamo     // Recon Fatigues (Hex)
15, U_O_SpecopsUniform_blk       // Recon Fatigues (Black)

45, U_PMC_CombatUniformLS_BSGPBB
45, U_PMC_CombatUniformLS_BSGPSB
45, U_PMC_CombatUniformLS_BSSPBB
45, U_PMC_CombatUniformLS_BSSPSB
45, U_PMC_CombatUniformLS_GSBPBB
45, U_PMC_CombatUniformLS_GSSPBB
45, U_PMC_CombatUniformLS_IndPBSBB
45, U_PMC_CombatUniformLS_SSBPBB
45, U_PMC_CombatUniformLS_SSGPBB
45, U_PMC_CombatUniformLS_SSGPSB
45, U_PMC_CombatUniformLS_ChckDBS_GPSB
45, U_PMC_CombatUniformLS_ChckLB_GPBB
45, U_PMC_CombatUniformLS_ChckLR_SPBB
45, U_PMC_CombatUniformLS_ChckP_BPBB
45, U_PMC_CombatUniformRS_BSGPBB
45, U_PMC_CombatUniformRS_BSGPSB
45, U_PMC_CombatUniformRS_BSSPBB
45, U_PMC_CombatUniformRS_BSSPSB
45, U_PMC_CombatUniformRS_GSBPBB
45, U_PMC_CombatUniformRS_GSSPBB
45, U_PMC_CombatUniformRS_IndPBSBB
45, U_PMC_CombatUniformRS_SSBPBB
45, U_PMC_CombatUniformRS_SSGPBB
45, U_PMC_CombatUniformRS_SSGPSB
45, U_PMC_CombatUniformRS_ChckDBS_GPSB
45, U_PMC_CombatUniformRS_ChckLB_GPBB
45, U_PMC_CombatUniformRS_ChckLR_SPBB
45, U_PMC_CombatUniformRS_ChckP_BPBB
45, U_PMC_BluPolo_BgPants
45, U_PMC_BgPolo_GrnPants
45, U_PMC_BlckPolo_BgPants
45, U_PMC_BlckPolo_BluPants
45, U_PMC_BluPolo_GrnPants
45, U_PMC_BrnPolo_BgPants
45, U_PMC_BrnPolo_BluPants
45, U_PMC_GrnPolo_BgPants
45, U_PMC_WhtPolo_BgPants
45, U_PMC_WhtPolo_BluPants
45, U_PMC_WhtPolo_GrnPants
45, U_PMC_BluePlaidShirt_BeigeCords
45, U_PMC_RedPlaidShirt_DenimCords
45, U_PMC_BlackPoloShirt_BeigeCords
45, U_PMC_GTShirt_DJeans
45, U_PMC_GTShirt_SJeans
45, U_PMC_BlkTShirt_DJeans
45, U_PMC_BlkTShirt_SJeans
45, U_PMC_BluTShirt_SJeans
45, U_PMC_WTShirt_DJeans
45, V_PlateCarrier1_PMC_rgr
45, V_PlateCarrier1_PMC_blk
45, V_PlateCarrier1_PMC_marpat
45, V_PlateCarrier1_PMC_khki
45, V_PlateCarrierInd_PMC_blk
45, V_PlateCarrierInd_PMC_grn
45, V_TacVest_darkblck
45, H_Cap_pmc
45, H_Cap_tan_pmc
45, H_Cap_pmc_headphones
45, H_Capbw_pmc
45, H_Capbw_tan_pmc
45, H_Booniehat_rgr
45, H_Booniehat_GCAMO
45, H_Booniehat_DMARPAT
45, H_PilotHelmetHeli_PMC

///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc.
///////////////////////////////////////////////////////////////////////////////
> Medical

100, Exile_Item_InstaDoc

///////////////////////////////////////////////////////////////////////////////
// Light Houses + Life Guard Towers + Castles
///////////////////////////////////////////////////////////////////////////////
> Tourist

// The ONLY place to find the BEST backpacks :)
10, B_Carryall_ocamo
10, B_Carryall_oucamo
10, B_Carryall_mcamo
10, B_Carryall_oli
10, B_Carryall_khk
10, B_Carryall_cbr

// Snipers
80, srifle_DMR_01_F  // Rahim 7.62 mm
80, srifle_EBR_F // Mk18 ABR 7.62 mm
65, hlc_rifle_M14
65, hlc_rifle_M21
65, hlc_rifle_M14DMR
65, hlc_rifle_awmagnum
65, hlc_rifle_awmagnum_BL
65, hlc_rifle_awmagnum_FDE
65, hlc_rifle_awMagnum_FDE_ghillie
65, hlc_rifle_awMagnum_BL_ghillie
65, hlc_rifle_awMagnum_OD_ghillie

// Sniper Ammo
60, 10Rnd_762x51_Mag     // Rahim
60, 20Rnd_762x51_Mag     // Mk18 ABR
60, hlc_5rnd_300WM_FMJ_AWM
60, hlc_5rnd_300WM_AP_AWM
60, hlc_5rnd_300WM_BTSP_AWM
60, hlc_5rnd_300WM_mk248_AWM
60, hlc_5rnd_300WM_SBT_AWM

// Sniper Items
70, muzzle_snds_B
70, acc_flashlight
70, acc_pointer_IR
70, optic_DMS
70, optic_SOS
70, optic_LRPS


80, Binocular
75, Rangefinder
50, Laserdesignator
50, ItemRadio
40, ItemGPS
50, NVGoggles
50, Exile_Item_InstaDoc

// Explosives
25, HandGrenade
25, MiniGrenade
