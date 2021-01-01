//
// Created by Derek Huang on 2020-07-05.
//

#include <iostream>
#include "Block.h"
#include "../UI_feature/TextureManager.h"

/*
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
*/

void Block::setupMap() {
    // lvmp1
    lvmp1.serialNum = 1;
    lvmp1.width = 30;
    lvmp1.height = 15;
    lvmp1.baseLevel = new int [30*15]
            {
                  //0 1 2 3 4 5 6 7 8 9 a b c d e f g h i j k l m n o p q r s t
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //0
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //1
                    0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //2
                    0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //3
                    0,0,1,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //4
                    0,0,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //5
                    0,0,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //6
                    0,0,0,0,0,0,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //7
                    0,0,0,0,0,0,1,1,1,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //8
                    0,0,0,0,1,0,1,1,1,2,2,2,2,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,0,0, //9
                    0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //a
                    0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //b
                    0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //c
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //d
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0  //e


            };
    int a = 200000;
    lvmp1.functionLevel = new int [30*15] {
          //0 1 2 3 4 5 6 7 8 9 a b c d e f g h i j k l m n o p q r s t
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //0
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //1
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //2
            0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //3
            0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0, //4
            0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //5
            0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //6
            0,0,0,0,0,0,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //7
            0,0,0,0,0,0,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0, //8
            0,0,0,a,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //9
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //a
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //b
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //c
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //d
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0  //e
    };
    lvmp1.renderLevel = new int[30*15] {
            //0 1 2 3 4 5 6 7 8 9 a b c d e f g h i j k l m n o p q r s t
            1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, //0
            1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //1
            1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //2
            1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //3
            1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //4
            1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //5
            1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //6
            1,1,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //7
            1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //8
            1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //9
            1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //a
            1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //b
            1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //c
            1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, //d
            1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, //e
    };
    mp.insert(pair<int,levelMap*>(lvmp1.serialNum,&lvmp1));
    // lvmp2
    lvmp2.serialNum = 2;
    lvmp2.width = 30;
    lvmp2.height = 15;
    lvmp2.baseLevel = new int [30*15]
            {
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            };
    lvmp2.functionLevel = new int [30*15] {
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    };
    lvmp2.renderLevel = new int[30*15] {
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    };
    mp.insert(pair<int,levelMap*>(lvmp2.serialNum,&lvmp2));
}



void Block::clearMap() {
    delete [] lvmp1.baseLevel;
    delete [] lvmp1.functionLevel;
    delete [] lvmp1.renderLevel;
    delete [] lvmp2.baseLevel;
    delete [] lvmp2.functionLevel;
    delete [] lvmp2.renderLevel;
}

bool Block::playerMoveUp() {
    int w = currMap->width;
    if (Index_Player_Pos<w) {return false;}
    int newPos = currMap->baseLevel[Index_Player_Pos - w];
    switch (newPos) {
        case 1: return true;
        case 3: return true;
        default:return false;
    }
}

bool Block::playerMoveDown() {
    int w = currMap->width;
    int h = currMap->height;
    if (Index_Player_Pos >= ((h - 1) * w)) { return false; }
    int newPos = currMap->baseLevel[Index_Player_Pos + w];
    switch (newPos) {
        case 1:
            return true;
        case 4:
            return true;
        default:
            return false;
    }
}

bool Block::playerMoveLeft() {
    int w = currMap->width;
    if ((Index_Player_Pos%w) == 0) {return false;}
    int newPos = currMap->baseLevel[Index_Player_Pos--];
    switch (newPos) {
        case 1: return true;
        case 2: return true;
        default:return false;
}
    }

bool Block::playerMoveRight() {
    int w = currMap->width;
    if ((Index_Player_Pos++)%w == 0) {return false;}
    int newPos = currMap->baseLevel[Index_Player_Pos++];
    switch (newPos) {
        case 1: return true;
        case 2: return true;
        default:return false;
}
    }

    void Block::teleport(int spot) {
        int serialnum = spot/100000;
        auto itr = mp.find(serialnum);
        levelMap* lvmp = itr->second;
        int indexOfTeleportSpot = spot%100000;
        if (!lvmp||indexOfTeleportSpot>=(lvmp->width*lvmp->height)){ return;}
        currMap = lvmp;
        Index_Player_Pos = indexOfTeleportSpot;
    }


    void Block::trigger() {
    //stab wait for implement!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    }

Block::Block() {
    setupMap();
    currMap = NULL;
    Index_Player_Pos = 0;
    setupRenderer();
}

Block::~Block() {
    clearMap();
}

void Block::setupRenderer() {
    dirt = TextureManager::LoadTexture("../assert/dirt.png");
    grass = TextureManager::LoadTexture("../assert/grass.png");
    water = TextureManager::LoadTexture("../assert/water.png");
    tree =  TextureManager::LoadTexture("../assert/tree.png");
    pokemonCenter = TextureManager::LoadTexture("../assert/PC.png");
    dam_ns = TextureManager::LoadTexture("../assert/dam_NS.png");
    dam_sn = TextureManager::LoadTexture("../assert/dam_SN.png");
    telep = TextureManager::LoadTexture("../assert/teleport.png");
    pkmBall = TextureManager::LoadTexture("../assert/pokemonBall.png");

    tree_src.x = tree_src.y = pokemonCenter_src.x = pokemonCenter_src.y = src.x = src.y = 0;
    src.w = dest.w = src.h = dest.h = WIDTH_AND_HEIGHT_OF_BLOCK;
    tree_src.h = tree_dest.h = 2*WIDTH_AND_HEIGHT_OF_BLOCK;
    tree_src.w = tree_dest.w = WIDTH_AND_HEIGHT_OF_BLOCK;
    pokemonCenter_src.w = pokemonCenter_src.h = pokemonCenter_dest.w = pokemonCenter_dest.h = 4*WIDTH_AND_HEIGHT_OF_BLOCK;
    tree_dest.x = tree_dest.y = pokemonCenter_dest.x = pokemonCenter_dest.y = dest.x = dest.y = 0;
}

void Block::renderBaseMap() {
    int type;
    int w = currMap->width;
    int h = currMap->height;
    int currW = 0;//width relative to the whole map
    int currH = 0;//height relative to the whole map
    int centerX = Game::window_width/2;
    int centerY = Game::window_height/2;
    int x_rel = get_rel_c_x();
    int y_rel = get_rel_c_y();
    for (int i = 0; i < (w*h); i++) {
        type = currMap->functionLevel[i];
        dest.x = centerX + (currW - Index_Player_Pos%w)*WIDTH_AND_HEIGHT_OF_BLOCK + x_rel;
        dest.y = centerY + (currH - Index_Player_Pos/w)*WIDTH_AND_HEIGHT_OF_BLOCK + y_rel;
        switch (type) {
            case 0:
                TextureManager::Draw(dirt,src,dest);
                break;
            case 1:
                TextureManager::Draw(dirt,src,dest);
                break;
            case 2:
                TextureManager::Draw(water,src,dest);
                break;
            case 3:
                TextureManager::Draw(dam_sn,src,dest);
                break;
            case 4:
                TextureManager::Draw(dam_ns,src,dest);
                break;
            default:
                break;
        }
        currW++;
        if(currW==w) {
            currW = 0;
            currH++;
        }
    }
}


void Block::renderFunctionMap() {

    int type;
    int w = currMap->width;
    int h = currMap->height;
    int currW = 0;//width relative to the whole map
    int currH = 0;//height relative to the whole map
    int centerX = Game::window_width/2;
    int centerY = Game::window_height/2;
    int x_rel = get_rel_c_x();
    int y_rel = get_rel_c_y();
    for (int i = 0; i < (w*h); i++) {
        type = currMap->functionLevel[i];
        dest.x = centerX + (currW - Index_Player_Pos%w)*WIDTH_AND_HEIGHT_OF_BLOCK + x_rel;
        dest.y = centerY + (currH - Index_Player_Pos/w)*WIDTH_AND_HEIGHT_OF_BLOCK + y_rel;
        switch (type) {
            case 1:
                TextureManager::Draw(grass,src,dest);
                break;
            case 2:
                TextureManager::Draw(pkmBall,src,dest);
                break;
            default:
                if (type>=100000) {
                    TextureManager::Draw(telep,src,dest);
                }
                break;
        }
        currW++;
        if(currW==w) {
            currW = 0;
            currH++;
        }
    }
}

void Block::renderRenderMap() {
    int type;
    int w = currMap->width;
    int h = currMap->height;
    int currW = 0;//width relative to the whole map
    int currH = 0;//height relative to the whole map
    int centerX = Game::window_width/2;
    int centerY = Game::window_height/2;
    int x_rel = get_rel_c_x();
    int y_rel = get_rel_c_y();
    for (int i = 0; i < (w*h); i++) {
        type = currMap->renderLevel[i];
        switch (type) {
            case 1:
                tree_dest.x = centerX + (currW - Index_Player_Pos%w)*WIDTH_AND_HEIGHT_OF_BLOCK + x_rel;
                tree_dest.y = centerY + (currH - Index_Player_Pos/w)*WIDTH_AND_HEIGHT_OF_BLOCK + y_rel;
                TextureManager::Draw(tree,tree_src,tree_dest);
                break;
            case 8:
                pokemonCenter_dest.x = centerX + (currW - Index_Player_Pos%w)*WIDTH_AND_HEIGHT_OF_BLOCK + x_rel;
                pokemonCenter_dest.y = centerY + (currH - Index_Player_Pos/w)*WIDTH_AND_HEIGHT_OF_BLOCK + y_rel;
                TextureManager::Draw(pokemonCenter,pokemonCenter_src,pokemonCenter_dest);
                break;
            default:
                break;
        }
        currW++;
        if(currW==w) {
            currW = 0;
            currH++;
        }
    }
}

void Block::renderCurrMap() {
    renderBaseMap();
    renderFunctionMap();
    renderRenderMap();
}

void Block::initPos(int mapNum, int posNum) {
    auto itr = mp.find(mapNum);
    levelMap* lvmp = itr->second;
    if (!lvmp||posNum>=(lvmp->width*lvmp->height)){ return;}
    currMap = lvmp;
    Index_Player_Pos = posNum;
}


