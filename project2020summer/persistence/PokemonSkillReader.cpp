//
// Created by Derek Huang on 2020-04-29.
//

#include <fstream>
#include <cstring>
#include <iostream>
#include <sstream>
#include "PokemonSkillReader.h"
#include "../exception/NullSkillException.h"
using namespace std;

struct  PokemonSkillReader::pokemonSkillSeed PokemonSkillReader::array[110];
int PokemonSkillReader::skillNum;

PokemonSkillReader::pokemonSkillSeed PokemonSkillReader::findSkill(int skillSerialNum) {
    if (skillNum == 0) {
        throw "Skill out of Range!";
    }
    for(int i = 0; i < skillNum; i++) {
        if(array[i].skillSerialNum == skillSerialNum) {
            return array[i];
        }
    }
    throw "Skill not found!";

}

PokemonSkillReader::PokemonSkillReader() {
    ifstream inFile;
    inFile.open(File);
    if (inFile.fail()) {
        cerr << "Pokemon Skill Data Missing" << endl;
        exit(1);
    }
    string skillString;
    int counter = 0;
    while (!inFile.eof()) {
        inFile >> skillString;
        string serialNum, seedPower, seedHitRate, seedType, Name;
        stringstream ss(skillString);
        getline(ss, serialNum, ',');
        getline(ss, seedPower, ',');
        getline(ss, seedHitRate, ',');
        getline(ss, seedType, ',');
        getline(ss, Name, ',');
        array[counter].skillSerialNum = atoi(serialNum.c_str());
        array[counter].power = atoi(seedPower.c_str());
        array[counter].hitRate = atoi(seedHitRate.c_str());
        array[counter].skillType = (PokemonType) ( atoi(seedType.c_str()) - 1 );
        strcpy(array[counter].skillName, Name.c_str());
        counter++;
    }
    skillNum = counter;
    inFile.close();
}

