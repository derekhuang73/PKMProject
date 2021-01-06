//
// Created by Derek Huang on 2021-01-05.
//

#ifndef PROJECT2020SUMMER_POKEMONBATTLEUI_H
#define PROJECT2020SUMMER_POKEMONBATTLEUI_H


#include "../Pokemon/PokemonBattle.h"
#include "../Game.h"
using namespace std;
class PokemonBattleUI {
public:

    PokemonBattleUI();

    PokemonBattle *pokemonBattle;
    Game *game;
    Pokemon *playerPKM, *opPkm;
    string hint;
    SDL_Texture *BG,*option,*highlight,*hint_Text,*playerPKM_T,*OP_PKM_T;
    SDL_Rect src, dest;
    void updatePKMB();

    void render_menu();

    void render_hint();

    void render_option_highlight();

    void render_hp_info();

    void render_pokemons();

    void render_Pokemon_switch_list();

    void render_BackGround();

};


#endif //PROJECT2020SUMMER_POKEMONBATTLEUI_H
