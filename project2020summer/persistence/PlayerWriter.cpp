//
// Created by GHT on 7/7/2020.
//

#include <fstream>
#include <sstream>
#include <iostream>
#include "PlayerWriter.h"

void PlayerWriter::savePlayerData(Player *player) {
    ofstream outFile;
    outFile.open(File);
    if (outFile.fail()) {
        cerr << "Trainer Data Missing" << endl;
        exit(1);
    }
    outFile << player->getName() << endl;
    outFile << player->getLevel() << endl;
    outFile << player->getPokemons();
    outFile.close();
}
