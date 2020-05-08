//
// Created by Derek Huang on 2020-04-22.
//

#ifndef PROJECT2020SUMMER_POKEMONSKILL_H
#define PROJECT2020SUMMER_POKEMONSKILL_H


#include <string>
#include "PokemonType.h"
#include "../exception/NullSkillException.h"

using namespace std;
class PokemonSkill {
public:
    static int const    NumOfSkillPerType = 10,
                        FireSkillStartAT = 1,
                        WaterSkillStartAT = 11,
                        GrassSkillStartAT = 21,
                        NormalSkillStartAT = 31;
    PokemonSkill();

    PokemonSkill(int skillSerialNum) throw(NullSkillException);

    //random generate skill within range and given start point
    PokemonSkill(int startPoint, int range);

    int getPower() const;

    void setPower(int power);

    int getHitRate() const;

    void setHitRate(int hitRate);

    PokemonType getSkillType() const;

    void setSkillType(PokemonType skillType);

    void setSkillType(int typeInt);

    int getSkillSerialNum() const;

    void setSkillSerialNum(int skillSerialNum);

    const string &getSkillName() const;

    void setSkillName(const string &skillName);

    int startPointOfType(PokemonType type);
private:
    int skillSerialNum{}, power{}, hitRate{};
    string skillName;
    PokemonType skillType;
    void setUpSkill(string pmSkillString);
};


#endif //PROJECT2020SUMMER_POKEMONSKILL_H
