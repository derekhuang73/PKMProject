//
// Created by Derek Huang on 2020-04-24.
//

#include "PokemonSeedReader.h"
#include "../exception/NullPokemonException.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

struct PokemonSeedReader::pokemonSeed PokemonSeedReader::array[110];

int PokemonSeedReader::pokemonNum;


PokemonSeedReader::pokemonSeed PokemonSeedReader::getPokemonSeed(int serialNumber) {
    for(int i = 0; i < pokemonNum; i++) {
        if(array[i].pokemonSerialNum == serialNumber) {
            return array[i];
        }
    }
    throw "Pokemon Not Found!";
}

PokemonSeedReader::PokemonSeedReader() {
    ifstream inFile;
    inFile.open(File);
    if (inFile.fail()) {
        cerr << "missing PokemonData file" << endl;
        exit(1);
    }
    string pokemonSeed;
    int counter = 0;
    while (!inFile.eof()) {
        inFile >> pokemonSeed;
        string serialNum,seedATK,seedDEF,seedHP,seedType,name,seedMinLv,seedEvoLv;
        stringstream ss(pokemonSeed);
        getline(ss, serialNum, ',');
        getline(ss, seedATK, ',');
        getline(ss, seedDEF, ',');
        getline(ss, seedHP, ',');
        getline(ss, seedType, ',');
        getline(ss, seedMinLv, ',');
        getline(ss, seedEvoLv, ',');
        getline(ss, name, ',');
        array[counter].pokemonSerialNum = atoi(serialNum.c_str());
        array[counter].atk = atoi(seedATK.c_str());
        array[counter].def = atoi(seedDEF.c_str());
        array[counter].hp = atoi(seedHP.c_str());
        array[counter].typeNum = atoi(seedType.c_str());
        array[counter].minLv = atoi(seedMinLv.c_str());
        array[counter].evoLv = atoi(seedEvoLv.c_str());
        array[counter].name = name;
        counter++;
    }
    pokemonNum = counter;
    inFile.close();
}
