//
// Created by Derek Huang on 2020-04-22.
//

#include <sstream>
#include "PokemonSkill.h"
#include "../../persistence/PokemonSkillReader.h"

using namespace std;
PokemonSkill::PokemonSkill(int skillSerialNum) throw(NullSkillException) {
    string skillString;
    PokemonSkillReader pokemonSkillReader;
        skillString = pokemonSkillReader.findSkill(skillSerialNum);
        setUpSkill(skillString);
}


//Purpose: default skill
PokemonSkill::PokemonSkill() = default;

int PokemonSkill::getPower() const {
    return power;
}

void PokemonSkill::setPower(int power) throw (NullSkillException){
    PokemonSkill::power = power;
}


int PokemonSkill::getHitRate() const {
    return hitRate;
}

void PokemonSkill::setHitRate(int hitRate) {
    PokemonSkill::hitRate = hitRate;
}

PokemonType PokemonSkill::getSkillType() const {
    return skillType;
}

void PokemonSkill::setSkillType(PokemonType skillType) {
    PokemonSkill::skillType = skillType;
}

int PokemonSkill::getSkillSerialNum() const {
    return skillSerialNum;
}

void PokemonSkill::setSkillSerialNum(int skillSerialNum) {
    PokemonSkill::skillSerialNum = skillSerialNum;
}

const string &PokemonSkill::getSkillName() const {
    return skillName;
}

void PokemonSkill::setSkillName(const string &skillName) {
    PokemonSkill::skillName = skillName;
}

void PokemonSkill::setUpSkill(string pmSkillString) {
        stringstream stringstream1(pmSkillString);
        string data;
        getline(stringstream1, data, ',');
        setSkillSerialNum(atoi(data.c_str()));
        getline(stringstream1, data, ',');
        setPower(atoi(data.c_str()));
        getline(stringstream1, data, ',');
        setHitRate(atoi(data.c_str()));
        getline(stringstream1,data,',');
        setSkillType(atoi(data.c_str()));
        getline(stringstream1,data,',');
        setSkillName(data);
}

void PokemonSkill::setSkillType(int typeInt) {
    switch (typeInt) {
        case 1:
            setSkillType(Fire);
            break;
        case 2:
            setSkillType(Water);
            break;
        case 3:
            setSkillType(Grass);
            break;
        case 4:
            setSkillType(Normal);
            break;
        default:
            setSkillType(Normal);
            break;
    }

}

PokemonSkill::PokemonSkill(int startPoint, int range) {
    int serialNum = rand()%range + startPoint;
    string skillString;
    PokemonSkillReader pokemonSkillReader;
    skillString = pokemonSkillReader.findSkill(serialNum);
    setUpSkill(skillString);
}

int PokemonSkill::startPointOfType(PokemonType type) {
    switch (type) {
        case Fire: return   FireSkillStartAT;
        case Water: return  WaterSkillStartAT;
        case Grass: return  GrassSkillStartAT;
        case Normal:return  NormalSkillStartAT;
    }
}
