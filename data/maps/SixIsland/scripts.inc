SixIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_OnTransition
	.byte 0

SixIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND
	end

SixIsland_EventScript_Hiker::
	msgbox SixIsland_Text_ThatWayToWaterPathRuinValley, MSGBOX_NPC
	end

SixIsland_EventScript_Boy::
	msgbox SixIsland_Text_SkyAtNightIsFantastic, MSGBOX_NPC
	end

SixIsland_EventScript_IslandSign::
	msgbox SixIsland_Text_IslandSign, MSGBOX_SIGN
	end

EventScript_RATorchicZK::
    lock
    faceplayer
    goto_if_defeated TRAINER_RA_TORCHICZK, EventScript_RATorchicZK_JaVenceu
    msgbox Text_RATorchicZK_Aviso, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq EventScript_RATorchicZK_Batalha
    msgbox Text_RATorchicZK_Recusa
    release
    end

EventScript_RATorchicZK_Batalha::
    trainerbattle_single TRAINER_RA_TORCHICZK, Text_RATorchicZK_Vitoria, Text_RATorchicZK_Derrota, EventScript_RATorchicZK_Premio
    end

EventScript_RATorchicZK_Premio::
    msgbox Text_RATorchicZK_PosBatalha
    giveitem ITEM_TM19
    release
    end

EventScript_RATorchicZK_JaVenceu::
    msgbox Text_RATorchicZK_Fim
    release
    end

