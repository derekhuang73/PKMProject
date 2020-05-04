#include <iostream>
#include "model/Pokemon.h"
#include <string>
#include <list>

int main() {
    using namespace std;
    cout << "Hello, World!" << endl;



    Pokemon p = Pokemon(1);
    p.setUpPokemonWithLV(1,1,0);

    p.addSkillwSerialNum(0);
    p.addSkillwSerialNum(1);//set break point A
    p.addSkillwSerialNum(2);//set break point B
    //bug1: skills(the field) of Pokemon p, after point B, two skill2 has been added to skills
    //bug2: skill that added to skills can not display name correctly;


    cout << "Hello, World!" << endl;



    return 0;
}
