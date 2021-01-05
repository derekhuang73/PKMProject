//
// Created by Derek Huang on 2021-01-04.
//

#include "TrainerList.h"
#include "../UI_feature/TextureManager.h"

TrainerList::TrainerList() {
    nurse = new Trainer();
    nurse->words = "welcome to Pokemon Center";
    nurse_texture = TextureManager::LoadTexture("../assert/nurse.png");
    nurse->trainerImage = nurse_texture;
    TrainerMap.insert(pair<int, Trainer*> (1,nurse));
}
