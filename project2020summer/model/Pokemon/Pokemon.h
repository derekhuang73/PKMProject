//
// Created by Derek Huang on 2020-04-22.
//

#ifndef PROJECT2020SUMMER_POKEMON_H
#define PROJECT2020SUMMER_POKEMON_H


#include <string>
#include "PokemonType.h"
#include "PokemonSkill.h"
#include "../../exception/NullPokemonException.h"

using namespace std;

class Pokemon {

public:
    static const int SerialNumRange = 43;

    //P:generate Pokemon with given serial num
    //R:serial number should be within the range
    Pokemon(int serialNumber);

    Pokemon();

    //P:construct a pokemon with full currentHp in given lv
    Pokemon(int serialNum, int LV);

    //--------------------------------------------------------------------------------------

    //P: generate Pokemon Information (skills hp lv) (can be found in trainer data)
    void setPokemonWithID(string pokemonID) throw (NullPokemonException);

    //P: return the percentage damage that this pokemon will receive from given type
    double typeRestriction (PokemonType pokemonType1);

    //P: set current hp after receiving the damage from other pokemon
    void takeDamage(int damage);

    //P: add skill with given skillnum to skills
    void addSkillwSerialNum(int skillSerialNum);

    int getNumOfSkill();

    //random generate 1-4 skills with its type skill
    void randomGenerateSkills();

    //increase pokemon lv by 1, check if it ready for evo
    void pokemonLvUp();

    //evolve a pokemon
    void evolvePokemon();
    //---------------------------------------------------------------------------------------
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

    int getMinLv() const;

    void setMinLv(int minLv);

    int getEvolveLv() const;

    void setEvolveLv(int evolveLv);




private:
    string name;
    int serialNumber, initialAttack, initialDefend, initialHealth, pokemonLevel, currentHP,minLv, evolveLv;
    PokemonType pokemonType;
    PokemonSkill *skills[4] = {};
    bool readyForEvo;

    //P: find pokemon with given num
    void findPokemon(int serialNumber) throw (NullPokemonException);

    //P:set up pokemon information with seed string
    //R: string returned from pokemonSeed reader
    void setPokemonWithSeed(string pokemonSeed);

    //P: add skill to skills
    void addSkill(PokemonSkill * pokemonSkill);

    //P:set up initial atk def hp with seedData lv and type attribution
    void wrapUpWithLevelAndType();

};


#endif //PROJECT2020SUMMER_POKEMON_H
