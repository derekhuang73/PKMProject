//
// Created by Derek Huang on 2020-07-20.
//

#ifndef UNTITLED1_GAME_H
#define UNTITLED1_GAME_H
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "UI_feature/PlayerRenderer.h"
#include "string"
#include "TrainerSystem/TrainerList.h"
#include "Pokemon/PokemonBattle.h"
#include "Pokemon/PokemonTextureMap.h"
using namespace std;
class Game {
public:
    Game();
    ~Game();

    void init(const char * title, int xpos, int ypos, int width, int height, bool fullscreen);

    void handleEvents();
    void update();
    void render();
    void clean();


    bool running() const {return isRunning;};

    static SDL_Renderer * renderer;
    static TTF_Font *font;
    static const int window_width = 400;
    static const int window_height = 320;

    void displayMessage(std::string message);
    void encounterPokemon();
    int getFacing();

    TrainerList *trainerList;
    PokemonBattle *pokemonBattle;
    PokemonTextureMap *pokemonTextureMap;

    bool is_Pokemon_Battle;

private:
    bool isRunning;
    SDL_Window * window;
    bool isMoving = false;
    bool isMessageDisplaying;

    void l_k_map();
    void r_k_map();
    void u_k_map();
    void d_k_map();

    void movingUpdate();
};


#endif //UNTITLED1_GAME_H
