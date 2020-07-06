//
// Created by Derek Huang on 2020-04-22.
//

#include "Player.h"

Player::Player(string name) : Trainer(name) {
    level = 1;
}

void Player::setUpPokemons(list<string> curPokemons, list<int> curHealth, list<string> staPokemons, list<int> staHealth) {
    setUpPokemonList(curPokemons, pokemonList);
    setUpPokemonHealth(curHealth, pokemonList);
    setUpPokemonList(staPokemons, stashedPokemonList);
    setUpPokemonHealth(staHealth, stashedPokemonList);
}

void Player::setUpPokemonHealth(list<int> HP, Pokemon* pklist[]) {
    auto it = HP.begin();
    int i = 0;
    while(it != HP.end() && pklist[i] != nullptr) {
            pklist[i]->setCurrentHp(*it);
            i++;
            advance(it, 1);
    }
}

void Player::setUpPokemonList(list<string> PokemonString, Pokemon* pklist[]) {
    auto it = PokemonString.begin();
    int i = 0;
    while (it != PokemonString.end()) {
        try {
            Pokemon* p = new Pokemon();
            p->setPokemonWithID(*it);
            if(pklist[i] == nullptr) {
                pklist[i] = p;
                advance(it,1);
            }
            i++;
        } catch (NullPokemonException) {
            advance(it,1);
        }
    }
}
