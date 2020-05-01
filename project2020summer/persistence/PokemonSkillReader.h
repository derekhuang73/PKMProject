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
    string findSkill(int skillNum) throw(NullSkillException);

private:
    bool skillMatch(int skillNum, string skillString);

};


#endif //PROJECT2020SUMMER_POKEMONSKILLREADER_H
