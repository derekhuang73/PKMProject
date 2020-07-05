//
// Created by Derek Huang on 2020-04-22.
//

#ifndef PROJECT2020SUMMER_PLAYER_H
#define PROJECT2020SUMMER_PLAYER_H


#include "Trainer.h"
#include "Block.h"

class Player : Trainer{
public:
    Block blockMap;
    int location;
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void pickUp();
};


#endif //PROJECT2020SUMMER_PLAYER_H
