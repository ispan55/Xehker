private ["_objs"];
_objs = [
	["Land_LampHalogen_F",[3282.5,3409.46,3.05176e-005],309.68,[0,0,1],true],
	["Land_FieldToilet_F",[3250.96,3401.28,0.000671387],346.009,[[-0.241769,0.970334,0],[0,0,1]],false],
	["Land_FieldToilet_F",[3249.74,3400.99,0.000671387],346.009,[[-0.241769,0.970334,0],[0,0,1]],false],
	["Exile_Sign_Armory_Small",[3255.84,3400.76,0],0,[[0,1,0],[0,0,1]],false],
	["Exile_Sign_Equipment_Small",[3238.91,3387.3,0.000793457],261.301,[[-0.988497,-0.151243,0],[-0,0,1]],false],
	["Exile_Sign_Hardware_Small",[3242.42,3391.88,0.000320435],264.172,[[-0.994831,-0.101542,0],[-0,0,1]],false],
	["Exile_Sign_SpecialOperations_Small",[3246.57,3397,0.000183105],344.573,[[-0.26601,0.96397,0],[0,0,1]],false],
	["Exile_Sign_Vehicles_Small",[3262.5,3402.12,0],0,[[0,1,0],[0,0,1]],false],
	["Exile_Sign_WasteDump_Small",[3290.32,3387,-0.000335693],251.251,[0,0,1],true],
	["Exile_Sign_Hardware",[3238.71,3390.22,-0.500641],262.737,[[-0.991976,-0.126424,0],[-0,0,1]],false],
	["Land_cages_EP1",[3242.49,3395.48,0.000656128],73.2218,[[0.957429,0.288667,0],[0,0,1]],false],
	["Land_cages_EP1",[3243.81,3395.79,0.000656128],73.2218,[[0.957429,0.288667,0],[0,0,1]],false],
	["Land_tires_EP1",[3242.5,3394.12,0],0,[[0,1,0],[0,0,1]],false],
	["Exile_Sign_Armory",[3253.56,3402.36,-0.499802],346.008,[[-0.241786,0.97033,0],[0,0,1]],false],
	["TargetStatic_ACR",[3242.33,3386.1,-1.52588e-005],238.329,[[-0.851077,-0.525041,0],[-0,0,1]],false],
	["TargetStatic_ACR",[3241.73,3390.31,-0.000534058],262.737,[[-0.991976,-0.126424,0],[-0,0,1]],false],
	["TargetStatic_ACR",[3243.09,3399.35,-9.15527e-005],287.016,[[-0.956223,0.292639,0],[0,0,1]],false],
	["TargetStatic_ACR",[3254.35,3400.93,-0.000350952],344.573,[[-0.26601,0.96397,0],[0,0,1]],false],
	["TargetStatic_ACR",[3260.27,3401.19,-0.000350952],344.573,[[-0.26601,0.96397,0],[0,0,1]],false],
	["TargetStatic_ACR",[3288.66,3384.03,-0.00106812],284.273,[[-0.969132,0.246543,0],[0,0,1]],false],
	["Land_CncBarrier_F",[3238.25,3384.47,0.000335693],167.979,[0,0,1],true],
	["Land_CncBarrier_F",[3240.6,3384.97,0.0010376],167.979,[0,0,1],true],
	["Land_CncBarrier_F",[3243.05,3385.52,0.0010376],167.979,[0,0,1],true],
	["Land_CncBarrier_F",[3246.67,3386.3,0.0010376],167.979,[0,0,1],true],
	["Land_CncBarrier_F",[3250.42,3387.1,0.0010376],167.979,[0,0,1],true],
	["Land_CncBarrier_F",[3254.24,3387.92,0.0010376],167.979,[0,0,1],true],
	["Land_CncBarrier_F",[3258.06,3388.72,0.0010376],167.979,[0,0,1],true],
	["Land_CncBarrier_F",[3261.84,3389.53,0.0010376],167.979,[0,0,1],true],
	["Land_CncBarrier_F",[3264.47,3391.37,0.000473022],290.015,[0,0,1],true],
	["Land_CncBarrier_F",[3265.09,3394.9,0.00212097],269.915,[0,0,1],true],
	["Land_CncBarrier_F",[3265.66,3398.39,0.00280762],290.015,[0,0,1],true],
	["Land_CncBarrier_F",[3266.15,3401.52,0.00343323],262.736,[0,0,1],true],
	["ZavoraAnim",[3290.08,3388.72,0.000320435],348.881,[0,0,1],true],
	["ZavoraAnim",[3230.77,3383.55,0.152695],166.852,[0,0,1],true],
	["Land_Fire_barrel_burning",[3252.05,3401.72,0],0,[[0,1,0],[0,0,1]],false],
	["Land_CampingTable_F",[3253.68,3401.92,-1.52588e-005],166.544,[[0.232698,-0.972549,0],[0,-0,1]],false],
	["AmmoCrates_NoInteractive_Small",[3255.39,3401.72,-0.000411987],188.079,[0,0,1],true],
	["datsun02Wreck",[3240.53,3386.66,0.00012207],12.9215,[[0.405824,0.863634,-0.299071],[-0.428703,0.468874,0.77225]],false],
	["Exile_Cosmetic_UAV",[3242.41,3396.51,0.200089],225.408,[[-0.883098,-0.0947198,0.459529],[0.136425,0.885256,0.444646]],false],
	["Exile_Cosmetic_UAV",[3241.74,3396.69,0.249863],350.316,[[-0.168213,0.985751,0],[0.757887,0.129329,0.639438]],false],
	["Exile_Cosmetic_UAV",[3241.84,3397.13,0.305115],291.451,[[-0.930731,0.365705,0],[0.28117,0.715586,0.639438]],false],
	["Exile_Cosmetic_UAV",[3242.6,3397,0.09935],277.223,[[-0.960655,0.172155,0.217953],[0.249245,0.188108,0.949996]],false],
	["Exile_Cosmetic_MG",[3242.34,3399.04,-0.00012207],80.4003,[[0.337474,0.0570776,-0.939603],[0.926446,0.156692,0.342267]],false],
	["Land_Misc_GContainer_Big",[3285.83,3381.88,-0.000335693],76.0933,[0,0,1],true],
	["Garbage_container",[3287.28,3378.3,0.000442505],120.601,[0,0,1],true],
	["JeepWreck3",[3289.13,3378.68,0.000183105],142.137,[0,0,1],true],
	["ClutterCutter_small_2_EP1",[3290.72,3384.33,0],0,[[0,1,0],[0,0,1]],false],
	["ClutterCutter_small_2_EP1",[3289.03,3381.88,0],0,[[0,1,0],[0,0,1]],false],
	["Land_Misc_Rubble_EP1",[3292.83,3376.39,0.000305176],142.136,[[0.613789,-0.78947,0],[0,-0,1]],false],
	["Exile_Sign_WasteDump",[3288.48,3381.69,-0.000442505],248.38,[0,0,1],true],
	["Exile_Sign_Food_Small",[3257.48,3389.99,0.000320435],228.279,[[-0.746395,-0.665504,0],[-0,0,1]],false],
	["Exile_Sign_Food",[3254.28,3388.24,0.000640869],172.286,[[0.134228,-0.99095,0],[0,-0,1]],false],
	["Land_stand_small_EP1",[3252.32,3388.35,0.000869751],173.722,[[0.109352,-0.994003,0],[0,-0,1]],false],
	["Land_stand_waterl_EP1",[3256.04,3388.97,-0.000228882],145.008,[[0.573462,-0.819232,0],[0,-0,1]],false],
	["Land_cargo_addon02_V1_F",[3254.1,3389.95,1.52588e-005],167.979,[[0.20827,-0.978071,0],[0,-0,1]],false],
	["TargetStatic_ACR",[3253.66,3389.14,0.000167847],172.285,[[0.134245,-0.990948,0],[0,-0,1]],false],
	["Land_Garbage_square3_F",[3292.37,3382.11,0],0,[[0,1,0],[0,0,1]],false],
	["Land_Garbage_square3_F",[3290.65,3384.52,0],0,[[0,1,0],[0,0,1]],false],
	["Land_Garbage_square3_F",[3293.17,3379.96,0],0,[[0,1,0],[0,0,1]],false],
	["Land_Garbage_square3_F",[3294.51,3379.32,0],0,[[0,1,0],[0,0,1]],false],
	["Land_Garbage_square3_F",[3294.22,3383.33,0],0,[[0,1,0],[0,0,1]],false],
	["Land_Garbage_square3_F",[3288.24,3382.78,0],0,[[0,1,0],[0,0,1]],false],
	["Land_Garbage_square3_F",[3289.27,3380.87,0],0,[[0,1,0],[0,0,1]],false],
	["Land_Garbage_square3_F",[3290.4,3379.82,0],0,[[0,1,0],[0,0,1]],false],
	["Land_Garbage_square3_F",[3288.24,3385.04,0],0,[[0,1,0],[0,0,1]],false],
	["Land_GarbageBarrel_01_F",[3291.06,3378.79,3.05176e-005],142.136,[[0.613789,-0.78947,0],[0,-0,1]],false],
	["Land_Fire_barrel_burning",[3290.27,3379.23,0],0,[[0,1,0],[0,0,1]],false]
];

{
	private ["_obj"];
	_obj = createVehicle [_x select 0, [0,0,0], [], 0, "CAN_COLLIDE"];
	if (_x select 4) then {
		_obj setDir (_x select 2);
		_obj setPos (_x select 1);
	} else {
		_obj setPosATL (_x select 1);
		_obj setVectorDirAndUp (_x select 3);
	};
} foreach _objs;