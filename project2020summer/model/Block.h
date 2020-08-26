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
    enum floor {grass = 1,space = 2, forbid = 3, item = 4, npcActive = 5, entrance = 6, npcNonActive = 7};
    enum playerFacing {north,south,east,west};
    playerFacing playerState;
    //movement function: check if able to move, if true,
    // change playerLocation and call player's movement function,
    // also call the floorTrigger function every time the player move
    bool playerMoveForward();


    //triggers include: npc battle (if stand in the same line as the npc facing without any blocking),
    //                  possible pokemon encounter(if the floor is grass)
    //the trigger now assume every npc is facing south(or down)
    // if purpose change, the implement will also need to change
    void floorTrigger();

    //use to change the floor type,
    // usually get called when the player pickup the item
    // or if we decided in the storyline some change is made after some events happen
    void switchFloorType(int floorNum, floor changeIntoFloorType);

    //pick up item on the floor
    //PRE-REQUIRE: check if there is item before calling this function
    void pickUp();

    //-----------------------------------------------------------------------------------------
    static int getWidth();

    static void setWidth(int width);

    static int getDepth();

    static void setDepth(int depth);

    static int getSerialNum();

    static void setSerialNum(int serialNum);

    int getPlayerLocation() const;

    void setPlayerLocation(int playerLocation);



private:
    list<Trainer> trainerList;//initialized from left to right, from top to bottom;
    list<int> entranceList; //list contain the serial num of another block, initialized from left to right,from top to bottom;
                            //will add a list of item in the future...!!! also initialed as above;
    vector<floor> blockMap;

    int playerLocation; // the floor index in the vector, indicates the location of the player

    //check if the floor is space or grass after index number of floor
    // (count start from the player location)
    bool ifSpace(int index);

    bool playerMoveUp();
    bool playerMoveDown();
    bool playerMoveLeft();
    bool playerMoveRight();
};


#endif //PROJECT2020SUMMER_BLOCK_H
