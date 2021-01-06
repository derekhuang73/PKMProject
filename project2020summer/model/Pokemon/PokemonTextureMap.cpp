//
// Created by Derek Huang on 2021-01-05.
//

#include "PokemonTextureMap.h"
#include "../UI_feature/TextureManager.h"

PokemonTextureMap::PokemonTextureMap() {
    pokemon_1 = TextureManager::LoadTexture("../assert/pokemon1.png");
    textureMap.insert(pair<int,SDL_Texture*> (1,pokemon_1));
}
