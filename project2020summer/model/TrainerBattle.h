//
// Created by Derek Huang on 2020-05-06.
//

#ifndef PROJECT2020SUMMER_TRAINERBATTLE_H
#define PROJECT2020SUMMER_TRAINERBATTLE_H

using namespace std;
#include "PokemonBattle.h"

class TrainerBattle {
    TrainerBattle(Trainer * player, Trainer * cpTrainer);

public:
    PokemonBattle *getPkmBattle() const;

    void setPkmBattle(PokemonBattle *pkmBattle);

    int getPokemonSwitchCoolDown() const;

    void setPokemonSwitchCoolDown(int pokemonSwitchCoolDown);

    bool isEndOfBattle() const;

    void setEndOfBattle(bool endOfBattle);

    Trainer *getPlayer() const;

    void setPlayer(Trainer *player);

    Trainer *getCpTrainer() const;

    void setCpTrainer(Trainer *cpTrainer);

private:
    PokemonBattle * pkmBattle;
    int pokemonSwitchCoolDown;
    bool endOfBattle;
    Trainer * player, * cpTrainer;
};


#endif //PROJECT2020SUMMER_TRAINERBATTLE_H
