//
// Created by Derek Huang on 2020-04-22.
//

#include <sstream>
#include "PokemonSkill.h"

using namespace std;
PokemonSkill::PokemonSkill(int skillSerialNum){
    PokemonSkillReader::pokemonSkillSeed seed = PokemonSkillReader::findSkill(skillSerialNum);
    setSkillSerialNum(seed.skillSerialNum);
    setPower(seed.power);
    setHitRate(seed.hitRate);
    setSkillType(seed.skillType);
    setSkillName(seed.skillName);
}


//Purpose: default skill
PokemonSkill::PokemonSkill() = default;

int PokemonSkill::getPower() const {
    return power;
}

void PokemonSkill::setPower(int power){
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
    PokemonSkillReader::pokemonSkillSeed seed = PokemonSkillReader::findSkill(skillSerialNum);
    setSkillSerialNum(seed.skillSerialNum);
    setPower(seed.power);
    setHitRate(seed.hitRate);
    setSkillType(seed.skillType);
    setSkillName(seed.skillName);
}

int PokemonSkill::startPointOfType(PokemonType type) {
    switch (type) {
        case Fire: return   FireSkillStartAT;
        case Water: return  WaterSkillStartAT;
        case Grass: return  GrassSkillStartAT;
        case Normal:return  NormalSkillStartAT;
    }
}
