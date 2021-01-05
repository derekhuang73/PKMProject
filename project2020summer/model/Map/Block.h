//
// Created by Derek Huang on 2020-07-05.
//

#ifndef PROJECT2020SUMMER_BLOCK_H
#define PROJECT2020SUMMER_BLOCK_H

#include <vector>
#include <list>
#include <map>
#include "../TrainerSystem/Trainer.h"
#include <SDL.h>
#include "../Game.h"
#include "../UI_feature/PlayerRenderer.h"
using namespace std;
class Block {
/*
public:
    int width, depth, serialNum;
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
    int getWidth();

    void setWidth(int width);

    int getDepth();

    void setDepth(int depth);

    int getSerialNum();

    void setSerialNum(int serialNum);

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
     */
/*////////////changed made in 2020-Dec-18////////////////////////////////////////////////////////////////////////////////////////*/


public:
     /*
     * level map
     * serialNum is the hash key to find the correlated levelmap used in teleporting
     * width, height of the map
     *
     * renderlevel:
     * list of int, each int indicate different things that need to render eg. tree,
     *              building, teleport entrance etc, cover above the baselevel while rendering
     * List:
     * 0: empty (not-render)
     * 1: Tree
     * 2: fences-horizontal
     * 3: fences-vertical
     * 4: grass-end-point-northeast (90degree angle of grass)
     * 5: grass-end-point-northwest
     * 6: grass-end-point-southeast
     * 7: grass-end-point-southeast
     * 8: Pokemon center
     * 9: Houses
     * 10: road sign
     * ////////////////////////////////////////////////////////////////////////////////////////////
     * functionlevel:
     * list of int, each int indicate different type of floor trigger eg. teleporting, encounter
     *              pokemon, pick up items.
     * List:
     * 0: empty(no trigger)
     * 1: grass(will trigger pokemon encounter)
     * 2: pokemon ball (can be picked up)
     * 50+: npc (50 + npc serial num)
     * 100000+: teleporting (100000*map serial num + index of teleport destination )
     *
     * ///////////////////////////////////////////////////////////////////////////////////////////
     * baselevel:
     * list of int, each int indicate different type of base floor, used to determine if the
     *              character movement is legit eg. grass, road block(no-walk-able) etc.
     *              also used to render, get render before the renderlevel
     * List:
     * 0: block (non-walkable)
     * 1: road  (walkable)
     * 2: water (non-walkable)
     * 3: earth dam south-north (only allow to pass from south to north)
     * 4: earth dam north-south (only allow to pass from north to south)
     */
    struct levelMap {
        int serialNum;
        int width;
        int height;
        int* renderLevel;
        int* functionLevel;
        int* baseLevel;
    };

    std::map<int,levelMap*> mp;
    levelMap lvmp1, lvmp2;
    levelMap* currMap;
    int Index_Player_Pos;


    int related_pos_to_centerX = 0,
        related_pos_to_centerY = 0;

    SDL_Rect src,dest,
            tree_src,tree_dest,
            pokemonCenter_src, pokemonCenter_dest,
            PK_C_MAP_SRC, PK_C_MAP_DES,
            npc_src, npc_dest;
    SDL_Texture * dirt, // 1h*1w square
                * grass,
                * water,
                * pokemonCenter, // 4h*4w square
                * tree, // 2h*1w square
                * dam_ns,
                * dam_sn,
                * telep,
                * pkmBall,
                * POKEMON_CENTER_MAP;

    int const WIDTH_AND_HEIGHT_OF_BLOCK = 32;
    Game * game;

    Block();
    ~Block();
    void setupMap();
    void clearMap();

    void renderCurrMap();

    bool playerMoveUp();
    bool playerMoveDown();
    bool playerMoveLeft();
    bool playerMoveRight();


    void move_up();
    void move_down();
    void move_left();
    void move_right();


    //purpose: used at the beginning of the game and set the player to a pos
    //restriction: can be only used after the map is initialized
    void initPos(int mapNum, int posNum);
    void key_event_trigger();
private:

    void setupRenderer();
    void renderBaseMap();
    void renderFunctionMap();
    void renderRenderMap();
    void renderSpecialMap();

    void trigger();

    void teleport(int spot);
    std::map<int,levelMap*> specialMap;
    std::map<int,int> specialMapType;


};


#endif //PROJECT2020SUMMER_BLOCK_H
