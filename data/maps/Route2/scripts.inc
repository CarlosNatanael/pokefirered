Route2_MapScripts::
	.byte 0

Route2_EventScript_RouteSign::
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
	end

Route2_EventScript_DiglettsCaveSign::
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
	end

Route2_EventScript_Secret::
	msgbox Route2_Text_SecretPass, MSGBOX_SIGN
	end

EventScript_RACnat::
    lock
    faceplayer
    goto_if_defeated TRAINER_RA_CNAT, EventScript_RACnat_JaVenceu
    msgbox Text_RACnat_Aviso, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq EventScript_RACnat_Batalha
    msgbox Text_RACnat_Recusa
    release
    end

EventScript_RACnat_Batalha::
    trainerbattle_single TRAINER_RA_CNAT, Text_RACnat_Vitoria, Text_RACnat_Derrota, EventScript_RACnat_Premio
    end

EventScript_RACnat_Premio::
    msgbox Text_RACnat_PosBatalha
    giveitem ITEM_MAX_REVIVE
    release
    end

EventScript_RACnat_JaVenceu::
    msgbox Text_RACnat_Fim
    release
    end

