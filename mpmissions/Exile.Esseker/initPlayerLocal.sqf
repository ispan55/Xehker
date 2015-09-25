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
_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setDir 173.65;
_chair setPosATL [3254.03,3400.45,0];

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
    ["InBaseMoves_Lean1"],
    [3234.01,3392.92,0.20],
    92.3223
]
call ExileClient_object_trader_create;

// Hardware
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 348.193;
_workBench setPosATL [3235.49,3389.09,3.07];

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
    [3241.17,3400.91,0.2],
    150.89
]
call ExileClient_object_trader_create;

// Vehicles
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [3260.33,3401.04,0],
    179.22
]
call ExileClient_object_trader_create;

// WasteDump
[
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [3272.28,3402.3,0],
    175.37
]
call ExileClient_object_trader_create;

// Food
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 351.242;
_cashDesk setPosATL [3253.88,3389.7,0];

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
    [3915.3,9296.97,3.36],
    183.148
]
call ExileClient_object_trader_create;

// Equipment
[
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [3955.74,9317.03,0.2],
    219.792
]
call ExileClient_object_trader_create;

// Food
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 221.868;
_cashDesk setPosATL [3971.48,9297.98,0.42];

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
_workBench setDir 310.87;
_workBench setPosATL [3974.8,9282.01,0.31];

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
    [3963.92,9312.34,0.2],
    188.504
]
call ExileClient_object_trader_create;


// SpecialOperations
[
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [4009,9258.39,0],
    228.117
]
call ExileClient_object_trader_create;

// VehicleCustoms
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [4021.91,9222.1,0],
    292.95
]
call ExileClient_object_trader_create;


// Vehicles
_trader =
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [4004.82,9235.72,0],
    174.911
]
call ExileClient_object_trader_create;

_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
_carWreck setDir 355.455;
_carWreck setPosATL [14605.6, 16877.3, 0.0208359];


// WasteDump
[
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [3961.74,9260.3,0],
    220.26
]
call ExileClient_object_trader_create;

// Guard 1
[
    "Exile_Guard_01",
    "WhiteHead_17",
    ["InBaseMoves_patrolling1"],
    [10102.3,4803.51,0.18],
    3.5
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
    [10118.8,4813.96,0],
    343.609
]
call ExileClient_object_trader_create;

// AircraftCustoms
[
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [10102.3,4803.51,0.18],
    3.50
]
call ExileClient_object_trader_create;

// Armory
_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setDir 309.985;
_chair setPosATL [10132,4800.47,0];

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
    ["InBaseMoves_Lean1"],
    [10127.5,4808.93,0],
    177.549
]
call ExileClient_object_trader_create;

// Food
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 3;
_cashDesk setPosATL [1011.5,4798.9,0];

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
_workBench setDir 185.196;
_workBench setPosATL [10119.4,4808.75,0];

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
    [10121.1,4795.02,0],
    359.758
]
call ExileClient_object_trader_create;

// SpecialOperations
[
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [10132,4808.44,0],
    236.181
]
call ExileClient_object_trader_create;
