//
// Created by Derek Huang on 2020-04-24.
//

#include "PokemonSeedReader.h"
#include <fstream>
#include <iostream>

using namespace std;

    string PokemonSeedReader::generatePokemonSeed(int serialNum) {
    ifstream inFile;
    inFile.open(File);
    if (inFile.fail()) {
        cerr << "missing PokemonData file" << endl;
        exit(1);
    }
    string pokemonSeed;
    while (!inFile.eof()) {
        inFile >> pokemonSeed;
        if (matchSerialNum(serialNum, pokemonSeed)) {
            inFile.close();
            return pokemonSeed;
        }
    }
        cerr << "missing pokemon" << endl;
    inFile.close();
}

bool PokemonSeedReader::matchSerialNum(int serialNum, string pokemonSeed) {
    string pokemonSerialNum = pokemonSeed.substr(0,3);
    int pokemonSerialNumber = atoi(pokemonSerialNum.c_str());
    return pokemonSerialNumber == serialNum;
}

//dummy constructor
PokemonSeedReader::PokemonSeedReader() = default;
