//
// Created by Derek Huang on 2021-01-01.
//

#include "PlayerRenderer.h"
#include "TextureManager.h"

void PlayerRenderer::renderPlayer() {
    SDL_Texture *texture;
    switch (facing) {
        case 0: texture = up; break;
        case 1: texture = down; break;
        case 2: texture = left; break;
        case 3: texture = right; break;
        default:
            return;
    }
    src.y = frameStage*32;
    TextureManager::Draw(texture,src,dest);
}




PlayerRenderer::PlayerRenderer() {
    up = TextureManager::LoadTexture("../assert/moveup.png");
    down = TextureManager::LoadTexture("../assert/movedown.png");
    left = TextureManager::LoadTexture("../assert/moveleft.png");
    right = TextureManager::LoadTexture("../assert/moveright.png");
    src.x = src.y = 0;
    src.w = src.h = dest.w = dest.h = 32;
    dest.x = Game::window_width/2;
    dest.y = Game::window_height/2;
    facing = 0;
    frameStage = 0;
}

