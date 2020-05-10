//
// Created by Derek Huang on 2020-04-24.
//

#include "PokemonBattle.h"
#include "Trainer.h"


void PokemonBattle::damageResolve(Pokemon * subjectPokemon, Pokemon * objectPokemon, PokemonSkill * skill) {
    int hit = rand() % 100;
    if (hit <= skill->getHitRate())/*if hit > hitrate it is miss*/ {
        int damage = skill->getPower() + subjectPokemon -> getInitialAttack();
        if (skill->getSkillType() == subjectPokemon->getPokemonType()) {
            damage * 1.5;
        }
        damage * objectPokemon->typeRestriction(skill->getSkillType());
        objectPokemon->takeDamage(damage);
    } else {
        missing = true;
    }

}

PokemonBattle::PokemonBattle(Pokemon *playerPokemon, Pokemon *cpPokemon) {
    setCpPokemon(cpPokemon);
    setPlayerPokemon(playerPokemon);
    resetMissing();
}

Pokemon *PokemonBattle::getPlayerPokemon() const {
    return playerPokemon;
}

void PokemonBattle::setPlayerPokemon(Pokemon *playerPokemon) {
    PokemonBattle::playerPokemon = playerPokemon;
}

Pokemon *PokemonBattle::getCpPokemon() const {
    return cpPokemon;
}

void PokemonBattle::setCpPokemon(Pokemon *cpPokemon) {
    PokemonBattle::cpPokemon = cpPokemon;
}

void PokemonBattle::cpPokemonAttack() {
    int availableSkillIndex = cpPokemon -> getNumOfSkill();
    int randomIndex = rand()%availableSkillIndex;
    PokemonSkill * skill = cpPokemon -> getSkill(randomIndex);
    damageResolve(cpPokemon,playerPokemon,skill);
}

void PokemonBattle::playerPokemonAttack(PokemonSkill *skill) {
    damageResolve(playerPokemon,cpPokemon,skill);
}


bool PokemonBattle::checkGameOver() {
    return (cpPokemon -> getCurrentHp() <= 0 ||
        playerPokemon -> getCurrentHp() <= 0);
}

bool PokemonBattle::isMissing() {
    return missing;
}

void PokemonBattle::resetMissing() {
    missing = false;
}




