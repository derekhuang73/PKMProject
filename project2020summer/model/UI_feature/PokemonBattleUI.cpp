//
// Created by Derek Huang on 2021-01-05.
//

#include "PokemonBattleUI.h"
#include "TextureManager.h"

void PokemonBattleUI::updatePKMB() {
    pokemonBattle = game->pokemonBattle;
    playerPKM = pokemonBattle->getPlayerPokemon();
    opPkm = pokemonBattle->getCpPokemon();
}

PokemonBattleUI::PokemonBattleUI() {
    BG = TextureManager::LoadTexture("../assert/BG.png");
    highlight = TextureManager::LoadTexture("../assert/highlight.png");
    hint_Text = TextureManager::LoadTexture("../assert/hint_block.png");
    option = TextureManager::LoadTexture("../assert/option.png");
}

void PokemonBattleUI::render_pokemons() {
     int i = playerPKM->getSerialNumber();
     auto itr = game->pokemonTextureMap->textureMap.find(i);
     if (itr==game->pokemonTextureMap->textureMap.end()) { return;}
     playerPKM_T = itr->second;
     i = opPkm->getSerialNumber();
     itr = game->pokemonTextureMap->textureMap.find(i);
     if (itr==game->pokemonTextureMap->textureMap.end()) { return;}
     OP_PKM_T = itr->second;
     //below render the player pokemon
     src.x = 0;
     src.y = 32;//since we need the back of the pokemon
     src.w = src.h = 32;
     dest.x = 0;
     dest.y = game->window_height*(1/5);
     dest.w = (game->window_width) /2;
     dest.h = (game->window_height) * (1- (1/5) - (1/4));
     TextureManager::Draw(playerPKM_T,src,dest);
     //below render the op pokemon
     src.x = src.y = 0;
     src.w = src.h = 32;
     dest.x = (game->window_width) / 2;
     dest.y = 0;
     dest.w = (game->window_width) /2;
     dest.h = (game->window_height) * (1- (1/5) - (1/4));
     TextureManager::Draw(OP_PKM_T,src,dest);
}
