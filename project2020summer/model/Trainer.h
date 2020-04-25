//
// Created by Derek Huang on 2020-04-22.
//

#ifndef PROJECT2020SUMMER_TRAINER_H
#define PROJECT2020SUMMER_TRAINER_H


#include <xstring>
#include "Pokemon.h"
using namespace std;
class Trainer {
public:
    Trainer(string name, int pokemonData[6*7]);

    int availablePokemon() const;

    const string &getName() const;

    void setName(const string &name);


private:
    Pokemon pokemonList[6];
    string name;
};


#endif //PROJECT2020SUMMER_TRAINER_H
