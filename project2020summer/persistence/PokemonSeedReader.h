//
// Created by Derek Huang on 2020-04-24.
//

#ifndef PROJECT2020SUMMER_POKEMONSEEDREADER_H
#define PROJECT2020SUMMER_POKEMONSEEDREADER_H

#include <string>
#include "../model/Pokemon/Pokemon.h"
#include "../exception/NullPokemonException.h"

using namespace std;

class PokemonSeedReader {
     string File = "../data/PokemonSeed.txt";

public:
    PokemonSeedReader();

    //P: Read File, find Pokemon, return line that contain PokemonSeed information
    // or throw exception if Pokemon 000 or Pokemon not found;
    string generatePokemonSeed(int serialNum) throw (NullPokemonException);

private:
    //P: check if given line match with given PokemonNum
    bool matchSerialNum(int serialNum, string pokemonSeed);

};


#endif //PROJECT2020SUMMER_POKEMONSEEDREADER_H
