//
// Created by GHT on 7/5/2020.
//

#include <fstream>
#include <iostream>
#include <sstream>
#include "PlayerReader.h"

using namespace std;
Player* PlayerReader::readPlayerData() throw (NullTrainerException){
    ifstream inFile;
    inFile.open(File);
    if (inFile.fail()) {
        cerr << "Trainer Data Missing" << endl;
        exit(1);
    }
    string readString;
    string curPokemons, curHealth, staPokemons, staHealth;
    /* Save file format:
     *    Name
     *    Level
     *    Current Pokemons
     *    Current Pokemon Health
     *    Stashed Pokemons
     *    Stashed Pokemon Health
     */
    inFile >> readString;
    Player *player = new Player(readString);
    inFile >> readString;

    player -> setLevel(atoi(readString.c_str()));

    inFile >> curPokemons;
    inFile >> curHealth;
    inFile >> staPokemons;
    inFile >> staHealth;
    inFile.close();

    player->setUpPokemons(pokemonStringSpliter(curPokemons), pokemonHealthSpliter(  curHealth)
            , pokemonStringSpliter(staPokemons), pokemonHealthSpliter(staHealth));

    return player;
}

list<string> PlayerReader::pokemonStringSpliter(string pokemonString) {
    list<string> list;
    stringstream ss(pokemonString);
    string data;
    while (std::getline(ss, data,'/')) {
        list.push_back(data);
    }
    return list;
}

list<int> PlayerReader::pokemonHealthSpliter(string healthString) {
    list<int> list;
    stringstream ss(healthString);
    string HP;
    while (std::getline(ss, HP, '/')) {
        list.push_back(atoi(HP.c_str()));
    }
    return list;
}
