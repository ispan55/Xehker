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


// Equipment


// Hardware


// SpecialOperations


// Vehicles


// WasteDump


// Food



///////////////////////////////////////////////////////////////////////////////
//                             TRADER CITY ESPETROL
///////////////////////////////////////////////////////////////////////////////


// Armory


// Equipment


// Food


// Hardware


// Office


// SpecialOperations


// VehicleCustoms



// Vehicles



// WasteDump


// Guard 1


///////////////////////////////////////////////////////////////////////////////
//                             TRADER CITY AIRPORT
///////////////////////////////////////////////////////////////////////////////

// Aircraft


// AircraftCustoms


// Armory


// Equipment


// Food


// Hardware


// Office


// SpecialOperations
