/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

class CfgPatches
{
	class exile_server_config
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};


class CfgBuildings
{
	#include "CfgBuildings_Esseker.h"
	///////////////////////////////////////////////////////////////////////////
	// Castles & Lighthouses & Life Guard Towers
	///////////////////////////////////////////////////////////////////////////
	class Land_LifeguardTower_01_F
	{
		table = "Tourist";
		positions[] = {{-0.498047, -0.222656, 1.13312}};
	};

	class Land_LightHouse_F
	{
		table = "Tourist";
		positions[] = {{-5.74805, 11.0859, -3.75002}, {0.789063, -2.94336, -11.0953}, {1.07813, -2.83008, 5.39755}};
	};

	class Land_Lighthouse_small_F
	{
		table = "Tourist";
		positions[] = {{-0.369141, 1.18555, -3.39546}, {4.32617, -0.462891, -3.39546}};
	};


	///////////////////////////////////////////////////////////////////////////
	// Military
	///////////////////////////////////////////////////////////////////////////
	//"Land_Airport_center_F"
	//"Land_Airport_left_F"
	//"Land_Airport_right_F"


	class Land_Airport_Tower_F
	{
		table = "Military";
		positions[] = {{-0.363281, 6.25586, -10.4415}, {-0.636719, -2.08203, -1.4408}, {-0.638672, 2.21875, -4.44063}, {-0.705078, 1.94336, -7.44128}, {-0.751953, 5.2793, 1.55464}, {-1.10742, -4.67578, 2.25613}};
	};

	class Land_Cargo_House_V3_F
	{
		table = "Military";
		positions[] = {{-2.0918, 1.58984, -0.0957484}, {1.11914, 3.17969, 0.0402873}};
	};

	class Land_Cargo_HQ_V1_F
	{
		table = "Military";
		positions[] = {{-0.294922, -3.42188, -3.27229}, {-1.46484, 3.26172, -3.27229}, {-2.02734, -2.62891, -0.747443}, {4.24609, 1.51758, -0.747443}, {4.98633, 3.64844, -3.27229}};
	};

	class Land_i_Barracks_V2_F
	{
		table = "Military";
		positions[] = {{-0.505859, 3.2168, 0.605521}, {-0.601563, 3.07617, 3.9395}, {-11.0234, -2.65625, 0.60552}, {-11.1328, -3.58398, 3.9395}, {-12.377, 0.271484, 3.9395}, {-2.39453, -3.92773, 0.605342}, {-5.09766, -4.89844, 3.93943}, {-8.69922, 3.24414, 3.9395}, {-9.12695, 3.73047, 0.60552}, {10.3711, 3.51367, 0.605521}, {10.6484, 2.85156, 3.9395}, {13.0684, -3.30469, 0.605521}, {13.1934, -3.42383, 3.9395}, {3.28711, -3.98633, 0.605521}, {3.4707, -3.55469, 3.9395}, {6.22852, 3.50391, 3.9395}, {6.39258, 3.05664, 0.605521}};
	};


	class Land_Cargo_Tower_V1_F
	{
		table = "Military";
		positions[] = {{-3.54785, -3.01758, 2.47987},{-3.15625, -0.837891, 5.00472},{-2.0498, -3.29883, -0.120125},{4.55957, 4.39258, -0.120125},{-4.42383, 2.45117, -0.120125},{-2.87598, 2.20898, -4.2958},{-2.88281, 4.14258, 5.00472},{0.235352, -1.19727, 5.07987},{3.58105, 4.11719, 2.47988},{1.27441, 3.17773, -8.24333},{2.50488, 0.0625, 5.00472}};
	};

	class Land_Cargo_Tower_V1_No1_F
	{
		table = "Military";
		positions[] = {{-2.4668, -4.10156, 5.00471}, {-2.7168, 1.0625, -0.120123}, {-2.83984, -2.95313, 2.47987}, {-3.06641, -2.66992, -0.120123}, {-3.12109, 2.42773, -4.2958}, {-3.16211, 4.51563, 5.00471}, {1.26367, 2.49609, -8.24333}, {2.25195, 4.30664, -0.120123}, {3.34766, 3.33203, 2.47987}, {3.66797, 1.8457, 5.00471}};
	};

	class Land_Cargo_Tower_V1_No2_F
	{
		table = "Military";
		positions[] = {{-2.71289, 3.0957, -0.120123}, {-2.83203, 5.06445, 5.00472}, {-3.48633, 2.28906, -4.2958}, {-3.64844, -2.87891, 2.47988}, {-3.77344, -3.32617, 5.00472}, {-3.80664, -1.75977, -0.120123}, {0.0625, -0.287109, 5.07988}, {1.58984, -2.11523, -0.120123}, {2.13672, 2.20703, -8.24332}, {3.57422, 4.22461, 2.47988}, {3.75, 1.31055, 5.00472}, {4.98633, 3.90625, -0.120123}};
	};

	class Land_Cargo_Tower_V1_No3_F
	{
		table = "Military";
		positions[] = {{-0.214844, -0.460938, 5.07988}, {-2.33203, -2.96094, -0.120119}, {-2.89648, -4.0625, 5.00472}, {-3.08008, -2.8125, 2.47988}, {-3.28711, 2.60352, -4.2958}, {-3.61328, 4.44141, 5.00472}, {-4.01758, 1.86133, -0.120119}, {1.54688, 2.61133, -8.24332}, {3.52734, 3.8418, 2.47988}, {3.5332, -0.386719, 5.00472}, {4.88477, 4.18945, -0.120119}};
	};

	class Land_Cargo_Tower_V1_No4_F
	{
		table = "Military";
		positions[] = {{-2.68555, -3.07031, -0.120119}, {-2.93359, -4.27148, 5.00472}, {-3.22461, 4.84375, 5.00472}, {-3.6543, 1.57227, -4.2958}, {-3.70508, -3.0332, 2.47988}, {-4.26367, 0.980469, -0.120119}, {2.1543, 2.08789, -8.24332}, {3.46289, 2.25781, 2.47988}, {3.62305, 2.16797, 5.00472}, {5.10156, 4.20898, -0.120119}};
	};

	class Land_Cargo_Tower_V1_No5_F
	{
		table = "Military";
		positions[] = {{-2.25781, -2.77344, -0.120119}, {-2.375, -4.45508, 5.00472}, {-2.41602, 5.18164, 5.00472}, {-2.94922, 2.4082, -4.2958}, {-3.89648, -2.7832, 2.47988}, {-4.03906, 1.43945, -0.120119}, {0.0410156, -0.8125, 5.07988}, {1.62305, 2.55664, -8.24332}, {2.97461, -0.335938, 5.00472}, {3.90039, 3.68555, 2.47988}, {4.80859, 3.57422, -0.120117}};
	};

	class Land_Cargo_Tower_V1_No6_F
	{
		table = "Military";
		positions[] = {{-1.6875, -2.5918, -0.120119}, {-3.16992, -3.74219, 5.00472}, {-3.41797, 1.87305, -0.120119}, {-3.49805, 2.06836, -4.2958}, {-3.81055, 4.59766, 5.00472}, {-3.92969, -2.12109, 2.47988}, {1.92578, 2.27344, -8.24332}, {3.50195, 2.76563, 2.47988}, {3.64258, 0.0078125, 5.00472}, {5.19141, 4.45117, -0.120119}};
	};

	class Land_Cargo_Tower_V1_No7_F
	{
		table = "Military";
		positions[] = {{-2.59766, -3.14063, -0.120119}, {-2.7832, 1.94531, -4.2958}, {-2.83203, 1.58594, -0.120119}, {-3.20508, 4.62891, 5.00472}, {-3.29883, -2.90234, 5.00472}, {-3.87891, -3.11914, 2.47988}, {0.228516, -1.05273, 5.07988}, {1.65234, 2.58594, -8.24332}, {3.40039, 3.05859, 2.47988}, {4.18164, 0.246094, 5.00472}, {4.42578, 3.99805, -0.120119}};
	};

	class Land_Cargo_Tower_V3_F
	{
		table = "Military";
		positions[] = {{-1.59375, -2.7168, -0.120119}, {-2.40039, 2.39648, -4.2958}, {-3.24023, -3.17773, 5.00472}, {-3.51367, 4.57617, 5.00472}, {-3.70703, -3.60547, 2.47988}, {-4.54883, 2.47266, -0.120119}, {0.142578, -0.179688, 5.07988}, {2.2793, 2.25391, -8.24332}, {3.87109, 3.3418, 2.47988}, {4.22656, 0.390625, 5.00472}, {5.05469, 4.16406, -0.120119}};
	};
	class Land_Radar_F
	{
		table = "Military";
		positions[] = {{-10.1797, -9.80859, -6.00412}, {-9.61719, 10.4219, -6.00412}, {11.6211, 1.06641, -6.00412}, {2.81445, 12.2578, -7.78305}};
	};

	///////////////////////////////////////////////////////////////////////////
	// Garages / Vehicle
	///////////////////////////////////////////////////////////////////////////


	class Land_i_Garage_V2_F
	{
		table = "VehicleService";
		positions[] = {{-0.00585938, -1.24609, -0.0974801}, {-2.16016, 1.54492, -0.0974798}, {1.60547, 2.11719, -0.0974803}, {3.2832, -1.51953, -0.0974796}};
	};

	///////////////////////////////////////////////////////////////////////////
	// Civillian Lower Class
	///////////////////////////////////////////////////////////////////////////

	class Land_Chapel_Small_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{0.482422, 0.65625, -0.867858}, {3.08984, -1.2832, -0.867858}};
	};

	class Land_Chapel_Small_V2_F
	{
		table = "CivillianLowerClass";
		positions[] = {{0.556641, -0.966797, -0.867857}, {3.54297, 0.486328, -0.867857}};
	};

	class Land_Chapel_V2_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-2.36523, 2.46289, -2.80848}, {-3.06445, -2, -2.80848}, {-6.61328, -1.54688, -2.80848}, {4.75781, 3.67383, -2.80848}, {4.82813, -2.96484, -2.80848}, {9.03711, 0.316406, -2.60848}};
	};


	class Land_i_Addon_04_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-1.25, 0.0175781, 0.0796976}};
	};

	class Land_u_Addon_01_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{1.69727, 3.04102, 0.0627024}, {4.28125, 1.1543, 0.0627022}};
	};

	class Land_i_Windmill01_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-0.585938, 0.908203, -3.53162}};
	};

	class Land_d_Windmill01_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-0.935547, 0.259766, -2.2985}, {-1.65039, 0.365234, 0.947132}};
	};

	class Land_Slum_House02_F
	{
		table = "CivillianLowerClass";
		positions[] = {{1.13867, 2.50391, -0.798099}, {1.59375, -0.0566406, -0.798099}};
	};

	class Land_Slum_House03_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-1.29688, 0.566406, -1.07377}, {2.27148, 1.125, -1.07377}};
	};



	class Land_i_Stone_Shed_V3_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-2.3125, 2.05469, -0.100502}, {1.79297, 1.93359, -0.100502}};
	};

	class Land_u_House_Big_01_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-1.89648, 6.0332, 0.855065}, {-2.35742, 5.4082, -2.56494}, {-2.89648, -3.33203, 0.855065}, {-3.0957, -0.896484, -2.65494}, {1.25, -1.31445, -2.56494}, {2.0293, -0.521484, 0.855065}, {2.36523, 5.47461, -2.56493}, {2.95117, 5.49609, 0.855065}, {2.99023, -5.02734, 0.855065}, {3.58789, -4.98828, -2.56494}};
	};

	class Land_u_House_Big_02_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-2.43164, 2.83008, 0.965823}, {-2.70703, -2.07422, 0.965824}, {-2.88281, 1.88086, -2.54418}, {0.871094, -1.66016, -2.54418}, {2.41602, 3.00977, 0.965824}, {3.66992, -5.79883, -2.10418}, {3.9082, 3.56055, -2.54418}};
	};

	class Land_u_House_Small_01_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-1.18359, 3.63281, -0.904629}, {-1.7793, -2.59961, -0.903945}, {3.25195, 3.44531, -0.904572}};
	};

	///////////////////////////////////////////////////////////////////////////
	// Civillian Upper Class
	///////////////////////////////////////////////////////////////////////////

	class Land_i_House_Big_01_V1_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-2.21484, 5.46875, -2.56493}, {-3.24023, -1.5918, -2.65493}, {0.558594, -0.640625, 0.855072}, {1.24023, -1.98828, -2.56493}, {1.66602, -5.2832, 0.855072}, {2.19531, 5.19922, -2.56493}, {2.4375, 5.01172, 0.855076}, {2.87305, -5.01758, -2.56493}};
	};

	class Land_i_House_Big_02_V2_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-2.08789, -2.46484, 0.784063}, {-2.54688, 2.53906, -2.62327}, {-3.01758, 3.12109, 0.784063}, {1.11328, -1.46289, -2.62327}, {2.68945, 2.03711, 0.784063}, {3.02734, 2.27344, -2.62327}, {3.26367, -5.55273, -2.28594}};
	};

	class Land_i_House_Big_02_V3_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-2.50391, -2.10742, -2.62327}, {-3.00781, 3.68164, 0.784063}, {-3.0957, 2.57227, -2.62327}, {-3.31055, -2.88867, 0.784063}, {1.26953, -1.73438, -2.62327}, {2.40234, 2.26953, -2.62327}, {2.89844, 2.11719, 0.784064}, {3.26758, -5.52734, -2.28594}};
	};

	class Land_i_House_Small_01_V1_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-1.2207, 3.05078, -1.0419}, {-2.74414, -0.560547, -1.04199}, {3.06641, -1.90234, -1.0404}, {3.35547, 2.94336, -1.04187}};
	};

	class Land_i_House_Small_01_V3_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-0.738281, 3.17578, -1.04194}, {-2.46094, -2.16992, -1.04174}, {-2.68359, -1.76563, -1.04187}, {-2.76563, 3.31641, -1.04232}, {3.07422, -1.27539, -1.04059}, {3.08398, 3.04883, -1.0419}, {3.41406, 3.10547, -1.04192}, {3.61719, -0.394531, -1.04086}};
	};

	class Land_i_House_Small_02_V1_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-1.08008, -2.11133, -0.709651}, {-1.18945, 0.785156, -0.705689}, {2.64258, -2.09766, -0.704848}, {5.95313, 0.556641, -0.700583}};
	};

	class Land_i_House_Small_02_V2_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-1.29688, 1.06641, -0.704727}, {-1.56836, -1.83789, -0.710279}, {2.85352, -1.52148, -0.704572}, {2.88086, 1.76367, -0.702332}, {5.21289, 0.935547, -0.701534}};
	};

	class Land_i_House_Small_03_V1_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-3.89648, -0.134766, -0.371629}, {0.419922, 2.68555, -0.371629}, {3.59961, 2.0918, -0.371629}, {3.70703, -4.19727, -0.371629}};
	};

	///////////////////////////////////////////////////////////////////////////
	// Shops
	///////////////////////////////////////////////////////////////////////////
	class Land_i_Shop_01_V1_F
	{
		table = "Shop";
		positions[] = {{-0.863281, 6.10938, -2.76158}, {-1.2168, 0.232422, -2.76158}, {-1.2832, -0.884766, 1.10984}, {-2.28516, 6.1875, 1.10975}};
	};

	class Land_i_Shop_01_V2_F
	{
		table = "Shop";
		positions[] = {{-1.17969, 5.32813, -2.76158}, {-18.127, 16.7285, -2.74088}, {-2.39258, 5.51563, 1.10978}, {-2.53906, 0.253906, -2.76158}, {-2.70703, -1.4707, 1.10992}, {-24.2051, 3.65039, 1.25308}, {1.15625, 1.20313, 1.10906}};
	};

	class Land_u_Shop_01_V1_F
	{
		table = "Shop";
		positions[] = {{-1.14258, 1.23438, -2.88084}, {-2.32422, 3.14648, 0.9905}, {-3.31836, 5.81836, 0.990853}, {0.808594, -0.544922, 0.990474}, {2.58789, 5.81641, -2.88084}};
	};

	class Land_u_Shop_02_V1_F
	{
		table = "Shop";
		positions[] = {{-3.46484, -1.625, 1.23859}, {-3.9082, 3.0957, -2.66855}, {0.751953, -3.26563, -2.66855}, {1.71484, 0.486328, 1.23859}};
	};

	class Land_Kiosk_gyros_F
	{
		table = "Shop";
		positions[] = {{-1.20898, -1.07813, -1.97606}, {1.26758, -0.128906, -1.97606}};
	};

	///////////////////////////////////////////////////////////////////////////
	// Industrial
	///////////////////////////////////////////////////////////////////////////

	class Land_Research_house_V1_F
	{
		table = "Industrial";
		positions[] = {{-1.28516, 2.89258, 0.0302877}, {1.12305, 2.04492, -0.0384929}};
	};

	class Land_Research_HQ_F
	{
		table = "Industrial";
		positions[] = {{-1.03125, 2.60547, -3.26622}, {-2.25195, -2.75586, -0.741376}, {-2.28711, -3.94141, -3.26622}, {4.69336, 4.01172, -3.26622}, {6.06445, 3.50391, -0.741376}};
	};
};
class CfgLootTables
{
	/**
	  Result of 100 rounds:

	  FlareWhite_F
	  Exile_Item_ChristmasTinner
	  RH_ta01nsn_tan_2D
	  RH_bullb
	  RH_32Rnd_9x19_tec
	  30Rnd_556x45_Stanag_Tracer_Yellow
	  B_OutdoorPack_tan
	  B_OutdoorPack_tan
	  RH_8Rnd_9x18_Mak
	  Exile_Item_CookingPot
	  RH_fa556_des
	  RH_m4a1_ris_m203s
	  Chemlight_red
	  RH_usp
	  U_IG_Guerilla2_3
	  RH_x2
	  RH_Saker762_des
	  RH_p226s
	  RH_sfn57
	  SMG_02_F
	  Exile_Item_PlasticBottleEmpty
	  hgun_Rook40_F
	  Exile_Item_PlasticBottleFreshWater
	  RH_tundra_tg
	  Exile_Item_ChristmasTinner
	  RH_m9c
	  RH_15Rnd_9x19_SIG
	  30Rnd_556x45_Stanag
	  30Rnd_65x39_caseless_green
	  hlc_smg_mp5n
	  B_Bergen_sgg
	  30Rnd_65x39_caseless_green_mag_Tracer
	  V_Chestrig_blk
	  9Rnd_45ACP_Mag
	  U_IG_Guerilla2_2
	  RH_g19t
	  Exile_Item_PlasticBottleEmpty
	  RH_15Rnd_9x19_SIG
	  B_AssaultPack_sgg
	  RH_Saker762_tg
	  B_Kitbag_mcamo
	  B_Kitbag_mcamo
	  RH_barska_rds
	  B_AssaultPack_sgg
	  ItemGPS
	  B_AssaultPack_rgr
	  hgun_P07_F
	  Exile_Item_Surstromming
	  RH_m6x
	  H_Watchcap_blk
	  RH_ta31rmr
	  RH_fn57_g
	  hgun_P07_F
	  U_IG_Guerilla2_1
	  RH_qdss_nt4_tg
	  Exile_Item_BBQSandwich
	  B_FieldPack_ocamo
	  Exile_Item_BBQSandwich
	  RH_8Rnd_762_tt33
	  RH_m9c
	  Exile_Item_Catfood_Cooked
	  optic_MRD
	  RH_demz
	  B_Bergen_mcamo
	  RH_fa556_tg
	  RH_32Rnd_9x19_tec
	  hlc_30Rnd_10mm_B_MP5
	  V_HarnessO_brn
	  hlc_30Rnd_9x19_GD_MP5
	  B_AssaultPack_dgtl
	  ItemGPS
	  RH_deagles
	  RH_barska_rds
	  Exile_Item_PlasticBottleEmpty
	  RH_18Rnd_9x19_gsh
	  U_C_Poor_shorts_1
	  6Rnd_45ACP_Cylinder
	  RH_sw659
	  RH_pas13cl
	  RH_deaglem
	  Chemlight_red
	  B_HuntingBackpack
	  RH_17Rnd_9x19_g17
	  RH_15Rnd_9x19_SIG
	  30Rnd_9x21_Mag
	  B_Kitbag_sgg
	  RH_sw659
	  RH_fn57
	  RH_fnp45
	  hgun_Pistol_heavy_01_F
	  RH_ta31rmr_tan_2D
	  H_Cap_brn_SPECOPS
	  RH_Saker762_wdl
	  RH_vz61
	  H_Bandanna_khk
	  RH_7Rnd_45cal_m1911
	  RH_7Rnd_45cal_m1911
	  30Rnd_65x39_caseless_green_mag_Tracer
	  U_PMC_BlkTShirt_DJeans
	  RH_8Rnd_762_tt33
	*/
	class CivillianLowerClass
	{
		top = 159.95;
		count = 372;
		maximum = 100;
		sum = 37200;
		items[] =
		{
			{2, "Exile_Item_Catfood"},
			{4, "Exile_Item_PlasticBottleEmpty"},
			{5.9, "Exile_Item_Surstromming"},
			{7.6, "Exile_Item_BBQSandwich"},
			{9.3, "Exile_Item_ChristmasTinner"},
			{11, "Exile_Item_SausageGravy"},
			{12.5, "Exile_Item_GloriousKnakworst"},
			{13.5, "Chemlight_blue"},
			{14.5, "Chemlight_green"},
			{15.5, "Chemlight_red"},
			{16.5, "Chemlight_yellow"},
			{17.4, "16Rnd_9x21_Mag"},
			{18.3, "11Rnd_45ACP_Mag"},
			{19.2, "9Rnd_45ACP_Mag"},
			{20.1, "30Rnd_9x21_Mag"},
			{20.9, "RH_g18"},
			{21.7, "RH_kimber"},
			{22.5, "hgun_P07_F"},
			{23.3, "RH_tt33"},
			{24.1, "RH_mk2"},
			{24.9, "RH_vz61"},
			{25.7, "RH_fn57_g"},
			{26.5, "RH_fnp45t"},
			{27.3, "RH_g17"},
			{28.1, "RH_tec9"},
			{28.9, "FlareGreen_F"},
			{29.7, "RH_ttracker_g"},
			{30.5, "RH_sw659"},
			{31.3, "hgun_ACPC2_F"},
			{32.1, "RH_mak"},
			{32.9, "hgun_Rook40_F"},
			{33.7, "RH_fn57_t"},
			{34.5, "RH_p226"},
			{35.3, "RH_uspm"},
			{36.1, "RH_p226s"},
			{36.9, "RH_m9c"},
			{37.7, "RH_g19"},
			{38.5, "RH_ttracker"},
			{39.3, "RH_fnp45"},
			{40.1, "FlareYellow_F"},
			{40.9, "FlareWhite_F"},
			{41.7, "FlareRed_F"},
			{42.5, "RH_mateba"},
			{43.3, "RH_vp70"},
			{44.1, "RH_g19t"},
			{44.9, "RH_m9"},
			{45.7, "RH_kimber_nw"},
			{46.5, "RH_m1911"},
			{47.2999999999999, "RH_usp"},
			{48.0999999999999, "RH_cz75"},
			{48.8999999999999, "RH_gsh18"},
			{49.6999999999999, "RH_fn57"},
			{50.4499999999999, "B_OutdoorPack_blu"},
			{51.1999999999999, "B_OutdoorPack_tan"},
			{51.9499999999999, "B_OutdoorPack_blk"},
			{52.6499999999999, "30Rnd_65x39_caseless_green_mag_Tracer"},
			{53.3499999999999, "30Rnd_556x45_Stanag_Tracer_Green"},
			{54.0499999999999, "30Rnd_556x45_Stanag_Tracer_Yellow"},
			{54.75, "30Rnd_556x45_Stanag_Tracer_Red"},
			{55.45, "B_HuntingBackpack"},
			{56.15, "30Rnd_65x39_caseless_green"},
			{56.85, "30Rnd_556x45_Stanag"},
			{57.5, "Exile_Item_CookingPot"},
			{58.1, "RH_6Rnd_45ACP_Mag"},
			{58.7, "6Rnd_45ACP_Cylinder"},
			{59.3, "RH_10Rnd_22LR_mk2"},
			{59.9, "B_AssaultPack_dgtl"},
			{60.5, "RH_15Rnd_9x19_SIG"},
			{61.1, "B_AssaultPack_sgg"},
			{61.7, "RH_18Rnd_9x19_VP"},
			{62.3, "RH_14Rnd_9x19_sw"},
			{62.9, "RH_6Rnd_44_Mag"},
			{63.5, "RH_8Rnd_9x18_Mak"},
			{64.1, "RH_6Rnd_357_Mag"},
			{64.7, "RH_16Rnd_40cal_usp"},
			{65.3, "RH_6Rnd_454_Mag"},
			{65.8999999999999, "RH_20Rnd_32cal_vz61"},
			{66.4999999999999, "B_AssaultPack_blk"},
			{67.0999999999999, "RH_17Rnd_9x19_g17"},
			{67.6999999999999, "RH_15Rnd_45cal_fnp"},
			{68.2999999999999, "B_Kitbag_sgg"},
			{68.8999999999999, "RH_20Rnd_57x28_FN"},
			{69.4999999999999, "B_Kitbag_cbr"},
			{70.0999999999999, "B_AssaultPack_khk"},
			{70.6999999999999, "B_Kitbag_mcamo"},
			{71.2999999999999, "B_AssaultPack_mcamo"},
			{71.8999999999999, "B_AssaultPack_cbr"},
			{72.4999999999999, "RH_30Rnd_9x19_UZI"},
			{73.0999999999999, "RH_32Rnd_9x19_tec"},
			{73.6999999999999, "RH_18Rnd_9x19_gsh"},
			{74.2999999999999, "RH_8Rnd_762_tt33"},
			{74.8999999999999, "RH_33Rnd_9x19_g18"},
			{75.4999999999999, "RH_15Rnd_9x19_M9"},
			{76.0999999999999, "RH_7Rnd_45cal_m1911"},
			{76.6999999999998, "RH_12Rnd_45cal_usp"},
			{77.2999999999998, "RH_16Rnd_9x19_cz"},
			{77.8999999999998, "B_AssaultPack_rgr"},
			{78.3999999999998, "B_FieldPack_ocamo"},
			{78.8999999999998, "optic_Holosight_smg"},
			{79.3999999999998, "RH_deagleg"},
			{79.8999999999998, "B_FieldPack_cbr"},
			{80.3999999999998, "RH_deagle"},
			{80.8999999999998, "muzzle_snds_L"},
			{81.3999999999998, "hgun_Pistol_Signal_F"},
			{81.8999999999998, "U_C_HunterBody_grn"},
			{82.3999999999998, "B_Bergen_mcamo"},
			{82.8999999999998, "U_C_Poor_2"},
			{83.3999999999998, "RH_bullb"},
			{83.8999999999998, "RH_bull"},
			{84.3999999999998, "RH_muzi"},
			{84.8999999999998, "RH_python"},
			{85.3999999999998, "B_Bergen_rgr"},
			{85.8999999999998, "RH_deagles"},
			{86.3999999999998, "B_Bergen_blk"},
			{86.8999999999998, "20Rnd_556x45_UW_mag"},
			{87.3999999999998, "B_FieldPack_blk"},
			{87.8999999999998, "hgun_Pistol_heavy_01_F"},
			{88.3999999999998, "hgun_Pistol_heavy_02_F"},
			{88.8999999999998, "optic_ACO_grn_smg"},
			{89.3999999999998, "optic_Aco_smg"},
			{89.8999999999998, "optic_ACO_grn"},
			{90.3999999999998, "optic_Aco"},
			{90.8999999999998, "Exile_Item_PlasticBottleFreshWater"},
			{91.3999999999998, "RH_deaglem"},
			{91.8999999999998, "RH_mp412"},
			{92.3999999999998, "U_C_Poor_1"},
			{92.8999999999998, "U_C_Poor_shorts_1"},
			{93.3999999999998, "B_Bergen_sgg"},
			{93.8999999999998, "muzzle_snds_acp"},
			{94.3999999999998, "B_FieldPack_oucamo"},
			{94.7999999999998, "hlc_30Rnd_9x19_B_MP5"},
			{95.1999999999998, "U_IG_Guerilla2_2"},
			{95.5999999999999, "U_PMC_GTShirt_DJeans"},
			{95.9999999999999, "U_IG_Guerilla1_1"},
			{96.3999999999999, "U_PMC_GTShirt_SJeans"},
			{96.7999999999999, "Exile_Item_DuctTape"},
			{97.1999999999999, "U_PMC_BlkTShirt_DJeans"},
			{97.5999999999999, "Exile_Item_Matches"},
			{97.9999999999999, "U_PMC_BlkTShirt_SJeans"},
			{98.3999999999999, "U_IG_Guerilla3_1"},
			{98.7999999999999, "U_PMC_BluTShirt_SJeans"},
			{99.1999999999999, "U_IG_Guerilla3_2"},
			{99.5999999999999, "RH_m4a1_ris_m203"},
			{99.9999999999999, "hlc_30Rnd_9x19_SD_MP5"},
			{100.4, "U_PMC_WTShirt_DJeans"},
			{100.8, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"},
			{101.2, "U_PMC_BluePlaidShirt_BeigeCords"},
			{101.6, "U_C_Poloshirt_salmon"},
			{102, "U_PMC_RedPlaidShirt_DenimCords"},
			{102.4, "U_C_Poloshirt_stripped"},
			{102.8, "arifle_Katiba_F"},
			{103.2, "U_C_Poloshirt_blue"},
			{103.6, "arifle_Katiba_GL_F"},
			{104, "U_IG_Guerilla2_3"},
			{104.4, "acc_flashlight"},
			{104.8, "Exile_Item_LightBulb"},
			{105.2, "arifle_TRG21_F"},
			{105.6, "Exile_Item_Beer"},
			{106, "arifle_TRG20_F"},
			{106.4, "RH_m4a1_ris_m203s"},
			{106.8, "hlc_30Rnd_10mm_B_MP5"},
			{107.2, "RH_m4a1_ris"},
			{107.6, "RH_m4_ris_m203s"},
			{108, "RH_m4_ris_m203"},
			{108.4, "RH_m4_ris"},
			{108.8, "RH_m4_m203"},
			{109.2, "RH_m4"},
			{109.6, "hlc_30Rnd_10mm_JHP_MP5"},
			{110, "U_PMC_BlackPoloShirt_BeigeCords"},
			{110.4, "U_IG_Guerilla2_1"},
			{110.8, "U_C_Poloshirt_burgundy"},
			{111.2, "U_C_Poloshirt_tricolour"},
			{111.6, "30Rnd_45ACP_Mag_SMG_01"},
			{112, "hlc_30Rnd_9x19_GD_MP5"},
			{112.3, "RH_eotech553_tan"},
			{112.6, "muzzle_snds_H"},
			{112.9, "hlc_smg_mp5a4"},
			{113.2, "optic_Hamr"},
			{113.5, "hlc_smg_mp5a3"},
			{113.8, "arifle_SDAR_F"},
			{114.1, "RH_fa556_wdl"},
			{114.4, "optic_MRCO"},
			{114.7, "RH_fa762"},
			{115, "RH_eotech553"},
			{115.3, "RH_fa762_tg"},
			{115.6, "Exile_Item_Energydrink"},
			{115.9, "RH_fa762_des"},
			{116.2, "RH_eotexps3"},
			{116.5, "RH_fa762_wdl"},
			{116.8, "RH_eothhs1"},
			{117.1, "RH_spr_mbs"},
			{117.4, "RH_compm4s"},
			{117.7, "RH_spr_mbs_tg"},
			{118, "RH_compm2l"},
			{118.3, "RH_spr_mbs_des"},
			{118.6, "RH_compm2l_tan"},
			{118.9, "RH_spr_mbs_wdl"},
			{119.2, "RH_t1_tan"},
			{119.5, "RH_tundra"},
			{119.8, "RH_shortdot"},
			{120.1, "RH_tundra_tg"},
			{120.4, "RH_ta01nsn"},
			{120.7, "RH_tundra_des"},
			{121, "RH_ta31rco"},
			{121.3, "RH_tundra_wdl"},
			{121.6, "RH_ta31rmr"},
			{121.9, "RH_m110sd"},
			{122.2, "RH_ta01nsn_tan"},
			{122.5, "RH_m110sd_t"},
			{122.8, "RH_ta31rco_tan"},
			{123.1, "hlc_smg_9mmar"},
			{123.4, "RH_peq15"},
			{123.7, "RH_compm2_tan"},
			{124, "RH_fa556_tg"},
			{124.3, "H_Booniehat_grn"},
			{124.6, "RH_qdss_nt4"},
			{124.9, "RH_ta31rco_tan_2D"},
			{125.2, "RH_fa556_des"},
			{125.5, "RH_compm2"},
			{125.8, "H_Booniehat_tan"},
			{126.1, "RH_ta31rmr_tan_2D"},
			{126.4, "RH_t1"},
			{126.7, "6Rnd_RedSignal_F"},
			{127, "RH_ta01nsn_tan_2D"},
			{127.3, "RH_anpvs10"},
			{127.6, "RH_cmore"},
			{127.9, "RH_m145"},
			{128.2, "RH_peq15_top"},
			{128.5, "H_Booniehat_indp"},
			{128.8, "H_Booniehat_dirty"},
			{129.1, "RH_eothhs1_tan"},
			{129.4, "RH_leu_mk4"},
			{129.7, "RH_peq15b_top"},
			{130, "RH_SFM952V"},
			{130.3, "RH_SFM952V_tan"},
			{130.6, "RH_7Rnd_50_AE"},
			{130.9, "RH_c79"},
			{131.2, "RH_ta31rmr_tan"},
			{131.5, "RH_anpvs4"},
			{131.8, "RH_qdss_nt4_des"},
			{132.1, "RH_qdss_nt4_wdl"},
			{132.4, "RH_saker"},
			{132.7, "RH_pas13cl"},
			{133, "RH_saker_des"},
			{133.3, "RH_pas13cm"},
			{133.6, "RH_peq15b"},
			{133.9, "H_Booniehat_khk"},
			{134.2, "H_Booniehat_mcamo"},
			{134.5, "RH_barska_rds"},
			{134.8, "H_Booniehat_dgtl"},
			{135.1, "RH_peq2"},
			{135.4, "6Rnd_GreenSignal_F"},
			{135.7, "RH_peq2_top"},
			{136, "RH_LTdocter"},
			{136.3, "optic_DMS"},
			{136.6, "RH_eotech553mag"},
			{136.9, "RH_eotech553mag_tan"},
			{137.2, "RH_eotexps3_tan"},
			{137.5, "RH_reflex"},
			{137.8, "RH_m3lr"},
			{138.1, "RH_LTdocterl"},
			{138.4, "RH_ta31rco_2D"},
			{138.7, "RH_ta31rmr_2D"},
			{139, "RH_zpoint"},
			{139.3, "RH_ta01nsn_2D"},
			{139.6, "RH_ta648"},
			{139.9, "RH_c79_2D"},
			{140.2, "RH_qdss_nt4_tg"},
			{140.5, "hlc_smg_mp5sd6"},
			{140.8, "hlc_smg_mp5sd5"},
			{141.1, "hlc_smg_mp510"},
			{141.4, "hlc_smg_mp5n"},
			{141.7, "muzzle_snds_M"},
			{142, "optic_Arco"},
			{142.3, "optic_Holosight"},
			{142.6, "RH_saker_tg"},
			{142.9, "hlc_smg_mp5a2"},
			{143.200000000001, "hgun_PDW2000_F"},
			{143.500000000001, "SMG_02_F"},
			{143.800000000001, "SMG_01_F"},
			{144.100000000001, "RH_saker_wdl"},
			{144.400000000001, "acc_pointer_IR"},
			{144.700000000001, "RH_Saker762"},
			{145.000000000001, "RH_pas13cmg"},
			{145.300000000001, "RH_Saker762_tg"},
			{145.600000000001, "RH_accupoint"},
			{145.900000000001, "RH_Saker762_des"},
			{146.200000000001, "RH_pas13ch"},
			{146.500000000001, "RH_Saker762_wdl"},
			{146.800000000001, "H_Booniehat_khk_hs"},
			{147.100000000001, "RH_fa556"},
			{147.350000000001, "ItemGPS"},
			{147.550000000001, "Exile_Item_ChristmasTinner_Cooked"},
			{147.750000000001, "Exile_Item_BBQSandwich_Cooked"},
			{147.950000000001, "RH_muzisd"},
			{148.150000000001, "RH_tecsd"},
			{148.350000000001, "RH_sfn57"},
			{148.550000000001, "RH_docter"},
			{148.750000000001, "RH_vp70stock"},
			{148.950000000001, "RH_m9qd"},
			{149.150000000001, "RH_matchsd"},
			{149.350000000001, "RH_pmir"},
			{149.550000000001, "RH_pmsd"},
			{149.750000000001, "RH_x300"},
			{149.950000000001, "RH_m6x"},
			{150.15, "RH_x2"},
			{150.35, "RH_fhusp"},
			{150.55, "RH_osprey"},
			{150.75, "RH_gemtech45"},
			{150.95, "RH_gemtech9"},
			{151.15, "RH_aacusp"},
			{151.35, "RH_suppr9"},
			{151.55, "H_Bandanna_khk"},
			{151.75, "H_Bandanna_khk_hs"},
			{151.95, "H_Bandanna_cbr"},
			{152.15, "H_Bandanna_sgg"},
			{152.35, "H_Bandanna_gry"},
			{152.55, "H_Bandanna_camo"},
			{152.75, "H_Bandanna_mcamo"},
			{152.95, "H_BandMask_blk"},
			{153.15, "Exile_Item_GloriousKnakworst_Cooked"},
			{153.35, "Exile_Item_SausageGravy_Cooked"},
			{153.55, "Exile_Item_Surstromming_Cooked"},
			{153.75, "Exile_Item_Catfood_Cooked"},
			{153.95, "optic_Yorris"},
			{154.15, "optic_MRD"},
			{154.35, "RH_demz"},
			{154.55, "RH_A26"},
			{154.7, "Binocular"},
			{154.85, "H_Watchcap_khk"},
			{155, "V_BandollierB_rgr"},
			{155.15, "H_Watchcap_sgg"},
			{155.3, "V_BandollierB_blk"},
			{155.45, "V_BandollierB_oli"},
			{155.6, "H_Cap_brn_SPECOPS"},
			{155.75, "V_BandollierB_cbr"},
			{155.9, "Exile_Item_InstaDoc"},
			{156.05, "H_Watchcap_blk"},
			{156.2, "H_Watchcap_camo"},
			{156.35, "H_TurbanO_blk"},
			{156.5, "V_HarnessO_brn"},
			{156.65, "V_HarnessOGL_brn"},
			{156.8, "H_Hat_camo"},
			{156.95, "V_BandollierB_khk"},
			{157.1, "H_Cap_tan_specops_US"},
			{157.25, "H_Cap_khaki_specops_UK"},
			{157.4, "V_HarnessO_gry"},
			{157.55, "V_HarnessOGL_gry"},
			{157.7, "V_HarnessOSpec_brn"},
			{157.85, "V_HarnessOSpec_gry"},
			{157.95, "H_Shemag_khk"},
			{158.05, "H_Beret_brn_SF"},
			{158.15, "H_Shemag_olive_hs"},
			{158.25, "V_Chestrig_khk"},
			{158.35, "H_Shemag_olive"},
			{158.45, "U_IG_leader"},
			{158.55, "Exile_Item_CamoTentKit"},
			{158.65, "H_Shemag_tan"},
			{158.75, "H_Beret_blk"},
			{158.85, "H_Beret_red"},
			{158.95, "H_Beret_grn"},
			{159.05, "V_Chestrig_rgr"},
			{159.15, "H_Beret_ocamo"},
			{159.25, "H_Beret_grn_SF"},
			{159.35, "H_ShemagOpen_khk"},
			{159.45, "H_ShemagOpen_tan"},
			{159.55, "H_Beret_Colonel"},
			{159.65, "H_Beret_02"},
			{159.75, "V_Chestrig_oli"},
			{159.85, "V_Chestrig_blk"},
			{159.9, "V_I_G_resistanceLeader_F"},
			{159.95, "U_I_G_resistanceLeader_F"}
		};
	};

	/**
	  Result of 100 rounds:

	  U_PMC_WhtPolo_BluPants
	  RH_6Rnd_357_Mag
	  U_PMC_CombatUniformLS_ChckLR_SPBB
	  RH_16Rnd_40cal_usp
	  RH_m9c
	  RH_7Rnd_50_AE
	  RH_sw659
	  RH_20Rnd_57x28_FN
	  RH_g17
	  Exile_Item_Surstromming_Cooked
	  U_Rangemaster
	  RH_7Rnd_45cal_m1911
	  U_PMC_BluPolo_GrnPants
	  RH_15Rnd_45cal_fnp
	  U_Rangemaster
	  RH_7Rnd_45cal_m1911
	  Exile_Item_Energydrink
	  Exile_Item_SausageGravy
	  U_C_Poloshirt_burgundy
	  RH_cz75
	  U_PMC_BlckPolo_BgPants
	  Exile_Item_Surstromming
	  RH_gsh18
	  30Rnd_65x39_caseless_green
	  RH_18Rnd_9x19_gsh
	  U_PMC_CombatUniformRS_SSGPSB
	  30Rnd_556x45_Stanag_Tracer_Yellow
	  RH_15Rnd_9x19_M9
	  U_PMC_WhtPolo_GrnPants
	  Exile_Item_GloriousKnakworst
	  Exile_Item_PlasticBottleEmpty
	  hgun_ACPC2_F
	  hgun_Pistol_heavy_01_F
	  9Rnd_45ACP_Mag
	  Exile_Item_Catfood
	  U_PMC_CombatUniformLS_BSGPBB
	  muzzle_snds_L
	  RH_m9c
	  RH_15Rnd_9x19_M9
	  U_PMC_CombatUniformLS_GSBPBB
	  U_PMC_CombatUniformLS_BSSPSB
	  RH_tecsd
	  muzzle_snds_M
	  U_PMC_CombatUniformRS_ChckP_BPBB
	  U_PMC_CombatUniformRS_IndPBSBB
	  RH_ttracker
	  H_Cap_blu
	  Exile_Item_ChristmasTinner
	  Exile_Item_Surstromming
	  RH_30Rnd_9x19_UZI
	  RH_6Rnd_44_Mag
	  RH_18Rnd_9x19_gsh
	  Exile_Item_ChristmasTinner
	  U_C_Poloshirt_tricolour
	  RH_mak
	  U_PMC_BlckPolo_BgPants
	  RH_g17
	  arifle_Katiba_F
	  hgun_Pistol_heavy_01_F
	  H_StrawHat_dark
	  Exile_Item_BBQSandwich_Cooked
	  arifle_SDAR_F
	  H_Beret_blk_POLICE
	  29rnd_300BLK_STANAG_S
	  RH_aacusp
	  U_PMC_CombatUniformLS_SSGPBB
	  hgun_P07_F
	  RH_uspm
	  RH_15Rnd_45cal_fnp
	  arifle_Katiba_F
	  RH_32Rnd_9x19_tec
	  U_PMC_CombatUniformLS_SSBPBB
	  U_PMC_CombatUniformRS_BSGPSB
	  B_HuntingBackpack
	  U_PMC_CombatUniformLS_SSGPBB
	  U_PMC_CombatUniformLS_BSGPBB
	  Exile_Item_GloriousKnakworst
	  U_PMC_CombatUniformLS_SSGPBB
	  U_PMC_CombatUniformRS_GSBPBB
	  RH_33Rnd_9x19_g18
	  RH_mp412
	  V_Press_F
	  RH_vp70
	  U_C_Poloshirt_stripped
	  U_PMC_CombatUniformRS_BSSPSB
	  RH_6Rnd_454_Mag
	  RH_mk2
	  optic_MRCO
	  RH_docter
	  RH_17Rnd_9x19_g17
	  RH_mk2
	  U_PMC_GrnPolo_BgPants
	  RH_32Rnd_9x19_tec
	  U_PMC_CombatUniformLS_BSSPBB
	  U_PMC_CombatUniformRS_BSSPBB
	  U_PMC_CombatUniformRS_BSGPBB
	  RH_cz75
	  H_Bandanna_surfer
	  U_PMC_BgPolo_GrnPants
	  Exile_Item_SausageGravy_Cooked
	*/
	class CivillianUpperClass
	{
		top = 138.65;
		count = 225;
		maximum = 100;
		sum = 22500;
		items[] =
		{
			{2, "Exile_Item_Catfood"},
			{4, "Exile_Item_PlasticBottleEmpty"},
			{5.9, "Exile_Item_Surstromming"},
			{7.6, "Exile_Item_ChristmasTinner"},
			{9.3, "Exile_Item_SausageGravy"},
			{11, "Exile_Item_BBQSandwich"},
			{12.5, "Exile_Item_GloriousKnakworst"},
			{13.5, "U_C_Poloshirt_blue"},
			{14.5, "U_C_Poloshirt_salmon"},
			{15.5, "U_C_Poloshirt_tricolour"},
			{16.5, "U_C_Poloshirt_stripped"},
			{17.5, "U_C_Poloshirt_burgundy"},
			{18.35, "B_OutdoorPack_blk"},
			{19.2, "B_OutdoorPack_tan"},
			{20.05, "B_OutdoorPack_blu"},
			{20.85, "11Rnd_45ACP_Mag"},
			{21.65, "30Rnd_556x45_Stanag"},
			{22.45, "30Rnd_9x21_Mag"},
			{23.25, "16Rnd_9x21_Mag"},
			{24.05, "30Rnd_65x39_caseless_mag"},
			{24.85, "30Rnd_65x39_caseless_green"},
			{25.55, "29rnd_300BLK_STANAG_S"},
			{26.25, "acc_flashlight"},
			{26.95, "RH_20Rnd_32cal_vz61"},
			{27.65, "RH_33Rnd_9x19_g18"},
			{28.35, "RH_fn57_g"},
			{29.05, "RH_cz75"},
			{29.75, "RH_fn57_t"},
			{30.45, "RH_usp"},
			{31.15, "RH_gsh18"},
			{31.85, "RH_m1911"},
			{32.55, "RH_tec9"},
			{33.25, "RH_kimber_nw"},
			{33.95, "29rnd_300BLK_STANAG_T"},
			{34.65, "RH_m9"},
			{35.35, "arifle_TRG20_F"},
			{36.05, "RH_vz61"},
			{36.75, "arifle_Mk20_F"},
			{37.45, "RH_g17"},
			{38.15, "hgun_Rook40_F"},
			{38.85, "RH_mk2"},
			{39.55, "6Rnd_45ACP_Cylinder"},
			{40.25, "RH_p226s"},
			{40.95, "arifle_Mk20C_F"},
			{41.65, "RH_g19t"},
			{42.35, "acc_pointer_IR"},
			{43.05, "RH_mateba"},
			{43.7500000000001, "9Rnd_45ACP_Mag"},
			{44.4500000000001, "hgun_ACPC2_F"},
			{45.1500000000001, "29rnd_300BLK_STANAG"},
			{45.8500000000001, "RH_ttracker"},
			{46.5500000000001, "RH_ttracker_g"},
			{47.2500000000001, "RH_fnp45"},
			{47.9500000000001, "RH_fnp45t"},
			{48.6500000000001, "RH_fn57"},
			{49.3500000000001, "RH_20Rnd_57x28_FN"},
			{50.0500000000001, "arifle_Katiba_F"},
			{50.7500000000001, "RH_sw659"},
			{51.4500000000001, "RH_mak"},
			{52.1500000000001, "RH_kimber"},
			{52.8500000000001, "RH_uspm"},
			{53.5500000000001, "RH_m9c"},
			{54.2500000000001, "RH_g18"},
			{54.9500000000001, "RH_tt33"},
			{55.6500000000001, "RH_p226"},
			{56.3500000000001, "RH_g19"},
			{57.0500000000001, "RH_vp70"},
			{57.7500000000001, "B_HuntingBackpack"},
			{58.4500000000001, "RH_16Rnd_9x19_cz"},
			{59.1500000000001, "RH_14Rnd_9x19_sw"},
			{59.8500000000001, "RH_12Rnd_45cal_usp"},
			{60.5500000000001, "RH_8Rnd_9x18_Mak"},
			{61.2500000000001, "RH_7Rnd_45cal_m1911"},
			{61.9500000000001, "RH_16Rnd_40cal_usp"},
			{62.6500000000001, "RH_15Rnd_9x19_M9"},
			{63.3500000000001, "RH_30Rnd_9x19_UZI"},
			{64.0500000000001, "RH_32Rnd_9x19_tec"},
			{64.7500000000001, "RH_17Rnd_9x19_g17"},
			{65.4500000000001, "RH_8Rnd_762_tt33"},
			{66.1500000000001, "RH_10Rnd_22LR_mk2"},
			{66.8500000000001, "RH_15Rnd_9x19_SIG"},
			{67.5500000000001, "RH_18Rnd_9x19_VP"},
			{68.2500000000001, "RH_6Rnd_44_Mag"},
			{68.9500000000001, "RH_6Rnd_357_Mag"},
			{69.6500000000001, "RH_6Rnd_454_Mag"},
			{70.3500000000002, "RH_6Rnd_45ACP_Mag"},
			{71.0500000000002, "RH_15Rnd_45cal_fnp"},
			{71.7500000000002, "hgun_P07_F"},
			{72.4500000000002, "RH_18Rnd_9x19_gsh"},
			{73.1500000000002, "arifle_TRG21_F"},
			{73.8000000000002, "U_PMC_CombatUniformLS_ChckLR_SPBB"},
			{74.4500000000002, "U_PMC_BlckPolo_BgPants"},
			{75.1000000000002, "U_PMC_CombatUniformLS_GSSPBB"},
			{75.7500000000002, "U_PMC_CombatUniformLS_BSGPBB"},
			{76.4000000000002, "U_PMC_CombatUniformLS_IndPBSBB"},
			{77.0500000000002, "U_PMC_CombatUniformRS_ChckLR_SPBB"},
			{77.7000000000002, "U_PMC_CombatUniformLS_SSBPBB"},
			{78.3500000000002, "U_PMC_CombatUniformRS_ChckDBS_GPSB"},
			{79.0000000000002, "U_PMC_WhtPolo_GrnPants"},
			{79.6500000000002, "U_PMC_CombatUniformRS_SSGPBB"},
			{80.3000000000002, "U_PMC_WhtPolo_BluPants"},
			{80.9500000000002, "U_PMC_CombatUniformRS_IndPBSBB"},
			{81.6000000000002, "U_PMC_CombatUniformLS_SSGPBB"},
			{82.2500000000002, "U_PMC_CombatUniformRS_GSBPBB"},
			{82.9000000000002, "U_PMC_CombatUniformLS_SSGPSB"},
			{83.5500000000003, "U_PMC_CombatUniformRS_BSSPSB"},
			{84.2000000000003, "U_PMC_WhtPolo_BgPants"},
			{84.8500000000003, "U_PMC_CombatUniformRS_BSGPSB"},
			{85.5000000000003, "U_PMC_CombatUniformLS_ChckDBS_GPSB"},
			{86.1500000000003, "U_PMC_CombatUniformLS_BSSPSB"},
			{86.8000000000003, "U_PMC_GrnPolo_BgPants"},
			{87.4500000000003, "U_PMC_CombatUniformLS_ChckP_BPBB"},
			{88.1000000000003, "U_PMC_BrnPolo_BluPants"},
			{88.7500000000003, "U_PMC_CombatUniformRS_ChckP_BPBB"},
			{89.4000000000003, "U_PMC_CombatUniformLS_ChckLB_GPBB"},
			{90.0500000000003, "U_PMC_CombatUniformRS_SSGPSB"},
			{90.7000000000003, "U_PMC_BrnPolo_BgPants"},
			{91.3500000000003, "U_PMC_BlckPolo_BluPants"},
			{92.0000000000003, "U_PMC_CombatUniformRS_SSBPBB"},
			{92.6500000000003, "U_PMC_BgPolo_GrnPants"},
			{93.3000000000003, "U_PMC_BluPolo_BgPants"},
			{93.9500000000003, "U_PMC_BlackPoloShirt_BeigeCords"},
			{94.6000000000004, "U_PMC_RedPlaidShirt_DenimCords"},
			{95.2500000000004, "U_PMC_BluePlaidShirt_BeigeCords"},
			{95.9000000000004, "U_PMC_BluPolo_GrnPants"},
			{96.5500000000004, "U_PMC_CombatUniformRS_ChckLB_GPBB"},
			{97.2000000000004, "U_PMC_CombatUniformLS_BSGPSB"},
			{97.8500000000004, "U_PMC_CombatUniformLS_GSBPBB"},
			{98.5000000000004, "U_PMC_CombatUniformRS_BSGPBB"},
			{99.1500000000004, "U_PMC_CombatUniformRS_BSSPBB"},
			{99.8000000000004, "U_PMC_CombatUniformLS_BSSPBB"},
			{100.45, "U_PMC_CombatUniformRS_GSSPBB"},
			{101.05, "H_Hat_checker"},
			{101.65, "optic_DMS"},
			{102.25, "H_StrawHat_dark"},
			{102.85, "arifle_MX_F"},
			{103.45, "20Rnd_556x45_UW_mag"},
			{104.05, "H_Hat_blue"},
			{104.65, "H_Cap_headphones"},
			{105.25, "H_Cap_red"},
			{105.85, "H_Cap_grn"},
			{106.45, "H_Cap_press"},
			{107.05, "H_Hat_tan"},
			{107.65, "H_Hat_grey"},
			{108.25, "H_Bandanna_surfer"},
			{108.85, "H_Beret_blk_POLICE"},
			{109.45, "H_Cap_blk"},
			{110.05, "H_Cap_blk_Raven"},
			{110.65, "H_Cap_blu"},
			{111.25, "H_Cap_tan"},
			{111.85, "arifle_MX_GL_F"},
			{112.45, "arifle_MXC_F"},
			{113.05, "H_StrawHat"},
			{113.65, "optic_MRCO"},
			{114.25, "H_Hat_brown"},
			{114.85, "H_Cap_oli"},
			{115.35, "RH_bull"},
			{115.85, "RH_deagle"},
			{116.35, "hgun_Pistol_heavy_02_F"},
			{116.85, "V_Rangemaster_belt"},
			{117.35, "RH_bullb"},
			{117.85, "V_Press_F"},
			{118.35, "RH_mp412"},
			{118.85, "V_TacVest_blk_POLICE"},
			{119.35, "RH_deaglem"},
			{119.85, "Exile_Item_PlasticBottleFreshWater"},
			{120.35, "RH_deagleg"},
			{120.85, "30Rnd_65x39_caseless_green_mag_Tracer"},
			{121.35, "U_C_Scientist"},
			{121.85, "RH_deagles"},
			{122.35, "6Rnd_RedSignal_F"},
			{122.85, "U_C_Journalist"},
			{123.35, "arifle_MXM_F"},
			{123.85, "RH_7Rnd_50_AE"},
			{124.35, "30Rnd_556x45_Stanag_Tracer_Green"},
			{124.85, "30Rnd_556x45_Stanag_Tracer_Red"},
			{125.35, "30Rnd_556x45_Stanag_Tracer_Yellow"},
			{125.85, "U_Rangemaster"},
			{126.35, "arifle_SDAR_F"},
			{126.85, "RH_python"},
			{127.35, "6Rnd_GreenSignal_F"},
			{127.85, "RH_muzi"},
			{128.35, "hgun_Pistol_heavy_01_F"},
			{128.85, "30Rnd_65x39_caseless_mag_Tracer"},
			{129.25, "optic_Arco"},
			{129.65, "optic_Hamr"},
			{130.05, "optic_Holosight"},
			{130.45, "Exile_Item_Beer"},
			{130.8, "hgun_Pistol_Signal_F"},
			{131.1, "Exile_Item_Energydrink"},
			{131.35, "RH_docter"},
			{131.6, "RH_pmsd"},
			{131.85, "RH_m9qd"},
			{132.1, "muzzle_snds_acp"},
			{132.35, "RH_matchsd"},
			{132.6, "RH_gemtech9"},
			{132.85, "muzzle_snds_M"},
			{133.1, "RH_suppr9"},
			{133.35, "muzzle_snds_H"},
			{133.6, "RH_gemtech45"},
			{133.85, "RH_muzisd"},
			{134.1, "RH_fhusp"},
			{134.35, "RH_x2"},
			{134.6, "RH_m6x"},
			{134.85, "RH_x300"},
			{135.1, "RH_aacusp"},
			{135.35, "RH_pmir"},
			{135.6, "RH_A26"},
			{135.85, "RH_demz"},
			{136.1, "muzzle_snds_L"},
			{136.35, "RH_osprey"},
			{136.6, "RH_vp70stock"},
			{136.85, "RH_sfn57"},
			{137.1, "RH_tecsd"},
			{137.3, "Exile_Item_BBQSandwich_Cooked"},
			{137.5, "Exile_Item_ChristmasTinner_Cooked"},
			{137.7, "Exile_Item_GloriousKnakworst_Cooked"},
			{137.9, "Exile_Item_SausageGravy_Cooked"},
			{138.1, "Exile_Item_Surstromming_Cooked"},
			{138.3, "Exile_Item_Catfood_Cooked"},
			{138.4, "optic_Yorris"},
			{138.5, "optic_MRD"},
			{138.55, "U_NikosBody"},
			{138.6, "U_NikosAgedBody"},
			{138.65, "U_OrestesBody"}
		};
	};

	/**
	  Result of 100 rounds:

	  RH_g18
	  RH_20Rnd_32cal_vz61
	  RH_16Rnd_40cal_usp
	  RH_8Rnd_762_tt33
	  RH_kimber_nw
	  hlc_GRD_red
	  RH_m1911
	  RH_mp412
	  RH_vz61
	  RH_muzisd
	  RH_muzi
	  RH_8Rnd_762_tt33
	  Exile_Item_CookingPot
	  RH_15Rnd_9x19_M9
	  RH_gsh18
	  RH_8Rnd_762_tt33
	  ItemGPS
	  Exile_Item_Surstromming
	  Exile_Item_BBQSandwich
	  11Rnd_45ACP_Mag
	  RH_16Rnd_40cal_usp
	  Exile_Item_Catfood
	  30Rnd_9x21_Mag
	  hgun_Rook40_F
	  RH_sw659
	  RH_30Rnd_9x19_UZI
	  RH_gsh18
	  RH_mk2
	  RH_16Rnd_9x19_cz
	  Exile_Item_SausageGravy
	  Exile_Item_PlasticBottleEmpty
	  RH_mateba
	  Exile_Item_DuctTape
	  RH_6Rnd_454_Mag
	  Exile_Item_PlasticBottleEmpty
	  RH_kimber
	  RH_m6x
	  RH_18Rnd_9x19_VP
	  RH_mk2
	  6Rnd_GreenSignal_F
	  RH_8Rnd_9x18_Mak
	  optic_MRD
	  Exile_Item_BBQSandwich_Cooked
	  RH_32Rnd_9x19_tec
	  RH_g18
	  RH_cz75
	  RH_bull
	  Exile_Item_Surstromming
	  Exile_Item_Catfood
	  RH_mk2
	  hgun_Pistol_heavy_01_F
	  RH_sw659
	  Exile_Item_Catfood
	  Exile_Item_ChristmasTinner
	  RH_m1911
	  RH_16Rnd_40cal_usp
	  hgun_Pistol_heavy_02_F
	  RH_mp412
	  RH_deagle
	  RH_tec9
	  Exile_Item_CamoTentKit
	  RH_muzi
	  hlc_GRD_green
	  hgun_Rook40_F
	  RH_osprey
	  RH_g19
	  RH_15Rnd_9x19_M9
	  RH_kimber_nw
	  RH_15Rnd_9x19_M9
	  RH_m1911
	  RH_17Rnd_9x19_g17
	  RH_uspm
	  RH_p226
	  RH_14Rnd_9x19_sw
	  RH_g19
	  RH_kimber
	  Exile_Item_SausageGravy
	  RH_g19
	  RH_20Rnd_57x28_FN
	  hgun_ACPC2_F
	  SmokeShellBlue
	  SmokeShellBlue
	  RH_15Rnd_9x19_SIG
	  Exile_Item_ChristmasTinner
	  RH_20Rnd_57x28_FN
	  RH_20Rnd_32cal_vz61
	  hgun_Pistol_heavy_02_F
	  RH_ttracker_g
	  ItemGPS
	  RH_17Rnd_9x19_g17
	  hgun_Pistol_heavy_02_F
	  RH_8Rnd_9x18_Mak
	  RH_17Rnd_9x19_g17
	  SmokeShell
	  SmokeShell
	  6Rnd_RedSignal_F
	  11Rnd_45ACP_Mag
	  RH_fnp45
	  RH_tt33
	  RH_fhusp
	*/
	class Shop
	{
		top = 78.05;
		count = 137;
		maximum = 100;
		sum = 13700;
		items[] =
		{
			{2, "Exile_Item_PlasticBottleEmpty"},
			{4, "Exile_Item_Catfood"},
			{5.9, "Exile_Item_Surstromming"},
			{7.6, "Exile_Item_SausageGravy"},
			{9.3, "Exile_Item_ChristmasTinner"},
			{11, "Exile_Item_BBQSandwich"},
			{12.5, "Exile_Item_GloriousKnakworst"},
			{13.5, "hgun_P07_F"},
			{14.5, "hgun_Rook40_F"},
			{15.5, "hgun_ACPC2_F"},
			{16.3, "11Rnd_45ACP_Mag"},
			{17.1, "16Rnd_9x21_Mag"},
			{17.9, "30Rnd_9x21_Mag"},
			{18.7, "9Rnd_45ACP_Mag"},
			{19.5, "Exile_Item_LightBulb"},
			{20.2, "RH_12Rnd_45cal_usp"},
			{20.9, "RH_vz61"},
			{21.6, "hgun_Pistol_heavy_02_F"},
			{22.3, "RH_g19t"},
			{23, "RH_15Rnd_45cal_fnp"},
			{23.7, "RH_vp70"},
			{24.4, "RH_6Rnd_454_Mag"},
			{25.1, "RH_mateba"},
			{25.8, "RH_cz75"},
			{26.5, "RH_python"},
			{27.2, "RH_usp"},
			{27.9, "RH_mp412"},
			{28.6, "RH_m1911"},
			{29.3, "RH_6Rnd_44_Mag"},
			{30, "RH_kimber_nw"},
			{30.7, "RH_18Rnd_9x19_VP"},
			{31.4, "RH_m9"},
			{32.1, "RH_15Rnd_9x19_SIG"},
			{32.8, "RH_14Rnd_9x19_sw"},
			{33.5, "RH_10Rnd_22LR_mk2"},
			{34.2, "RH_g17"},
			{34.9, "RH_8Rnd_762_tt33"},
			{35.6, "RH_mk2"},
			{36.3, "RH_17Rnd_9x19_g17"},
			{37, "RH_p226s"},
			{37.7, "RH_33Rnd_9x19_g18"},
			{38.4, "hgun_Pistol_heavy_01_F"},
			{39.1, "RH_20Rnd_32cal_vz61"},
			{39.8, "RH_6Rnd_45ACP_Mag"},
			{40.5, "RH_15Rnd_9x19_M9"},
			{41.2, "RH_sw659"},
			{41.9, "RH_16Rnd_40cal_usp"},
			{42.6, "RH_kimber"},
			{43.3, "RH_7Rnd_45cal_m1911"},
			{44, "RH_uspm"},
			{44.7, "RH_16Rnd_9x19_cz"},
			{45.4, "RH_g18"},
			{46.1000000000001, "RH_g19"},
			{46.8000000000001, "RH_20Rnd_57x28_FN"},
			{47.5000000000001, "RH_m9c"},
			{48.2000000000001, "RH_p226"},
			{48.9000000000001, "RH_8Rnd_9x18_Mak"},
			{49.6000000000001, "RH_18Rnd_9x19_gsh"},
			{50.3000000000001, "RH_32Rnd_9x19_tec"},
			{51.0000000000001, "RH_30Rnd_9x19_UZI"},
			{51.7000000000001, "6Rnd_45ACP_Cylinder"},
			{52.4000000000001, "RH_tt33"},
			{53.1000000000001, "RH_6Rnd_357_Mag"},
			{53.8000000000001, "RH_mak"},
			{54.4500000000001, "Exile_Item_CookingPot"},
			{55.0500000000001, "6Rnd_GreenSignal_F"},
			{55.6500000000001, "6Rnd_RedSignal_F"},
			{56.1500000000001, "SmokeShell"},
			{56.6500000000001, "Exile_Item_InstaDoc"},
			{57.1500000000001, "hgun_Pistol_Signal_F"},
			{57.6500000000001, "RH_tec9"},
			{58.1500000000001, "hlc_GRD_purple"},
			{58.6500000000001, "RH_fn57_t"},
			{59.1500000000001, "hlc_GRD_orange"},
			{59.6500000000001, "RH_fn57"},
			{60.1500000000001, "hlc_GRD_blue"},
			{60.6500000000001, "RH_fnp45"},
			{61.1500000000001, "hlc_GRD_green"},
			{61.6500000000001, "RH_ttracker"},
			{62.1500000000001, "SmokeShellRed"},
			{62.6500000000001, "RH_bull"},
			{63.1500000000001, "RH_fnp45t"},
			{63.6500000000001, "RH_deagles"},
			{64.1500000000001, "RH_ttracker_g"},
			{64.6500000000001, "Exile_Item_PlasticBottleFreshWater"},
			{65.1500000000001, "RH_deagleg"},
			{65.6500000000001, "hlc_GRD_White"},
			{66.1500000000001, "SmokeShellOrange"},
			{66.6500000000001, "SmokeShellBlue"},
			{67.1500000000001, "SmokeShellPurple"},
			{67.6500000000001, "SmokeShellYellow"},
			{68.1500000000001, "SmokeShellGreen"},
			{68.6500000000001, "RH_bullb"},
			{69.1500000000001, "RH_deaglem"},
			{69.6500000000001, "hlc_GRD_red"},
			{70.1500000000001, "RH_fn57_g"},
			{70.6500000000001, "RH_gsh18"},
			{71.1500000000001, "RH_muzi"},
			{71.6500000000001, "RH_7Rnd_50_AE"},
			{72.1500000000001, "RH_deagle"},
			{72.5500000000001, "Exile_Item_DuctTape"},
			{72.9500000000001, "Exile_Item_Beer"},
			{73.3500000000001, "Exile_Item_Matches"},
			{73.6500000000001, "Exile_Item_Energydrink"},
			{73.9000000000001, "ItemGPS"},
			{74.1500000000001, "muzzle_snds_acp"},
			{74.4000000000001, "muzzle_snds_L"},
			{74.6000000000001, "Exile_Item_ChristmasTinner_Cooked"},
			{74.8000000000001, "Exile_Item_BBQSandwich_Cooked"},
			{75.0000000000001, "Exile_Item_GloriousKnakworst_Cooked"},
			{75.2000000000001, "Exile_Item_SausageGravy_Cooked"},
			{75.4000000000001, "Exile_Item_Surstromming_Cooked"},
			{75.6000000000001, "Exile_Item_Catfood_Cooked"},
			{75.7500000000001, "Binocular"},
			{75.8500000000001, "RH_pmir"},
			{75.9500000000001, "RH_A26"},
			{76.0500000000001, "RH_osprey"},
			{76.1500000000001, "RH_tecsd"},
			{76.2500000000001, "RH_aacusp"},
			{76.3500000000001, "RH_sfn57"},
			{76.4500000000001, "RH_pmsd"},
			{76.5500000000001, "RH_docter"},
			{76.6500000000001, "RH_m6x"},
			{76.7500000000001, "RH_gemtech9"},
			{76.8500000000001, "RH_matchsd"},
			{76.9500000000001, "RH_m9qd"},
			{77.0500000000001, "optic_Yorris"},
			{77.15, "optic_MRD"},
			{77.25, "Exile_Item_CamoTentKit"},
			{77.35, "RH_vp70stock"},
			{77.45, "RH_suppr9"},
			{77.55, "RH_gemtech45"},
			{77.65, "RH_fhusp"},
			{77.75, "RH_muzisd"},
			{77.85, "RH_x300"},
			{77.95, "RH_x2"},
			{78.05, "RH_demz"}
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PortableGeneratorKit
	  Exile_Melee_Axe
	  Exile_Melee_Axe
	  Exile_Item_JunkMetal
	  Exile_Item_LightBulb
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_JunkMetal
	  Exile_Item_ExtensionCord
	  Exile_Item_Rope
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_MetalBoard
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Item_Rope
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FloodLightKit
	  Exile_Item_JunkMetal
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_Axe
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_Axe
	  Exile_Item_JunkMetal
	  Exile_Item_ExtensionCord
	  Exile_Melee_Axe
	  Exile_Melee_Axe
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Axe
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FloodLightKit
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_JunkMetal
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ExtensionCord
	  Exile_Item_Rope
	  Exile_Item_JunkMetal
	  Exile_Item_ExtensionCord
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_JunkMetal
	  Exile_Melee_Axe
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_LightBulb
	  Exile_Magazine_Battery
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_MetalBoard
	  Exile_Item_ExtensionCord
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Rope
	  Exile_Item_JunkMetal
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_Axe
	  Exile_Item_LightBulb
	  Exile_Item_JunkMetal
	  Exile_Melee_Axe
	  Exile_Item_JunkMetal
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FloodLightKit
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_Axe
	  Exile_Item_JunkMetal
	  Exile_Item_ExtensionCord
	  Exile_Item_PortableGeneratorKit
	  Exile_Melee_Axe
	  Exile_Item_LightBulb
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Melee_Axe
	*/
	class Industrial
	{
		top = 2.65;
		count = 12;
		maximum = 100;
		sum = 1200;
		items[] =
		{
			{0.5, "Exile_Melee_Axe"},
			{1, "Exile_Item_FuelCanisterEmpty"},
			{1.4, "Exile_Item_FuelCanisterFull"},
			{1.7, "Exile_Item_ExtensionCord"},
			{1.95, "Exile_Item_JunkMetal"},
			{2.15, "Exile_Item_LightBulb"},
			{2.25, "Exile_Magazine_Battery"},
			{2.35, "Exile_Item_Rope"},
			{2.45, "Exile_Item_MetalBoard"},
			{2.55, "Exile_Item_DuctTape"},
			{2.6, "Exile_Item_PortableGeneratorKit"},
			{2.65, "Exile_Item_FloodLightKit"}
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_FuelCanisterFull
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_JunkMetal
	  Exile_Item_LightBulb
	  Exile_Item_FuelCanisterFull
	  Exile_Item_LightBulb
	  Exile_Item_JunkMetal
	  Exile_Magazine_Battery
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterFull
	  Exile_Item_MetalBoard
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Magazine_Battery
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterFull
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterFull
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_JunkMetal
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterFull
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterFull
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterFull
	  Exile_Item_LightBulb
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterFull
	  Exile_Item_JunkMetal
	  Exile_Magazine_Battery
	  Exile_Item_LightBulb
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_LightBulb
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_LightBulb
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_LightBulb
	  Exile_Magazine_Battery
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterFull
	  Exile_Item_DuctTape
	  Exile_Item_MetalBoard
	  Exile_Item_FuelCanisterFull
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterEmpty
	  Exile_Magazine_Battery
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_LightBulb
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_JunkMetal
	  Exile_Item_JunkMetal
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_LightBulb
	  Exile_Item_MetalBoard
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterEmpty
	*/
	class VehicleService
	{
		top = 1.65;
		count = 7;
		maximum = 100;
		sum = 700;
		items[] =
		{
			{0.5, "Exile_Item_FuelCanisterEmpty"},
			{0.9, "Exile_Item_FuelCanisterFull"},
			{1.15, "Exile_Item_JunkMetal"},
			{1.35, "Exile_Item_LightBulb"},
			{1.45, "Exile_Magazine_Battery"},
			{1.55, "Exile_Item_MetalBoard"},
			{1.65, "Exile_Item_DuctTape"}
		};
	};

	/**
	  Result of 100 rounds:

	  hlc_m249_pip4
	  hlc_100Rnd_762x51_M_M60E4
	  V_PlateCarrier2_rgr
	  H_HelmetB_grass
	  hlc_rifle_aks74u
	  hlc_25Rnd_9x19mm_M882_AUG
	  RH_m27iar_des
	  hlc_rifle_ak12
	  RH_spr_mbs_des
	  RH_m4_ris_m203s
	  muzzle_snds_M
	  RH_m16a6
	  hlc_rifle_honeybase
	  RH_eothhs1
	  RH_m4a1_ris_m203_des
	  RH_m16a4_m_des
	  7Rnd_408_Mag
	  U_PMC_CombatUniformLS_SSGPBB
	  U_I_CombatUniform
	  U_PMC_BluPolo_BgPants
	  RH_hk416c_tg
	  U_PMC_CombatUniformRS_IndPBSBB
	  30Rnd_556x45_Stanag
	  U_O_GhillieSuit
	  U_PMC_CombatUniformLS_IndPBSBB
	  H_HelmetB_light_sand
	  optic_MRCO
	  arifle_Mk20_F
	  hlc_100Rnd_762x51_B_M60E4
	  RH_leu_mk4
	  acc_pointer_IR
	  U_PMC_CombatUniformRS_SSGPBB
	  RH_tundra_wdl
	  H_HelmetB_light_snakeskin
	  arifle_Katiba_GL_F
	  B_FieldPack_oucamo
	  RH_sr25ec
	  arifle_TRG20_F
	  B_HuntingBackpack
	  RH_sr25ec
	  arifle_MXM_F
	  U_PMC_BlackPoloShirt_BeigeCords
	  U_O_SpecopsUniform_blk
	  RH_SAMR_des
	  RH_ta31rco
	  RH_ta31rmr_2D
	  U_B_CombatUniform_mcam
	  hlc_muzzle_snds_AUG
	  H_HelmetIA
	  RH_hk416_tg
	  RH_sbr9_des
	  3Rnd_UGL_FlareGreen_F
	  V_TacVestIR_blk
	  H_Booniehat_GCAMO
	  RH_m4sbr_b
	  hlc_rifle_ak12
	  RH_saker_tg
	  H_HelmetB_black
	  hlc_lmg_m249para
	  RH_m110sd_t
	  RH_m4a1_ris_m203s_wdl
	  hlc_rifle_auga3_bl
	  hlc_muzzle_545SUP_AK
	  H_HelmetB_light_black
	  RH_m16a1gl
	  RH_hk416s_wdl
	  hlc_30Rnd_762x39_t_ak
	  hlc_GRD_orange
	  RH_compm4s
	  hlc_m249_pip2
	  B_FieldPack_cbr
	  U_B_SpecopsUniform_sgg
	  RH_saker_des
	  RH_fa762
	  RH_hk416s_des
	  RH_m4sbr_g
	  U_PMC_CombatUniformRS_GSBPBB
	  arifle_TRG21_F
	  RH_peq15b
	  H_HelmetB_light_black
	  hlc_30Rnd_545x39_EP_AK
	  U_PMC_CombatUniformLS_BSSPBB
	  H_HelmetIA
	  hlc_rifle_rpk
	  H_HelmetB_grass
	  hlc_rifle_auga2para_t
	  RH_m4_tg
	  hlc_5rnd_300WM_FMJ_AWM
	  hlc_rifle_augpara_b
	  ItemRadio
	  arifle_MX_SW_F
	  200Rnd_65x39_Belt
	  U_PMC_CombatUniformRS_ChckP_BPBB
	  RH_HBLM
	  arifle_MXC_Black_F
	  H_HelmetB_light_sand
	  RH_20Rnd_762x51_AR10
	  hlc_rifle_m14sopmod
	  U_PMC_CombatUniformLS_BSGPSB
	  100Rnd_65x39_caseless_mag_Tracer
	*/
	class Military
	{
		top = 279.899999999997;
		count = 657;
		maximum = 100;
		sum = 65700;
		items[] =
		{
			{0.9, "U_B_CombatUniform_mcam_worn"},
			{1.7, "arifle_Katiba_F"},
			{2.4, "H_HelmetSpecB_paint1"},
			{3.1, "V_PlateCarrierIA2_dgtl"},
			{3.8, "B_OutdoorPack_blk"},
			{4.5, "V_PlateCarrierGL_rgr"},
			{5.2, "V_PlateCarrier3_rgr"},
			{5.9, "arifle_MXC_F"},
			{6.6, "H_HelmetB_desert"},
			{7.3, "arifle_MX_F"},
			{8, "H_MilCap_mcamo"},
			{8.7, "U_B_CTRG_1"},
			{9.4, "H_MilCap_blue"},
			{10.1, "H_HelmetSpecB"},
			{10.8, "100Rnd_65x39_caseless_mag"},
			{11.5, "H_HelmetSpecB_paint2"},
			{12.2, "150Rnd_762x54_Box"},
			{12.9, "H_HelmetB_light_snakeskin"},
			{13.6, "H_HelmetB_light_grass"},
			{14.3, "arifle_TRG21_F"},
			{15, "U_B_CombatUniform_mcam_vest"},
			{15.7, "arifle_TRG20_F"},
			{16.4, "H_HelmetB"},
			{17.1, "H_HelmetSpecB_blk"},
			{17.8, "U_B_CTRG_2"},
			{18.5, "H_HelmetB_light_desert"},
			{19.2, "H_HelmetB_light"},
			{19.9, "H_HelmetB_light_black"},
			{20.6, "Binocular"},
			{21.3, "H_HelmetIA"},
			{22, "V_PlateCarrier1_blk"},
			{22.7, "H_HelmetIA_net"},
			{23.4, "H_MilCap_ocamo"},
			{24.1, "H_HelmetIA_camo"},
			{24.8, "H_MilCap_rucamo"},
			{25.5, "H_HelmetB_grass"},
			{26.2, "H_HelmetB_sand"},
			{26.9, "H_HelmetB_snakeskin"},
			{27.6, "U_B_CombatUniform_mcam_tshirt"},
			{28.3, "V_PlateCarrierSpec_rgr"},
			{29, "V_Rangemaster_belt"},
			{29.7, "U_B_CTRG_3"},
			{30.4, "V_PlateCarrier1_rgr"},
			{31.1, "V_PlateCarrier2_rgr"},
			{31.8, "B_OutdoorPack_blu"},
			{32.5, "B_OutdoorPack_tan"},
			{33.2, "V_PlateCarrierIA1_dgtl"},
			{33.9, "H_HelmetB_light_sand"},
			{34.6, "V_PlateCarrierIAGL_dgtl"},
			{35.3, "H_MilCap_dgtl"},
			{36, "H_HelmetB_black"},
			{36.7, "H_MilCap_oucamo"},
			{37.4, "acc_flashlight"},
			{38.1, "arifle_Katiba_GL_F"},
			{38.8, "H_HelmetB_plain_blk"},
			{39.5, "H_HelmetB_paint"},
			{40.1, "B_HuntingBackpack"},
			{40.7, "arifle_Mk20C_F"},
			{41.3, "hlc_rifle_augsrhbar_t"},
			{41.9, "hlc_rifle_augsrhbar_b"},
			{42.5, "arifle_Mk20_F"},
			{43.1, "hlc_rifle_augsr"},
			{43.7, "hlc_rifle_augsr_b"},
			{44.3, "hlc_rifle_augsr_t"},
			{44.9, "hlc_rifle_augsrcarb"},
			{45.5, "hlc_rifle_augsrcarb_t"},
			{46.1, "hlc_rifle_augsrcarb_b"},
			{46.7, "hlc_rifle_augsrhbar"},
			{47.3, "acc_pointer_IR"},
			{47.9, "100Rnd_65x39_caseless_mag_Tracer"},
			{48.5, "150Rnd_762x54_Box_Tracer"},
			{49.1, "200Rnd_65x39_Belt"},
			{49.7, "arifle_SDAR_F"},
			{50.25, "hlc_rifle_auga2_b"},
			{50.8, "hlc_rifle_augpara_b"},
			{51.35, "hlc_rifle_auga2para"},
			{51.9, "hlc_rifle_aughbar_t"},
			{52.45, "hlc_rifle_auga2para_b"},
			{53, "hlc_rifle_auga2_t"},
			{53.55, "hlc_rifle_auga2para_t"},
			{54.1, "hlc_rifle_auga2carb_t"},
			{54.65, "hlc_rifle_aughbar"},
			{55.2, "hlc_rifle_auga2"},
			{55.75, "hlc_rifle_auga2carb_b"},
			{56.3, "hlc_rifle_aug"},
			{56.85, "hlc_rifle_auga1_t"},
			{57.4, "hlc_rifle_auga1_B"},
			{57.95, "hlc_rifle_auga1carb"},
			{58.5, "hlc_rifle_auga1carb_t"},
			{59.05, "hlc_rifle_auga1carb_b"},
			{59.6, "hlc_rifle_auga2carb"},
			{60.15, "hlc_rifle_aughbar_b"},
			{60.7, "hlc_rifle_augpara_t"},
			{61.25, "hlc_rifle_augpara"},
			{61.8, "hlc_rifle_auga2lsw_b"},
			{62.35, "hlc_rifle_auga2lsw_t"},
			{62.9, "hlc_rifle_auga2lsw"},
			{63.4, "arifle_MX_SW_Black_F"},
			{63.9, "hlc_rifle_auga3_bl"},
			{64.4, "RH_m4_ris_m_des"},
			{64.9, "hlc_rifle_auga3_GL"},
			{65.4, "RH_m4_ris_m_wdl"},
			{65.9, "hlc_rifle_auga3_GL_B"},
			{66.4, "RH_m4a6_tg"},
			{66.9, "V_TacVest_brn"},
			{67.4, "RH_m4a6_des"},
			{67.9, "V_TacVest_khk"},
			{68.4, "RH_m4a6_wdl"},
			{68.9, "V_TacVestCamo_khk"},
			{69.4, "RH_m16a4_tg"},
			{69.9, "30Rnd_65x39_caseless_green"},
			{70.4, "RH_m16a4_des"},
			{70.9, "hlc_200rnd_556x45_B_SAW"},
			{71.4, "RH_m16a4_wdl"},
			{71.9, "hlc_200rnd_556x45_M_SAW"},
			{72.4, "RH_m16a4gl_tg"},
			{72.9, "200Rnd_65x39_Belt_Tracer_Red"},
			{73.4, "RH_m16a4gl_des"},
			{73.9, "hlc_m249_pip3"},
			{74.4, "RH_m16a4gl_wdl"},
			{74.9, "hlc_m249_pip1"},
			{75.4, "RH_m16a4_m_tg"},
			{75.9, "RH_mk12mod1"},
			{76.4, "RH_m16a4_m_des"},
			{76.9, "RH_m4m"},
			{77.4, "RH_m16a4_m_wdl"},
			{77.9, "RH_m4m_b"},
			{78.4, "RH_hk416_tg"},
			{78.9, "RH_m4_moe_g"},
			{79.4, "RH_hk416_des"},
			{79.9, "RH_m4a6"},
			{80.4, "RH_hk416_wdl"},
			{80.9, "RH_hb"},
			{81.4, "RH_hk416s_tg"},
			{81.9, "RH_hk416"},
			{82.4, "RH_hk416s_des"},
			{82.9, "RH_hk416s"},
			{83.4, "RH_hk416s_wdl"},
			{83.9, "RH_mk11"},
			{84.4, "RH_m110"},
			{84.9, "RH_sr25ec"},
			{85.4, "RH_sbr9"},
			{85.9, "RH_m4_tg"},
			{86.4, "RH_m4_des"},
			{86.9, "RH_m4_wdl"},
			{87.4, "RH_m4_m203_tg"},
			{87.9, "RH_m4_m203_des"},
			{88.4, "RH_m4_m203_wdl"},
			{88.9, "RH_m4a1_ris_tg"},
			{89.4, "RH_m4a1_ris_des"},
			{89.9, "RH_m4a1_ris_wdl"},
			{90.4, "RH_m4a1_ris_m203_tg"},
			{90.9, "RH_m4a1_ris_m203_des"},
			{91.4, "RH_m4a1_ris_m203_wdl"},
			{91.9, "RH_m4a1_ris_m203s_tg"},
			{92.4, "RH_m4a1_ris_m203s_des"},
			{92.9, "RH_m4a1_ris_m203s_wdl"},
			{93.4, "RH_m4_ris_m_tg"},
			{93.9, "hlc_rifle_auga3"},
			{94.4, "hlc_rifle_auga3_b"},
			{94.9, "hlc_rifle_auga3_GL_BL"},
			{95.4, "V_TacVest_blk"},
			{95.9, "V_TacVest_camo"},
			{96.4, "V_TacVest_oli"},
			{96.9, "V_TacVestIR_blk"},
			{97.4, "arifle_MXM_F"},
			{97.9, "hlc_200rnd_556x45_T_SAW"},
			{98.4, "U_B_CombatUniform_mcam"},
			{98.9, "hlc_m249_pip4"},
			{99.4, "hlc_m249_pip2"},
			{99.9, "hlc_lmg_M249E2"},
			{100.4, "RH_samr"},
			{100.9, "RH_m4m_g"},
			{101.4, "RH_m4_moe"},
			{101.9, "RH_m4_moe_b"},
			{102.4, "RH_m16a6"},
			{102.9, "RH_hb_b"},
			{103.4, "RH_hk416c"},
			{103.9, "RH_hk416c_tg"},
			{104.4, "RH_hk416c_des"},
			{104.9, "RH_hk416c_wdl"},
			{105.4, "RH_m27iar_tg"},
			{105.9, "RH_m27iar_des"},
			{106.4, "RH_m27iar_wdl"},
			{106.9, "RH_m16a6_tg"},
			{107.4, "RH_m16a6_des"},
			{107.9, "RH_m16a6_wdl"},
			{108.4, "RH_Mk12mod1_tg"},
			{108.9, "RH_Mk12mod1_des"},
			{109.4, "RH_Mk12mod1_wdl"},
			{109.9, "RH_SAMR_tg"},
			{110.4, "RH_SAMR_des"},
			{110.9, "RH_SAMR_wdl"},
			{111.4, "RH_sbr9_tg"},
			{111.9, "RH_sbr9_des"},
			{112.4, "RH_sbr9_wdl"},
			{112.9, "B_AssaultPack_mcamo"},
			{113.4, "B_AssaultPack_cbr"},
			{113.9, "optic_Arco"},
			{114.4, "optic_Hamr"},
			{114.9, "optic_Holosight"},
			{115.4, "hlc_lmg_m249para"},
			{115.9, "optic_MRCO"},
			{116.4, "hlc_lmg_minimi_railed"},
			{116.9, "B_AssaultPack_blk"},
			{117.4, "B_AssaultPack_sgg"},
			{117.9, "B_AssaultPack_rgr"},
			{118.4, "B_AssaultPack_dgtl"},
			{118.9, "B_AssaultPack_khk"},
			{119.4, "hlc_lmg_minimi"},
			{119.9, "hlc_lmg_minimipara"},
			{120.4, "LMG_Zafir_F"},
			{120.9, "LMG_Mk200_F"},
			{121.4, "Exile_Item_InstaDoc"},
			{121.9, "NVGoggles"},
			{122.4, "ItemRadio"},
			{122.9, "arifle_MX_SW_F"},
			{123.4, "30Rnd_65x39_caseless_mag"},
			{123.9, "RH_m27iar"},
			{124.4, "30Rnd_556x45_Stanag"},
			{124.9, "RH_ar10"},
			{125.35, "H_PilotHelmetHeli_PMC"},
			{125.8, "RH_compm4s"},
			{126.25, "RH_eotexps3"},
			{126.7, "RH_compm2l"},
			{127.15, "H_Cap_tan_pmc"},
			{127.6, "RH_compm2l_tan"},
			{128.05, "H_Cap_pmc"},
			{128.5, "RH_t1_tan"},
			{128.95, "V_TacVest_darkblck"},
			{129.4, "RH_shortdot"},
			{129.85, "V_PlateCarrierInd_PMC_grn"},
			{130.3, "RH_ta01nsn"},
			{130.75, "V_PlateCarrierInd_PMC_blk"},
			{131.2, "RH_ta31rco"},
			{131.65, "V_PlateCarrier1_PMC_khki"},
			{132.1, "RH_ta31rmr"},
			{132.55, "V_PlateCarrier1_PMC_marpat"},
			{133, "RH_ta01nsn_tan"},
			{133.45, "V_PlateCarrier1_PMC_blk"},
			{133.9, "RH_ta31rco_tan"},
			{134.35, "V_PlateCarrier1_PMC_rgr"},
			{134.8, "RH_ta31rmr_tan"},
			{135.25, "U_PMC_WTShirt_DJeans"},
			{135.7, "RH_ta648"},
			{136.15, "U_PMC_BluTShirt_SJeans"},
			{136.6, "RH_leu_mk4"},
			{137.05, "U_PMC_BlkTShirt_SJeans"},
			{137.5, "RH_c79_2D"},
			{137.95, "U_PMC_BlkTShirt_DJeans"},
			{138.4, "RH_barska_rds"},
			{138.85, "U_PMC_GTShirt_SJeans"},
			{139.3, "RH_LTdocter"},
			{139.75, "H_Booniehat_DMARPAT"},
			{140.2, "RH_zpoint"},
			{140.65, "U_PMC_GTShirt_DJeans"},
			{141.1, "RH_anpvs10"},
			{141.55, "U_PMC_BlackPoloShirt_BeigeCords"},
			{142, "RH_pas13cm"},
			{142.45, "U_PMC_RedPlaidShirt_DenimCords"},
			{142.9, "RH_pas13ch"},
			{143.35, "U_PMC_BluePlaidShirt_BeigeCords"},
			{143.8, "RH_peq15b"},
			{144.25, "RH_peq15b_top"},
			{144.7, "RH_peq2"},
			{145.15, "RH_peq2_top"},
			{145.6, "RH_SFM952V"},
			{146.05, "RH_SFM952V_tan"},
			{146.5, "RH_qdss_nt4"},
			{146.95, "RH_qdss_nt4_tg"},
			{147.399999999999, "RH_qdss_nt4_des"},
			{147.849999999999, "RH_qdss_nt4_wdl"},
			{148.299999999999, "RH_saker"},
			{148.749999999999, "RH_saker_tg"},
			{149.199999999999, "RH_saker_des"},
			{149.649999999999, "RH_saker_wdl"},
			{150.099999999999, "RH_Saker762"},
			{150.549999999999, "RH_Saker762_tg"},
			{150.999999999999, "RH_Saker762_des"},
			{151.449999999999, "RH_Saker762_wdl"},
			{151.899999999999, "RH_fa556"},
			{152.349999999999, "RH_fa556_tg"},
			{152.799999999999, "RH_fa556_des"},
			{153.249999999999, "RH_fa556_wdl"},
			{153.699999999999, "RH_fa762"},
			{154.149999999999, "RH_fa762_tg"},
			{154.599999999999, "RH_fa762_des"},
			{155.049999999999, "RH_fa762_wdl"},
			{155.499999999999, "RH_spr_mbs"},
			{155.949999999999, "RH_spr_mbs_tg"},
			{156.399999999999, "RH_spr_mbs_des"},
			{156.849999999999, "RH_spr_mbs_wdl"},
			{157.299999999999, "RH_tundra"},
			{157.749999999999, "RH_tundra_tg"},
			{158.199999999999, "RH_tundra_des"},
			{158.649999999999, "RH_tundra_wdl"},
			{159.099999999999, "RH_m110sd"},
			{159.549999999999, "RH_m110sd_t"},
			{159.999999999999, "RH_HBLM"},
			{160.449999999999, "RH_HBLM_tg"},
			{160.899999999999, "RH_HBLM_des"},
			{161.349999999999, "RH_HBLM_wdl"},
			{161.799999999999, "RH_TD_ACB"},
			{162.249999999999, "RH_TD_ACB_g"},
			{162.699999999999, "RH_TD_ACB_b"},
			{163.149999999999, "H_Booniehat_GCAMO"},
			{163.599999999999, "RH_eothhs1"},
			{164.049999999999, "H_Booniehat_rgr"},
			{164.499999999999, "H_Capbw_tan_pmc"},
			{164.949999999999, "H_Capbw_pmc"},
			{165.399999999999, "RH_eotexps3_tan"},
			{165.849999999999, "H_Cap_pmc_headphones"},
			{166.299999999999, "RH_eotech553mag_tan"},
			{166.749999999999, "RH_compm2"},
			{167.199999999999, "RH_compm2_tan"},
			{167.649999999999, "RH_t1"},
			{168.099999999999, "RH_reflex"},
			{168.549999999999, "RH_m3lr"},
			{168.999999999999, "RH_ta01nsn_2D"},
			{169.449999999999, "RH_ta31rco_2D"},
			{169.899999999999, "RH_ta31rmr_2D"},
			{170.349999999999, "RH_ta01nsn_tan_2D"},
			{170.799999999999, "RH_ta31rco_tan_2D"},
			{171.249999999999, "RH_ta31rmr_tan_2D"},
			{171.699999999999, "RH_accupoint"},
			{172.149999999999, "RH_c79"},
			{172.599999999999, "RH_m145"},
			{173.049999999999, "RH_cmore"},
			{173.499999999999, "RH_LTdocterl"},
			{173.949999999999, "RH_anpvs4"},
			{174.399999999999, "RH_pas13cl"},
			{174.849999999999, "RH_pas13cmg"},
			{175.299999999999, "U_PMC_WhtPolo_GrnPants"},
			{175.749999999999, "U_PMC_WhtPolo_BluPants"},
			{176.199999999999, "U_PMC_WhtPolo_BgPants"},
			{176.649999999999, "U_PMC_GrnPolo_BgPants"},
			{177.099999999999, "U_PMC_BrnPolo_BluPants"},
			{177.549999999999, "U_PMC_BrnPolo_BgPants"},
			{177.999999999999, "U_PMC_BluPolo_GrnPants"},
			{178.449999999999, "U_PMC_BlckPolo_BluPants"},
			{178.899999999999, "U_PMC_BlckPolo_BgPants"},
			{179.349999999999, "U_PMC_BgPolo_GrnPants"},
			{179.799999999999, "U_PMC_BluPolo_BgPants"},
			{180.249999999999, "U_PMC_CombatUniformRS_ChckP_BPBB"},
			{180.699999999999, "U_PMC_CombatUniformRS_ChckLR_SPBB"},
			{181.149999999999, "U_PMC_CombatUniformRS_ChckLB_GPBB"},
			{181.599999999999, "U_PMC_CombatUniformRS_ChckDBS_GPSB"},
			{182.049999999999, "U_PMC_CombatUniformRS_SSGPSB"},
			{182.499999999999, "U_PMC_CombatUniformRS_SSGPBB"},
			{182.949999999999, "U_PMC_CombatUniformRS_SSBPBB"},
			{183.399999999999, "U_PMC_CombatUniformRS_IndPBSBB"},
			{183.849999999999, "U_PMC_CombatUniformRS_GSSPBB"},
			{184.299999999999, "U_PMC_CombatUniformRS_GSBPBB"},
			{184.749999999999, "U_PMC_CombatUniformRS_BSSPSB"},
			{185.199999999999, "U_PMC_CombatUniformRS_BSSPBB"},
			{185.649999999999, "U_PMC_CombatUniformRS_BSGPSB"},
			{186.099999999999, "U_PMC_CombatUniformRS_BSGPBB"},
			{186.549999999999, "U_PMC_CombatUniformLS_ChckP_BPBB"},
			{186.999999999998, "U_PMC_CombatUniformLS_ChckLR_SPBB"},
			{187.449999999998, "U_PMC_CombatUniformLS_ChckLB_GPBB"},
			{187.899999999998, "U_PMC_CombatUniformLS_ChckDBS_GPSB"},
			{188.349999999998, "U_PMC_CombatUniformLS_SSGPSB"},
			{188.799999999998, "U_PMC_CombatUniformLS_SSGPBB"},
			{189.249999999998, "U_PMC_CombatUniformLS_SSBPBB"},
			{189.699999999998, "U_PMC_CombatUniformLS_IndPBSBB"},
			{190.149999999998, "U_PMC_CombatUniformLS_GSSPBB"},
			{190.599999999998, "U_PMC_CombatUniformLS_GSBPBB"},
			{191.049999999998, "U_PMC_CombatUniformLS_BSSPSB"},
			{191.499999999998, "U_PMC_CombatUniformLS_BSSPBB"},
			{191.949999999998, "U_PMC_CombatUniformLS_BSGPSB"},
			{192.399999999998, "U_PMC_CombatUniformLS_BSGPBB"},
			{192.849999999998, "hlc_rifle_ak74"},
			{193.299999999998, "hlc_rifle_aks74"},
			{193.749999999998, "hlc_rifle_aks74u"},
			{194.199999999998, "hlc_rifle_ak47"},
			{194.649999999998, "hlc_rifle_akm"},
			{195.099999999998, "hlc_rifle_rpk"},
			{195.549999999998, "hlc_rifle_ak12"},
			{195.999999999998, "hlc_rifle_akmgl"},
			{196.449999999998, "hlc_rifle_aks74_GL"},
			{196.899999999998, "hlc_rifle_RU556"},
			{197.349999999998, "hlc_rifle_RU5562"},
			{197.799999999998, "RH_m16a1"},
			{198.249999999998, "RH_m16a1gl"},
			{198.699999999998, "RH_m16a2"},
			{199.149999999998, "RH_m16a2gl"},
			{199.599999999998, "RH_m16a3"},
			{200.049999999998, "RH_m16a4"},
			{200.499999999998, "RH_m16a4gl"},
			{200.949999999998, "RH_m16a4_m"},
			{201.399999999998, "HLC_Optic_PSO1"},
			{201.849999999998, "HLC_Optic_1p29"},
			{202.299999999998, "hlc_optic_kobra"},
			{202.749999999998, "hlc_muzzle_545SUP_AK"},
			{203.199999999998, "hlc_muzzle_762SUP_AK"},
			{203.649999999998, "hlc_muzzle_556NATO_KAC"},
			{204.099999999998, "hlc_muzzle_300blk_KAC"},
			{204.549999999998, "hlc_muzzle_snds_AUG"},
			{204.999999999998, "hlc_muzzle_snds_a6AUG"},
			{205.449999999998, "RH_eotech553"},
			{205.899999999998, "RH_eotech553mag"},
			{206.349999999998, "RH_eotech553_tan"},
			{206.799999999998, "RH_peq15"},
			{207.249999999998, "RH_eothhs1_tan"},
			{207.699999999998, "RH_peq15_top"},
			{208.099999999998, "hlc_45Rnd_762x39_m_rpk"},
			{208.499999999998, "hlc_25Rnd_9x19mm_M882_AUG"},
			{208.899999999998, "B_Kitbag_mcamo"},
			{209.299999999998, "30Rnd_556x45_Stanag_Tracer_Green"},
			{209.699999999998, "RH_20Rnd_762x51_LFMJSB"},
			{210.099999999998, "30Rnd_556x45_Stanag_Tracer_Yellow"},
			{210.499999999998, "RH_20Rnd_762x51_Mk319"},
			{210.899999999998, "30Rnd_65x39_caseless_mag_Tracer"},
			{211.299999999998, "RH_20Rnd_762x51_Mk316LR"},
			{211.699999999998, "29rnd_300BLK_STANAG_T"},
			{212.099999999998, "hlc_30Rnd_556x45_SOST_AUG"},
			{212.499999999998, "H_HelmetCrew_I"},
			{212.899999999998, "RH_20Rnd_762x51_M80A1"},
			{213.299999999998, "29rnd_300BLK_STANAG_S"},
			{213.699999999998, "RH_30Rnd_762x35_MSB"},
			{214.099999999998, "hlc_30rnd_556x45_SOST"},
			{214.499999999998, "RH_30Rnd_762x35_Match"},
			{214.899999999998, "hlc_30Rnd_545x39_B_AK"},
			{215.299999999998, "hlc_30Rnd_556x45_SPR_AUG"},
			{215.699999999998, "hlc_30Rnd_545x39_EP_AK"},
			{216.099999999998, "hlc_30Rnd_556x45_T_AUG"},
			{216.499999999998, "hlc_30Rnd_762x39_b_ak"},
			{216.899999999998, "hlc_40Rnd_556x45_B_AUG"},
			{217.299999999998, "hlc_45Rnd_762x39_t_rpk"},
			{217.699999999998, "hlc_40Rnd_556x45_SOST_AUG"},
			{218.099999999998, "RH_32Rnd_9mm_HP"},
			{218.499999999998, "RH_30Rnd_762x35_FMJ"},
			{218.899999999998, "RH_20Rnd_762x51_AR10"},
			{219.299999999998, "10Rnd_762x51_Mag"},
			{219.699999999998, "B_Kitbag_sgg"},
			{220.099999999998, "20Rnd_762x51_Mag"},
			{220.499999999998, "H_HelmetCrew_B"},
			{220.899999999998, "RH_30Rnd_68x43_Match"},
			{221.299999999998, "30Rnd_65x39_caseless_green_mag_Tracer"},
			{221.699999999998, "RH_30Rnd_68x43_FMJ"},
			{222.099999999998, "H_HelmetCrew_O"},
			{222.499999999998, "RH_60Rnd_556x45_Mk318"},
			{222.899999999998, "hlc_30rnd_556x45_SPR"},
			{223.299999999998, "hlc_30Rnd_545x39_T_AK"},
			{223.699999999998, "hlc_45Rnd_545x39_t_rpk"},
			{224.099999999998, "hlc_30Rnd_762x39_t_ak"},
			{224.499999999998, "hlc_30Rnd_556x45_B_AUG"},
			{224.899999999998, "RH_32Rnd_9mm_M822"},
			{225.299999999998, "B_Kitbag_cbr"},
			{225.699999999998, "RH_30Rnd_556x45_Mk262"},
			{226.099999999998, "30Rnd_556x45_Stanag_Tracer_Red"},
			{226.499999999998, "29rnd_300BLK_STANAG"},
			{226.899999999998, "RH_60Rnd_556x45_Mk262"},
			{227.299999999998, "ItemGPS"},
			{227.699999999998, "RH_60Rnd_556x45_M855A1"},
			{228.099999999998, "RH_20Rnd_556x45_Mk318"},
			{228.499999999998, "RH_20Rnd_556x45_Mk262"},
			{228.899999999998, "hlc_40Rnd_556x45_SPR_AUG"},
			{229.299999999998, "RH_20Rnd_556x45_M855A1"},
			{229.699999999998, "hlc_25Rnd_9x19mm_JHP_AUG"},
			{230.099999999998, "hlc_25Rnd_9x19mm_subsonic_AUG"},
			{230.499999999998, "RH_30Rnd_556x45_M855A1"},
			{230.899999999998, "RH_32Rnd_9mm_HPSB"},
			{231.299999999998, "RH_30Rnd_556x45_Mk318"},
			{231.699999999998, "hlc_30rnd_556x45_EPR"},
			{232.049999999998, "hlc_GRD_green"},
			{232.399999999998, "1Rnd_SmokeYellow_Grenade_shell"},
			{232.749999999998, "optic_LRPS"},
			{233.099999999998, "1Rnd_SmokePurple_Grenade_shell"},
			{233.449999999998, "U_I_HeliPilotCoveralls"},
			{233.799999999998, "1Rnd_SmokeGreen_Grenade_shell"},
			{234.149999999998, "U_I_pilotCoveralls"},
			{234.499999999998, "1Rnd_Smoke_Grenade_shell"},
			{234.849999999998, "U_B_PilotCoveralls"},
			{235.199999999998, "UGL_FlareWhite_F"},
			{235.549999999998, "U_O_PilotCoveralls"},
			{235.899999999998, "UGL_FlareGreen_F"},
			{236.249999999998, "U_B_HeliPilotCoveralls"},
			{236.599999999998, "hlc_GRD_orange"},
			{236.949999999998, "U_I_CombatUniform_shortsleeve"},
			{237.299999999998, "hlc_GRD_red"},
			{237.649999999998, "U_I_CombatUniform_tshirt"},
			{237.999999999998, "SmokeShellOrange"},
			{238.349999999998, "U_I_CombatUniform"},
			{238.699999999998, "SmokeShellPurple"},
			{239.049999999998, "arifle_MX_GL_F"},
			{239.399999999998, "SmokeShellGreen"},
			{239.749999999998, "optic_SOS"},
			{240.099999999998, "SmokeShell"},
			{240.449999999998, "optic_DMS"},
			{240.799999999998, "1Rnd_SmokeRed_Grenade_shell"},
			{241.149999999998, "20Rnd_556x45_UW_mag"},
			{241.499999999998, "1Rnd_SmokeBlue_Grenade_shell"},
			{241.849999999998, "RH_m4sbr_b"},
			{242.199999999998, "UGL_FlareRed_F"},
			{242.549999999998, "RH_m4sbr_g"},
			{242.899999999998, "hlc_GRD_blue"},
			{243.249999999998, "RH_m4sbr"},
			{243.599999999998, "RH_m4"},
			{243.949999999998, "hlc_GRD_White"},
			{244.299999999998, "RH_m4_ris"},
			{244.649999999998, "RH_m4_ris_m203"},
			{244.999999999998, "RH_m4_ris_m203s"},
			{245.349999999998, "RH_m4a1_ris"},
			{245.699999999998, "RH_m4a1_ris_m203"},
			{246.049999999998, "RH_m4a1_ris_m203s"},
			{246.399999999998, "hlc_GRD_purple"},
			{246.749999999998, "UGL_FlareYellow_F"},
			{247.099999999998, "1Rnd_SmokeOrange_Grenade_shell"},
			{247.449999999998, "RH_m4_m203"},
			{247.799999999998, "SmokeShellRed"},
			{248.149999999998, "SmokeShellYellow"},
			{248.499999999998, "SmokeShellBlue"},
			{248.799999999998, "H_CrewHelmetHeli_B"},
			{249.099999999998, "hlc_rifle_honeybase"},
			{249.399999999998, "V_RebreatherIR"},
			{249.699999999998, "hlc_rifle_vendimus"},
			{249.999999999998, "V_RebreatherIA"},
			{250.299999999998, "hlc_rifle_bcmjack"},
			{250.599999999998, "H_PilotHelmetHeli_O"},
			{250.899999999998, "hlc_rifle_Colt727"},
			{251.199999999998, "H_PilotHelmetHeli_I"},
			{251.499999999998, "1Rnd_HE_Grenade_shell"},
			{251.799999999998, "130Rnd_338_Mag"},
			{252.099999999998, "arifle_Mk20_GL_F"},
			{252.399999999998, "U_B_SpecopsUniform_sgg"},
			{252.699999999998, "V_RebreatherB"},
			{252.999999999998, "hlc_rifle_SAMR"},
			{253.299999999998, "hlc_rifle_Bushmaster300"},
			{253.599999999998, "H_CrewHelmetHeli_I"},
			{253.899999999998, "H_CrewHelmetHeli_O"},
			{254.199999999998, "150Rnd_93x64_Mag"},
			{254.499999999998, "hlc_rifle_honeybadger"},
			{254.799999999998, "hlc_rifle_Colt727_GL"},
			{255.099999999998, "arifle_TRG21_GL_F"},
			{255.399999999998, "H_PilotHelmetHeli_B"},
			{255.699999999998, "H_PilotHelmetFighter_I"},
			{255.999999999998, "H_PilotHelmetFighter_O"},
			{256.299999999998, "H_PilotHelmetFighter_B"},
			{256.549999999998, "hlc_muzzle_snds_G3"},
			{256.799999999998, "HLC_Optic_ZFSG1"},
			{257.049999999998, "muzzle_snds_H"},
			{257.299999999998, "hlc_muzzle_snds_HK33"},
			{257.549999999998, "hlc_rifle_awcovert_FDE"},
			{257.799999999998, "hlc_rifle_M14"},
			{258.049999999998, "hlc_rifle_awmagnum"},
			{258.299999999998, "hlc_rifle_hk51"},
			{258.549999999998, "hlc_rifle_awmagnum_BL"},
			{258.799999999998, "hlc_rifle_g3ka4"},
			{259.049999999998, "hlc_muzzle_snds_fal"},
			{259.299999999998, "hlc_rifle_psg1"},
			{259.549999999998, "hlc_rifle_m14sopmod"},
			{259.799999999998, "hlc_rifle_osw_GL"},
			{260.049999999998, "hlc_VOG25_AK"},
			{260.299999999998, "hlc_rifle_awmagnum_FDE"},
			{260.549999999998, "hlc_rifle_LAR"},
			{260.799999999998, "srifle_EBR_F"},
			{261.049999999998, "hlc_optic_suit"},
			{261.299999999998, "hlc_optic_artel_m14"},
			{261.549999999998, "hlc_optic_accupoint_g3"},
			{261.799999999998, "H_BandMask_demon"},
			{262.049999999998, "hlc_rifle_M21"},
			{262.299999999998, "H_BandMask_reaper"},
			{262.549999999998, "hlc_rifle_hk53"},
			{262.799999999998, "hlc_muzzle_snds_M14"},
			{263.049999999998, "HLC_Rifle_g3ka4_GL"},
			{263.299999999998, "hlc_rifle_SLR"},
			{263.549999999998, "hlc_rifle_g3a3"},
			{263.799999999998, "muzzle_snds_B"},
			{264.049999999998, "H_HelmetB_camo"},
			{264.299999999998, "hlc_rifle_c1A1"},
			{264.549999999998, "hlc_rifle_awcovert"},
			{264.799999999998, "hlc_rifle_awMagnum_FDE_ghillie"},
			{265.049999999998, "srifle_DMR_01_F"},
			{265.299999999998, "hlc_optic_LRT_m14"},
			{265.549999999998, "hlc_rifle_l1a1slr"},
			{265.799999999998, "muzzle_snds_M"},
			{266.049999999998, "H_BandMask_khk"},
			{266.299999999998, "hlc_rifle_awcovert_BL"},
			{266.549999999998, "hlc_rifle_g3sg1"},
			{266.799999999998, "hlc_rifle_falosw"},
			{267.049999999998, "HandGrenade"},
			{267.299999999998, "MiniGrenade"},
			{267.549999999998, "7Rnd_408_Mag"},
			{267.799999999998, "hlc_rifle_M14DMR"},
			{268.049999999998, "U_B_Wetsuit"},
			{268.299999999998, "U_O_Wetsuit"},
			{268.549999999998, "U_I_Wetsuit"},
			{268.799999999998, "5Rnd_127x108_Mag"},
			{269.049999999998, "hlc_rifle_awMagnum_OD_ghillie"},
			{269.299999999998, "hlc_rifle_awMagnum_BL_ghillie"},
			{269.549999999998, "hlc_rifle_STG58F"},
			{269.799999999998, "hlc_rifle_SLRchopmod"},
			{270.049999999998, "hlc_rifle_FAL5061"},
			{270.249999999998, "arifle_MX_GL_Black_F"},
			{270.449999999998, "U_I_OfficerUniform"},
			{270.649999999998, "U_O_OfficerUniform_ocamo"},
			{270.849999999998, "B_FieldPack_blk"},
			{271.049999999998, "B_FieldPack_ocamo"},
			{271.249999999998, "B_FieldPack_oucamo"},
			{271.449999999998, "B_FieldPack_cbr"},
			{271.649999999998, "arifle_MX_Black_F"},
			{271.849999999998, "arifle_MXC_Black_F"},
			{272.049999999998, "srifle_GM6_F"},
			{272.249999999998, "srifle_LRR_F"},
			{272.449999999998, "arifle_MXM_Black_F"},
			{272.649999999998, "hlc_100Rnd_762x51_M_M60E4"},
			{272.849999999998, "hlc_100Rnd_762x51_T_M60E4"},
			{273.049999999998, "hlc_100Rnd_762x51_B_M60E4"},
			{273.249999999998, "hlc_lmg_M60E4"},
			{273.399999999998, "B_Bergen_sgg"},
			{273.549999999998, "U_O_SpecopsUniform_ocamo"},
			{273.699999999998, "3Rnd_UGL_FlareGreen_F"},
			{273.849999999998, "U_O_CombatUniform_ocamo"},
			{273.999999999998, "hlc_20Rnd_762x51_B_G3"},
			{274.149999999998, "5Rnd_127x108_APDS_Mag"},
			{274.299999999998, "U_I_GhillieSuit"},
			{274.449999999998, "hlc_5rnd_300WM_AP_AWM"},
			{274.599999999998, "3Rnd_HE_Grenade_shell"},
			{274.749999999998, "hlc_5rnd_300WM_mk248_AWM"},
			{274.899999999998, "U_O_GhillieSuit"},
			{275.049999999998, "B_Bergen_rgr"},
			{275.199999999998, "U_B_GhillieSuit"},
			{275.349999999998, "3Rnd_SmokeYellow_Grenade_shell"},
			{275.499999999998, "hlc_50rnd_762x51_M_G3"},
			{275.649999999998, "3Rnd_SmokePurple_Grenade_shell"},
			{275.799999999998, "hlc_5rnd_300WM_FMJ_AWM"},
			{275.949999999998, "3Rnd_SmokeGreen_Grenade_shell"},
			{276.099999999998, "hlc_5rnd_300WM_BTSP_AWM"},
			{276.249999999998, "3Rnd_Smoke_Grenade_shell"},
			{276.399999999998, "hlc_5rnd_300WM_SBT_AWM"},
			{276.549999999998, "3Rnd_UGL_FlareWhite_F"},
			{276.699999999998, "B_Bergen_blk"},
			{276.849999999998, "hlc_50rnd_762x51_M_FAL"},
			{276.999999999998, "3Rnd_UGL_FlareRed_F"},
			{277.149999999998, "hlc_20Rnd_762x51_S_fal"},
			{277.299999999998, "hlc_20Rnd_762x51_t_fal"},
			{277.449999999997, "hlc_20Rnd_762x51_B_fal"},
			{277.599999999997, "hlc_50rnd_762x51_M_M14"},
			{277.749999999997, "hlc_20rnd_762x51_T_M14"},
			{277.899999999997, "hlc_20Rnd_762x51_B_M14"},
			{278.049999999997, "3Rnd_SmokeRed_Grenade_shell"},
			{278.199999999997, "3Rnd_UGL_FlareYellow_F"},
			{278.349999999997, "3Rnd_SmokeBlue_Grenade_shell"},
			{278.499999999997, "3Rnd_SmokeOrange_Grenade_shell"},
			{278.649999999997, "hlc_20rnd_762x51_T_G3"},
			{278.799999999997, "B_Bergen_mcamo"},
			{278.949999999997, "U_O_CombatUniform_oucamo"},
			{279.099999999997, "U_O_SpecopsUniform_blk"},
			{279.199999999997, "V_PlateCarrierL_CTRG"},
			{279.299999999997, "V_PlateCarrierH_CTRG"},
			{279.399999999997, "H_HelmetO_oucamo"},
			{279.499999999997, "H_HelmetLeaderO_ocamo"},
			{279.599999999997, "H_HelmetO_ocamo"},
			{279.699999999997, "H_HelmetSpecO_blk"},
			{279.799999999997, "H_HelmetSpecO_ocamo"},
			{279.899999999997, "H_HelmetLeaderO_oucamo"}
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	*/
	class Medical
	{
		top = 1;
		count = 1;
		maximum = 100;
		sum = 100;
		items[] =
		{
			{1, "Exile_Item_InstaDoc"}
		};
	};

	/**
	  Result of 100 rounds:

	  Laserdesignator
	  ItemGPS
	  acc_pointer_IR
	  hlc_rifle_awMagnum_BL_ghillie
	  optic_DMS
	  hlc_rifle_awMagnum_OD_ghillie
	  hlc_rifle_M14
	  hlc_rifle_M14
	  Rangefinder
	  hlc_5rnd_300WM_AP_AWM
	  srifle_EBR_F
	  muzzle_snds_B
	  optic_DMS
	  hlc_5rnd_300WM_SBT_AWM
	  optic_LRPS
	  ItemGPS
	  B_Carryall_oucamo
	  ItemRadio
	  optic_DMS
	  hlc_rifle_awMagnum_FDE_ghillie
	  srifle_DMR_01_F
	  NVGoggles
	  ItemRadio
	  hlc_rifle_awmagnum_BL
	  B_Carryall_oli
	  srifle_DMR_01_F
	  hlc_rifle_M14DMR
	  hlc_rifle_awmagnum_FDE
	  hlc_5rnd_300WM_BTSP_AWM
	  optic_DMS
	  hlc_rifle_awMagnum_OD_ghillie
	  optic_DMS
	  Exile_Item_InstaDoc
	  hlc_rifle_M21
	  hlc_rifle_M14
	  10Rnd_762x51_Mag
	  ItemGPS
	  hlc_rifle_M14
	  hlc_rifle_awMagnum_FDE_ghillie
	  hlc_rifle_M21
	  hlc_5rnd_300WM_BTSP_AWM
	  hlc_rifle_awMagnum_FDE_ghillie
	  srifle_DMR_01_F
	  ItemRadio
	  acc_flashlight
	  optic_LRPS
	  hlc_rifle_awMagnum_OD_ghillie
	  Binocular
	  Rangefinder
	  ItemGPS
	  acc_flashlight
	  ItemRadio
	  MiniGrenade
	  hlc_rifle_awMagnum_FDE_ghillie
	  NVGoggles
	  srifle_EBR_F
	  srifle_DMR_01_F
	  hlc_5rnd_300WM_FMJ_AWM
	  hlc_rifle_M14
	  acc_flashlight
	  srifle_EBR_F
	  NVGoggles
	  hlc_rifle_awmagnum
	  Exile_Item_InstaDoc
	  optic_LRPS
	  hlc_5rnd_300WM_SBT_AWM
	  hlc_rifle_awMagnum_BL_ghillie
	  hlc_5rnd_300WM_BTSP_AWM
	  optic_SOS
	  optic_SOS
	  B_Carryall_khk
	  hlc_rifle_awmagnum_BL
	  hlc_rifle_awMagnum_BL_ghillie
	  10Rnd_762x51_Mag
	  20Rnd_762x51_Mag
	  hlc_rifle_awMagnum_FDE_ghillie
	  10Rnd_762x51_Mag
	  B_Carryall_mcamo
	  hlc_rifle_awMagnum_BL_ghillie
	  10Rnd_762x51_Mag
	  hlc_rifle_awmagnum
	  hlc_rifle_awMagnum_BL_ghillie
	  hlc_rifle_M14
	  NVGoggles
	  srifle_DMR_01_F
	  hlc_rifle_awmagnum_BL
	  hlc_rifle_awMagnum_BL_ghillie
	  optic_SOS
	  hlc_5rnd_300WM_AP_AWM
	  hlc_rifle_awMagnum_BL_ghillie
	  hlc_5rnd_300WM_mk248_AWM
	  acc_pointer_IR
	  srifle_EBR_F
	  acc_pointer_IR
	  hlc_rifle_M21
	  ItemGPS
	  ItemGPS
	  acc_flashlight
	  hlc_5rnd_300WM_SBT_AWM
	  hlc_rifle_awMagnum_FDE_ghillie
	*/
	class Tourist
	{
		top = 20.9;
		count = 39;
		maximum = 100;
		sum = 3900;
		items[] =
		{
			{0.8, "srifle_EBR_F"},
			{1.6, "srifle_DMR_01_F"},
			{2.4, "Binocular"},
			{3.15, "Rangefinder"},
			{3.85, "optic_LRPS"},
			{4.55, "muzzle_snds_B"},
			{5.25, "acc_flashlight"},
			{5.95, "acc_pointer_IR"},
			{6.65, "optic_DMS"},
			{7.35, "optic_SOS"},
			{8, "hlc_rifle_awMagnum_BL_ghillie"},
			{8.65, "hlc_rifle_M14"},
			{9.3, "hlc_rifle_M14DMR"},
			{9.95, "hlc_rifle_awMagnum_OD_ghillie"},
			{10.6, "hlc_rifle_M21"},
			{11.25, "hlc_rifle_awMagnum_FDE_ghillie"},
			{11.9, "hlc_rifle_awmagnum_FDE"},
			{12.55, "hlc_rifle_awmagnum_BL"},
			{13.2, "hlc_rifle_awmagnum"},
			{13.8, "hlc_5rnd_300WM_AP_AWM"},
			{14.4, "hlc_5rnd_300WM_FMJ_AWM"},
			{15, "20Rnd_762x51_Mag"},
			{15.6, "hlc_5rnd_300WM_SBT_AWM"},
			{16.2, "hlc_5rnd_300WM_mk248_AWM"},
			{16.8, "hlc_5rnd_300WM_BTSP_AWM"},
			{17.4, "10Rnd_762x51_Mag"},
			{17.9, "Exile_Item_InstaDoc"},
			{18.4, "NVGoggles"},
			{18.9, "ItemRadio"},
			{19.4, "Laserdesignator"},
			{19.8, "ItemGPS"},
			{20.05, "MiniGrenade"},
			{20.3, "HandGrenade"},
			{20.4, "B_Carryall_ocamo"},
			{20.5, "B_Carryall_oucamo"},
			{20.6, "B_Carryall_mcamo"},
			{20.7, "B_Carryall_oli"},
			{20.8, "B_Carryall_khk"},
			{20.9, "B_Carryall_cbr"}
		};
	};

};


class CfgSettings
{
	///////////////////////////////////////////////////////////////////////
	// GARBAGE COLLECTOR
	///////////////////////////////////////////////////////////////////////
	class GarbageCollector
	{
		/*
		* This number defines after how many minutes (+1..5 minutes imprecision)
		* a corpse, vehicle wreck or dropped items should despawn.
        *
        * These things will despawn after despawnAfterMinutes time, but only
        * if there is no player within despawnRadius. If forceDespawnAfterMinutes
        * exceeded, it will despawn anyways.
		*/
		despawnAfterMinutes = 15;
		forceDespawnAfterMinutes = 25;
		despawnRadius = 40;
	};

	///////////////////////////////////////////////////////////////////////
	// RESPECT, YO
	///////////////////////////////////////////////////////////////////////
	class Respect
	{
		/**
		* Defines the factor of respect you gain for every pop tab in revenue
		*
		* Default: Get 1 respect for every 10 pop tabs
		*/
		tradingRespectFactor = 0.1;

		/**
		* Defines the amount of respect earned/lost for certain types of frags
		*/
		class Frags
		{
			bambi = -1000;			// Bambi slayers
			friendlyFire = -100;	// For party members
			standard = 100;			// Normal kill
			humiliation = 300;		// Axe
			passenger = 400;		// Out of car/chopper/boat
			roadKill = 500;			// :)
		};

		class Bonus
		{
			// Bonus per full 100m
			per100mDistance = 10;

			// First blood after server restart
			firstBlood = 100;

			/*
				Example with killstreak = 50

				Frag  Factor   Bonus
				2    * 50      +100
				3    * 50      +150
				4    * 50      +200
				5    * 50      +250
			*/
			killStreak = 50;

			// Kills within this amount of seconds stack (default: 2 minutes)
			killStreakTimeout = 120;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// KILLFEED MAN!
	///////////////////////////////////////////////////////////////////////

	class KillFeed
	{
		// Shows a kill feed for well kills
		showKillFeed = 1;
	};

	///////////////////////////////////////////////////////////////////////
	// PLAYER SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class BambiSettings
	{
		/**
		 * Loadout of new bambi players
		 *
		 * (They will always spawn with a bambi overall - you cannot
		 * change the loadout uniform)
		 */
		loadOut[] =
		{
			"ItemCompass",
			"ItemMap",
			"Exile_Item_XM8",
			"ItemRadio",
			"Exile_Item_PlasticBottleFreshWater"
		};

		/**
		 * Enables or disables parachute spawning.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		parachuteSpawning = 1;

		/**
		 * Parachute drop height in meters.
		 */
		parachuteDropHeight = 400;

		/**
		 * Number of minutes where a fresh spawned player remains in the
		 * bambi state. It will end the bambi state after this timeout
		 * expired or when they pick up their first weapon. Whatever
		 * happens first.
		 */
		protectionDuration = 5;

		/**
		 * Radius of spawn zones around the center of spawn zone markers.
		 */
		spawnZoneRadius = 500;

		/**
		 * These vehicles spawn on server restart close to spawn zones.
		 * They are non-persistent and will despawn on server restart.
		 * Basically they are just used to get away from the spawn zone
		 * faster.
		 *
		 * {Number of vehicles *per* spawn zone, vehicle class name}
		 */
		spawnZoneVehicles[] =
		{
			{5, "Exile_Bike_OldBike"},
			{5, "Exile_Bike_MountainBike"}
		};
	};

	///////////////////////////////////////////////////////////////////////
	// LOOT CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class LootSettings
	{
		/**
		 * Chance in % to spawn loot per loot spot per building.
		 *
		 * 100% = Super high loot
		 * 50%  = Normal loot spawn rates
		 * 20%  = You get the point
		 */
		spawnChance = 70;

		/**
		 * Radius in meter to spawn loot AROUND each player.
		 * Do NOT touch this value if you dont know what you do.
		 * The higher the number, the higher the drop rates, the
		 * easier your server will lag.
		 *
		 * 50m  = Minimum
		 * 200m = Maximum
		 */
		spawnRadius = 100;

		/**
		* Define a de-spawn radius here. That is the radius where loot
		* is not near to players and their lifeTime expired.
		*
		* 10m  = Minimum
		* 50m = Maximum
		*/
		visualThreshold = 25;

		/**
		 * Time in seconds to define how long loot stays on the ground
		 * after it has been spawned. Loot will despawn after this time
		 * has passed and if no player is within the despawnRadius.
		 * If the maximum life time expired, it will despawn loot
		 * regardless if players are nearby or not.
		 */
		minimumLifeTime = 300; // 5 minutes
		maximumLifeTime = 900; // 15 minutes

		/**
		 * Notify a player that loot spawned for him
		 *
		 * 1 = Yes
		 * 0 = No
		 */
		notifyPlayer = 0;
	};

	///////////////////////////////////////////////////////////////////////
	// VEHICLE SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////

	class VehicleSpawn
	{
		/**
		* Grid Size for vehicle spawning,
		* smaller the number more vehicles,
		* you get the point
		*/
		vehiclesGridSize = 2200;

		/**
		* Vehicle ammount per grid
		* kinda self explanitory
		*/
		vehiclesGridAmount = 4;

		/**
		* Creates global markers for vehicle spawn tweeking,
		* after you are satisfied with vehicle ammount and spread set this to 0.
		*/
		vehiclesDebugMarkers = 0;

		/**
		* The server will apply random damage up to this value when spawning a vehicle.
		*/
		damageChance = 20; // 20% chance for a vehicle HITPOINT to be damaged
		maximumDamage = 0.9;

		// Stuff to spawn on water
		water[] =
		{
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey"
		};

		// Stuff to spawn on roads
		ground[] =
		{
			"Exile_Bike_QuadBike_Black",
			"Exile_Bike_QuadBike_Blue",
			"Exile_Bike_QuadBike_Red",
			"Exile_Bike_QuadBike_White",
			"Exile_Bike_QuadBike_Nato",
			"Exile_Bike_QuadBike_Csat",
			"Exile_Bike_QuadBike_Fia",
			"Exile_Bike_QuadBike_Guerilla01",
			"Exile_Bike_QuadBike_Guerilla02",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black"
		};
	};

	class LocalityMonitor
	{
		/**
		* Transfers the ownership of construction objects to clients to ease the load on server
		* EXPERIMENTAL!
		*/
		monitor = 0;	// 0 = off, 1 = on

		threshold = 20; // Triggers when x ammout on players are on
	};

	class Weather
	{
		/*
			You can define multiple "keyframes" for the weather to change. The server will pick
			a keyframe randomly to simulate the weather. It will change the weather-keyframes
			based on the following interval
		*/
		interval = -1;

		/*
			Add the keyframes here. The server will pick one random, so if you want one
			weather type of be more dominant compared to others, add it multiple times
		*/
		keyframes[] = {"Sunny", "Cloudy", "Thunderstorm"};

		/*
			This is a keyframe. Look up the BIKI to get more details about the parameters

			Be sure to design the fog settings at a view distance of 1,600m as this is the
			limit in multiplayer by default

			https://community.bistudio.com/wiki/fogParams
			https://community.bistudio.com/wiki/overcast
			https://community.bistudio.com/wiki/setWaves
			https://community.bistudio.com/wiki/setWindStr
			https://community.bistudio.com/wiki/setGusts
			https://community.bistudio.com/wiki/setRain
			https://community.bistudio.com/wiki/setLightnings
			https://community.bistudio.com/wiki/setRainbow
		*/
		class Sunny
		{
			fogValue = 0.1;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 0.2;
			waves = 0.2;
			wind = 0.3;
			gusts = 0.3;
			rain = 0;
			lightnings = 0;
			rainbows = 0;
		};

		class Cloudy
		{
			fogValue = 0.2;
			fogDecay = 0.1;
			fogBase = 5;
			overcast = 0.4;
			waves = 0.4;
			wind = 0.7;
			gusts = 0.6;
			rain = 0.1;
			lightnings = 0.1;
			rainbows = 1;
		};

		class Thunderstorm
		{
			fogValue = 0.7;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 1;
			waves = 1;
			wind = 1;
			gusts = 1;
			rain = 1;
			lightnings = 1;
			rainbows = 0.5;
		};
	};

	class Time
	{
		// Uses Dedicated Server time as ingame Time
		useRealTime = 0;

		// Will overide RealTime
		useStaticTime = 1;

		// time in ARMA FORMAT << CONFIG
		// https://community.bistudio.com/wiki/setDate

		staticTime[] = {2039,10,24,12,0};
	};


	class RCON
	{
		/*
			Note that for this to work you need to have serverCommandPassowrd defined in config.cfg and BE enabled
		*/

		// This needs to match config.cfg serverCommandPassword
		serverPassword = "";

		// Autolocks server until its ready to accept players
		useAutoLock = 0;

		// Server will autoLock at that time before restart (minutes)
		restartAutoLock = 3;

		/*
			Number of hours and minutes of your restart period.

			Examples:

			{4, 0} = Every 4 hours
			{1, 30} = Every one and a half hour (who the hell would do this?)
		*/
		restartTimer[] = {3, 0};

		/*
			Kicks players before restart to prevent gear loss.
			We strongely recommend to use this!

			0 = off
			1 = on
		*/
		useAutoKick = 1;

		/*
			Number of minutes before the server kicks players that did
			not disconnect before the restart. Should at least be two
			minutes!
		*/
		kickTime = 2;

		/*
			Self-explanatory

			0 = off
			1 = on
		*/
		useRestartMessages = 0;

		/*
			Number of minutes before the restart to inform your players.

			Only use full minutes here. Value like 5.5 have not been tested.
		*/
		restartWarrningTime[] = {15, 10, 5, 3};
	};
};
