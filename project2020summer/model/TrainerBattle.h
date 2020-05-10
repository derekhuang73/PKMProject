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

    bool isEndOfBattle() const;

    void setEndOfBattle(bool endOfBattle);

    Trainer *getPlayer() const;

    void setPlayer(Trainer *player);

    Trainer *getCpTrainer() const;

    void setCpTrainer(Trainer *cpTrainer);

    void endOfTurnStage();

    void checkBattleOver();

    void cpSwitchPokemon();

    bool isP1SwitchingPkm() const;

    void setP1SwitchingPkm(bool p1SwitchingPkm);

    void playerSwitchPkm(int index);

private:
    PokemonBattle * pkmBattle;
    bool endOfBattle, p1SwitchingPKM;
    Trainer * player, * cpTrainer;

};


#endif //PROJECT2020SUMMER_TRAINERBATTLE_H
