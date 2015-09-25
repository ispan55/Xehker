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
Exile_Item_PlasticBottleEmpty
Exile_Item_PlasticBottleFreshWater
Exile_Item_Energydrink
Exile_Item_Beer
Exile_Item_GloriousKnakworst
Exile_Item_SausageGravy
Exile_Item_ChristmasTinner
Exile_Item_BBQSandwich
Exile_Item_Surstromming
Exile_Item_Catfood

Exile_Item_ChristmasTinner_Cooked
Exile_Item_BBQSandwich_Cooked
Exile_Item_GloriousKnakworst_Cooked
Exile_Item_SausageGravy_Cooked
Exile_Item_Surstromming_Cooked
Exile_Item_Catfood_Cooked

// Pistols
hgun_ACPC2_F
hgun_P07_F
hgun_Rook40_F
hgun_Pistol_heavy_01_F
hgun_Pistol_heavy_02_F
hgun_Pistol_Signal_F
RH_deagle
RH_deagleg
RH_deagles
RH_deaglem
RH_cz75
RH_sw659
RH_usp
RH_mak
RH_m1911
RH_kimber
RH_kimber_nw
RH_uspm
RH_m9
RH_m9c
RH_vz61
RH_g18
RH_g17
RH_tt33
RH_mk2
RH_p226
RH_p226s
RH_g19
RH_g19t
RH_vp70
RH_mateba
RH_python
RH_mp412
RH_bull
RH_bullb
RH_ttracker
RH_ttracker_g
RH_fnp45
RH_fnp45t
RH_fn57
RH_fn57_g
RH_fn57_t
RH_gsh18
RH_tec9
RH_muzi

// Pistol Magazines
11Rnd_45ACP_Mag
16Rnd_9x21_Mag
30Rnd_9x21_Mag
6Rnd_45ACP_Cylinder
6Rnd_GreenSignal_F
6Rnd_RedSignal_F
9Rnd_45ACP_Mag
RH_7Rnd_50_AE
RH_16Rnd_9x19_cz
RH_14Rnd_9x19_sw
RH_12Rnd_45cal_usp
RH_8Rnd_9x18_Mak
RH_7Rnd_45cal_m1911
RH_16Rnd_40cal_usp
RH_15Rnd_9x19_M9
RH_20Rnd_32cal_vz61
RH_33Rnd_9x19_g18
RH_17Rnd_9x19_g17
RH_8Rnd_762_tt33
RH_10Rnd_22LR_mk2
RH_15Rnd_9x19_SIG
RH_18Rnd_9x19_VP
RH_6Rnd_44_Mag
RH_6Rnd_357_Mag
RH_6Rnd_454_Mag
RH_6Rnd_45ACP_Mag
RH_15Rnd_45cal_fnp
RH_20Rnd_57x28_FN
RH_18Rnd_9x19_gsh
RH_32Rnd_9x19_tec
RH_30Rnd_9x19_UZI

// Pistol Items
muzzle_snds_L
muzzle_snds_acp
optic_MRD
RH_demz
RH_gemtech9
RH_A26
RH_suppr9
RH_aacusp
RH_gemtech45
RH_osprey
RH_fhusp
RH_x2
RH_m6x
RH_x300
RH_pmsd
RH_pmir
RH_matchsd
RH_m9qd
RH_vp70stock
RH_docter
RH_sfn57
RH_tecsd
RH_muzisd

// SMG Ammo
30Rnd_45ACP_Mag_SMG_01
30Rnd_45ACP_Mag_SMG_01_Tracer_Green
hlc_30Rnd_9x19_B_MP5
hlc_30Rnd_9x19_GD_MP5
hlc_30Rnd_9x19_SD_MP5
hlc_30Rnd_10mm_B_MP5
hlc_30Rnd_10mm_JHP_MP5

// SMGs
SMG_01_F
SMG_02_F
hgun_PDW2000_F
hlc_smg_mp5a2
hlc_smg_mp5a3
hlc_smg_mp5a4
hlc_smg_mp5n
hlc_smg_mp510
hlc_smg_mp5sd5
hlc_smg_mp5sd6
hlc_smg_9mmar


// SMG Items
optic_Holosight_smg
optic_ACO_grn_smg
optic_Aco_smg
optic_ACO_grn
optic_Aco


// Backpacks
B_OutdoorPack_blk
B_OutdoorPack_tan
B_OutdoorPack_blu
B_HuntingBackpack
B_AssaultPack_khk
B_AssaultPack_dgtl
B_AssaultPack_rgr
B_AssaultPack_sgg
B_AssaultPack_blk
B_AssaultPack_cbr
B_AssaultPack_mcamo
B_Kitbag_mcamo
B_Kitbag_sgg
B_Kitbag_cbr
B_FieldPack_blk
B_FieldPack_ocamo
B_FieldPack_oucamo
B_FieldPack_cbr
B_Bergen_sgg
B_Bergen_mcamo
B_Bergen_rgr
B_Bergen_blk

// Rifles
arifle_Katiba_F
arifle_Katiba_GL_F
arifle_SDAR_F
arifle_TRG21_F
arifle_TRG20_F
RH_m4
RH_m4_m203
RH_m4_ris
RH_m4_ris_m203
RH_m4_ris_m203s
RH_m4a1_ris
RH_m4a1_ris_m203
RH_m4a1_ris_m203s

// Rifle Items
muzzle_snds_M
muzzle_snds_H
optic_Arco
optic_Hamr
optic_Holosight
acc_flashlight
acc_pointer_IR
optic_MRCO
optic_DMS
RH_eotech553
RH_eotech553mag
RH_eotech553_tan
RH_eotech553mag_tan
RH_eotexps3
RH_eotexps3_tan
RH_eothhs1
RH_eothhs1_tan
RH_compm4s
RH_compm2
RH_compm2l
RH_compm2_tan
RH_compm2l_tan
RH_t1
RH_t1_tan
RH_reflex
RH_shortdot
RH_m3lr
RH_ta01nsn
RH_ta01nsn_2D
RH_ta31rco
RH_ta31rco_2D
RH_ta31rmr
RH_ta31rmr_2D
RH_ta01nsn_tan
RH_ta01nsn_tan_2D
RH_ta31rco_tan
RH_ta31rco_tan_2D
RH_ta31rmr_tan
RH_ta31rmr_tan_2D
RH_ta648
RH_accupoint
RH_leu_mk4
RH_c79
RH_c79_2D
RH_m145
RH_barska_rds
RH_cmore
RH_LTdocter
RH_LTdocterl
RH_zpoint
RH_anpvs4
RH_anpvs10
RH_pas13cl
RH_pas13cm
RH_pas13cmg
RH_pas13ch
RH_peq15
RH_peq15_top
RH_peq15b
RH_peq15b_top
RH_peq2
RH_peq2_top
RH_SFM952V
RH_SFM952V_tan
RH_qdss_nt4
RH_qdss_nt4_tg
RH_qdss_nt4_des
RH_qdss_nt4_wdl
RH_saker
RH_saker_tg
RH_saker_des
RH_saker_wdl
RH_Saker762
RH_Saker762_tg
RH_Saker762_des
RH_Saker762_wdl
RH_fa556
RH_fa556_tg
RH_fa556_des
RH_fa556_wdl
RH_fa762
RH_fa762_tg
RH_fa762_des
RH_fa762_wdl
RH_spr_mbs
RH_spr_mbs_tg
RH_spr_mbs_des
RH_spr_mbs_wdl
RH_tundra
RH_tundra_tg
RH_tundra_des
RH_tundra_wdl
RH_m110sd
RH_m110sd_t


// Rifle Ammo
20Rnd_556x45_UW_mag
30Rnd_556x45_Stanag
30Rnd_556x45_Stanag_Tracer_Green
30Rnd_556x45_Stanag_Tracer_Red
30Rnd_556x45_Stanag_Tracer_Yellow
30Rnd_65x39_caseless_green
30Rnd_65x39_caseless_green_mag_Tracer


// Items
Binocular
Exile_Item_CamoTentKit
Exile_Item_CookingPot
Exile_Item_DuctTape
Exile_Item_LightBulb
Exile_Item_Matches
Exile_Item_InstaDoc
ItemGPS

// Chem lights
Chemlight_blue
Chemlight_green
Chemlight_red
Chemlight_yellow

// Road flares
FlareGreen_F
FlareRed_F
FlareWhite_F
FlareYellow_F

// Uniforms
U_C_Poor_1
U_C_Poor_2
U_C_Poor_shorts_1
U_C_HunterBody_grn
U_C_Poloshirt_salmon
U_C_Poloshirt_tricolour
U_C_Poloshirt_stripped
U_C_Poloshirt_burgundy
U_C_Poloshirt_blue

// Guerilla Headgear
H_Booniehat_khk
H_Booniehat_indp
H_Booniehat_mcamo
H_Booniehat_grn
H_Booniehat_tan
H_Booniehat_dirty
H_Booniehat_dgtl
H_Booniehat_khk_hs

H_Bandanna_khk
H_Bandanna_khk_hs
H_Bandanna_cbr
H_Bandanna_sgg
H_Bandanna_gry
H_Bandanna_camo
H_Bandanna_mcamo
H_BandMask_blk

H_Beret_blk
H_Beret_red
H_Beret_grn
H_Beret_grn_SF
H_Beret_brn_SF
H_Beret_ocamo
H_Beret_02
H_Beret_Colonel

H_Hat_camo
H_Cap_brn_SPECOPS
H_Cap_tan_specops_US
H_Cap_khaki_specops_UK
H_Watchcap_blk
H_Watchcap_khk
H_Watchcap_camo
H_Watchcap_sgg
H_TurbanO_blk

H_Shemag_khk
H_Shemag_tan
H_Shemag_olive
H_Shemag_olive_hs
H_ShemagOpen_khk
H_ShemagOpen_tan

U_PMC_GTShirt_DJeans
U_PMC_GTShirt_SJeans
U_PMC_BlkTShirt_DJeans
U_PMC_BlkTShirt_SJeans
U_PMC_BluTShirt_SJeans
U_PMC_WTShirt_DJeans
U_PMC_BluePlaidShirt_BeigeCords
U_PMC_RedPlaidShirt_DenimCords
U_PMC_BlackPoloShirt_BeigeCords

// Guerilla Vests
V_BandollierB_khk
V_BandollierB_cbr
V_BandollierB_rgr
V_BandollierB_blk
V_BandollierB_oli
V_Chestrig_khk
V_Chestrig_rgr
V_Chestrig_blk
V_Chestrig_oli
V_HarnessO_brn
V_HarnessOGL_brn
V_HarnessO_gry
V_HarnessOGL_gry
V_HarnessOSpec_brn
V_HarnessOSpec_gry

V_I_G_resistanceLeader_F

// Guerilla Uniforms
U_IG_Guerilla1_1
U_IG_Guerilla2_1
U_IG_Guerilla2_2
U_IG_Guerilla2_3
U_IG_Guerilla3_1
U_IG_Guerilla3_2

U_IG_leader
U_I_G_resistanceLeader_F

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> CivillianUpperClass

Exile_Item_PlasticBottleEmpty
Exile_Item_PlasticBottleFreshWater
Exile_Item_Energydrink
Exile_Item_Beer
Exile_Item_GloriousKnakworst
Exile_Item_SausageGravy
Exile_Item_ChristmasTinner
Exile_Item_BBQSandwich
Exile_Item_Surstromming
Exile_Item_Catfood
Exile_Item_ChristmasTinner_Cooked
Exile_Item_BBQSandwich_Cooked
Exile_Item_GloriousKnakworst_Cooked
Exile_Item_SausageGravy_Cooked
Exile_Item_Surstromming_Cooked
Exile_Item_Catfood_Cooked

// Pistols
hgun_ACPC2_F
hgun_P07_F
hgun_Rook40_F
hgun_Pistol_heavy_01_F
hgun_Pistol_heavy_02_F
hgun_Pistol_Signal_F
RH_deagle
RH_deagleg
RH_deagles
RH_deaglem
RH_cz75
RH_sw659
RH_usp
RH_mak
RH_m1911
RH_kimber
RH_kimber_nw
RH_uspm
RH_m9
RH_m9c
RH_vz61
RH_g18
RH_g17
RH_tt33
RH_mk2
RH_p226
RH_p226s
RH_g19
RH_g19t
RH_vp70
RH_mateba
RH_python
RH_mp412
RH_bull
RH_bullb
RH_ttracker
RH_ttracker_g
RH_fnp45
RH_fnp45t
RH_fn57
RH_fn57_g
RH_fn57_t
RH_gsh18
RH_tec9
RH_muzi

// Pistol Magazines
11Rnd_45ACP_Mag
16Rnd_9x21_Mag
30Rnd_9x21_Mag
6Rnd_45ACP_Cylinder
6Rnd_GreenSignal_F
6Rnd_RedSignal_F
9Rnd_45ACP_Mag
RH_7Rnd_50_AE
RH_16Rnd_9x19_cz
RH_14Rnd_9x19_sw
RH_12Rnd_45cal_usp
RH_8Rnd_9x18_Mak
RH_7Rnd_45cal_m1911
RH_16Rnd_40cal_usp
RH_15Rnd_9x19_M9
RH_20Rnd_32cal_vz61
RH_33Rnd_9x19_g18
RH_17Rnd_9x19_g17
RH_8Rnd_762_tt33
RH_10Rnd_22LR_mk2
RH_15Rnd_9x19_SIG
RH_18Rnd_9x19_VP
RH_6Rnd_44_Mag
RH_6Rnd_357_Mag
RH_6Rnd_454_Mag
RH_6Rnd_45ACP_Mag
RH_15Rnd_45cal_fnp
RH_20Rnd_57x28_FN
RH_18Rnd_9x19_gsh
RH_32Rnd_9x19_tec
RH_30Rnd_9x19_UZI

// Pistol Items
muzzle_snds_L
muzzle_snds_acp
optic_Yorris
optic_MRD
RH_demz
RH_gemtech9
RH_A26
RH_suppr9
RH_aacusp
RH_gemtech45
RH_osprey
RH_fhusp
RH_x2
RH_m6x
RH_x300
RH_pmsd
RH_pmir
RH_matchsd
RH_m9qd
RH_vp70stock
RH_docter
RH_sfn57
RH_tecsd
RH_muzisd

// Backpacks
B_OutdoorPack_blk
B_OutdoorPack_tan
B_OutdoorPack_blu
B_HuntingBackpack

// Uniforms
U_C_Poloshirt_salmon
U_C_Poloshirt_tricolour
U_C_Poloshirt_stripped
U_C_Poloshirt_burgundy
U_C_Poloshirt_blue
U_PMC_BluePlaidShirt_BeigeCords
U_PMC_RedPlaidShirt_DenimCords
U_PMC_BlackPoloShirt_BeigeCords
U_PMC_BluPolo_BgPants
U_PMC_BgPolo_GrnPants
U_PMC_BlckPolo_BgPants
U_PMC_BlckPolo_BluPants
U_PMC_BluPolo_GrnPants
U_PMC_BrnPolo_BgPants
U_PMC_BrnPolo_BluPants
U_PMC_GrnPolo_BgPants
U_PMC_WhtPolo_BgPants
U_PMC_WhtPolo_BluPants
U_PMC_WhtPolo_GrnPants
U_PMC_CombatUniformRS_BSGPBB
U_PMC_CombatUniformRS_BSGPSB
U_PMC_CombatUniformRS_BSSPBB
U_PMC_CombatUniformRS_BSSPSB
U_PMC_CombatUniformRS_GSBPBB
U_PMC_CombatUniformRS_GSSPBB
U_PMC_CombatUniformRS_IndPBSBB
U_PMC_CombatUniformRS_SSBPBB
U_PMC_CombatUniformRS_SSGPBB
U_PMC_CombatUniformRS_SSGPSB
U_PMC_CombatUniformRS_ChckDBS_GPSB
U_PMC_CombatUniformRS_ChckLB_GPBB
U_PMC_CombatUniformRS_ChckLR_SPBB
U_PMC_CombatUniformRS_ChckP_BPBB
U_PMC_CombatUniformLS_BSGPBB
U_PMC_CombatUniformLS_BSGPSB
U_PMC_CombatUniformLS_BSSPBB
U_PMC_CombatUniformLS_BSSPSB
U_PMC_CombatUniformLS_GSBPBB
U_PMC_CombatUniformLS_GSSPBB
U_PMC_CombatUniformLS_IndPBSBB
U_PMC_CombatUniformLS_SSBPBB
U_PMC_CombatUniformLS_SSGPBB
U_PMC_CombatUniformLS_SSGPSB
U_PMC_CombatUniformLS_ChckDBS_GPSB
U_PMC_CombatUniformLS_ChckLB_GPBB
U_PMC_CombatUniformLS_ChckLR_SPBB
U_PMC_CombatUniformLS_ChckP_BPBB

U_C_Journalist
U_C_Scientist
U_Rangemaster

U_OrestesBody
U_NikosBody
U_NikosAgedBody

// Vests
V_Rangemaster_belt
V_Press_F
V_TacVest_blk_POLICE

// Headgear
H_Bandanna_surfer
H_Beret_blk_POLICE
H_Cap_blk
H_Cap_blk_Raven
H_Cap_blu
H_Cap_grn
H_Cap_headphones
H_Cap_oli
H_Cap_press
H_Cap_red
H_Cap_tan
H_Hat_blue
H_Hat_brown
H_Hat_checker
H_Hat_grey
H_Hat_tan
H_StrawHat
H_StrawHat_dark

// Rifles
arifle_Katiba_F
arifle_MXC_F
arifle_MX_F
arifle_MX_GL_F
arifle_MXM_F
arifle_SDAR_F
arifle_TRG21_F
arifle_TRG20_F
arifle_Mk20_F
arifle_Mk20C_F


// Rifle Items
muzzle_snds_M
muzzle_snds_H
optic_Arco
optic_Hamr
optic_Holosight
acc_flashlight
acc_pointer_IR
optic_MRCO
optic_DMS


// Rifle Ammo
20Rnd_556x45_UW_mag
30Rnd_556x45_Stanag
30Rnd_556x45_Stanag_Tracer_Green
30Rnd_556x45_Stanag_Tracer_Red
30Rnd_556x45_Stanag_Tracer_Yellow
30Rnd_65x39_caseless_green
30Rnd_65x39_caseless_green_mag_Tracer
30Rnd_65x39_caseless_mag
30Rnd_65x39_caseless_mag_Tracer
29rnd_300BLK_STANAG
29rnd_300BLK_STANAG_T
29rnd_300BLK_STANAG_S


///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
> Shop

// Smoke Nades
SmokeShell
SmokeShellRed
SmokeShellGreen
SmokeShellYellow
SmokeShellPurple
SmokeShellBlue
SmokeShellOrange
hlc_GRD_White
hlc_GRD_red
hlc_GRD_green
hlc_GRD_blue
hlc_GRD_orange
hlc_GRD_purple

// Pistols
hgun_ACPC2_F
hgun_Rook40_F
hgun_P07_F
hgun_Pistol_heavy_01_F
hgun_Pistol_heavy_02_F
hgun_Pistol_Signal_F
RH_deagle
RH_deagleg
RH_deagles
RH_deaglem
RH_cz75
RH_sw659
RH_usp
RH_mak
RH_m1911
RH_kimber
RH_kimber_nw
RH_uspm
RH_m9
RH_m9c
RH_vz61
RH_g18
RH_g17
RH_tt33
RH_mk2
RH_p226
RH_p226s
RH_g19
RH_g19t
RH_vp70
RH_mateba
RH_python
RH_mp412
RH_bull
RH_bullb
RH_ttracker
RH_ttracker_g
RH_fnp45
RH_fnp45t
RH_fn57
RH_fn57_g
RH_fn57_t
RH_gsh18
RH_tec9
RH_muzi

// Pistol Magazines
11Rnd_45ACP_Mag
16Rnd_9x21_Mag
30Rnd_9x21_Mag
6Rnd_45ACP_Cylinder
6Rnd_GreenSignal_F
6Rnd_RedSignal_F
9Rnd_45ACP_Mag
RH_7Rnd_50_AE
RH_16Rnd_9x19_cz
RH_14Rnd_9x19_sw
RH_12Rnd_45cal_usp
RH_8Rnd_9x18_Mak
RH_7Rnd_45cal_m1911
RH_16Rnd_40cal_usp
RH_15Rnd_9x19_M9
RH_20Rnd_32cal_vz61
RH_33Rnd_9x19_g18
RH_17Rnd_9x19_g17
RH_8Rnd_762_tt33
RH_10Rnd_22LR_mk2
RH_15Rnd_9x19_SIG
RH_18Rnd_9x19_VP
RH_6Rnd_44_Mag
RH_6Rnd_357_Mag
RH_6Rnd_454_Mag
RH_6Rnd_45ACP_Mag
RH_15Rnd_45cal_fnp
RH_20Rnd_57x28_FN
RH_18Rnd_9x19_gsh
RH_32Rnd_9x19_tec
RH_30Rnd_9x19_UZI

// Pistol Items
muzzle_snds_L
muzzle_snds_acp
optic_Yorris
optic_MRD
RH_demz
RH_gemtech9
RH_A26
RH_suppr9
RH_aacusp
RH_gemtech45
RH_osprey
RH_fhusp
RH_x2
RH_m6x
RH_x300
RH_pmsd
RH_pmir
RH_matchsd
RH_m9qd
RH_vp70stock
RH_docter
RH_sfn57
RH_tecsd
RH_muzisd


Exile_Item_PlasticBottleEmpty
Exile_Item_PlasticBottleFreshWater
Exile_Item_Energydrink
Exile_Item_Beer
Exile_Item_GloriousKnakworst
Exile_Item_SausageGravy
Exile_Item_ChristmasTinner
Exile_Item_BBQSandwich
Exile_Item_Surstromming
Exile_Item_Catfood

Exile_Item_ChristmasTinner_Cooked
Exile_Item_BBQSandwich_Cooked
Exile_Item_GloriousKnakworst_Cooked
Exile_Item_SausageGravy_Cooked
Exile_Item_Surstromming_Cooked
Exile_Item_Catfood_Cooked

Binocular
Exile_Item_CamoTentKit
Exile_Item_CookingPot
Exile_Item_DuctTape
Exile_Item_LightBulb
Exile_Item_Matches
Exile_Item_InstaDoc
ItemGPS

///////////////////////////////////////////////////////////////////////////////
// Factories, Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> Industrial

Exile_Item_DuctTape
Exile_Item_ExtensionCord
Exile_Item_FloodLightKit
Exile_Item_FuelCanisterEmpty
Exile_Item_FuelCanisterFull
Exile_Item_JunkMetal
Exile_Item_LightBulb
Exile_Item_MetalBoard
Exile_Item_PortableGeneratorKit
Exile_Item_Rope
Exile_Magazine_Battery
Exile_Melee_Axe

///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleService

Exile_Item_DuctTape
Exile_Item_FuelCanisterEmpty
Exile_Item_FuelCanisterFull
Exile_Item_JunkMetal
Exile_Item_LightBulb
Exile_Item_MetalBoard
Exile_Magazine_Battery

///////////////////////////////////////////////////////////////////////////////
// Towers, Barracks, Hangars etc.
///////////////////////////////////////////////////////////////////////////////
> Military

// LMGs
arifle_MX_SW_Black_F
arifle_MX_SW_F
LMG_Mk200_F
LMG_Zafir_F
hlc_lmg_M60E4
hlc_lmg_minimipara
hlc_lmg_minimi
hlc_lmg_minimi_railed
hlc_lmg_m249para
hlc_lmg_M249E2
hlc_m249_pip1
hlc_m249_pip2
hlc_m249_pip3
hlc_m249_pip4

// LMG Ammo
100Rnd_65x39_caseless_mag
100Rnd_65x39_caseless_mag_Tracer
150Rnd_762x54_Box
150Rnd_762x54_Box_Tracer
200Rnd_65x39_Belt
200Rnd_65x39_Belt_Tracer_Red
130Rnd_338_Mag
150Rnd_93x64_Mag
hlc_100Rnd_762x51_B_M60E4
hlc_100Rnd_762x51_T_M60E4
hlc_100Rnd_762x51_M_M60E4
hlc_200rnd_556x45_M_SAW
hlc_200rnd_556x45_T_SAW
hlc_200rnd_556x45_B_SAW


// Rifles
arifle_Katiba_F
arifle_Katiba_GL_F
arifle_MXC_F
arifle_MX_F
arifle_MX_GL_F
arifle_MXM_F
arifle_MXM_Black_F
arifle_SDAR_F
arifle_TRG21_F
arifle_TRG20_F
arifle_TRG21_GL_F
arifle_Mk20_F
arifle_Mk20C_F
arifle_Mk20_GL_F
arifle_MXC_Black_F
arifle_MX_Black_F
arifle_MX_GL_Black_F
hlc_rifle_ak74
hlc_rifle_aks74
hlc_rifle_aks74u
hlc_rifle_ak47
hlc_rifle_akm
hlc_rifle_rpk
hlc_rifle_ak12
hlc_rifle_akmgl
hlc_rifle_aks74_GL
hlc_rifle_RU556
hlc_rifle_RU5562
hlc_rifle_Colt727
hlc_rifle_Colt727_GL
hlc_rifle_bcmjack
hlc_rifle_Bushmaster300
hlc_rifle_vendimus
hlc_rifle_SAMR
hlc_rifle_honeybase
hlc_rifle_honeybadger
hlc_rifle_aug
hlc_rifle_auga1_t
hlc_rifle_auga1_B
hlc_rifle_auga1carb
hlc_rifle_auga1carb_t
hlc_rifle_auga1carb_b
hlc_rifle_aughbar
hlc_rifle_aughbar_b
hlc_rifle_aughbar_t
hlc_rifle_augpara
hlc_rifle_augpara_b
hlc_rifle_augpara_t
hlc_rifle_auga2
hlc_rifle_auga2_b
hlc_rifle_auga2_t
hlc_rifle_auga2carb
hlc_rifle_auga2carb_t
hlc_rifle_auga2carb_b
hlc_rifle_auga2lsw
hlc_rifle_auga2lsw_t
hlc_rifle_auga2lsw_b
hlc_rifle_auga2para
hlc_rifle_auga2para_b
hlc_rifle_auga2para_t
hlc_rifle_augsr
hlc_rifle_augsr_b
hlc_rifle_augsr_t
hlc_rifle_augsrcarb
hlc_rifle_augsrcarb_t
hlc_rifle_augsrcarb_b
hlc_rifle_augsrhbar
hlc_rifle_augsrhbar_b
hlc_rifle_augsrhbar_t
hlc_rifle_auga3
hlc_rifle_auga3_bl
hlc_rifle_auga3_b
hlc_rifle_auga3_GL
hlc_rifle_auga3_GL_BL
hlc_rifle_auga3_GL_B
RH_m4
RH_m4_m203
RH_m4_ris
RH_m4_ris_m203
RH_m4_ris_m203s
RH_m4a1_ris
RH_m4a1_ris_m203
RH_m4a1_ris_m203s
RH_m4sbr
RH_m4sbr_g
RH_m4sbr_b
RH_m16a1
RH_m16a1gl
RH_m16a2
RH_m16a2gl
RH_m16a3
RH_m16a4
RH_m16a4gl
RH_m16a4_m
RH_mk12mod1
RH_samr
RH_m4m
RH_m4m_g
RH_m4m_b
RH_m4_moe
RH_m4_moe_g
RH_m4_moe_b
RH_m4a6
RH_m16a6
RH_hb
RH_hb_b
RH_hk416
RH_hk416c
RH_hk416s
RH_m27iar
RH_ar10
RH_mk11
RH_m110
RH_sr25ec
RH_sbr9
RH_m4_tg
RH_m4_des
RH_m4_wdl
RH_m4_m203_tg
RH_m4_m203_des
RH_m4_m203_wdl
RH_m4a1_ris_tg
RH_m4a1_ris_des
RH_m4a1_ris_wdl
RH_m4a1_ris_m203_tg
RH_m4a1_ris_m203_des
RH_m4a1_ris_m203_wdl
RH_m4a1_ris_m203s_tg
RH_m4a1_ris_m203s_des
RH_m4a1_ris_m203s_wdl
RH_m4_ris_m_tg
RH_m4_ris_m_des
RH_m4_ris_m_wdl
RH_m4a6_tg
RH_m4a6_des
RH_m4a6_wdl
RH_m16a4_tg
RH_m16a4_des
RH_m16a4_wdl
RH_m16a4gl_tg
RH_m16a4gl_des
RH_m16a4gl_wdl
RH_m16a4_m_tg
RH_m16a4_m_des
RH_m16a4_m_wdl
RH_hk416_tg
RH_hk416_des
RH_hk416_wdl
RH_hk416s_tg
RH_hk416s_des
RH_hk416s_wdl
RH_hk416c_tg
RH_hk416c_des
RH_hk416c_wdl
RH_m27iar_tg
RH_m27iar_des
RH_m27iar_wdl
RH_m16a6_tg
RH_m16a6_des
RH_m16a6_wdl
RH_Mk12mod1_tg
RH_Mk12mod1_des
RH_Mk12mod1_wdl
RH_SAMR_tg
RH_SAMR_des
RH_SAMR_wdl
RH_sbr9_tg
RH_sbr9_des
RH_sbr9_wdl

// Rifle Items
muzzle_snds_M
muzzle_snds_H
optic_Arco
optic_Hamr
optic_Holosight
acc_pointer_IR
optic_MRCO
acc_flashlight
HLC_Optic_PSO1
HLC_Optic_1p29
hlc_optic_kobra
hlc_muzzle_545SUP_AK
hlc_muzzle_762SUP_AK
hlc_muzzle_556NATO_KAC
hlc_muzzle_300blk_KAC
hlc_muzzle_snds_AUG
hlc_muzzle_snds_a6AUG
RH_eotech553
RH_eotech553mag
RH_eotech553_tan
RH_eotech553mag_tan
RH_eotexps3
RH_eotexps3_tan
RH_eothhs1
RH_eothhs1_tan
RH_compm4s
RH_compm2
RH_compm2l
RH_compm2_tan
RH_compm2l_tan
RH_t1
RH_t1_tan
RH_reflex
RH_shortdot
RH_m3lr
RH_ta01nsn
RH_ta01nsn_2D
RH_ta31rco
RH_ta31rco_2D
RH_ta31rmr
RH_ta31rmr_2D
RH_ta01nsn_tan
RH_ta01nsn_tan_2D
RH_ta31rco_tan
RH_ta31rco_tan_2D
RH_ta31rmr_tan
RH_ta31rmr_tan_2D
RH_ta648
RH_accupoint
RH_leu_mk4
RH_c79
RH_c79_2D
RH_m145
RH_barska_rds
RH_cmore
RH_LTdocter
RH_LTdocterl
RH_zpoint
RH_anpvs4
RH_anpvs10
RH_pas13cl
RH_pas13cm
RH_pas13cmg
RH_pas13ch
RH_peq15
RH_peq15_top
RH_peq15b
RH_peq15b_top
RH_peq2
RH_peq2_top
RH_SFM952V
RH_SFM952V_tan
RH_qdss_nt4
RH_qdss_nt4_tg
RH_qdss_nt4_des
RH_qdss_nt4_wdl
RH_saker
RH_saker_tg
RH_saker_des
RH_saker_wdl
RH_Saker762
RH_Saker762_tg
RH_Saker762_des
RH_Saker762_wdl
RH_fa556
RH_fa556_tg
RH_fa556_des
RH_fa556_wdl
RH_fa762
RH_fa762_tg
RH_fa762_des
RH_fa762_wdl
RH_spr_mbs
RH_spr_mbs_tg
RH_spr_mbs_des
RH_spr_mbs_wdl
RH_tundra
RH_tundra_tg
RH_tundra_des
RH_tundra_wdl
RH_m110sd
RH_m110sd_t
RH_HBLM
RH_HBLM_tg
RH_HBLM_des
RH_HBLM_wdl
RH_TD_ACB
RH_TD_ACB_g
RH_TD_ACB_b

// Rifle Ammo
20Rnd_556x45_UW_mag
30Rnd_556x45_Stanag
30Rnd_556x45_Stanag_Tracer_Green
30Rnd_556x45_Stanag_Tracer_Red
30Rnd_556x45_Stanag_Tracer_Yellow
30Rnd_65x39_caseless_green
30Rnd_65x39_caseless_green_mag_Tracer
30Rnd_65x39_caseless_mag
30Rnd_65x39_caseless_mag_Tracer
29rnd_300BLK_STANAG
29rnd_300BLK_STANAG_T
29rnd_300BLK_STANAG_S
hlc_30rnd_556x45_EPR
hlc_30rnd_556x45_SOST
hlc_30rnd_556x45_SPR
hlc_30Rnd_545x39_B_AK
hlc_30Rnd_545x39_T_AK
hlc_30Rnd_545x39_EP_AK
hlc_45Rnd_545x39_t_rpk
hlc_30Rnd_762x39_b_ak
hlc_30Rnd_762x39_t_ak
hlc_45Rnd_762x39_t_rpk
hlc_45Rnd_762x39_m_rpk
hlc_30Rnd_556x45_B_AUG
hlc_30Rnd_556x45_SOST_AUG
hlc_30Rnd_556x45_SPR_AUG
hlc_30Rnd_556x45_T_AUG
hlc_40Rnd_556x45_B_AUG
hlc_40Rnd_556x45_SOST_AUG
hlc_40Rnd_556x45_SPR_AUG
hlc_25Rnd_9x19mm_M882_AUG
hlc_25Rnd_9x19mm_JHP_AUG
hlc_25Rnd_9x19mm_subsonic_AUG
RH_30Rnd_556x45_M855A1
RH_30Rnd_556x45_Mk262
RH_30Rnd_556x45_Mk318
RH_20Rnd_556x45_M855A1
RH_20Rnd_556x45_Mk262
RH_20Rnd_556x45_Mk318
RH_60Rnd_556x45_M855A1
RH_60Rnd_556x45_Mk262
RH_60Rnd_556x45_Mk318
RH_30Rnd_68x43_FMJ
RH_30Rnd_68x43_Match
RH_30Rnd_762x35_FMJ
RH_30Rnd_762x35_Match
RH_30Rnd_762x35_MSB
RH_20Rnd_762x51_M80A1
RH_20Rnd_762x51_Mk316LR
RH_20Rnd_762x51_Mk319
RH_20Rnd_762x51_LFMJSB
RH_20Rnd_762x51_AR10
RH_32Rnd_9mm_M822
RH_32Rnd_9mm_HP
RH_32Rnd_9mm_HPSB

// Snipers
srifle_DMR_01_F
srifle_EBR_F
srifle_GM6_F
srifle_LRR_F
hlc_rifle_l1a1slr
hlc_rifle_SLR
hlc_rifle_STG58F
hlc_rifle_FAL5061
hlc_rifle_c1A1
hlc_rifle_LAR
hlc_rifle_SLRchopmod
hlc_rifle_falosw
hlc_rifle_osw_GL
hlc_rifle_g3sg1
hlc_rifle_psg1
hlc_rifle_g3a3
hlc_rifle_g3ka4
HLC_Rifle_g3ka4_GL
hlc_rifle_hk51
hlc_rifle_hk53
hlc_rifle_M14
hlc_rifle_M21
hlc_rifle_M14DMR
hlc_rifle_m14sopmod
hlc_rifle_awcovert
hlc_rifle_awcovert_BL
hlc_rifle_awcovert_FDE
hlc_rifle_awmagnum
hlc_rifle_awmagnum_BL
hlc_rifle_awmagnum_FDE
hlc_rifle_awMagnum_FDE_ghillie
hlc_rifle_awMagnum_BL_ghillie
hlc_rifle_awMagnum_OD_ghillie

// Sniper Ammo
5Rnd_127x108_Mag
7Rnd_408_Mag
10Rnd_762x51_Mag
20Rnd_762x51_Mag
5Rnd_127x108_APDS_Mag
hlc_5rnd_300WM_FMJ_AWM
hlc_5rnd_300WM_AP_AWM
hlc_5rnd_300WM_BTSP_AWM
hlc_5rnd_300WM_mk248_AWM
hlc_5rnd_300WM_SBT_AWM
hlc_20Rnd_762x51_B_G3
hlc_20rnd_762x51_T_G3
hlc_50rnd_762x51_M_G3
hlc_20Rnd_762x51_B_M14
hlc_20rnd_762x51_T_M14
hlc_50rnd_762x51_M_M14
hlc_20Rnd_762x51_B_fal
hlc_20Rnd_762x51_t_fal
hlc_20Rnd_762x51_S_fal
hlc_50rnd_762x51_M_FAL

// Sniper Items
muzzle_snds_B
optic_DMS
optic_SOS
optic_LRPS
hlc_optic_artel_m14
hlc_optic_LRT_m14
hlc_optic_suit
HLC_Optic_ZFSG1
hlc_optic_accupoint_g3
hlc_muzzle_snds_HK33
hlc_muzzle_snds_G3
hlc_muzzle_snds_M14
hlc_muzzle_snds_fal

// Noob Tube Nades
1Rnd_HE_Grenade_shell
3Rnd_HE_Grenade_shell
hlc_VOG25_AK

// Smoke Nades
SmokeShell
SmokeShellRed
SmokeShellGreen
SmokeShellYellow
SmokeShellPurple
SmokeShellBlue
SmokeShellOrange
hlc_GRD_White
hlc_GRD_red
hlc_GRD_green
hlc_GRD_blue
hlc_GRD_orange
hlc_GRD_purple

// Noob Tube Flares
3Rnd_UGL_FlareGreen_F
3Rnd_UGL_FlareRed_F
3Rnd_UGL_FlareWhite_F
3Rnd_UGL_FlareYellow_F
UGL_FlareGreen_F
UGL_FlareRed_F
UGL_FlareWhite_F
UGL_FlareYellow_F

// Noob Tube Smokes
1Rnd_Smoke_Grenade_shell
1Rnd_SmokeBlue_Grenade_shell
1Rnd_SmokeGreen_Grenade_shell
1Rnd_SmokeOrange_Grenade_shell
1Rnd_SmokePurple_Grenade_shell
1Rnd_SmokeRed_Grenade_shell
1Rnd_SmokeYellow_Grenade_shell
3Rnd_Smoke_Grenade_shell
3Rnd_SmokeBlue_Grenade_shell
3Rnd_SmokeGreen_Grenade_shell
3Rnd_SmokeOrange_Grenade_shell
3Rnd_SmokePurple_Grenade_shell
3Rnd_SmokeRed_Grenade_shell
3Rnd_SmokeYellow_Grenade_shell

// Explosives
HandGrenade
MiniGrenade

// Items
Binocular
ItemRadio
ItemGPS
NVGoggles
Exile_Item_InstaDoc

// Backpacks
B_OutdoorPack_blk
B_OutdoorPack_tan
B_OutdoorPack_blu
B_HuntingBackpack
B_AssaultPack_khk
B_AssaultPack_dgtl
B_AssaultPack_rgr
B_AssaultPack_sgg
B_AssaultPack_blk
B_AssaultPack_cbr
B_AssaultPack_mcamo

B_Kitbag_mcamo
B_Kitbag_sgg
B_Kitbag_cbr

B_FieldPack_blk
B_FieldPack_ocamo
B_FieldPack_oucamo
B_FieldPack_cbr

B_Bergen_sgg
B_Bergen_mcamo
B_Bergen_rgr
B_Bergen_blk

// Headgear
H_MilCap_ocamo
H_MilCap_mcamo
H_MilCap_oucamo
H_MilCap_blue
H_MilCap_rucamo
H_MilCap_dgtl
H_HelmetB
H_HelmetB_paint
H_HelmetB_light
H_HelmetB_plain_blk
H_HelmetSpecB
H_HelmetSpecB_paint1
H_HelmetSpecB_paint2
H_HelmetSpecB_blk
H_HelmetIA
H_HelmetIA_net
H_HelmetIA_camo
H_HelmetB_grass
H_HelmetB_snakeskin
H_HelmetB_desert
H_HelmetB_black
H_HelmetB_sand
H_HelmetB_light_grass
H_HelmetB_light_snakeskin
H_HelmetB_light_desert
H_HelmetB_light_black
H_HelmetB_light_sand

H_HelmetCrew_O
H_HelmetCrew_I
H_HelmetCrew_B
H_PilotHelmetFighter_B
H_PilotHelmetFighter_O
H_PilotHelmetFighter_I

H_PilotHelmetHeli_B
H_PilotHelmetHeli_O
H_PilotHelmetHeli_I

H_HelmetB_camo

H_CrewHelmetHeli_B
H_CrewHelmetHeli_O
H_CrewHelmetHeli_I

H_BandMask_khk
H_BandMask_reaper
H_BandMask_demon

H_HelmetO_oucamo
H_HelmetLeaderO_oucamo
H_HelmetSpecO_ocamo
H_HelmetSpecO_blk
H_HelmetO_ocamo
H_HelmetLeaderO_ocamo

// Vests
V_Rangemaster_belt
V_PlateCarrier1_blk
V_PlateCarrier1_rgr
V_PlateCarrier2_rgr
V_PlateCarrier3_rgr
V_PlateCarrierGL_rgr
V_PlateCarrierIA1_dgtl
V_PlateCarrierIA2_dgtl
V_PlateCarrierIAGL_dgtl
V_PlateCarrierSpec_rgr
V_TacVest_blk
V_TacVest_brn
V_TacVest_camo
V_TacVest_khk
V_TacVest_oli
V_TacVestCamo_khk
V_TacVestIR_blk
V_RebreatherB
V_RebreatherIR
V_RebreatherIA
V_PlateCarrierL_CTRG
V_PlateCarrierH_CTRG

// Uniforms
U_B_CTRG_1
U_B_CTRG_2
U_B_CTRG_3
U_B_CombatUniform_mcam
U_B_CombatUniform_mcam_tshirt
U_B_CombatUniform_mcam_vest
U_B_CombatUniform_mcam_worn
U_B_SpecopsUniform_sgg
U_O_OfficerUniform_ocamo
U_I_OfficerUniform
U_I_CombatUniform
U_I_CombatUniform_tshirt
U_I_CombatUniform_shortsleeve

U_B_GhillieSuit
U_O_GhillieSuit
U_I_GhillieSuit

U_B_HeliPilotCoveralls
U_O_PilotCoveralls
U_B_PilotCoveralls
U_I_pilotCoveralls
U_I_HeliPilotCoveralls

U_B_Wetsuit
U_O_Wetsuit
U_I_Wetsuit

U_O_CombatUniform_ocamo
U_O_CombatUniform_oucamo
U_O_SpecopsUniform_ocamo
U_O_SpecopsUniform_blk
U_PMC_CombatUniformLS_BSGPBB
U_PMC_CombatUniformLS_BSGPSB
U_PMC_CombatUniformLS_BSSPBB
U_PMC_CombatUniformLS_BSSPSB
U_PMC_CombatUniformLS_GSBPBB
U_PMC_CombatUniformLS_GSSPBB
U_PMC_CombatUniformLS_IndPBSBB
U_PMC_CombatUniformLS_SSBPBB
U_PMC_CombatUniformLS_SSGPBB
U_PMC_CombatUniformLS_SSGPSB
U_PMC_CombatUniformLS_ChckDBS_GPSB
U_PMC_CombatUniformLS_ChckLB_GPBB
U_PMC_CombatUniformLS_ChckLR_SPBB
U_PMC_CombatUniformLS_ChckP_BPBB
U_PMC_CombatUniformRS_BSGPBB
U_PMC_CombatUniformRS_BSGPSB
U_PMC_CombatUniformRS_BSSPBB
U_PMC_CombatUniformRS_BSSPSB
U_PMC_CombatUniformRS_GSBPBB
U_PMC_CombatUniformRS_GSSPBB
U_PMC_CombatUniformRS_IndPBSBB
U_PMC_CombatUniformRS_SSBPBB
U_PMC_CombatUniformRS_SSGPBB
U_PMC_CombatUniformRS_SSGPSB
U_PMC_CombatUniformRS_ChckDBS_GPSB
U_PMC_CombatUniformRS_ChckLB_GPBB
U_PMC_CombatUniformRS_ChckLR_SPBB
U_PMC_CombatUniformRS_ChckP_BPBB
U_PMC_BluPolo_BgPants
U_PMC_BgPolo_GrnPants
U_PMC_BlckPolo_BgPants
U_PMC_BlckPolo_BluPants
U_PMC_BluPolo_GrnPants
U_PMC_BrnPolo_BgPants
U_PMC_BrnPolo_BluPants
U_PMC_GrnPolo_BgPants
U_PMC_WhtPolo_BgPants
U_PMC_WhtPolo_BluPants
U_PMC_WhtPolo_GrnPants
U_PMC_BluePlaidShirt_BeigeCords
U_PMC_RedPlaidShirt_DenimCords
U_PMC_BlackPoloShirt_BeigeCords
U_PMC_GTShirt_DJeans
U_PMC_GTShirt_SJeans
U_PMC_BlkTShirt_DJeans
U_PMC_BlkTShirt_SJeans
U_PMC_BluTShirt_SJeans
U_PMC_WTShirt_DJeans
V_PlateCarrier1_PMC_rgr
V_PlateCarrier1_PMC_blk
V_PlateCarrier1_PMC_marpat
V_PlateCarrier1_PMC_khki
V_PlateCarrierInd_PMC_blk
V_PlateCarrierInd_PMC_grn
V_TacVest_darkblck
H_Cap_pmc
H_Cap_tan_pmc
H_Cap_pmc_headphones
H_Capbw_pmc
H_Capbw_tan_pmc
H_Booniehat_rgr
H_Booniehat_GCAMO
H_Booniehat_DMARPAT
H_PilotHelmetHeli_PMC

///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc.
///////////////////////////////////////////////////////////////////////////////
> Medical

Exile_Item_InstaDoc

///////////////////////////////////////////////////////////////////////////////
// Light Houses + Life Guard Towers + Castles
///////////////////////////////////////////////////////////////////////////////
> Tourist

// The ONLY place to find the BEST backpacks :)
B_Carryall_ocamo
B_Carryall_oucamo
B_Carryall_mcamo
B_Carryall_oli
B_Carryall_khk
B_Carryall_cbr

// Snipers
srifle_DMR_01_F
srifle_EBR_F
hlc_rifle_M14
hlc_rifle_M21
hlc_rifle_M14DMR
hlc_rifle_awmagnum
hlc_rifle_awmagnum_BL
hlc_rifle_awmagnum_FDE
hlc_rifle_awMagnum_FDE_ghillie
hlc_rifle_awMagnum_BL_ghillie
hlc_rifle_awMagnum_OD_ghillie

// Sniper Ammo
10Rnd_762x51_Mag
20Rnd_762x51_Mag
hlc_5rnd_300WM_FMJ_AWM
hlc_5rnd_300WM_AP_AWM
hlc_5rnd_300WM_BTSP_AWM
hlc_5rnd_300WM_mk248_AWM
hlc_5rnd_300WM_SBT_AWM

// Sniper Items
muzzle_snds_B
acc_flashlight
acc_pointer_IR
optic_DMS
optic_SOS
optic_LRPS


Binocular
Rangefinder
Laserdesignator
ItemRadio
ItemGPS
NVGoggles
Exile_Item_InstaDoc

// Explosives
HandGrenade
MiniGrenade
