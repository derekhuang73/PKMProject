//
// Created by Derek Huang on 2020-07-22.
//

#ifndef SDL_TEST_TEXTUREMANAGER_H
#define SDL_TEST_TEXTUREMANAGER_H
#include "../Game.h"
#include "string"
#include "SDL_ttf.h"
class TextureManager {
public:
    static SDL_Texture * LoadTexture (const char* fileName);

    static void Draw(SDL_Texture* texture, SDL_Rect src, SDL_Rect dest);

    static SDL_Texture *LoadTextTexture(std::string text);

    static void Draw(SDL_Texture* texture, SDL_Rect dest);
    //mostly used for draw text, since src rect is NULL
};


#endif //SDL_TEST_TEXTUREMANAGER_H
