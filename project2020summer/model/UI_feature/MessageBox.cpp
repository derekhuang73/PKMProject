//
// Created by Derek Huang on 2020-07-28.
//

#include <fstream>
#include <sstream>
#include "MessageBox.h"
#include "TextureManager.h"
#include "SDL.h"
#include "iostream"
MessageBox::MessageBox() {
    MessageTexture = TextureManager::LoadTexture("../assert/messagebox.png");
    srcRect.h = 32;
    srcRect.w = 64;
    srcRect.x = 0;
    srcRect.y = 0;

    destRect.x = 0;
    destRect.y = 500;
    destRect.w =  800;
    destRect.h =  140;

}

MessageBox::~MessageBox() {

}

void MessageBox::draw() {
    TextureManager::Draw(MessageTexture,srcRect,destRect);
    drawLine();
}

void MessageBox::update() {

    texLine ++;
}


void MessageBox::drawString(std::string text) {
    SDL_Texture* TextTexture = TextureManager::LoadTextTexture(text);
    SDL_QueryTexture(TextTexture, nullptr, nullptr, &texW, &texH);
    messageDestRect.x = destRect.x + 40;
    messageDestRect.y = destRect.y+ 20;
    messageDestRect.h = texH;
    messageDestRect.w = texW;
    TextureManager::Draw(TextTexture,messageDestRect);
}

void MessageBox::drawLine() {
    std::ifstream inFile;
    inFile.open(File);
    if (inFile.fail()) {
        std::cerr << "missing file:" << File << std::endl;
        exit(1);
    }
    int currentLine = 0;
    std::string lineText = "";
    while (!inFile.eof()&&currentLine!=texLine) {
        currentLine++;
        inFile >> lineText;
    }
    std::list<std::string> textList = lineSperator(lineText);
    std::list<std::string>::iterator it = textList.begin();
    int lineNum = 0;
    while ( it != textList.end()) {
        drawString(*it,lineNum);
        lineNum++;
        std::advance(it,1);
    }

}

std::list<std::string> MessageBox::lineSperator(std::string text) {
    std::list<std::string> list;
    std::stringstream stringStream(text);
    std::string str;
    while (std::getline(stringStream, str, ',')) {
        list.push_back(str);
    }
    return list;

}

void MessageBox::drawString(std::string text, int lineNum) {
    SDL_Texture* TextTexture = TextureManager::LoadTextTexture(text);
    SDL_QueryTexture(TextTexture, nullptr, nullptr, &texW, &texH);
    messageDestRect.x = destRect.x + 40;
    messageDestRect.y = destRect.y+ 20 + lineNum*texH;
    messageDestRect.h = texH;
    messageDestRect.w = texW;
    TextureManager::Draw(TextTexture,messageDestRect);
}

