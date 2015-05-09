_logic = _this select 0;
_activated = _this select 2;

if (_activated && local _logic) then {
	_unit = _logic getVariable ["bis_fnc_curatorAttachObject_object",objNull];

	//Check if the unit is suitable
	_error = "";
	switch true do {
		case (isNull _unit): {_error = localize "str_a3_BIS_fnc_showCuratorFeedbackMessage_506";};
		case (isPlayer _unit): {_error = localize "str_a3_BIS_fnc_showCuratorFeedbackMessage_307";};
	};

	if (_error == "") then {
        _actionName = localize "STR_XLA_FixedArsenalActionName";
		["AmmoboxInit",[_unit,true,{true},_actionName,true]] call xla_fnc_arsenal;
        _error = localize "STR_XLA_FixedArsenalCurator_ModuleAddFA_Done";
		
	};
    [objNull,_error] call bis_fnc_showCuratorFeedbackMessage;
	deleteVehicle _logic;
};