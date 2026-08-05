Route5_PokemonDayCare_MapScripts::
	.byte 0

EventScript_DayCareFechado::
    lock
    faceplayer
    msgbox Text_DayCareFechado_Aviso
    release
    end

