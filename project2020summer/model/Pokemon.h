//
// Created by Derek Huang on 2020-04-22.
//

#ifndef PROJECT2020SUMMER_POKEMON_H
#define PROJECT2020SUMMER_POKEMON_H


#include <string>
#include "PokemonType.h"
#include "PokemonSkill.h"
#include "../exception/NullPokemonException.h"

using namespace std;

class Pokemon {

public:
    Pokemon(int serialNumber);

    PokemonSkill *const *getSkills() const;

    Pokemon();

    void setUpPokemonWithLV(int serialNum, int level , int currentHp);

    void setPokemonWithID(string pokemonID);

    //Purpose: return the percentage damage that this pokemon will receive from given type
    double typeRestriction (PokemonType pokemonType1);

    //Purpose: set current hp after receiving the damage
    void takeDamage(int damage);

    int getInitialAttack() const;

    void setInitialAttack(int initialAttack);

    int getInitialDefend() const;

    void setInitialDefend(int initialDefend);

    int getInitialHealth() const;

    void setInitialHealth(int initialHealth);

    int getPokemonLevel() const;

    void setPokemonLevel(int pokemonLevel);

    int getCurrentHp() const;

    void setCurrentHp(int currentHp);

    PokemonType getPokemonType() const;

    void setPokemonType(PokemonType pokemonType);

    int getSerialNumber() const;

    void setSerialNumber(int serialNumber);

    const string &getName() const;

    void setName(const string &name);

    void setPokemonType(int typeInt);

    PokemonSkill * getSkill(int index);

    void addSkillwSerialNum(int skillSerialNum);

private:
    string name;
    int serialNumber, initialAttack, initialDefend, initialHealth, pokemonLevel, currentHP;
    PokemonType pokemonType;
    PokemonSkill *skills[4] = {};
    void findPokemon(int serialNumber) throw (NullPokemonException);
    void setPokemonWithSeed(string pokemonSeed);
    void addSkill(PokemonSkill * pokemonSkill);
};


#endif //PROJECT2020SUMMER_POKEMON_H
