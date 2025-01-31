//
// Created by Derek Huang on 2020-04-22.
//

#ifndef PROJECT2020SUMMER_TRAINER_H
#define PROJECT2020SUMMER_TRAINER_H


#include <string>
#include "../Pokemon/Pokemon.h"
#include <list>
#include <vector>
#include <SDL.h>
#include <SDL_image.h>
using namespace std;
class Trainer {
public:
    Trainer();

    Trainer(string name);
    //------------------------------------------------------

    const string &getName() const;

    void setName(const string &name);

    //------------------------------------------------------

    //P: return the num of Pokemon that is still fight-able
    int availablePokemon() const;

    //P: add pokemon to pokemonList
    void addPokemon(Pokemon * pokemon);

    //P: get Pokemon With Index
    Pokemon * getPokemonWithIndex(int index);

    //P: return a vector that contain the index of available pokemon
    vector<int> availablePokemonIndex();

    //P: set up trainer with trainer string
    //R: trainer string that return from trainer reader
    void setUpTrainer(list<string> trainerID);

    string words;

    SDL_Texture* trainerImage;

protected:
    string name;

    Pokemon * pokemonList[6] = {};
};


#endif //PROJECT2020SUMMER_TRAINER_H
