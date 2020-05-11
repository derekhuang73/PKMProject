//
// Created by Derek Huang on 2020-04-29.
//

#ifndef PROJECT2020SUMMER_POKEMONSKILLREADER_H
#define PROJECT2020SUMMER_POKEMONSKILLREADER_H

#include <string>
#include "../model/PokemonSkill.h"
#include "../exception/NullSkillException.h"

using namespace std;
class PokemonSkillReader {
    string File = "../data/PokemonSkillData.txt";
public:
    //P: Read File, find skill, return line that contain skill information
    // or throw exception if Skill 000 or skill not found;
    string findSkill(int skillNum) throw(NullSkillException);

private:
    //P: check if given line match with given skillNUM
    bool skillMatch(int skillNum, string skillString);

};


#endif //PROJECT2020SUMMER_POKEMONSKILLREADER_H
