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
25, Exile_Item_PlasticBottleEmpty
10, Exile_Item_PlasticBottleFreshWater
10, Exile_Item_Energydrink
10, Exile_Item_Beer
10, Exile_Item_GloriousKnakworst
10, Exile_Item_SausageGravy
10, Exile_Item_ChristmasTinner
10, Exile_Item_BBQSandwich
10, Exile_Item_Surstromming
25, Exile_Item_Catfood

5, Exile_Item_ChristmasTinner_Cooked
5, Exile_Item_BBQSandwich_Cooked
5, Exile_Item_GloriousKnakworst_Cooked
5, Exile_Item_SausageGravy_Cooked
5, Exile_Item_Surstromming_Cooked
5, Exile_Item_Catfood_Cooked

// Pistols
7, hgun_ACPC2_F            // ACP-C2 .45
7, hgun_P07_F              // P07 9 mm
7, hgun_Rook40_F           // Rook-40 9 mm
5, hgun_Pistol_heavy_01_F  // 4-five .45
5, hgun_Pistol_heavy_02_F  // Zubr .45
1, hgun_Pistol_Signal_F    // Starter Pistol
5, RH_deagle
5, RH_deagleg
5, RH_deagles
5, RH_deaglem
7, RH_cz75
7, RH_sw659
7, RH_usp
7, RH_mak
7, RH_m1911
7, RH_kimber
7, RH_kimber_nw
7, RH_uspm
7, RH_m9
7, RH_m9c
7, RH_vz61
7, RH_g18
7, RH_g17
7, RH_tt33
7, RH_mk2
7, RH_p226
7, RH_p226s
7, RH_g19
7, RH_g19t
7, RH_vp70
7, RH_mateba
7, RH_python
7, RH_mp412
5, RH_bull
5, RH_bullb
5, RH_ttracker
5, RH_ttracker_g
7, RH_fnp45
7, RH_fnp45t
7, RH_fn57
7, RH_fn57_g
7, RH_fn57_t
7, RH_gsh18
7, RH_tec9
7, RH_muzi

// Pistol Magazines
7, 11Rnd_45ACP_Mag
7, 16Rnd_9x21_Mag
7, 30Rnd_9x21_Mag
7, 6Rnd_45ACP_Cylinder
7, 6Rnd_GreenSignal_F
7, 6Rnd_RedSignal_F
7, 9Rnd_45ACP_Mag
5, RH_7Rnd_50_AE
7, RH_16Rnd_9x19_cz
7, RH_14Rnd_9x19_sw
7, RH_12Rnd_45cal_usp
7, RH_8Rnd_9x18_Mak
7, RH_7Rnd_45cal_m1911
7, RH_16Rnd_40cal_usp
7, RH_15Rnd_9x19_M9
7, RH_20Rnd_32cal_vz61
7, RH_33Rnd_9x19_g18
7, RH_17Rnd_9x19_g17
7, RH_8Rnd_762_tt33
7, RH_10Rnd_22LR_mk2
7, RH_15Rnd_9x19_SIG
7, RH_18Rnd_9x19_VP
7, RH_6Rnd_44_Mag
7, RH_6Rnd_357_Mag
7, RH_6Rnd_454_Mag
7, RH_6Rnd_45ACP_Mag
7, RH_15Rnd_45cal_fnp
7, RH_20Rnd_57x28_FN
7, RH_18Rnd_9x19_gsh
7, RH_32Rnd_9x19_tec
7, RH_30Rnd_9x19_UZI

// Pistol Items
3, muzzle_snds_L
3, muzzle_snds_acp
3, optic_MRD
3, RH_demz
3, RH_gemtech9
3, RH_A26
3, RH_suppr9
3, RH_aacusp
3, RH_gemtech45
3, RH_osprey
3, RH_fhusp
3, RH_x2
3, RH_m6x
3, RH_x300
3, RH_pmsd
3, RH_pmir
3, RH_matchsd
3, RH_m9qd
3, RH_vp70stock
3, RH_docter
3, RH_sfn57
3, RH_tecsd
3, RH_muzisd

// SMG Ammo
5, 30Rnd_45ACP_Mag_SMG_01
5, 30Rnd_45ACP_Mag_SMG_01_Tracer_Green
5, hlc_30Rnd_9x19_B_MP5
5, hlc_30Rnd_9x19_GD_MP5
5, hlc_30Rnd_9x19_SD_MP5
5, hlc_30Rnd_10mm_B_MP5
5, hlc_30Rnd_10mm_JHP_MP5

// SMGs
6, SMG_01_F
6, SMG_02_F
6, hgun_PDW2000_F
6, hlc_smg_mp5a2
6, hlc_smg_mp5a3
6, hlc_smg_mp5a4
6, hlc_smg_mp5n
6, hlc_smg_mp510
6, hlc_smg_mp5sd5
6, hlc_smg_mp5sd6
6, hlc_smg_9mmar


// SMG Items
3, optic_Holosight_smg
3, optic_ACO_grn_smg
3, optic_Aco_smg
3, optic_ACO_grn
3, optic_Aco


// Backpacks
10, B_OutdoorPack_blk
10, B_OutdoorPack_tan
10, B_OutdoorPack_blu
10, B_HuntingBackpack
10, B_AssaultPack_khk
10, B_AssaultPack_dgtl
10, B_AssaultPack_rgr
10, B_AssaultPack_sgg
10, B_AssaultPack_blk
10, B_AssaultPack_cbr
10, B_AssaultPack_mcamo
10, B_Kitbag_mcamo
10, B_Kitbag_sgg
10, B_Kitbag_cbr
10, B_FieldPack_blk
10, B_FieldPack_ocamo
10, B_FieldPack_oucamo
10, B_FieldPack_cbr
10, B_Bergen_sgg
10, B_Bergen_mcamo
10, B_Bergen_rgr
10, B_Bergen_blk

// Rifles
3, arifle_Katiba_F
3, arifle_Katiba_GL_F
3, arifle_SDAR_F
3, arifle_TRG21_F
3, arifle_TRG20_F
3, RH_m4
3, RH_m4_m203
3, RH_m4_ris
3, RH_m4_ris_m203
3, RH_m4_ris_m203s
3, RH_m4a1_ris
3, RH_m4a1_ris_m203
3, RH_m4a1_ris_m203s

// Rifle Items
1, muzzle_snds_M
1, muzzle_snds_H
1, optic_Arco
1, optic_Hamr
1, optic_Holosight
1, acc_flashlight
1, acc_pointer_IR
1, optic_MRCO
1, optic_DMS
1, RH_eotech553
1, RH_eotech553mag
1, RH_eotech553_tan
1, RH_eotech553mag_tan
1, RH_eotexps3
1, RH_eotexps3_tan
1, RH_eothhs1
1, RH_eothhs1_tan
1, RH_compm4s
1, RH_compm2
1, RH_compm2l
1, RH_compm2_tan
1, RH_compm2l_tan
1, RH_t1
1, RH_t1_tan
1, RH_reflex
1, RH_shortdot
1, RH_m3lr
1, RH_ta01nsn
1, RH_ta01nsn_2D
1, RH_ta31rco
1, RH_ta31rco_2D
1, RH_ta31rmr
1, RH_ta31rmr_2D
1, RH_ta01nsn_tan
1, RH_ta01nsn_tan_2D
1, RH_ta31rco_tan
1, RH_ta31rco_tan_2D
1, RH_ta31rmr_tan
1, RH_ta31rmr_tan_2D
1, RH_ta648
1, RH_accupoint
1, RH_leu_mk4
1, RH_c79
1, RH_c79_2D
1, RH_m145
1, RH_barska_rds
1, RH_cmore
1, RH_LTdocter
1, RH_LTdocterl
1, RH_zpoint
1, RH_anpvs4
1, RH_anpvs10
1, RH_pas13cl
1, RH_pas13cm
1, RH_pas13cmg
1, RH_pas13ch
1, RH_peq15
1, RH_peq15_top
1, RH_peq15b
1, RH_peq15b_top
1, RH_peq2
1, RH_peq2_top
1, RH_SFM952V
1, RH_SFM952V_tan
1, RH_qdss_nt4
1, RH_qdss_nt4_tg
1, RH_qdss_nt4_des
1, RH_qdss_nt4_wdl
1, RH_saker
1, RH_saker_tg
1, RH_saker_des
1, RH_saker_wdl
1, RH_Saker762
1, RH_Saker762_tg
1, RH_Saker762_des
1, RH_Saker762_wdl
1, RH_fa556
1, RH_fa556_tg
1, RH_fa556_des
1, RH_fa556_wdl
1, RH_fa762
1, RH_fa762_tg
1, RH_fa762_des
1, RH_fa762_wdl
1, RH_spr_mbs
1, RH_spr_mbs_tg
1, RH_spr_mbs_des
1, RH_spr_mbs_wdl
1, RH_tundra
1, RH_tundra_tg
1, RH_tundra_des
1, RH_tundra_wdl
1, RH_m110sd
1, RH_m110sd_t


// Rifle Ammo
2, 20Rnd_556x45_UW_mag
2, 30Rnd_556x45_Stanag
2, 30Rnd_556x45_Stanag_Tracer_Green
2, 30Rnd_556x45_Stanag_Tracer_Red
2, 30Rnd_556x45_Stanag_Tracer_Yellow
2, 30Rnd_65x39_caseless_green
2, 30Rnd_65x39_caseless_green_mag_Tracer


// Items
5, Binocular
5, Exile_Item_CamoTentKit
5, Exile_Item_CookingPot
5, Exile_Item_DuctTape
5, Exile_Item_LightBulb
5, Exile_Item_Matches
5, Exile_Item_InstaDoc
5, ItemGPS

// Chem lights
20, Chemlight_blue
20, Chemlight_green
20, Chemlight_red
20, Chemlight_yellow

// Road flares
20, FlareGreen_F
20, FlareRed_F
20, FlareWhite_F
20, FlareYellow_F

// Uniforms
15, U_C_Poor_1
15, U_C_Poor_2
15, U_C_Poor_shorts_1
15, U_C_HunterBody_grn
15, U_C_Poloshirt_salmon
15, U_C_Poloshirt_tricolour
15, U_C_Poloshirt_stripped
15, U_C_Poloshirt_burgundy
15, U_C_Poloshirt_blue

// Guerilla Headgear
15, H_Booniehat_khk
15, H_Booniehat_indp
15, H_Booniehat_mcamo
15, H_Booniehat_grn
15, H_Booniehat_tan
15, H_Booniehat_dirty
15, H_Booniehat_dgtl
15, H_Booniehat_khk_hs

15, H_Bandanna_khk
15, H_Bandanna_khk_hs
15, H_Bandanna_cbr
15, H_Bandanna_sgg
15, H_Bandanna_gry
15, H_Bandanna_camo
15, H_Bandanna_mcamo
15, H_BandMask_blk

15, H_Beret_blk
15, H_Beret_red
15, H_Beret_grn
15, H_Beret_grn_SF
15, H_Beret_brn_SF
15, H_Beret_ocamo
15, H_Beret_02
15, H_Beret_Colonel

15, H_Hat_camo
15, H_Cap_brn_SPECOPS
15, H_Cap_tan_specops_US
15, H_Cap_khaki_specops_UK
15, H_Watchcap_blk
15, H_Watchcap_khk
15, H_Watchcap_camo
15, H_Watchcap_sgg
15, H_TurbanO_blk

15, H_Shemag_khk
15, H_Shemag_tan
15, H_Shemag_olive
15, H_Shemag_olive_hs
15, H_ShemagOpen_khk
15, H_ShemagOpen_tan

15, U_PMC_GTShirt_DJeans
15, U_PMC_GTShirt_SJeans
15, U_PMC_BlkTShirt_DJeans
15, U_PMC_BlkTShirt_SJeans
15, U_PMC_BluTShirt_SJeans
15, U_PMC_WTShirt_DJeans
15, U_PMC_BluePlaidShirt_BeigeCords
15, U_PMC_RedPlaidShirt_DenimCords
15, U_PMC_BlackPoloShirt_BeigeCords

// Guerilla Vests
10, V_BandollierB_khk
10, V_BandollierB_cbr
10, V_BandollierB_rgr
10, V_BandollierB_blk
10, V_BandollierB_oli
10, V_Chestrig_khk
10, V_Chestrig_rgr
10, V_Chestrig_blk
10, V_Chestrig_oli
10, V_HarnessO_brn
10, V_HarnessOGL_brn
10, V_HarnessO_gry
10, V_HarnessOGL_gry
10, V_HarnessOSpec_brn
10, V_HarnessOSpec_gry

10, V_I_G_resistanceLeader_F

// Guerilla Uniforms
15, U_IG_Guerilla1_1
15, U_IG_Guerilla2_1
15, U_IG_Guerilla2_2
15, U_IG_Guerilla2_3
15, U_IG_Guerilla3_1
15, U_IG_Guerilla3_2

15, U_IG_leader
15, U_I_G_resistanceLeader_F

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> CivillianUpperClass

25, Exile_Item_PlasticBottleEmpty
10, Exile_Item_PlasticBottleFreshWater
10, Exile_Item_Energydrink
10, Exile_Item_Beer
20, Exile_Item_GloriousKnakworst
20, Exile_Item_SausageGravy
20, Exile_Item_ChristmasTinner
20, Exile_Item_BBQSandwich
20, Exile_Item_Surstromming
20, Exile_Item_Catfood
10, Exile_Item_ChristmasTinner_Cooked
10, Exile_Item_BBQSandwich_Cooked
10, Exile_Item_GloriousKnakworst_Cooked
10, Exile_Item_SausageGravy_Cooked
10, Exile_Item_Surstromming_Cooked
25, Exile_Item_Catfood_Cooked

// Pistols
7, hgun_ACPC2_F
7, hgun_P07_F
7, hgun_Rook40_F
5, hgun_Pistol_heavy_01_F
5, hgun_Pistol_heavy_02_F
5, hgun_Pistol_Signal_F
5, RH_deagle
5, RH_deagleg
5, RH_deagles
5, RH_deaglem
7, RH_cz75
7, RH_sw659
7, RH_usp
7, RH_mak
7, RH_m1911
7, RH_kimber
7, RH_kimber_nw
7, RH_uspm
7, RH_m9
7, RH_m9c
7, RH_vz61
7, RH_g18
7, RH_g17
7, RH_tt33
7, RH_mk2
7, RH_p226
7, RH_p226s
7, RH_g19
7, RH_g19t
7, RH_vp70
7, RH_mateba
7, RH_python
7, RH_mp412
5, RH_bull
5, RH_bullb
5, RH_ttracker
5, RH_ttracker_g
7, RH_fnp45
7, RH_fnp45t
7, RH_fn57
7, RH_fn57_g
7, RH_fn57_t
7, RH_gsh18
7, RH_tec9
7, RH_muzi

// Pistol Magazines
7, 11Rnd_45ACP_Mag
7, 16Rnd_9x21_Mag
7, 30Rnd_9x21_Mag
7, 6Rnd_45ACP_Cylinder
7, 6Rnd_GreenSignal_F
7, 6Rnd_RedSignal_F
7, 9Rnd_45ACP_Mag
7, RH_7Rnd_50_AE
7, RH_16Rnd_9x19_cz
7, RH_14Rnd_9x19_sw
7, RH_12Rnd_45cal_usp
7, RH_8Rnd_9x18_Mak
7, RH_7Rnd_45cal_m1911
7, RH_16Rnd_40cal_usp
7, RH_15Rnd_9x19_M9
7, RH_20Rnd_32cal_vz61
7, RH_33Rnd_9x19_g18
7, RH_17Rnd_9x19_g17
7, RH_8Rnd_762_tt33
7, RH_10Rnd_22LR_mk2
7, RH_15Rnd_9x19_SIG
7, RH_18Rnd_9x19_VP
7, RH_6Rnd_44_Mag
7, RH_6Rnd_357_Mag
7, RH_6Rnd_454_Mag
7, RH_6Rnd_45ACP_Mag
7, RH_15Rnd_45cal_fnp
7, RH_20Rnd_57x28_FN
7, RH_18Rnd_9x19_gsh
7, RH_32Rnd_9x19_tec
7, RH_30Rnd_9x19_UZI

// Pistol Items
3, muzzle_snds_L
3, muzzle_snds_acp
3, optic_Yorris
3, optic_MRD
3, RH_demz
3, RH_gemtech9
3, RH_A26
3, RH_suppr9
3, RH_aacusp
3, RH_gemtech45
3, RH_osprey
3, RH_fhusp
3, RH_x2
3, RH_m6x
3, RH_x300
3, RH_pmsd
3, RH_pmir
3, RH_matchsd
3, RH_m9qd
3, RH_vp70stock
3, RH_docter
3, RH_sfn57
3, RH_tecsd
3, RH_muzisd

// Backpacks
20, B_OutdoorPack_blk
20, B_OutdoorPack_tan
20, B_OutdoorPack_blu
20, B_HuntingBackpack

// Uniforms
15, U_C_Poloshirt_salmon
15, U_C_Poloshirt_tricolour
15, U_C_Poloshirt_stripped
15, U_C_Poloshirt_burgundy
15, U_C_Poloshirt_blue
15, U_PMC_BluePlaidShirt_BeigeCords
15, U_PMC_RedPlaidShirt_DenimCords
15, U_PMC_BlackPoloShirt_BeigeCords
15, U_PMC_BluPolo_BgPants
15, U_PMC_BgPolo_GrnPants
15, U_PMC_BlckPolo_BgPants
15, U_PMC_BlckPolo_BluPants
15, U_PMC_BluPolo_GrnPants
15, U_PMC_BrnPolo_BgPants
15, U_PMC_BrnPolo_BluPants
15, U_PMC_GrnPolo_BgPants
15, U_PMC_WhtPolo_BgPants
15, U_PMC_WhtPolo_BluPants
15, U_PMC_WhtPolo_GrnPants
15, U_PMC_CombatUniformRS_BSGPBB
15, U_PMC_CombatUniformRS_BSGPSB
15, U_PMC_CombatUniformRS_BSSPBB
15, U_PMC_CombatUniformRS_BSSPSB
15, U_PMC_CombatUniformRS_GSBPBB
15, U_PMC_CombatUniformRS_GSSPBB
15, U_PMC_CombatUniformRS_IndPBSBB
15, U_PMC_CombatUniformRS_SSBPBB
15, U_PMC_CombatUniformRS_SSGPBB
15, U_PMC_CombatUniformRS_SSGPSB
15, U_PMC_CombatUniformRS_ChckDBS_GPSB
15, U_PMC_CombatUniformRS_ChckLB_GPBB
15, U_PMC_CombatUniformRS_ChckLR_SPBB
15, U_PMC_CombatUniformRS_ChckP_BPBB
15, U_PMC_CombatUniformLS_BSGPBB
15, U_PMC_CombatUniformLS_BSGPSB
15, U_PMC_CombatUniformLS_BSSPBB
15, U_PMC_CombatUniformLS_BSSPSB
15, U_PMC_CombatUniformLS_GSBPBB
15, U_PMC_CombatUniformLS_GSSPBB
15, U_PMC_CombatUniformLS_IndPBSBB
15, U_PMC_CombatUniformLS_SSBPBB
15, U_PMC_CombatUniformLS_SSGPBB
15, U_PMC_CombatUniformLS_SSGPSB
15, U_PMC_CombatUniformLS_ChckDBS_GPSB
15, U_PMC_CombatUniformLS_ChckLB_GPBB
15, U_PMC_CombatUniformLS_ChckLR_SPBB
15, U_PMC_CombatUniformLS_ChckP_BPBB

15, U_C_Journalist
15, U_C_Scientist
15, U_Rangemaster

15, U_OrestesBody
15, U_NikosBody
15, U_NikosAgedBody

// Vests
8, V_Rangemaster_belt
8, V_Press_F
8, V_TacVest_blk_POLICE

// Headgear
10, H_Bandanna_surfer
10, H_Beret_blk_POLICE
10, H_Cap_blk
10, H_Cap_blk_Raven
10, H_Cap_blu
10, H_Cap_grn
10, H_Cap_headphones
10, H_Cap_oli
10, H_Cap_press
10, H_Cap_red
10, H_Cap_tan
10, H_Hat_blue
10, H_Hat_brown
10, H_Hat_checker
10, H_Hat_grey
10, H_Hat_tan
10, H_StrawHat
10, H_StrawHat_dark

// Rifles
4, arifle_Katiba_F
4, arifle_MXC_F
4, arifle_MX_F
4, arifle_MX_GL_F
4, arifle_MXM_F
4, arifle_SDAR_F
4, arifle_TRG21_F
4, arifle_TRG20_F
4, arifle_Mk20_F
4, arifle_Mk20C_F


// Rifle Items
2, muzzle_snds_M
2, muzzle_snds_H
2, optic_Arco
2, optic_Hamr
2, optic_Holosight
2, acc_flashlight
2, acc_pointer_IR
2, optic_MRCO
2, optic_DMS


// Rifle Ammo
3, 20Rnd_556x45_UW_mag
3, 30Rnd_556x45_Stanag
3, 30Rnd_556x45_Stanag_Tracer_Green
3, 30Rnd_556x45_Stanag_Tracer_Red
3, 30Rnd_556x45_Stanag_Tracer_Yellow
3, 30Rnd_65x39_caseless_green
3, 30Rnd_65x39_caseless_green_mag_Tracer
3, 30Rnd_65x39_caseless_mag
3, 30Rnd_65x39_caseless_mag_Tracer
3, 29rnd_300BLK_STANAG
3, 29rnd_300BLK_STANAG_T
3, 29rnd_300BLK_STANAG_S


///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
> Shop

// Smoke Nades
5, SmokeShell
5, SmokeShellRed
5, SmokeShellGreen
5, SmokeShellYellow
5, SmokeShellPurple
5, SmokeShellBlue
5, SmokeShellOrange
5, hlc_GRD_White
5, hlc_GRD_red
5, hlc_GRD_green
5, hlc_GRD_blue
5, hlc_GRD_orange
5, hlc_GRD_purple

// Pistols
5, hgun_ACPC2_F
5, hgun_Rook40_F
5, hgun_P07_F
5, hgun_Pistol_heavy_01_F
5, hgun_Pistol_heavy_02_F
5, hgun_Pistol_Signal_F
5, RH_deagle
5, RH_deagleg
5, RH_deagles
5, RH_deaglem
5, RH_cz75
5, RH_sw659
5, RH_usp
5, RH_mak
5, RH_m1911
5, RH_kimber
5, RH_kimber_nw
5, RH_uspm
5, RH_m9
5, RH_m9c
5, RH_vz61
5, RH_g18
5, RH_g17
5, RH_tt33
5, RH_mk2
5, RH_p226
5, RH_p226s
5, RH_g19
5, RH_g19t
5, RH_vp70
5, RH_mateba
5, RH_python
5, RH_mp412
5, RH_bull
5, RH_bullb
5, RH_ttracker
5, RH_ttracker_g
5, RH_fnp45
5, RH_fnp45t
5, RH_fn57
5, RH_fn57_g
5, RH_fn57_t
5, RH_gsh18
5, RH_tec9
5, RH_muzi

// Pistol Magazines
5, 11Rnd_45ACP_Mag
5, 16Rnd_9x21_Mag
5, 30Rnd_9x21_Mag
5, 6Rnd_45ACP_Cylinder
5, 6Rnd_GreenSignal_F
5, 6Rnd_RedSignal_F
5, 9Rnd_45ACP_Mag
5, RH_7Rnd_50_AE
5, RH_16Rnd_9x19_cz
5, RH_14Rnd_9x19_sw
5, RH_12Rnd_45cal_usp
5, RH_8Rnd_9x18_Mak
5, RH_7Rnd_45cal_m1911
5, RH_16Rnd_40cal_usp
5, RH_15Rnd_9x19_M9
5, RH_20Rnd_32cal_vz61
5, RH_33Rnd_9x19_g18
5, RH_17Rnd_9x19_g17
5, RH_8Rnd_762_tt33
5, RH_10Rnd_22LR_mk2
5, RH_15Rnd_9x19_SIG
5, RH_18Rnd_9x19_VP
5, RH_6Rnd_44_Mag
5, RH_6Rnd_357_Mag
5, RH_6Rnd_454_Mag
5, RH_6Rnd_45ACP_Mag
5, RH_15Rnd_45cal_fnp
5, RH_20Rnd_57x28_FN
5, RH_18Rnd_9x19_gsh
5, RH_32Rnd_9x19_tec
5, RH_30Rnd_9x19_UZI

// Pistol Items
2, muzzle_snds_L
2, muzzle_snds_acp
2, optic_Yorris
2, optic_MRD
2, RH_demz
2, RH_gemtech9
2, RH_A26
2, RH_suppr9
2, RH_aacusp
2, RH_gemtech45
2, RH_osprey
2, RH_fhusp
2, RH_x2
2, RH_m6x
2, RH_x300
2, RH_pmsd
2, RH_pmir
2, RH_matchsd
2, RH_m9qd
2, RH_vp70stock
2, RH_docter
2, RH_sfn57
2, RH_tecsd
2, RH_muzisd


25, Exile_Item_PlasticBottleEmpty
20, Exile_Item_PlasticBottleFreshWater
20, Exile_Item_Energydrink
20, Exile_Item_Beer
20, Exile_Item_GloriousKnakworst
20, Exile_Item_SausageGravy
20, Exile_Item_ChristmasTinner
20, Exile_Item_BBQSandwich
20, Exile_Item_Surstromming
20, Exile_Item_Catfood

10, Exile_Item_ChristmasTinner_Cooked
10, Exile_Item_BBQSandwich_Cooked
10, Exile_Item_GloriousKnakworst_Cooked
10, Exile_Item_SausageGravy_Cooked
10, Exile_Item_Surstromming_Cooked
10, Exile_Item_Catfood_Cooked

20, Binocular
20, Exile_Item_CamoTentKit
20, Exile_Item_CookingPot
20, Exile_Item_DuctTape
20, Exile_Item_LightBulb
20, Exile_Item_Matches
20, Exile_Item_InstaDoc
20, ItemGPS

///////////////////////////////////////////////////////////////////////////////
// Factories, Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> Industrial

60, Exile_Item_DuctTape
35, Exile_Item_ExtensionCord
25, Exile_Item_FloodLightKit
30, Exile_Item_FuelCanisterEmpty
35, Exile_Item_FuelCanisterFull
35, Exile_Item_JunkMetal
35, Exile_Item_LightBulb
35, Exile_Item_MetalBoard
35, Exile_Item_PortableGeneratorKit
15, Exile_Item_Rope
25, Exile_Magazine_Battery
30, Exile_Melee_Axe

///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleService

45, Exile_Item_DuctTape
35, Exile_Item_FuelCanisterEmpty
10, Exile_Item_FuelCanisterFull
20, Exile_Item_JunkMetal
20, Exile_Item_LightBulb
20, Exile_Item_MetalBoard
30, Exile_Magazine_Battery

///////////////////////////////////////////////////////////////////////////////
// Towers, Barracks, Hangars etc.
///////////////////////////////////////////////////////////////////////////////
> Military

// LMGs
3, arifle_MX_SW_Black_F
3, arifle_MX_SW_F
3, LMG_Mk200_F
3, LMG_Zafir_F
2, hlc_lmg_M60E4
3, hlc_lmg_minimipara
3, hlc_lmg_minimi
3, hlc_lmg_minimi_railed
3, hlc_lmg_m249para
3, hlc_lmg_M249E2
3, hlc_m249_pip1
3, hlc_m249_pip2
3, hlc_m249_pip3
3, hlc_m249_pip4

// LMG Ammo
2, 100Rnd_65x39_caseless_mag
2, 100Rnd_65x39_caseless_mag_Tracer
2, 150Rnd_762x54_Box
2, 150Rnd_762x54_Box_Tracer
2, 200Rnd_65x39_Belt
2, 200Rnd_65x39_Belt_Tracer_Red
2, 130Rnd_338_Mag
2, 150Rnd_93x64_Mag
2, hlc_100Rnd_762x51_B_M60E4
2, hlc_100Rnd_762x51_T_M60E4
2, hlc_100Rnd_762x51_M_M60E4
2, hlc_200rnd_556x45_M_SAW
2, hlc_200rnd_556x45_T_SAW
2, hlc_200rnd_556x45_B_SAW


// Rifles
5, arifle_Katiba_F
5, arifle_Katiba_GL_F
5, arifle_MXC_F
5, arifle_MX_F
5, arifle_MX_GL_F
5, arifle_MXM_F
5, arifle_MXM_Black_F
5, arifle_SDAR_F
5, arifle_TRG21_F
5, arifle_TRG20_F
5, arifle_TRG21_GL_F
5, arifle_Mk20_F
5, arifle_Mk20C_F
5, arifle_Mk20_GL_F
5, arifle_MXC_Black_F
5, arifle_MX_Black_F
5, arifle_MX_GL_Black_F
4, hlc_rifle_ak74
4, hlc_rifle_aks74
4, hlc_rifle_aks74u
4, hlc_rifle_ak47
4, hlc_rifle_akm
4, hlc_rifle_rpk
4, hlc_rifle_ak12
4, hlc_rifle_akmgl
4, hlc_rifle_aks74_GL
4, hlc_rifle_RU556
4, hlc_rifle_RU5562
4, hlc_rifle_Colt727
4, hlc_rifle_Colt727_GL
4, hlc_rifle_bcmjack
4, hlc_rifle_Bushmaster300
4, hlc_rifle_vendimus
4, hlc_rifle_SAMR
4, hlc_rifle_honeybase
4, hlc_rifle_honeybadger
4, hlc_rifle_aug
4, hlc_rifle_auga1_t
4, hlc_rifle_auga1_B
4, hlc_rifle_auga1carb
4, hlc_rifle_auga1carb_t
4, hlc_rifle_auga1carb_b
4, hlc_rifle_aughbar
4, hlc_rifle_aughbar_b
4, hlc_rifle_aughbar_t
4, hlc_rifle_augpara
4, hlc_rifle_augpara_b
4, hlc_rifle_augpara_t
4, hlc_rifle_auga2
4, hlc_rifle_auga2_b
4, hlc_rifle_auga2_t
4, hlc_rifle_auga2carb
4, hlc_rifle_auga2carb_t
4, hlc_rifle_auga2carb_b
4, hlc_rifle_auga2lsw
4, hlc_rifle_auga2lsw_t
4, hlc_rifle_auga2lsw_b
4, hlc_rifle_auga2para
4, hlc_rifle_auga2para_b
4, hlc_rifle_auga2para_t
4, hlc_rifle_augsr
4, hlc_rifle_augsr_b
4, hlc_rifle_augsr_t
4, hlc_rifle_augsrcarb
4, hlc_rifle_augsrcarb_t
4, hlc_rifle_augsrcarb_b
4, hlc_rifle_augsrhbar
4, hlc_rifle_augsrhbar_b
4, hlc_rifle_augsrhbar_t
4, hlc_rifle_auga3
4, hlc_rifle_auga3_bl
4, hlc_rifle_auga3_b
4, hlc_rifle_auga3_GL
4, hlc_rifle_auga3_GL_BL
4, hlc_rifle_auga3_GL_B
4, RH_m4
4, RH_m4_m203
4, RH_m4_ris
4, RH_m4_ris_m203
4, RH_m4_ris_m203s
4, RH_m4a1_ris
4, RH_m4a1_ris_m203
4, RH_m4a1_ris_m203s
4, RH_m4sbr
4, RH_m4sbr_g
4, RH_m4sbr_b
4, RH_m16a1
4, RH_m16a1gl
4, RH_m16a2
4, RH_m16a2gl
4, RH_m16a3
4, RH_m16a4
4, RH_m16a4gl
4, RH_m16a4_m
4, RH_mk12mod1
4, RH_samr
4, RH_m4m
4, RH_m4m_g
4, RH_m4m_b
4, RH_m4_moe
4, RH_m4_moe_g
4, RH_m4_moe_b
4, RH_m4a6
4, RH_m16a6
4, RH_hb
4, RH_hb_b
4, RH_hk416
4, RH_hk416c
4, RH_hk416s
4, RH_m27iar
4, RH_ar10
4, RH_mk11
4, RH_m110
4, RH_sr25ec
4, RH_sbr9
4, RH_m4_tg
4, RH_m4_des
4, RH_m4_wdl
4, RH_m4_m203_tg
4, RH_m4_m203_des
4, RH_m4_m203_wdl
4, RH_m4a1_ris_tg
4, RH_m4a1_ris_des
4, RH_m4a1_ris_wdl
4, RH_m4a1_ris_m203_tg
4, RH_m4a1_ris_m203_des
4, RH_m4a1_ris_m203_wdl
4, RH_m4a1_ris_m203s_tg
4, RH_m4a1_ris_m203s_des
4, RH_m4a1_ris_m203s_wdl
4, RH_m4_ris_m_tg
4, RH_m4_ris_m_des
4, RH_m4_ris_m_wdl
4, RH_m4a6_tg
4, RH_m4a6_des
4, RH_m4a6_wdl
4, RH_m16a4_tg
4, RH_m16a4_des
4, RH_m16a4_wdl
4, RH_m16a4gl_tg
4, RH_m16a4gl_des
4, RH_m16a4gl_wdl
4, RH_m16a4_m_tg
4, RH_m16a4_m_des
4, RH_m16a4_m_wdl
4, RH_hk416_tg
4, RH_hk416_des
4, RH_hk416_wdl
4, RH_hk416s_tg
4, RH_hk416s_des
4, RH_hk416s_wdl
4, RH_hk416c_tg
4, RH_hk416c_des
4, RH_hk416c_wdl
4, RH_m27iar_tg
4, RH_m27iar_des
4, RH_m27iar_wdl
4, RH_m16a6_tg
4, RH_m16a6_des
4, RH_m16a6_wdl
4, RH_Mk12mod1_tg
4, RH_Mk12mod1_des
4, RH_Mk12mod1_wdl
4, RH_SAMR_tg
4, RH_SAMR_des
4, RH_SAMR_wdl
4, RH_sbr9_tg
4, RH_sbr9_des
4, RH_sbr9_wdl

// Rifle Items
1, muzzle_snds_M
1, muzzle_snds_H
1, optic_Arco
1, optic_Hamr
1, optic_Holosight
1, acc_pointer_IR
1, optic_MRCO
1, acc_flashlight
1, HLC_Optic_PSO1
1, HLC_Optic_1p29
1, hlc_optic_kobra
1, hlc_muzzle_545SUP_AK
1, hlc_muzzle_762SUP_AK
1, hlc_muzzle_556NATO_KAC
1, hlc_muzzle_300blk_KAC
1, hlc_muzzle_snds_AUG
1, hlc_muzzle_snds_a6AUG
1, RH_eotech553
1, RH_eotech553mag
1, RH_eotech553_tan
1, RH_eotech553mag_tan
1, RH_eotexps3
1, RH_eotexps3_tan
1, RH_eothhs1
1, RH_eothhs1_tan
1, RH_compm4s
1, RH_compm2
1, RH_compm2l
1, RH_compm2_tan
1, RH_compm2l_tan
1, RH_t1
1, RH_t1_tan
1, RH_reflex
1, RH_shortdot
1, RH_m3lr
1, RH_ta01nsn
1, RH_ta01nsn_2D
1, RH_ta31rco
1, RH_ta31rco_2D
1, RH_ta31rmr
1, RH_ta31rmr_2D
1, RH_ta01nsn_tan
1, RH_ta01nsn_tan_2D
1, RH_ta31rco_tan
1, RH_ta31rco_tan_2D
1, RH_ta31rmr_tan
1, RH_ta31rmr_tan_2D
1, RH_ta648
1, RH_accupoint
1, RH_leu_mk4
1, RH_c79
1, RH_c79_2D
1, RH_m145
1, RH_barska_rds
1, RH_cmore
1, RH_LTdocter
1, RH_LTdocterl
1, RH_zpoint
1, RH_anpvs4
1, RH_anpvs10
1, RH_pas13cl
1, RH_pas13cm
1, RH_pas13cmg
1, RH_pas13ch
1, RH_peq15
1, RH_peq15_top
1, RH_peq15b
1, RH_peq15b_top
1, RH_peq2
1, RH_peq2_top
1, RH_SFM952V
1, RH_SFM952V_tan
1, RH_qdss_nt4
1, RH_qdss_nt4_tg
1, RH_qdss_nt4_des
1, RH_qdss_nt4_wdl
1, RH_saker
1, RH_saker_tg
1, RH_saker_des
1, RH_saker_wdl
1, RH_Saker762
1, RH_Saker762_tg
1, RH_Saker762_des
1, RH_Saker762_wdl
1, RH_fa556
1, RH_fa556_tg
1, RH_fa556_des
1, RH_fa556_wdl
1, RH_fa762
1, RH_fa762_tg
1, RH_fa762_des
1, RH_fa762_wdl
1, RH_spr_mbs
1, RH_spr_mbs_tg
1, RH_spr_mbs_des
1, RH_spr_mbs_wdl
1, RH_tundra
1, RH_tundra_tg
1, RH_tundra_des
1, RH_tundra_wdl
1, RH_m110sd
1, RH_m110sd_t
1, RH_HBLM
1, RH_HBLM_tg
1, RH_HBLM_des
1, RH_HBLM_wdl
1, RH_TD_ACB
1, RH_TD_ACB_g
1, RH_TD_ACB_b

// Rifle Ammo
2, 20Rnd_556x45_UW_mag
2, 30Rnd_556x45_Stanag
2, 30Rnd_556x45_Stanag_Tracer_Green
2, 30Rnd_556x45_Stanag_Tracer_Red
2, 30Rnd_556x45_Stanag_Tracer_Yellow
2, 30Rnd_65x39_caseless_green
2, 30Rnd_65x39_caseless_green_mag_Tracer
2, 30Rnd_65x39_caseless_mag
2, 30Rnd_65x39_caseless_mag_Tracer
2, 29rnd_300BLK_STANAG
2, 29rnd_300BLK_STANAG_T
2, 29rnd_300BLK_STANAG_S
2, hlc_30rnd_556x45_EPR
2, hlc_30rnd_556x45_SOST
2, hlc_30rnd_556x45_SPR
2, hlc_30Rnd_545x39_B_AK
2, hlc_30Rnd_545x39_T_AK
2, hlc_30Rnd_545x39_EP_AK
2, hlc_45Rnd_545x39_t_rpk
2, hlc_30Rnd_762x39_b_ak
2, hlc_30Rnd_762x39_t_ak
2, hlc_45Rnd_762x39_t_rpk
2, hlc_45Rnd_762x39_m_rpk
2, hlc_30Rnd_556x45_B_AUG
2, hlc_30Rnd_556x45_SOST_AUG
2, hlc_30Rnd_556x45_SPR_AUG
2, hlc_30Rnd_556x45_T_AUG
2, hlc_40Rnd_556x45_B_AUG
2, hlc_40Rnd_556x45_SOST_AUG
2, hlc_40Rnd_556x45_SPR_AUG
2, hlc_25Rnd_9x19mm_M882_AUG
2, hlc_25Rnd_9x19mm_JHP_AUG
2, hlc_25Rnd_9x19mm_subsonic_AUG
2, RH_30Rnd_556x45_M855A1
2, RH_30Rnd_556x45_Mk262
2, RH_30Rnd_556x45_Mk318
2, RH_20Rnd_556x45_M855A1
2, RH_20Rnd_556x45_Mk262
2, RH_20Rnd_556x45_Mk318
2, RH_60Rnd_556x45_M855A1
2, RH_60Rnd_556x45_Mk262
2, RH_60Rnd_556x45_Mk318
2, RH_30Rnd_68x43_FMJ
2, RH_30Rnd_68x43_Match
2, RH_30Rnd_762x35_FMJ
2, RH_30Rnd_762x35_Match
2, RH_30Rnd_762x35_MSB
2, RH_20Rnd_762x51_M80A1
2, RH_20Rnd_762x51_Mk316LR
2, RH_20Rnd_762x51_Mk319
2, RH_20Rnd_762x51_LFMJSB
2, RH_20Rnd_762x51_AR10
2, RH_32Rnd_9mm_M822
2, RH_32Rnd_9mm_HP
2, RH_32Rnd_9mm_HPSB

// Snipers
2, srifle_DMR_01_F
2, srifle_EBR_F
2, srifle_GM6_F
2, srifle_LRR_F
2, hlc_rifle_l1a1slr
2, hlc_rifle_SLR
2, hlc_rifle_STG58F
2, hlc_rifle_FAL5061
2, hlc_rifle_c1A1
2, hlc_rifle_LAR
2, hlc_rifle_SLRchopmod
2, hlc_rifle_falosw
2, hlc_rifle_osw_GL
2, hlc_rifle_g3sg1
2, hlc_rifle_psg1
2, hlc_rifle_g3a3
2, hlc_rifle_g3ka4
2, HLC_Rifle_g3ka4_GL
2, hlc_rifle_hk51
2, hlc_rifle_hk53
2, hlc_rifle_M14
2, hlc_rifle_M21
2, hlc_rifle_M14DMR
2, hlc_rifle_m14sopmod
2, hlc_rifle_awcovert
2, hlc_rifle_awcovert_BL
2, hlc_rifle_awcovert_FDE
2, hlc_rifle_awmagnum
2, hlc_rifle_awmagnum_BL
2, hlc_rifle_awmagnum_FDE
2, hlc_rifle_awMagnum_FDE_ghillie
2, hlc_rifle_awMagnum_BL_ghillie
2, hlc_rifle_awMagnum_OD_ghillie

// Sniper Ammo
3, 5Rnd_127x108_Mag
3, 7Rnd_408_Mag
3, 10Rnd_762x51_Mag
3, 20Rnd_762x51_Mag
3, 5Rnd_127x108_APDS_Mag
3, hlc_5rnd_300WM_FMJ_AWM
3, hlc_5rnd_300WM_AP_AWM
3, hlc_5rnd_300WM_BTSP_AWM
3, hlc_5rnd_300WM_mk248_AWM
3, hlc_5rnd_300WM_SBT_AWM
3, hlc_20Rnd_762x51_B_G3
3, hlc_20rnd_762x51_T_G3
3, hlc_50rnd_762x51_M_G3
3, hlc_20Rnd_762x51_B_M14
3, hlc_20rnd_762x51_T_M14
3, hlc_50rnd_762x51_M_M14
3, hlc_20Rnd_762x51_B_fal
3, hlc_20Rnd_762x51_t_fal
3, hlc_20Rnd_762x51_S_fal
3, hlc_50rnd_762x51_M_FAL

// Sniper Items
1, muzzle_snds_B
1, optic_DMS
1, optic_SOS
1, optic_LRPS
1, hlc_optic_artel_m14
1, hlc_optic_LRT_m14
1, hlc_optic_suit
1, HLC_Optic_ZFSG1
1, hlc_optic_accupoint_g3
1, hlc_muzzle_snds_HK33
1, hlc_muzzle_snds_G3
1, hlc_muzzle_snds_M14
1, hlc_muzzle_snds_fal

// Noob Tube Nades
2, 1Rnd_HE_Grenade_shell
2, 3Rnd_HE_Grenade_shell
2, hlc_VOG25_AK

// Smoke Nades
2, SmokeShell
2, SmokeShellRed
2, SmokeShellGreen
2, SmokeShellYellow
2, SmokeShellPurple
2, SmokeShellBlue
2, SmokeShellOrange
2, hlc_GRD_White
2, hlc_GRD_red
2, hlc_GRD_green
2, hlc_GRD_blue
2, hlc_GRD_orange
2, hlc_GRD_purple

// Noob Tube Flares
3, 3Rnd_UGL_FlareGreen_F
3, 3Rnd_UGL_FlareRed_F
3, 3Rnd_UGL_FlareWhite_F
3, 3Rnd_UGL_FlareYellow_F
3, UGL_FlareGreen_F
3, UGL_FlareRed_F
3, UGL_FlareWhite_F
3, UGL_FlareYellow_F

// Noob Tube Smokes
3, 1Rnd_Smoke_Grenade_shell
3, 1Rnd_SmokeBlue_Grenade_shell
3, 1Rnd_SmokeGreen_Grenade_shell
3, 1Rnd_SmokeOrange_Grenade_shell
3, 1Rnd_SmokePurple_Grenade_shell
3, 1Rnd_SmokeRed_Grenade_shell
3, 1Rnd_SmokeYellow_Grenade_shell
3, 3Rnd_Smoke_Grenade_shell
3, 3Rnd_SmokeBlue_Grenade_shell
3, 3Rnd_SmokeGreen_Grenade_shell
3, 3Rnd_SmokeOrange_Grenade_shell
3, 3Rnd_SmokePurple_Grenade_shell
3, 3Rnd_SmokeRed_Grenade_shell
3, 3Rnd_SmokeYellow_Grenade_shell

// Explosives
2, HandGrenade
2, MiniGrenade

// Items
5, Binocular
5, ItemRadio
5, ItemGPS
5, NVGoggles
5, Exile_Item_InstaDoc

// Backpacks
5, B_OutdoorPack_blk
5, B_OutdoorPack_tan
5, B_OutdoorPack_blu
5, B_HuntingBackpack
5, B_AssaultPack_khk
5, B_AssaultPack_dgtl
5, B_AssaultPack_rgr
5, B_AssaultPack_sgg
5, B_AssaultPack_blk
5, B_AssaultPack_cbr
5, B_AssaultPack_mcamo

5, B_Kitbag_mcamo
5, B_Kitbag_sgg
5, B_Kitbag_cbr

5, B_FieldPack_blk
5, B_FieldPack_ocamo
5, B_FieldPack_oucamo
5, B_FieldPack_cbr

5, B_Bergen_sgg
5, B_Bergen_mcamo
5, B_Bergen_rgr
5, B_Bergen_blk

// Headgear
3, H_MilCap_ocamo
3, H_MilCap_mcamo
3, H_MilCap_oucamo
3, H_MilCap_blue
3, H_MilCap_rucamo
3, H_MilCap_dgtl
3, H_HelmetB
3, H_HelmetB_paint
3, H_HelmetB_light
3, H_HelmetB_plain_blk
3, H_HelmetSpecB
3, H_HelmetSpecB_paint1
3, H_HelmetSpecB_paint2
3, H_HelmetSpecB_blk
3, H_HelmetIA
3, H_HelmetIA_net
3, H_HelmetIA_camo
3, H_HelmetB_grass
3, H_HelmetB_snakeskin
3, H_HelmetB_desert
3, H_HelmetB_black
3, H_HelmetB_sand
3, H_HelmetB_light_grass
3, H_HelmetB_light_snakeskin
3, H_HelmetB_light_desert
3, H_HelmetB_light_black
3, H_HelmetB_light_sand

3, H_HelmetCrew_O
3, H_HelmetCrew_I
3, H_HelmetCrew_B
3, H_PilotHelmetFighter_B
3, H_PilotHelmetFighter_O
3, H_PilotHelmetFighter_I

3, H_PilotHelmetHeli_B
3, H_PilotHelmetHeli_O
3, H_PilotHelmetHeli_I

3, H_HelmetB_camo

3, H_CrewHelmetHeli_B
3, H_CrewHelmetHeli_O
3, H_CrewHelmetHeli_I

3, H_BandMask_khk
3, H_BandMask_reaper
3, H_BandMask_demon

3, H_HelmetO_oucamo
3, H_HelmetLeaderO_oucamo
3, H_HelmetSpecO_ocamo
3, H_HelmetSpecO_blk
3, H_HelmetO_ocamo
3, H_HelmetLeaderO_ocamo

// Vests
5, V_Rangemaster_belt
5, V_PlateCarrier1_blk
5, V_PlateCarrier1_rgr
5, V_PlateCarrier2_rgr
5, V_PlateCarrier3_rgr
5, V_PlateCarrierGL_rgr
5, V_PlateCarrierIA1_dgtl
5, V_PlateCarrierIA2_dgtl
5, V_PlateCarrierIAGL_dgtl
5, V_PlateCarrierSpec_rgr
5, V_TacVest_blk
5, V_TacVest_brn
5, V_TacVest_camo
5, V_TacVest_khk
5, V_TacVest_oli
5, V_TacVestCamo_khk
5, V_TacVestIR_blk
5, V_RebreatherB
5, V_RebreatherIR
5, V_RebreatherIA
5, V_PlateCarrierL_CTRG
5, V_PlateCarrierH_CTRG

// Uniforms
2, U_B_CTRG_1
2, U_B_CTRG_2
2, U_B_CTRG_3
2, U_B_CombatUniform_mcam
2, U_B_CombatUniform_mcam_tshirt
2, U_B_CombatUniform_mcam_vest
2, U_B_CombatUniform_mcam_worn
2, U_B_SpecopsUniform_sgg
2, U_O_OfficerUniform_ocamo
2, U_I_OfficerUniform
2, U_I_CombatUniform
2, U_I_CombatUniform_tshirt
2, U_I_CombatUniform_shortsleeve

1, U_B_GhillieSuit
1, U_O_GhillieSuit
1, U_I_GhillieSuit

1, U_B_HeliPilotCoveralls
1, U_O_PilotCoveralls
1, U_B_PilotCoveralls
1, U_I_pilotCoveralls
1, U_I_HeliPilotCoveralls

2, U_B_Wetsuit
2, U_O_Wetsuit
2, U_I_Wetsuit

2, U_O_CombatUniform_ocamo
2, U_O_CombatUniform_oucamo
2, U_O_SpecopsUniform_ocamo
2, U_O_SpecopsUniform_blk
2, U_PMC_CombatUniformLS_BSGPBB
2, U_PMC_CombatUniformLS_BSGPSB
2, U_PMC_CombatUniformLS_BSSPBB
2, U_PMC_CombatUniformLS_BSSPSB
2, U_PMC_CombatUniformLS_GSBPBB
2, U_PMC_CombatUniformLS_GSSPBB
2, U_PMC_CombatUniformLS_IndPBSBB
2, U_PMC_CombatUniformLS_SSBPBB
2, U_PMC_CombatUniformLS_SSGPBB
2, U_PMC_CombatUniformLS_SSGPSB
2, U_PMC_CombatUniformLS_ChckDBS_GPSB
2, U_PMC_CombatUniformLS_ChckLB_GPBB
2, U_PMC_CombatUniformLS_ChckLR_SPBB
2, U_PMC_CombatUniformLS_ChckP_BPBB
2, U_PMC_CombatUniformRS_BSGPBB
2, U_PMC_CombatUniformRS_BSGPSB
2, U_PMC_CombatUniformRS_BSSPBB
2, U_PMC_CombatUniformRS_BSSPSB
2, U_PMC_CombatUniformRS_GSBPBB
2, U_PMC_CombatUniformRS_GSSPBB
2, U_PMC_CombatUniformRS_IndPBSBB
2, U_PMC_CombatUniformRS_SSBPBB
2, U_PMC_CombatUniformRS_SSGPBB
2, U_PMC_CombatUniformRS_SSGPSB
2, U_PMC_CombatUniformRS_ChckDBS_GPSB
2, U_PMC_CombatUniformRS_ChckLB_GPBB
2, U_PMC_CombatUniformRS_ChckLR_SPBB
2, U_PMC_CombatUniformRS_ChckP_BPBB
2, U_PMC_BluPolo_BgPants
2, U_PMC_BgPolo_GrnPants
2, U_PMC_BlckPolo_BgPants
2, U_PMC_BlckPolo_BluPants
2, U_PMC_BluPolo_GrnPants
2, U_PMC_BrnPolo_BgPants
2, U_PMC_BrnPolo_BluPants
2, U_PMC_GrnPolo_BgPants
2, U_PMC_WhtPolo_BgPants
2, U_PMC_WhtPolo_BluPants
2, U_PMC_WhtPolo_GrnPants
2, U_PMC_BluePlaidShirt_BeigeCords
2, U_PMC_RedPlaidShirt_DenimCords
2, U_PMC_BlackPoloShirt_BeigeCords
2, U_PMC_GTShirt_DJeans
2, U_PMC_GTShirt_SJeans
2, U_PMC_BlkTShirt_DJeans
2, U_PMC_BlkTShirt_SJeans
2, U_PMC_BluTShirt_SJeans
2, U_PMC_WTShirt_DJeans
2, V_PlateCarrier1_PMC_rgr
2, V_PlateCarrier1_PMC_blk
2, V_PlateCarrier1_PMC_marpat
2, V_PlateCarrier1_PMC_khki
2, V_PlateCarrierInd_PMC_blk
2, V_PlateCarrierInd_PMC_grn
2, V_TacVest_darkblck
2, H_Cap_pmc
2, H_Cap_tan_pmc
2, H_Cap_pmc_headphones
2, H_Capbw_pmc
2, H_Capbw_tan_pmc
2, H_Booniehat_rgr
2, H_Booniehat_GCAMO
2, H_Booniehat_DMARPAT
2, H_PilotHelmetHeli_PMC

///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc.
///////////////////////////////////////////////////////////////////////////////
> Medical

25, Exile_Item_InstaDoc

///////////////////////////////////////////////////////////////////////////////
// Light Houses + Life Guard Towers + Castles
///////////////////////////////////////////////////////////////////////////////
> Tourist

// The ONLY place to find the BEST backpacks :)
20, B_Carryall_ocamo
20, B_Carryall_oucamo
20, B_Carryall_mcamo
20, B_Carryall_oli
20, B_Carryall_khk
20, B_Carryall_cbr

// Snipers
10, srifle_DMR_01_F
10, srifle_EBR_F
10, hlc_rifle_M14
10, hlc_rifle_M21
10, hlc_rifle_M14DMR
10, hlc_rifle_awmagnum
10, hlc_rifle_awmagnum_BL
10, hlc_rifle_awmagnum_FDE
10, hlc_rifle_awMagnum_FDE_ghillie
10, hlc_rifle_awMagnum_BL_ghillie
10, hlc_rifle_awMagnum_OD_ghillie

// Sniper Ammo
5, 10Rnd_762x51_Mag
5, 20Rnd_762x51_Mag
5, hlc_5rnd_300WM_FMJ_AWM
5, hlc_5rnd_300WM_AP_AWM
5, hlc_5rnd_300WM_BTSP_AWM
5, hlc_5rnd_300WM_mk248_AWM
5, hlc_5rnd_300WM_SBT_AWM

// Sniper Items
1, muzzle_snds_B
1, acc_flashlight
1, acc_pointer_IR
1, optic_DMS
1, optic_SOS
1, optic_LRPS


5, Binocular
5, Rangefinder
5, Laserdesignator
5, ItemRadio
5, ItemGPS
5, NVGoggles
5, Exile_Item_InstaDoc

// Explosives
2, HandGrenade
2, MiniGrenade
