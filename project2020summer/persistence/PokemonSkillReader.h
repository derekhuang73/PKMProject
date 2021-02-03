//
// Created by Derek Huang on 2020-04-29.
//

#ifndef PROJECT2020SUMMER_POKEMONSKILLREADER_H
#define PROJECT2020SUMMER_POKEMONSKILLREADER_H

#include <string>
#include "../model/Pokemon/PokemonSkill.h"
#include "../exception/NullSkillException.h"

using namespace std;
class PokemonSkillReader {
    string File = "../data/PokemonSkillData.txt";
public:

    PokemonSkillReader();

    struct pokemonSkillSeed {
        int power;
        int hitRate;
        PokemonType skillType;
        int skillSerialNum;
        char skillName[110];
    };

    //P: Read File, find skill, return line that contain skill information
    // or throw exception if Skill 000 or skill not found;
    static pokemonSkillSeed findSkill(int skillNum);

private:
    //P: check if given line match with given skillNUM

    static struct pokemonSkillSeed array[110];

    static int skillNum;

};


#endif //PROJECT2020SUMMER_POKEMONSKILLREADER_H
