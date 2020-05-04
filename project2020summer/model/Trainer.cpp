//
// Created by Derek Huang on 2020-04-22.
//

#include "Trainer.h"
#include "../persistence/TrainerReader.h"
#include "../exception/NullTrainerException.h"

const string &Trainer::getName() const {
    return name;
}

void Trainer::setName(const string &name) {
    Trainer::name = name;
}

int Trainer::availablePokemon() const {
    int i=0;
    for(Pokemon * pokemon : pokemonList) {
        if (pokemon -> getCurrentHp() > 0) {
            i++;
        }
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
            Pokemon p = Pokemon();
            p.setPokemonWithID(*it);
            addPokemon(p);
        } catch (NullPokemonException) {
        }
    }
}

void Trainer::addPokemon(Pokemon &pokemon) {
    //stub
}

Trainer::Trainer() = default;

