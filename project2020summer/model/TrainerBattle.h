//
// Created by Derek Huang on 2020-05-06.
//

#ifndef PROJECT2020SUMMER_TRAINERBATTLE_H
#define PROJECT2020SUMMER_TRAINERBATTLE_H

using namespace std;
#include "PokemonBattle.h"

class TrainerBattle {

public:
    TrainerBattle(Trainer * player, Trainer * cpTrainer);

    PokemonBattle *getPkmBattle() const;

    void setPkmBattle(PokemonBattle *pkmBattle);

    Trainer *getPlayer() const;

    void setPlayer(Trainer *player);

    Trainer *getCpTrainer() const;

    void setCpTrainer(Trainer *cpTrainer);

    bool checkBattleOver();

    void cpSwitchPokemon();

    void playerSwitchPkm(int index);

private:
    PokemonBattle * pkmBattle;
    Trainer * player, * cpTrainer;

};


#endif //PROJECT2020SUMMER_TRAINERBATTLE_H
