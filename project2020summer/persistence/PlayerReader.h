//
// Created by GHT on 7/5/2020.
//

#ifndef PROJECT2020SUMMER_PLAYERREADER_H
#define PROJECT2020SUMMER_PLAYERREADER_H

#include <string>
#include <list>
#include "../exception/NullTrainerException.h"
#include "../model/TrainerSystem/Player.h"

using namespace std;
class PlayerReader {
    string File = "../data/PlayerData.txt";
public:

    //P: Read player data, throws exception if file not found
    Player* readPlayerData() throw (NullTrainerException);

private:
    //P: split the line that contain trainer information into pieces
    list<string> pokemonStringSpliter(string trainerString);

    list<int> pokemonHealthSpliter(string healthString);
};



#endif //PROJECT2020SUMMER_PLAYERREADER_H
