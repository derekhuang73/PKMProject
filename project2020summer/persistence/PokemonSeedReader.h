//
// Created by Derek Huang on 2020-04-24.
//

#ifndef PROJECT2020SUMMER_POKEMONSEEDREADER_H
#define PROJECT2020SUMMER_POKEMONSEEDREADER_H

#include <xstring>
#include "../model/Pokemon.h"

using namespace std;

class PokemonSeedReader {
     string File = "../data/PokemonSeed.txt";

public:
    PokemonSeedReader();

    string generatePokemonSeed(int serialNum);

private:
    bool matchSerialNum(int serialNum, string pokemonSeed);

};


#endif //PROJECT2020SUMMER_POKEMONSEEDREADER_H
