private ["_objs"];
_objs = [
	["Exile_Sign_Armory",[3912.32,9296.99,3.00044],321.601,[[-0.621134,0.783705,0],[0,0,1]],false],
	["Exile_Sign_Armory_Small",[3914.74,9288.76,0],0,[[0,1,0],[0,0,1]],false],
	["Exile_Sign_Equipment",[3957.87,9317.76,0.000457764],38.7644,[[0.62612,0.779727,0],[0,0,1]],false],
	["Exile_Sign_Equipment_Small",[3948.82,9313.36,4.57764e-005],17.2286,[[0.296185,0.955131,0],[0,0,1]],false],
	["Exile_Sign_Food",[3971.6,9299.7,-0.000473022],41.7644,[[0.666069,0.74589,0],[0,0,1]],false],
	["Exile_Sign_Food_Small",[3968.5,9296.11,-0.000457764],41.6359,[[0.664395,0.747382,0],[0,0,1]],false],
	["Exile_Sign_Hardware",[3976.18,9283.31,0.000427246],127.779,[[0.79038,-0.612617,0],[0,-0,1]],false],
	["Exile_Sign_Hardware_Small",[3969.59,9283.24,0.000442505],41.6361,[[0.664397,0.74738,0],[0,0,1]],false],
	["Exile_Sign_Office",[3966.02,9312.74,0.000350952],41.6358,[[0.664393,0.747383,0],[0,0,1]],false],
	["Exile_Sign_Office_Small",[3959.81,9305.38,0],0,[[0,1,0],[0,0,1]],false],
	["Exile_Sign_SpecialOperations",[4010.99,9258.83,0.000335693],43.0716,[[0.682912,0.730501,0],[0,0,1]],false],
	["Exile_Sign_SpecialOperations_Small",[4006.51,9260.87,0],31.5859,[[0.523776,0.851856,0],[0,0,1]],false],
	["Exile_Sign_VehicleCustoms",[4022.98,9219.3,0.000442505],126.343,[[0.805484,-0.592618,0],[0,-0,1]],false],
	["Exile_Sign_VehicleCustoms_Small",[4014.92,9217.69,0.000442505],96.1933,[[0.994164,-0.107883,0],[0,-0,1]],false],
	["Exile_Sign_Vehicles",[4009.28,9234.16,0.000442505],34.4572,[[0.565791,0.824549,0],[0,0,1]],false],
	["Exile_Sign_Vehicles_Small",[3995.18,9230.65,0.000442505],70.3503,[[0.941766,0.336268,0],[0,0,1]],false],
	["Exile_Sign_WasteDump",[3962.57,9261.09,0.000442505],41.6359,[[0.664395,0.747382,0],[0,0,1]],false],
	["Exile_Sign_WasteDump_Small",[3958.73,9262.23,0],0,[[0,1,0],[0,0,1]],false]
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
