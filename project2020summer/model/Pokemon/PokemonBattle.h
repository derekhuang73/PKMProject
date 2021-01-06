//
// Created by Derek Huang on 2020-04-24.
//

#ifndef PROJECT2020SUMMER_POKEMONBATTLE_H
#define PROJECT2020SUMMER_POKEMONBATTLE_H


#include "../TrainerSystem/Trainer.h"

class PokemonBattle {
public:
    PokemonBattle();

    PokemonBattle(Pokemon * playerPokemon, Pokemon * cpPokemon);

//---------------------------------------------------------------
    Pokemon *getCpPokemon() const;

    void setCpPokemon(Pokemon *cpPokemon);

    Pokemon *getPlayerPokemon() const;

    void setPlayerPokemon(Pokemon *playerPokemon);

//-----------------------------------------------------------------

    //P: cpPokemon attack with random chosen skill
    void cpPokemonAttack();

    //P: playerPokemon attack with given skill
    //R: Skill must be chosen in playerPokemon's skills
    void playerPokemonAttack(PokemonSkill * skill);

    //P: return ture if GameOver
    bool checkGameOver();

    //P: missing is true when a Pokemon is missed,
    //  it will be reset to false right after the missing information got displayed
    //R: resetMissing should be called after every time isMissing got called
    void resetMissing();
    bool isMissing();

private:

    //P: calculate damage
    void damageResolve(Pokemon * subjectPokemon, Pokemon * objectPokemon, PokemonSkill * skill);

    bool missing;
    Pokemon * playerPokemon, * cpPokemon;


};


#endif //PROJECT2020SUMMER_POKEMONBATTLE_H
