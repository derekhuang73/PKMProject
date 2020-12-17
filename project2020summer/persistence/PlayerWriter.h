//
// Created by GHT on 7/7/2020.
//

#ifndef PROJECT2020SUMMER_PLAYERWRITER_H
#define PROJECT2020SUMMER_PLAYERWRITER_H

#include<string>
#include "../model/TrainerSystem/Player.h"
using namespace std;
class PlayerWriter {
    string File = "../data/PlayerData.txt";

public:
    void savePlayerData(Player *player);
};


#endif //PROJECT2020SUMMER_PLAYERWRITER_H
