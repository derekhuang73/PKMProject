//
// Created by Derek Huang on 2020-04-22.
//

#ifndef PROJECT2020SUMMER_TRAINER_H
#define PROJECT2020SUMMER_TRAINER_H


#include <string>
#include "Pokemon.h"
#include <list>
#include <vector>
using namespace std;
class Trainer {
public:
    Trainer();

    Trainer(string name);

    int availablePokemon() const;

    const string &getName() const;

    void setName(const string &name);

    void addPokemon(Pokemon * pokemon);

    Pokemon * getPokemonWithIndex(int index);

    vector<int> availablePokemonIndex();
private:
    Pokemon * pokemonList[6] = {};
    string name;

    void setUpTrainer(list<string> trainerID);
};


#endif //PROJECT2020SUMMER_TRAINER_H
