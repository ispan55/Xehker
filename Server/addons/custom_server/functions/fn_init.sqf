diag_log format [':: SERVER :: Starting Custom Server'];

diag_log format [':: SERVER :: Loading trader cities'];

[] execVM "x\addons\custom_server\tradercities\Airport.sqf";
diag_log format [':: SERVER :: Trader City Airport Loaded'];

[] execVM "x\addons\custom_server\tradercities\ESPetrol.sqf";
diag_log format [':: SERVER :: Trader City ESPetrol Loaded'];

[] execVM "x\addons\custom_server\tradercities\Forest.sqf";
diag_log format [':: SERVER :: Trader City Forest Loaded'];

diag_log format [':: SERVER :: Custom Server has finished loading'];
