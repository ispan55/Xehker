/*

 	Name: initPlayerLocal.sqf


 	Author(s):
    Exile Mod Team
    WolfkillArcadia

 	Description:
    Initializes player init

*/

//_________Zombies by CaptionJack_________//
[] execVM "ZOM\init.sqf";

//_________Nightime by WolfkillArcadia_________//
if (hasInterface) then {
//    [] execVM "core\night\initNight.sqf";
};

//__________Dyanmic Weather by tortuosit___________//
if (isServer) then {
    /*
    RANGES:
    - weighting [-1..1]
    - turbulence [0..1]
    - wind speed in m/s
    - wind dir [0..360]
    - everything else [0..1]
    */

    tort_island_overcast = [(0.5+(random(0.5))), 0.6, 1, 0.5, 0];          //init, min, max, weight, turbulence
    tort_island_fog =   [random 0.5, 0.02, 0.5, 0.5, 0];             //init, min, max, weight, turbulence
    tort_island_wind =  [random 6, floor(random 360), 0, 6, 0, 360, 0, 0]; //initS, initD, minS, maxS, minD, maxD, weight, turbulence
    tort_island_rain =  [random 0.3, 0, 1, 0, 0, 0.85];          //init, min, max, weight, turbulence, overcastthreshold
    tort_island_breakout = [0.2, 0.2, 600, 1800];

    //tort_overcast_now = 0.6;
    tort_overcast_min = 0.6;
    tort_overcast_max = 1;
    tort_overcast_weighting = 0;
    tort_overcast_turbulence = 0;

    //tort_fog_now = random 1;
    tort_fog_min = 0.02;
    tort_fog_max = 1;
    tort_fog_weighting = 0.2;
    tort_fog_turbulence = 0;

    //tort_wind_speed_now = random 6;
    tort_wind_speed_min = 0;
    tort_wind_speed_max = 6;
    tort_wind_dir_min = 0;
    tort_wind_dir_max = 360;
    tort_wind_weighting = 0;
    tort_wind_turbulence = 0;

    //tort_rain_now = random 1;
    tort_rain_min = 0;
    tort_rain_max = 1;
    tort_rain_threshold = 0.85;

    tort_breakout_p1 = 0.2;
    tort_breakout_p2 = 0.2;
    tort_breakout_s1 = 600;
    tort_breakout_s2 = 1800;
    //tort_breakout_changenow = true;
    [] execVM "core\dynamicweather\init.sqf";
};

//______Little immersion Tweaks [lit]___//
/*
0: Bool; whether to leave these scripts on after player dies; default false.
    1: Map Subtractions Array (leave empty to disable):
        0: Bool; whether to remove "Show player on map" button; default true.
        1: Bool; whether to remove and disable map textures; default true.
        2: Bool; whether to remove cursor grid ref; default true.
        3: Bool; whether to use alternative cursor type; default true.
    2: Map Additions Array (leave empty to disable):
        0: Scalar: flashlight size to use (0 = normal, 1 = large); default 0.
        1: Bool: whether to enable NVG on map; default true.
        2: Bool: whether player starts with flashlight item; default true.
    3: NVG Array (leave empty to disable):
        0: Array (leave empty to disable):
            0: Scalar; max viewdistance of NVG; default 1000.
        1: Bool; whether to enable NVG grain; default true.
        2: Bool; whether to turn off NVG when using non-collimator optics; default true.
*/
if (!isDedicated and hasInterface) then {
    [true,[true,true,true,true],[0,true,false],[[1000],true,false]] execVM "core\vip_lit\vip_lit_init.sqf";
};

/*
---------------------
END SCRIPTING INIT
BEGIN STATIC OBJECTS
---------------------
*/

///////////////////////////////////////////////////////////////////////////////
// Static Objects
///////////////////////////////////////////////////////////////////////////////
#include "initServer.sqf"

if (!hasInterface || isServer) exitWith {};

///////////////////////////////////////////////////////////////////////////////
//                                  Traders!
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//                             TRADER CITY FOREST
///////////////////////////////////////////////////////////////////////////////

// Armory
_chair setDir 275.658;
_chair setPosATL [3233.2,3393.26,-0.000518799];

[
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;

// Equipment
[
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [3233.86,3388.72,2.99991],
    192.387
]
call ExileClient_object_trader_create;

// Hardware
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 318.602;
_workBench setPosATL [3241.22,3400.73,0.000305176];

[
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

// SpecialOperations
[
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [3254.35,3400.93,-0.000350952],
    344.573
]
call ExileClient_object_trader_create;

// Vehicles
_trader =
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [3260.27,3401.19,-0.000350952],
    344.573
]
call ExileClient_object_trader_create;

// WasteDump
[
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [3271.79,3403.3,-0.00062561],
    347.445
]
call ExileClient_object_trader_create;

// Food
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 172.285;
_cashDesk setPosATL [3253.66,3389.14,0.000167847];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;
_microwave disableCollisionWith _cashDesk;
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;
_ketchup disableCollisionWith _cashDesk;
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;
_mustard disableCollisionWith _cashDesk;
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

[
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////////
//                             TRADER CITY ESPETROL
///////////////////////////////////////////////////////////////////////////////


// Armory
[
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [3961.58,9260.01,0.000442505],
    40.1998
]
call ExileClient_object_trader_create;

// Equipment
[
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [3976.63,9285.23,0.000152588],
    127.779
]
call ExileClient_object_trader_create;

// Food
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 40.1998;
_cashDesk setPosATL [4009.21,9259,0.000442505];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;
_microwave disableCollisionWith _cashDesk;
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;
_ketchup disableCollisionWith _cashDesk;
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;
_mustard disableCollisionWith _cashDesk;
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

[
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;

// Hardware
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 20.0997;
_workBench setPosATL [4005.18,9235.35,0.000442505];

[
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

// Office
[
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [4022.52,9223.23,0.000442505],
    84.7072
]
call ExileClient_object_trader_create;

// SpecialOperations
[
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [3915.58,9297.44,3.30045],
    0
]
call ExileClient_object_trader_create;

// VehicleCustoms
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [3972.41,9297.77,0.000442505],
    40.1998
]
call ExileClient_object_trader_create;


// Vehicles
_trader =
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [3966.31,9309.87,0.000442505],
    40.1998
]
call ExileClient_object_trader_create;


// WasteDump
[
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [3930.07,9258.37,0.000442505],
    312.987
]
call ExileClient_object_trader_create;

// Guard 1
[
    "Exile_Guard_02",
    "WhiteHead_03",
    ["InBaseMoves_patrolling2"],
    [3938.32,9251.44,0.000442505],
    222.536
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////////
//                             TRADER CITY AIRPORT
///////////////////////////////////////////////////////////////////////////////

// Aircraft
[
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [10118.9,4813.61,0],
    165.108
]
call ExileClient_object_trader_create;


// AircraftCustoms
[
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [10111.5,4798.12,0],
    182.337
]
call ExileClient_object_trader_create;

// Armory


[
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [10121.1,4794.65,0],
    169.415
]
call ExileClient_object_trader_create;

// Equipment
[
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [10118.7,4808.85,0],
    0
]
call ExileClient_object_trader_create;

// Food
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 0;
_cashDesk setPosATL [10126.2,4808.69,0];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;
_microwave disableCollisionWith _cashDesk;
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;
_ketchup disableCollisionWith _cashDesk;
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;
_mustard disableCollisionWith _cashDesk;
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

[
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;

// Hardware
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 65.5927;
_workBench setPosATL [10132.3,4808.65,0];

[
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

// Office
[
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [10132.4,4800.37,0],
    129.215
]
call ExileClient_object_trader_create;

// SpecialOperations
[
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [10102.2,4803.32,0],
    182.337
]
call ExileClient_object_trader_create;
