#include <iostream>
#include "model/Pokemon.h"


int main() {
    using namespace std;
    cout << "Hello, World!" << endl;
    Pokemon p = Pokemon();
    p.setUpPokemonWithLV(001,1,1);
    PokemonSkill pks = PokemonSkill(001);
    p.addSkill(pks);
    string s = p.getSkill(0)->getSkillName();
    cout << s << endl;



    return 0;
}
