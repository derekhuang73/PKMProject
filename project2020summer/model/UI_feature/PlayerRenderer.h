//
// Created by Derek Huang on 2021-01-01.
//

#ifndef PROJECT2020SUMMER_PLAYERRENDERER_H
#define PROJECT2020SUMMER_PLAYERRENDERER_H
#include <SDL.h>
#include "../Game.h"

class PlayerRenderer {
public:
    //frame stage determine which frame the player is in the moment
    int frameStage;

    //0:down
    //1:up
    //2:left
    //3:right
    int facing;

    int static const FRAMES_PER_MOVE = 4;
    SDL_Rect src, dest;
    SDL_Texture *up, *down, *left, *right;




    PlayerRenderer();


    void renderPlayer();

private:



};


#endif //PROJECT2020SUMMER_PLAYERRENDERER_H
