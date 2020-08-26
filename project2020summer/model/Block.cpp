//
// Created by Derek Huang on 2020-07-05.
//

#include "Block.h"

int Block::getWidth() {
    return Block::width;
}

void Block::setWidth(int width) {
    Block::width = width;
}

int Block::getDepth() {
    return depth;
}

void Block::setDepth(int depth) {
    Block::depth = depth;
}

int Block::getSerialNum() {
    return serialNum;
}

void Block::setSerialNum(int serialNum) {
    Block::serialNum = serialNum;
}

int Block::getPlayerLocation() const {
    return playerLocation;
}

void Block::setPlayerLocation(int playerLocation) {
    Block::playerLocation = playerLocation;
}

bool Block::ifSpace(int index) {
    floor f = blockMap[index + playerLocation];
    switch (f) {
        case 1: return true;
        case 2: return true;
        case 6: return true;
        default : return false;
    }
}

bool Block::playerMoveUp() {
    if (ifSpace( - width)) {
        playerLocation -= width;
        floorTrigger();
        return true;
    } return false;
}

bool Block::playerMoveDown() {
    if(ifSpace(width)) {
        playerLocation += width;
        return true;
    } return false;

}

bool Block::playerMoveLeft() {
    if (ifSpace(-1)) {
        playerLocation -= 1 ;
        return true;
    } return false;
}

bool Block::playerMoveRight() {
    if (ifSpace(1)) {
        playerLocation += 1;
        return true;
    } return false;
}

void Block::floorTrigger() {
    for (int i = playerLocation; i >= width; i - width) {
       if(blockMap[i] == npcActive) {
           //stub start a trainer battle
           switchFloorType(i,npcNonActive);
           break;
       }
    }
    floor f = blockMap.at(playerLocation);
    switch (f) {
        case grass:
            break;//stub: write a function that possibly encounter random wild pokemon
        case space:
            break;
        case entrance:
            break;//stub: write a function that switch map
        default: break;
    }
}

void Block::switchFloorType(int floorNum, Block::floor changeIntoFloorType) {
    blockMap.at(floorNum) = changeIntoFloorType;
}

void Block::pickUp() {
    //stub
}

bool Block::playerMoveForward() {
    switch (playerState) {
        case north: return playerMoveUp();
        case south: return playerMoveDown();
        case east:  return playerMoveRight();
        case west:  return playerMoveLeft();
    }
}
