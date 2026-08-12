SixIsland_AlteringCave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_AlteringCave_OnTransition
	.byte 0

SixIsland_AlteringCave_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_ALTERING_CAVE
	end

AlteringCave_EventScript_Giovanni::
	trainerbattle_single TRAINER_FALLEN_GIOVANNI, AlteringCave_Text_GiovanniIntro, AlteringCave_Text_GiovanniDefeat
	msgbox AlteringCave_Text_GiovanniPostBattle, MSGBOX_AUTOCLOSE
	end

AlteringCave_Text_GiovanniIntro::
    .string "I built TEAM ROCKET from nothing!\n"
    .string "It was my empire!\p"
    .string "And that... that NURSE took it all.\n"
    .string "Turned my syndicate into a clinic!\p"
    .string "You... you're the anomaly she's\n"
    .string "hunting. Let me crush you to prove\l"
    .string "I am still the true BOSS!$"

AlteringCave_Text_GiovanniDefeat::
    .string "Even hiding in the shadows,\n"
    .string "I cannot win...$"

AlteringCave_Text_GiovanniPostBattle::
    .string "To think I am hiding like a RAT\n"
    .string "while a NURSE rules Kanto.\p"
    .string "Go. Defeat her. Avenge my empire.$"

