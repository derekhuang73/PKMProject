//
// Created by Derek Huang on 2020-04-29.
//

#include <fstream>
#include <iostream>
#include <sstream>
#include "PokemonSkillReader.h"
#include "../exception/NullSkillException.h"

string PokemonSkillReader::findSkill(int skillNum) throw(NullSkillException) {
    if (skillNum == 0) {
        throw NullSkillException();
    }
    ifstream inFile;
    inFile.open(File);
    if (inFile.fail()) {
        cerr << "Pokemon Skill Data Missing" << endl;
        exit(1);
    }
    string skillString;
    while (!inFile.eof()) {
        inFile >> skillString;
        if (skillMatch(skillNum,skillString)) {
            return skillString;
        }
    }

}

bool PokemonSkillReader::skillMatch(int skillNum, string skillString) {
    string skillNUM = skillString.substr(0,3);
    int skillSerialNum = atoi(skillNUM.c_str());
    return skillSerialNum == skillNum;
}

