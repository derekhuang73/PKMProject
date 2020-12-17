//
// Created by Derek Huang on 2020-04-22.
//

#include <sstream>
#include "Pokemon.h"
#include "../../persistence/PokemonSeedReader.h"

using namespace std;
Pokemon::Pokemon(int serialNumber) {
    try {
        findPokemon(serialNumber);
    } catch (NullPokemonException) {
    }
}

//purpose: read file and setup pokemon seed data
void Pokemon::findPokemon(int serialNumber)throw (NullPokemonException) {
    PokemonSeedReader pokemonSeedReader;
    string seed = pokemonSeedReader.generatePokemonSeed(serialNumber);
    setPokemonWithSeed(seed);
}

//dummy constructor
Pokemon::Pokemon() {
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
                case Water:
                    return 1.3;
                default:
                    return 1;
            }
        case Grass:
            switch (pokemonType1) {
                case Water:
                    return 0.5;
                case Fire:
                    return 1.3;
                default:
                    return 1;
            }
        case Water:
            switch (pokemonType1) {
                case Fire:
                    return 0.5;
                case Grass:
                    return 1.3;
                default:
                    return 1;
            }
        default:
            return 1;
    }
}

void Pokemon::takeDamage(int damage) {
    int i = damage - 1.5*initialDefend;
    if (i <= 0) {
        i = damage/8;
    }
    if (i >= currentHP) {
        setCurrentHp(0);
    } else {
        setCurrentHp(currentHP - i);
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
        case 4:
            setPokemonType(Normal);
        default:
            setPokemonType(Fire);
    }
}

void Pokemon::setPokemonWithSeed(string pokemonSeed) {
    string serialNum,seedATK,seedDEF,seedHP,seedType,name,seedMinLv,seedEvoLv;
    stringstream ss(pokemonSeed);
    getline(ss, serialNum, ',');
    getline(ss, seedATK, ',');
    getline(ss, seedDEF, ',');
    getline(ss, seedHP, ',');
    getline(ss, seedType, ',');
    getline(ss, seedMinLv, ',');
    getline(ss, seedEvoLv, ',');
    getline(ss, name, ',');
    int pokeSN = atoi(serialNum.c_str());
    int atk    = atoi(seedATK.c_str());
    int def    = atoi(seedDEF.c_str());
    int hp     = atoi(seedHP.c_str());
    int type   = atoi(seedType.c_str());
    int minLv  = atoi(seedMinLv.c_str());
    int evoLv  = atoi(seedEvoLv.c_str());
    setPokemonType(type);
    setInitialHealth(hp);
    setInitialDefend(def);
    setInitialAttack(atk);
    setSerialNumber(pokeSN);
    setMinLv(minLv);
    setEvolveLv(evoLv);
    setName(name);
}


void Pokemon::setPokemonWithID(string pokemonID) throw (NullPokemonException) {
    string serialS, levelS,skill1,skill2,skill3,skill4;
    int    serI,levelI,sk1I,sk2I,sk3I,sk4I;
    PokemonSkill pkSkill1, pkSkill2, pkSkill3, pkSkill4;
    stringstream ss(pokemonID);
    getline(ss, serialS, ',');
    getline(ss, levelS, ',');
    getline(ss, skill1, ',');
    getline(ss, skill2, ',');
    getline(ss, skill3, ',');
    getline(ss, skill4, ',');
    serI = atoi(serialS.c_str());
    levelI  = atoi(levelS.c_str());
    sk1I = atoi(skill1.c_str());
    sk2I = atoi(skill2.c_str());
    sk3I = atoi(skill3.c_str());
    sk4I = atoi(skill4.c_str());
    findPokemon(serI);
    setPokemonLevel(levelI);
    wrapUpWithLevelAndType();
    setCurrentHp(initialHealth);
    addSkillwSerialNum(sk1I);
    addSkillwSerialNum(sk2I);
    addSkillwSerialNum(sk3I);
    addSkillwSerialNum(sk4I);
}

void Pokemon::addSkill(PokemonSkill * pokemonSkill) {
        for(int i=0; i<4; i++)
        {
            if(skills[i] == NULL) {
                skills[i] = pokemonSkill;
                break;
            }
        }
}

PokemonSkill * Pokemon::getSkill(int index) {
    return skills[index];
}

void Pokemon::addSkillwSerialNum(int skillSerialNum) {
    try {
        PokemonSkill* pokemonSkill = new PokemonSkill(skillSerialNum);
        addSkill(pokemonSkill);
    } catch (NullSkillException) {
    }
}

int Pokemon::getNumOfSkill() {
    for(int i=0; i<4; i++) {
        if (skills[i] == NULL) {
        return (i-1);
    }
    }
}

void Pokemon::wrapUpWithLevelAndType() {
    switch(pokemonType) {
        case Fire:
            initialAttack += pokemonLevel * 1.7;
            initialDefend += pokemonLevel * 0.7;
            initialHealth += pokemonLevel * 0.8;
        case Water:
            initialAttack += pokemonLevel * 0.8;
            initialDefend += pokemonLevel * 1.7;
            initialHealth += pokemonLevel * 0.7;
        case Grass:
            initialAttack += pokemonLevel * 0.7;
            initialDefend += pokemonLevel * 0.8;
            initialHealth += pokemonLevel * 1.7;
        case Normal:
            initialAttack += pokemonLevel * 1.2;
            initialDefend += pokemonLevel * 1.2;
            initialHealth += pokemonLevel * 1.2;
    }
}

Pokemon::Pokemon(int serialNum, int LV) {
    try {
        findPokemon(serialNum);
        setPokemonLevel(LV);
        wrapUpWithLevelAndType();
        setCurrentHp(initialHealth);
    } catch (NullPokemonException) {
    }
}

void Pokemon::randomGenerateSkills() {
        switch (pokemonType) {
            case Fire:
                for (int i = 0; i < rand()%3+1; ++i) {
                    PokemonSkill * p;
                    p = new PokemonSkill(p -> FireSkillStartAT, p -> NumOfSkillPerType);
                    addSkill(p);
                }
                break;
            case Water:
                for (int i = 0; i < rand()%3+1; ++i) {
                    PokemonSkill * p;
                    p = new PokemonSkill(p -> WaterSkillStartAT, p -> NumOfSkillPerType);
                    addSkill(p);
                }
                break;
            case Grass:
                for (int i = 0; i < rand()%3+1; ++i) {
                    PokemonSkill * p;
                    p = new PokemonSkill(p -> GrassSkillStartAT, p -> NumOfSkillPerType);
                    addSkill(p);
                }
                break;
            case Normal:
                for (int i = 0; i < rand()%3+1; ++i) {
                    PokemonSkill * p;
                    p = new PokemonSkill(p -> NormalSkillStartAT, p -> NumOfSkillPerType);
                    addSkill(p);
                }
        }

}

int Pokemon::getMinLv() const {
    return minLv;
}

void Pokemon::setMinLv(int minLv) {
    Pokemon::minLv = minLv;
}

int Pokemon::getEvolveLv() const {
    return evolveLv;
}

void Pokemon::setEvolveLv(int evolveLv) {
    Pokemon::evolveLv = evolveLv;
}

void Pokemon::pokemonLvUp() {
    if (pokemonLevel <= 99) {
    setPokemonLevel(pokemonLevel + 1);
    if (pokemonLevel >= evolveLv) {
        readyForEvo = true;
    }
    }
}

void Pokemon::evolvePokemon() {
    if (serialNumber = 25) {
        int i = rand()%2 + 1;
        findPokemon(serialNumber + i);
        wrapUpWithLevelAndType();
        setCurrentHp(initialHealth);
    } else {
        findPokemon(serialNumber + 1);
        wrapUpWithLevelAndType();
        setCurrentHp(initialHealth);
    }
}



