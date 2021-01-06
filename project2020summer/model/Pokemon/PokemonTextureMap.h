//
// Created by Derek Huang on 2021-01-05.
//

#ifndef PROJECT2020SUMMER_POKEMONTEXTUREMAP_H
#define PROJECT2020SUMMER_POKEMONTEXTUREMAP_H

#include <map>
#include "SDL.h"
using namespace std;
class PokemonTextureMap {
public:
    SDL_Texture *pokemon_1, *pokemon_2, *pokemon_3;
    map<int,SDL_Texture*> textureMap;
    PokemonTextureMap();
};


#endif //PROJECT2020SUMMER_POKEMONTEXTUREMAP_H
