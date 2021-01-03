//
// Created by Derek Huang on 2020-07-20.
//

#include <iostream>
#include "Game.h"
#include "UI_feature/TextureManager.h"
#include "UI_feature/MessageBox.h"
#include "SDL_ttf.h"
#include "Map/Block.h"

using namespace std;

SDL_Renderer  * Game::renderer = nullptr;
MessageBox *messageBox = nullptr;
TTF_Font * Game::font = nullptr;
Block *block = nullptr;
PlayerRenderer * playerRenderer = nullptr;
Game::Game() {

}

Game::~Game() {

}

void Game::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen) {
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        cout << "subsystems initialised!" << endl;
        int flags = 0;
        if (fullscreen) {
            flags = SDL_WINDOW_FULLSCREEN;
        }
        window = SDL_CreateWindow(title,xpos,ypos,width,height,flags);
        if (window) {
            cout << "window created!" <<endl;
        }

        renderer = SDL_CreateRenderer(window,-1,0);
        if (renderer) {
            SDL_SetRenderDrawColor(renderer,255,255,255,255);
            cout << "renderer created!" << endl;
        }
        if ( TTF_Init() == -1 ){
            std::cout << " Failed to initialize TTF : " << SDL_GetError() << std::endl;
        } else {
            std::cout << "TTF Initialized!" << std::endl;
        }
        font =  TTF_OpenFont("../assert/OpenSans-Bold.ttf", 18);
        if ( font == nullptr ){
            std::cout << " Failed to load font : " << SDL_GetError() << std::endl;
        } else{
            std::cout <<"Font Loaded!" << std::endl;
        }
        isRunning = true;
    }

    block = new Block();
    block->initPos(1,100);    //!!!
    messageBox = new MessageBox();
    playerRenderer = new PlayerRenderer();
}

void Game::handleEvents() {
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
        case SDL_KEYDOWN:
            if (!isMoving) {
            /* Check the SDLKey values and move change the coords */
            switch( event.key.keysym.sym ){
                case SDLK_LEFT:
                    l_k_map();
                    break;
                case SDLK_RIGHT:
                    r_k_map();
                    break;
                case SDLK_UP:
                    u_k_map();
                    break;
                case SDLK_DOWN:
                    d_k_map();
                    break;
                default:
                    break;
            }
            }
        default:
            break;
    }
}

void Game::update() {
    //messageBox->update();
    if (isMoving) {

        if (playerRenderer->frameStage == 3) {
            playerRenderer->frameStage = 0;
            block->related_pos_to_centerX =0;
            block->related_pos_to_centerY =0;
            switch (playerRenderer->facing) {
                case 0: block->move_up(); break;
                case 1: block->move_down(); break;
                case 2: block->move_left(); break;
                case 3: block->move_right(); break;
                default: break;
            }
            isMoving = false;
        } else {
            playerRenderer->frameStage ++;
            switch (playerRenderer->facing) {
                case 0:
                    block->related_pos_to_centerY =
                            (block->WIDTH_AND_HEIGHT_OF_BLOCK/playerRenderer->FRAMES_PER_MOVE)
                            *(playerRenderer->frameStage); break;
                case 1:
                    block->related_pos_to_centerY =
                            - (block->WIDTH_AND_HEIGHT_OF_BLOCK/playerRenderer->FRAMES_PER_MOVE)
                            *(playerRenderer->frameStage); break;
                case 2:
                    block->related_pos_to_centerX =
                            (block->WIDTH_AND_HEIGHT_OF_BLOCK/playerRenderer->FRAMES_PER_MOVE)
                            *(playerRenderer->frameStage); break;
                case 3:
                    block->related_pos_to_centerX =
                            -(block->WIDTH_AND_HEIGHT_OF_BLOCK/playerRenderer->FRAMES_PER_MOVE)
                            *(playerRenderer->frameStage); break;
                default: break;
            }
        }
    }
}

void Game::render() {

    SDL_RenderClear(renderer);
    //this is where we would add stuff to render
    //messageBox->draw();
    block->renderCurrMap();
    playerRenderer->renderPlayer();
    SDL_RenderPresent(renderer);
}

void Game::clean() {
    TTF_CloseFont( font );
    font = NULL;
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    cout << "game cleaned" << endl;
}

void Game::l_k_map() {
    if (playerRenderer->facing != 2) {
        playerRenderer->facing = 2;
    } else if (block->playerMoveLeft()){
        isMoving = true;
    }
}

void Game::r_k_map() {
    if (playerRenderer->facing != 3) {
        playerRenderer->facing = 3;
    } else if (block->playerMoveRight()){
        isMoving = true;
    }
}

void Game::u_k_map() {
    if (playerRenderer->facing != 0) {
        playerRenderer->facing = 0;
    } else if (block->playerMoveUp()){
        isMoving = true;
    }
}

void Game::d_k_map() {
    if (playerRenderer->facing != 1) {
        playerRenderer->facing = 1;
    } else if (block->playerMoveDown()){
        isMoving = true;
    }
}


