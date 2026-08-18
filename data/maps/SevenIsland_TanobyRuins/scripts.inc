SevenIsland_TanobyRuins_MapScripts::
	.byte 0

EventScript_RAS4nsan::
    lock
    faceplayer
    goto_if_defeated TRAINER_RA_S4NSAN, EventScript_RAS4nsan_JaVenceu
    msgbox Text_RAS4nsan_Aviso, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq EventScript_RAS4nsan_Batalha
    msgbox Text_RAS4nsan_Recusa
    release
    end

EventScript_RAS4nsan_Batalha::
    trainerbattle_single TRAINER_RA_S4NSAN, Text_RAS4nsan_Vitoria, Text_RAS4nsan_Derrota, EventScript_RAS4nsan_Premio
    end

EventScript_RAS4nsan_Premio::
    msgbox Text_RAS4nsan_PosBatalha
    giveitem ITEM_SHELL_BELL
    release
    end

EventScript_RAS4nsan_JaVenceu::
    msgbox Text_RAS4nsan_Fim
    release
    end

