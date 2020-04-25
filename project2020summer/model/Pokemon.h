//
// Created by Derek Huang on 2020-04-22.
//

#ifndef PROJECT2020SUMMER_POKEMON_H
#define PROJECT2020SUMMER_POKEMON_H


#include <xstring>
#include "PokemonType.h"
#include "PokemonSkill.h"
using namespace std;

class Pokemon {

public:
    Pokemon(int serialNumber);

    Pokemon();

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

private:
    string name;
    int serialNumber, initialAttack, initialDefend, initialHealth, pokemonLevel, currentHP;
    PokemonType pokemonType;
    PokemonSkill skills[4] = {};
    void findPokemon(int serialNumber);
    void generatePokemonWithSeed(string pokemonSeed);
};


#endif //PROJECT2020SUMMER_POKEMON_H
