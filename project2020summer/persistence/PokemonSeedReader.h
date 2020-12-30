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

    struct pokemonSeed {
        int pokemonSerialNum;
        int atk;
        int def;
        int hp;
        int typeNum;
        int minLv;
        int evoLv;
        string name;
    };

    //P: Read File, find Pokemon, return line that contain PokemonSeed information
    // or throw exception if Pokemon 000 or Pokemon not found;

    static pokemonSeed getPokemonSeed(int serialNumber);


private:
    //P: check if given line matches with given PokemonNum

    static struct pokemonSeed array[110];

    static int pokemonNum;

};



#endif //PROJECT2020SUMMER_POKEMONSEEDREADER_H
