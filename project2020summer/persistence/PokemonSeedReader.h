//
// Created by Derek Huang on 2020-04-24.
//

#ifndef PROJECT2020SUMMER_POKEMONSEEDREADER_H
#define PROJECT2020SUMMER_POKEMONSEEDREADER_H

#include <string>
#include "../model/Pokemon.h"
#include "../exception/NullPokemonException.h"

using namespace std;

class PokemonSeedReader {
     string File = "../data/PokemonSeed.txt";

public:
    PokemonSeedReader();

    string generatePokemonSeed(int serialNum) throw (NullPokemonException);
    // read from txt, create Pokemon Object

private:
    bool matchSerialNum(int serialNum, string pokemonSeed);

};


#endif //PROJECT2020SUMMER_POKEMONSEEDREADER_H
