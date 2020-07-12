//
// Created by Derek Huang on 2020-04-22.
//

#ifndef PROJECT2020SUMMER_PLAYER_H
#define PROJECT2020SUMMER_PLAYER_H

#include <string>
#include "Trainer.h"

class Player : public Trainer{

public:
    // Constructor
    explicit Player(string name);

    // Sets level
    void setLevel(int l) {
        level = l;
    }

    int getLevel() {
        return level;
    }

    void setUpPokemons(list<string> curPokemons, list<int> curHealth, list<string> staPokemons, list<int> staHealth);

    string getPokemons();


private:

    void setUpPokemonList(list<string> PokemonString, Pokemon* pklist[]);

    void setUpPokemonHealth(list<int> HP, Pokemon* pklist[]);

    list<string> getPokemonList(Pokemon* pklist[]);

    list<string> getHealthList(Pokemon* pklist[]);

    string listConcat(list<string> ss);

    int level;

    // Limit 20 to stashed Pokemons
    Pokemon * stashedPokemonList[20]{};
};


#endif //PROJECT2020SUMMER_PLAYER_H
