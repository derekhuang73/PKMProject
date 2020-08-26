//
// Created by Derek Huang on 2020-07-20.
//

#include <iostream>
#include "Game.h"
#include "TextureManager.h"
#include "MessageBox.h"
#include "SDL_ttf.h"
using namespace std;

SDL_Renderer  * Game::renderer = nullptr;
MessageBox *messageBox = nullptr;
TTF_Font * Game::font = nullptr;
int cnt = 0;
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


    messageBox = new MessageBox();
}

void Game::handleEvents() {
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
        default:
            break;
    }
}

void Game::update() {
    cnt ++;
    messageBox->update();
    cout << cnt << endl;
}

void Game::render() {

    SDL_RenderClear(renderer);
    //this is where we would add stuff to render
    messageBox->draw();
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
