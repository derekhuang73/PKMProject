//
// Created by Derek Huang on 2020-07-20.
//

#ifndef UNTITLED1_GAME_H
#define UNTITLED1_GAME_H
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>

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

private:
    bool isRunning;
    SDL_Window * window;
};


#endif //UNTITLED1_GAME_H
