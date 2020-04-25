//
// Created by Derek Huang on 2020-04-22.
//

#include "Pokemon.h"
#include "../persistence/PokemonSeedReader.h"

using namespace std;
Pokemon::Pokemon(int serialNumber) {

    findPokemon(serialNumber);
    /*for (int i=0; i<4; i++) {
        skills[i] = PokemonSkill(pokemonSkills[i]);
    }
    setPokemonLevel(pokemonLevel);
    setCurrentHp(currentHp);
     */
}


//purpose: read file and setup pokemon seed data
void Pokemon::findPokemon(int serialNumber) {
    PokemonSeedReader pokemonSeedReader;
    string seed = pokemonSeedReader.generatePokemonSeed(serialNumber);
    generatePokemonWithSeed(seed);
}

//dummy constructor
Pokemon::Pokemon() {
    setPokemonLevel(0);
    setCurrentHp(0);
    setSerialNumber(0);
    setPokemonType(Fire);
    setInitialAttack(0);
    setInitialDefend(0);
    setInitialHealth(0);
    setName("null");
}

int Pokemon::getInitialAttack() const {
    return initialAttack;
}

void Pokemon::setInitialAttack(int initialAttack) {
    Pokemon::initialAttack = initialAttack;
}

int Pokemon::getInitialDefend() const {
    return initialDefend;
}

void Pokemon::setInitialDefend(int initialDefend) {
    Pokemon::initialDefend = initialDefend;
}

int Pokemon::getInitialHealth() const {
    return initialHealth;
}

void Pokemon::setInitialHealth(int initialHealth) {
    Pokemon::initialHealth = initialHealth;
}

int Pokemon::getPokemonLevel() const {
    return pokemonLevel;
}

void Pokemon::setPokemonLevel(int pokemonLevel) {
    Pokemon::pokemonLevel = pokemonLevel;
}

int Pokemon::getCurrentHp() const {
    return currentHP;
}

void Pokemon::setCurrentHp(int currentHp) {
    currentHP = currentHp;
}

PokemonType Pokemon::getPokemonType() const {
    return pokemonType;
}

void Pokemon::setPokemonType(PokemonType pokemonType) {
    Pokemon::pokemonType = pokemonType;
}

int Pokemon::getSerialNumber() const {
    return serialNumber;
}

void Pokemon::setSerialNumber(int serialNumber) {
    Pokemon::serialNumber = serialNumber;
}

const string &Pokemon::getName() const {
    return name;
}

void Pokemon::setName(const string &name) {
    Pokemon::name = name;
}

double Pokemon::typeRestriction(PokemonType pokemonType1) {
    switch (pokemonType) {
        case Fire:
            switch (pokemonType1) {
                case Grass:
                    return 0.5;
                    break;
                case Water:
                    return 1.5;
                    break;
                default:
                    return 1;
            }
            break;
        case Grass:
            switch (pokemonType1) {
                case Water:
                    return 0.5;
                    break;
                case Fire:
                    return 1.5;
                    break;
                default:
                    return 1;
            }
            break;
        case Water:
            switch (pokemonType1) {
                case Fire:
                    return 0.5;
                    break;
                case Grass:
                    return 1.5;
                    break;
                default:
                    return 1;
            }
            break;
        default:
            return 1;
    }
}

void Pokemon::takeDamage(int damage) {
    if (damage >= currentHP) {
        setCurrentHp(0);
    } else {
        setCurrentHp(currentHP - damage);
    }
}

void Pokemon::setPokemonType(int typeInt) {
    switch (typeInt) {
        case 1:
            setPokemonType(Fire);
            break;
        case 2:
            setPokemonType(Water);
            break;
        case 3:
            setPokemonType(Grass);
            break;
        default:
            setPokemonType(Fire);
    }
}

void Pokemon::generatePokemonWithSeed(string pokemonSeed) {
    string serialNum,seedATK,seedDEF,seedHP,seedType,name;
    serialNum = pokemonSeed.substr(0,3);
    seedATK = pokemonSeed.substr(5,3);
    seedDEF = pokemonSeed.substr(9,3);
    seedHP  = pokemonSeed.substr(13,3);
    seedType= pokemonSeed.substr(15,1);
    name    = pokemonSeed.substr(18);
    int pokeSN = atoi(serialNum.c_str());
    int atk    = atoi(seedATK.c_str());
    int def    = atoi(seedDEF.c_str());
    int hp     = atoi(seedHP.c_str());
    int type   = atoi(seedType.c_str());
    setPokemonType(type);
    setInitialHealth(hp);
    setInitialDefend(def);
    setInitialAttack(atk);
    setSerialNumber(pokeSN);
    setName(name);

}

