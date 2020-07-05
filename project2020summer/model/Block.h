//
// Created by Derek Huang on 2020-07-05.
//

#ifndef PROJECT2020SUMMER_BLOCK_H
#define PROJECT2020SUMMER_BLOCK_H

#include <vector>
#include <list>
#include "Trainer.h"

using namespace std;
class Block {

public:
    static int width, depth, serialNum;
    enum floor {grass = 1,space = 2, forbid = 3, item = 4, npc = 5, entrance = 6};
    //movement function: check if able to move, if true,
    // change playerLocation and call player's movement function,
    // also call the floorTrigger function everytime the player move
    void playerMoveUp();
    void playerMoveDown();
    void playerMoveLeft();
    void playerMoveRight();
    //trigger includes: npc battle (if stand in the same line as the npc facing without any blocking),
    //                  possible pokemon encounter(if the floor is grass)
    void floorTrigger();
    //use to change the floor type,
    // usually get called when the player pickup the item
    // or if we decided in the storyline some change is made after some events happen
    void switchFloorType(int floorNum, floor changeIntoFloorType);
private:
    list<Trainer> trainerList;//initialized from left to right, from top to bottom;
    list<int> entranceList; //list contain the serial num of another block, initialized from left to right,from top to bottom;
                            //will add a list of item in the future...!!! also initialed as above;
    vector<floor> blockMap;
    int playerLocation;
};


#endif //PROJECT2020SUMMER_BLOCK_H
