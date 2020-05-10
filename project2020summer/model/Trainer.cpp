//
// Created by Derek Huang on 2020-04-22.
//

#include "Trainer.h"
#include "../persistence/TrainerReader.h"
#include "../exception/NullTrainerException.h"
#include <vector>
const string &Trainer::getName() const {
    return name;
}

void Trainer::setName(const string &name) {
    Trainer::name = name;
}

int Trainer::availablePokemon() const {
    int i=0;
    for(Pokemon * pokemon : pokemonList) {
        if (pokemon != NULL) {
        if (pokemon -> getCurrentHp() > 0) {
            i++;
        }}
    }
    return i;
}

Trainer::Trainer(string name) {
    TrainerReader trainerReader;
    try {
        list<string> listOfStr = trainerReader.findTrainerWithName(name);
        setUpTrainer(listOfStr);
    }
    catch (NullTrainerException) {
        setName(name);
    }
}

void Trainer::setUpTrainer(list<string> trainerID) {
    std::list<std::string>::iterator it = trainerID.begin();
    setName(*it);
    advance(it,1);
    while (it != trainerID.end()) {
        try {
            Pokemon* p = new Pokemon();
            p->setPokemonWithID(*it);
            addPokemon(p);
            advance(it,1);
        } catch (NullPokemonException) {
            advance(it,1);
        }
    }
}

void Trainer::addPokemon(Pokemon * pokemon) {
    for(int i=0; i<6; i++)
    {
        if(pokemonList[i] == NULL) {
            pokemonList[i] = pokemon;
            break;
        }
    }
}

Pokemon *Trainer::getPokemonWithIndex(int index) {
    return pokemonList[index];
}

vector<int> Trainer::availablePokemonIndex() {
    vector<int> i;//return list
    for (int  j = 0; j < 6; j++) {
        if (pokemonList[j] != NULL) {
            if(pokemonList[j] -> getCurrentHp() > 0) {
                i.push_back(j);
            }
        }
    }
    return i;
}


Trainer::Trainer() = default;

