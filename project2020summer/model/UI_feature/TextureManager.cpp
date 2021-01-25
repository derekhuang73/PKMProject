//
// Created by Derek Huang on 2020-07-22.
//

#include <SDL_ttf.h>
#include <SDL_image.h>
#include "TextureManager.h"
#include "iostream"

SDL_Texture *TextureManager::LoadTexture(const char *fileName) {
    SDL_Surface* tempSurface = IMG_Load(fileName);
    SDL_Texture* tex = SDL_CreateTextureFromSurface(Game::renderer,tempSurface);
    SDL_FreeSurface(tempSurface);
    return tex;
}

void TextureManager::Draw(SDL_Texture *texture, SDL_Rect src, SDL_Rect dest) {
    SDL_RenderCopy(Game::renderer, texture, &src, &dest);
}

SDL_Texture *TextureManager::LoadTextTexture(std::string text) {
    SDL_Color textColor = {0,0,0};
    TTF_Font * font = Game::font;
    if ( font == nullptr ){
        std::cout << " Failed to load font : " << SDL_GetError() << std::endl;
    }
    SDL_Surface *surface = TTF_RenderText_Solid(font, text.c_str(), textColor);
    if (text == "") {
        std::cout << "error: empty string" << std::endl;
    }
    if (surface == nullptr) {
        std::cout<< "surface error: " << SDL_GetError() << std::endl;
    }
    SDL_Texture *texture = SDL_CreateTextureFromSurface(Game::renderer, surface);
    if (texture == nullptr) {
        std::cout<<"texture error: " <<  SDL_GetError() << std::endl;
    }
    SDL_FreeSurface(surface);
    return texture;
}

void TextureManager::Draw(SDL_Texture *texture, SDL_Rect dest) {
    SDL_RenderCopy(Game::renderer, texture, NULL, &dest);
}



