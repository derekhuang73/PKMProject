//
// Created by Derek Huang on 2020-04-24.
//

#ifndef PROJECT2020SUMMER_POKEMONBATTLE_H
#define PROJECT2020SUMMER_POKEMONBATTLE_H


#include "Trainer.h"

class PokemonBattle {
public:
    PokemonBattle(Pokemon * playerPokemon, Pokemon * cpPokemon);

    Pokemon *getCpPokemon() const;

    void setCpPokemon(Pokemon *cpPokemon);

    Pokemon *getPlayerPokemon() const;

    void setPlayerPokemon(Pokemon *playerPokemon);

    void cpPokemonAttack(PokemonSkill * skill);

    void playerPokemonAttack(PokemonSkill * skill);

private:

    //purpose: calculate damage
    void damageResolve(Pokemon * subjectPokemon, Pokemon * objectPokemon, PokemonSkill * skill);

    Pokemon * playerPokemon, * cpPokemon;

};


#endif //PROJECT2020SUMMER_POKEMONBATTLE_H
