
class Module_F;
class Arguments;
class ModuleDescription;

class XLA_FixedArsenalCurator_ModuleAddFA: Module_F
{
    mapSize = 1;
    vehicleClass = "Modules";
    category = "XLA_FixedArsenalCurator_ModuleCategory";
    side = 7;

    scope = 1;
    scopeCurator = 2;

    displayName = $STR_XLA_FixedArsenalCurator_ModuleAddFA;
    icon = "\XLA_FixedArsenalCurator\data\XLA_FixedArsenalCurator_ModuleAddFA.paa";
    picture = "\XLA_FixedArsenalCurator\data\XLA_FixedArsenalCurator_ModuleAddFA.paa";
    portrait = "\XLA_FixedArsenalCurator\data\XLA_FixedArsenalCurator_ModuleAddFA.paa";
    
    function = "XLA_fnc_moduleAddFA";
    functionPriority = 1;
    isGlobal = 2;
    isTriggerActivated = 0;
    isDisposable = 0;
    curatorCanAttach = 1;

    class Arguments{};

    class ModuleDescription: ModuleDescription
    {
        description=$STR_XLA_FixedArsenalCurator_ModuleAddFA_Desc;
    };
};

class XLA_FixedArsenalCurator_ModuleRmFA: Module_F
{
    mapSize = 1;
    vehicleClass = "Modules";
    category = "XLA_FixedArsenalCurator_ModuleCategory";
    side = 7;

    scope = 1;
    scopeCurator = 2;

    displayName = $STR_XLA_FixedArsenalCurator_ModuleRmFA;
    icon = "\XLA_FixedArsenalCurator\data\XLA_FixedArsenalCurator_ModuleRmFA.paa";
    picture = "\XLA_FixedArsenalCurator\data\XLA_FixedArsenalCurator_ModuleRmFA.paa";
    portrait = "\XLA_FixedArsenalCurator\data\XLA_FixedArsenalCurator_ModuleRmFA.paa";
    
    function = "XLA_fnc_moduleRmFA";
    functionPriority = 1;
    isGlobal = 2;
    isTriggerActivated = 0;
    isDisposable = 0;
    curatorCanAttach = 1;

    class Arguments{};

    class ModuleDescription: ModuleDescription
    {
        description=$STR_XLA_FixedArsenalCurator_ModuleRmFA_Desc;
    };
};


class XLA_FixedArsenalCurator_ModuleOpenFA : Module_F
{
    mapSize = 1;

    vehicleClass = "Modules";
    category = "XLA_FixedArsenalCurator_ModuleCategory";
    side = 7;

    scope = 1;
    scopeCurator = 2;
    displayName = $STR_XLA_FixedArsenalCurator_ModuleOpenFA;
    icon = "\XLA_FixedArsenalCurator\data\XLA_FixedArsenalCurator_ModuleOpenFA.paa";
    picture = "\XLA_FixedArsenalCurator\data\XLA_FixedArsenalCurator_ModuleOpenFA.paa";
    portrait = "\XLA_FixedArsenalCurator\data\XLA_FixedArsenalCurator_ModuleOpenFA.paa";
    
    function = "XLA_fnc_moduleOpenFA";
    functionPriority = 1;
    isGlobal = 2;
    isTriggerActivated = 0;
    isDisposable = 0;
    curatorCanAttach = 1;

    class Arguments{};

    class ModuleDescription : ModuleDescription
    {
        description = $STR_XLA_FixedArsenalCurator_ModuleOpenFA_Desc;
    };
};