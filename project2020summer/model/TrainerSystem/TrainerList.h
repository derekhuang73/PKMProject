//
// Created by Derek Huang on 2021-01-04.
//

#ifndef PROJECT2020SUMMER_TRAINERLIST_H
#define PROJECT2020SUMMER_TRAINERLIST_H


#include <map>
#include "Trainer.h"

class TrainerList {
public:
    std::map<int,Trainer*> TrainerMap;

    TrainerList();

    SDL_Texture* nurse_texture;
    Trainer* nurse;
};


#endif //PROJECT2020SUMMER_TRAINERLIST_H
