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

int TrainerBattle::getPokemonSwitchCoolDown() const {
    return pokemonSwitchCoolDown;
}

void TrainerBattle::setPokemonSwitchCoolDown(int pokemonSwitchCoolDown) {
    TrainerBattle::pokemonSwitchCoolDown = pokemonSwitchCoolDown;
}

bool TrainerBattle::isEndOfBattle() const {
    return endOfBattle;
}

void TrainerBattle::setEndOfBattle(bool endOfBattle) {
    TrainerBattle::endOfBattle = endOfBattle;
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
    PokemonBattle * pokemonBattle = new PokemonBattle(player -> getPokemonWithIndex(0),
            cpTrainer -> getPokemonWithIndex(0));
    setPkmBattle(pokemonBattle);
    setPokemonSwitchCoolDown(0);
}
