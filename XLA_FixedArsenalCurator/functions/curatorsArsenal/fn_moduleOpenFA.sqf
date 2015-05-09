_logic = _this select 0;
_activated = _this select 2;

if (_activated && local _logic) then {
	_unit = _logic getVariable ["bis_fnc_curatorAttachObject_object",objNull];

	//Check if the unit is suitable
	_error = "";
	switch true do {
		case (isNull _unit): {_error = localize "str_a3_BIS_fnc_showCuratorFeedbackMessage_506";};
		case !(alive _unit): {_error = localize "str_a3_BIS_fnc_moduleArsenal_errorDead";};
		case (isPlayer _unit): {_error = localize "str_a3_BIS_fnc_showCuratorFeedbackMessage_307";};
		case (isNull group _unit || !(side group _unit in [east,west,resistance,civilian])): {_error = localize "str_a3_BIS_fnc_moduleArsenal_errorBrain";};
		case (vehicle _unit != _unit || effectiveCommander _unit != _unit): {_error = localize "str_a3_BIS_fnc_moduleArsenal_errorVehicle";};
	};

	if (_error == "") then {
        //i for my part dont like the black tiles when opening arsenal... if however you want to stay close to vanilla simply remove comments below
        //([] call bis_fnc_rscLayer) cutText ["","black out",0.5];
		//["#(argb,8,8,3)color(0,0,0,1)",false,nil,0,[0.5,0]] call bis_fnc_textTiles;
		["Open",[true,nil,_unit,true]] call xla_fnc_arsenal;
		//([] call bis_fnc_rscLayer) cutText ["","plain"];
	} else {
		[objNull,_error] call bis_fnc_showCuratorFeedbackMessage;
	};
	deleteVehicle _logic;
};