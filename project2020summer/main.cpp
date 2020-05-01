#include <iostream>
#include "model/Pokemon.h"


int main() {
    using namespace std;
    cout << "Hello, World!" << endl;
    Pokemon p = Pokemon(1);
    p.setUpPokemonWithLV(1,1,0);
    p.addSkillwSerialNum(0);
    p.addSkillwSerialNum(1);
    //PokemonSkill *pks = p.getSkill(0);
    //bool b = (pks == NULL);
    p.addSkillwSerialNum(2);

    cout << "Hello, World!" << endl;



    return 0;
}
