class CfgPatches {
	class custom_server {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_server_settings"};
	};
};
class CfgFunctions {
	class TGC {
		class main {
			file = "x\addons\custom_server\functions";
			class init {
				postInit = 1;
			};
		};
	};
};
