//
// Created by Derek Huang on 2020-07-28.
//

#ifndef SDL_TEST_MESSAGEBOX_H
#define SDL_TEST_MESSAGEBOX_H
#include "../Game.h"
#include "string"
#include "SDL_ttf.h"
#include "list"

class MessageBox {
public:
    MessageBox();
    ~MessageBox();
    void draw();
    void update();
private:
    SDL_Texture  *MessageTexture;
    SDL_Rect srcRect, destRect,messageDestRect;
    std::string File = "../data/message.txt";
    int texW = 0;
    int texH = 0;
    int texLine = 0;
    void drawString(std::string text);
    void drawLine();
    std::list<std::string> lineSperator(std::string text);
    void drawString(std::string text, int lineNum);
};


#endif //SDL_TEST_MESSAGEBOX_H
