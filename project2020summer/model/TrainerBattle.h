//
// Created by Derek Huang on 2020-04-24.
//

#ifndef PROJECT2020SUMMER_TRAINERBATTLE_H
#define PROJECT2020SUMMER_TRAINERBATTLE_H


#include "Trainer.h"

class TrainerBattle {
public:
    TrainerBattle(Trainer &trainer1, Trainer &trainer2);

    //purpose: calculate damage
    void damageResolve(Pokemon subjectPokemon, Pokemon objectPokemon, PokemonSkill skill);


private:

    Trainer trainer1, trainer2;

};


#endif //PROJECT2020SUMMER_TRAINERBATTLE_H
