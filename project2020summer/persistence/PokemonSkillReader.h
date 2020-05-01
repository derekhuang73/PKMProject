//
// Created by Derek Huang on 2020-04-29.
//

#ifndef PROJECT2020SUMMER_POKEMONSKILLREADER_H
#define PROJECT2020SUMMER_POKEMONSKILLREADER_H

#include <xstring>
#include "../model/PokemonSkill.h"

using namespace std;
class PokemonSkillReader {
    string File = "../data/PokemonSkillData.txt";
public:
    string findSkill(int skillNum);

private:
    bool skillMatch(int skillNum, string skillString);

};


#endif //PROJECT2020SUMMER_POKEMONSKILLREADER_H
