//
// Created by Derek Huang on 2020-05-06.
//

#include "TrainerBattle.h"

PokemonBattle *TrainerBattle::getPkmBattle() const {
    return pkmBattle;
}

void TrainerBattle::setPkmBattle(PokemonBattle *pkmBattle) {
    TrainerBattle::pkmBattle = pkmBattle;
}


Trainer *TrainerBattle::getPlayer() const {
    return player;
}

void TrainerBattle::setPlayer(Trainer *player) {
    TrainerBattle::player = player;
}

Trainer *TrainerBattle::getCpTrainer() const {
    return cpTrainer;
}

void TrainerBattle::setCpTrainer(Trainer *cpTrainer) {
    TrainerBattle::cpTrainer = cpTrainer;
}

TrainerBattle::TrainerBattle(Trainer *player, Trainer *cpTrainer) {
    setCpTrainer(cpTrainer);
    setPlayer(player);
    if (! checkBattleOver())
    { PokemonBattle * pokemonBattle = new PokemonBattle(player -> getPokemonWithIndex(0),
            cpTrainer -> getPokemonWithIndex(0));
    setPkmBattle(pokemonBattle);}
}

bool TrainerBattle::checkBattleOver() {
    return ( player -> availablePokemon() <= 0 ||
        cpTrainer -> availablePokemon() <= 0);
}

void TrainerBattle::cpSwitchPokemon() {
    int i = cpTrainer -> availablePokemon();
    int index = rand()%i;
    vector<int> vec = cpTrainer->availablePokemonIndex();
    int pkmIndex = vec.at(index);
    pkmBattle->setCpPokemon(cpTrainer->getPokemonWithIndex(pkmIndex));
}


void TrainerBattle::playerSwitchPkm(int index) {
    pkmBattle -> setPlayerPokemon( player -> getPokemonWithIndex(index));
}
