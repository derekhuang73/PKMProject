//
// Created by Derek Huang on 2020-04-24.
//

#include "TrainerBattle.h"
#include "Trainer.h"

TrainerBattle::TrainerBattle(Trainer &trainer1, Trainer &trainer2) : trainer1(trainer1), trainer2(trainer2) {

}

void TrainerBattle::damageResolve(Pokemon subjectPokemon, Pokemon objectPokemon, PokemonSkill skill) {
    if (true) {
        int damage = skill.getPower();
        if (skill.getSkillType() == subjectPokemon.getPokemonType()) {
            damage * 2;
        }
        damage * objectPokemon.typeRestriction(skill.getSkillType());
        objectPokemon.takeDamage(damage);
    }

}


