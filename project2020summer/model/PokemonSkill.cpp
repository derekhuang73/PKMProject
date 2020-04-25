//
// Created by Derek Huang on 2020-04-22.
//

#include "PokemonSkill.h"

PokemonSkill::PokemonSkill(int skillSerialNum) {
    findSkill(skillSerialNum);
}
//Purpose: read file and generate data for skill
void PokemonSkill::findSkill(int skillSerialNum) {
    //stub
    setSkillSerialNum(skillSerialNum);
    setSkillType(Fire);
    setHitRate(skillSerialNum);
    setPower(skillSerialNum);
    setSkillName("default skill");
}
//Purpose: default skill
PokemonSkill::PokemonSkill() {
    //stub
    setSkillSerialNum(0);
    setSkillType(Fire);
    setHitRate(0);
    setPower(0);
    setSkillName("null skill");
}

int PokemonSkill::getPower() const {
    return power;
}

void PokemonSkill::setPower(int power) {
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
