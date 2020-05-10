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

    void cpPokemonAttack();

    void playerPokemonAttack(PokemonSkill * skill);

    bool checkGameOver();

    void resetMissing();

    bool isMissing();

private:

    //purpose: calculate damage
    void damageResolve(Pokemon * subjectPokemon, Pokemon * objectPokemon, PokemonSkill * skill);

    bool missing;
    Pokemon * playerPokemon, * cpPokemon;


};


#endif //PROJECT2020SUMMER_POKEMONBATTLE_H
