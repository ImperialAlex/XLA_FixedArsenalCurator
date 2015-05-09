class CfgPatches
{
	class XLA_FixedArsenalCurator
	{
		units[] = {"XLA_FixedArsenalCurator_ModuleAddFA","XLA_FixedArsenalCurator_ModuleRmFA","XLA_FixedArsenalCurator_ModuleOpenFA"};
		requiredVersion = 3.0;
		requiredAddons[] = {"XLA_FixedArsenal"};
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class XLA_FixedArsenalCurator_ModuleCategory: NO_CATEGORY
	{
		displayName=$STR_XLA_FixedArsenalCurator_ModuleCategory;
	};
};

class CfgVehicles
{
	#include "cfgVehicles.hpp"
};

class CfgFunctions
{
    class XLA {
        class curatorsArsenal {
            file="\XLA_FixedArsenalCurator\functions\curatorsArsenal";
            class moduleAddFA{};
            class moduleRmFA{};
            class moduleOpenFA{};
        };
    };
};
