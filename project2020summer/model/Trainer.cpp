//
// Created by Derek Huang on 2020-04-22.
//

#include "Trainer.h"

Trainer::Trainer(string name, int pokemonData[6*7]) {
    setName(name);
    for (int i = 0; i < 6; i++) {
        int skillList[4] = {pokemonData[7*i +3],
                            pokemonData[7*i +4],
                            pokemonData[7*i +5],
                            pokemonData[7*i +6]};
        pokemonList[i] = Pokemon(pokemonData[7 * i]);
    }
}

const string &Trainer::getName() const {
    return name;
}

void Trainer::setName(const string &name) {
    Trainer::name = name;
}

int Trainer::availablePokemon() const {
    int i=0;
    for(Pokemon pokemon : pokemonList) {
        if (pokemon.getCurrentHp() > 0) {
            i++;
        }
    }
    return i;
}

