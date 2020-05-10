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
    setEndOfBattle(false);
    setP1SwitchingPkm(false);
}

void TrainerBattle::checkBattleOver() {
    if( player -> availablePokemon() <= 0 ||
        cpTrainer -> availablePokemon() <= 0) {
        setEndOfBattle(true);
    }
}

void TrainerBattle::endOfTurnStage() {
    pkmBattle -> checkGameOver();
    if (pkmBattle -> getisGameOver()){
        if (pkmBattle -> getCpPokemon() -> getCurrentHp() <= 0) {
            cpSwitchPokemon();
        } else if (pkmBattle -> getPlayerPokemon() -> getCurrentHp() <= 0) {
            setP1SwitchingPkm(true);
        }
    }
    checkBattleOver();
}

void TrainerBattle::cpSwitchPokemon() {
    int i = cpTrainer -> availablePokemon();
    int index = rand()%i;
    vector<int> vec = cpTrainer->availablePokemonIndex();
    int pkmIndex = vec.at(index);
    pkmBattle->setCpPokemon(cpTrainer->getPokemonWithIndex(pkmIndex));
}

bool TrainerBattle::isP1SwitchingPkm() const {
    return p1SwitchingPKM;
}

void TrainerBattle::setP1SwitchingPkm(bool p1SwitchingPkm) {
    p1SwitchingPKM = p1SwitchingPkm;
}

void TrainerBattle::playerSwitchPkm(int index) {
    pkmBattle -> setPlayerPokemon( player -> getPokemonWithIndex(index));
}
