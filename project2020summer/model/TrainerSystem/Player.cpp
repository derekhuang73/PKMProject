//
// Created by Derek Huang on 2020-04-22.
//

#include <sstream>
#include "Player.h"

Player::Player(string name) : Trainer(name) {
    level = 1;
}

void Player::setUpPokemons(list<string> curPokemons, list<int> curHealth, list<string> staPokemons, list<int> staHealth) {
    setUpPokemonList(curPokemons, pokemonList);
    setUpPokemonHealth(curHealth, pokemonList);
    setUpPokemonList(staPokemons, stashedPokemonList);
    setUpPokemonHealth(staHealth, stashedPokemonList);
}

void Player::setUpPokemonHealth(list<int> HP, Pokemon* pklist[]) {
    auto it = HP.begin();
    int i = 0;
    while(it != HP.end() && pklist[i] != nullptr) {
            pklist[i]->setCurrentHp(*it);
            i++;
            advance(it, 1);
    }
}

void Player::setUpPokemonList(list<string> PokemonString, Pokemon* pklist[]) {
    auto it = PokemonString.begin();
    int i = 0;
    while (it != PokemonString.end()) {
        try {
            Pokemon* p = new Pokemon();
            p->setPokemonWithID(*it);
            if(pklist[i] == nullptr) {
                pklist[i] = p;
                advance(it,1);
            }
            i++;
        } catch (NullPokemonException) {
            advance(it,1);
        }
    }
}

list<string> Player::getHealthList(Pokemon *pklist[]) {
    int i  = 0;
    auto str = new list<string>;
    while(pklist[i] != nullptr) {
        string pkstr;
        pkstr.append(to_string(pklist[i]->getCurrentHp()));
        str->push_back(pkstr);
        i++;
    }
    return *str;
}

list<string> Player::getPokemonList(Pokemon *pklist[]) {
    int i  = 0;
    auto str = new list<string>;
    while(pklist[i] != nullptr) {
        string pkstr;
        Pokemon pk = *pklist[i];
        pkstr.append(to_string(pk.getSerialNumber()) + ",");
        pkstr.append(to_string(pk.getPokemonLevel()) + ",");
        pkstr.append(to_string(pk.getSkill(0)->getSkillSerialNum())+ ",");
        pkstr.append(to_string(pk.getSkill(1)->getSkillSerialNum())+ ",");
        pkstr.append(to_string(pk.getSkill(2)->getSkillSerialNum())+ ",");
        pkstr.append(to_string(pk.getSkill(3)->getSkillSerialNum()));
        str->push_back(pkstr);
        i++;
    }
    return *str;
}

string Player::listConcat(list<string> ss) {
    string str;
    for(string it: ss) {
        str.append(it+"/");
    }
    return str;
}

string Player::getPokemons() {
    string str;
    str.append(listConcat(getPokemonList(pokemonList)) + "\n");
    str.append(listConcat(getHealthList(pokemonList)) + "\n");
    str.append(listConcat(getPokemonList(stashedPokemonList)) + "\n");
    str.append(listConcat(getHealthList(stashedPokemonList)) + "\n");
    return str;
}


