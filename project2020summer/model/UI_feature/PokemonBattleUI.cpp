//
// Created by Derek Huang on 2021-01-05.
//

#include <iostream>
#include "PokemonBattleUI.h"
#include "TextureManager.h"

void PokemonBattleUI::updatePKMB() {
    pokemonBattle = game->pokemonBattle;

}

PokemonBattleUI::PokemonBattleUI() {
    BG = TextureManager::LoadTexture("../assert/BG.png");
    highlight = TextureManager::LoadTexture("../assert/highlight.png");
    hint_Text = TextureManager::LoadTexture("../assert/hint_block.png");
    option = TextureManager::LoadTexture("../assert/Options.png");
    hpTube = TextureManager::LoadTexture("../assert/hpTube.png");
    hpRed  = TextureManager::LoadTexture("../assert/hpRed.png");
    hpGr =   TextureManager::LoadTexture("../assert/hpGr.png");
    battleStage = 0;
    isChoosingSkill = false;
    optionHighlight = 0;
}

void PokemonBattleUI::render_pokemons() {
     int i;
     playerPKM = pokemonBattle->getPlayerPokemon();
     opPkm = pokemonBattle->getCpPokemon();
     i = playerPKM->getSerialNumber();
     auto itr = game->pokemonTextureMap->textureMap.find(i);
     if (itr==game->pokemonTextureMap->textureMap.end()) { return;}
     playerPKM_T = itr->second;
     i = opPkm->getSerialNumber();
     itr = game->pokemonTextureMap->textureMap.find(i);
     if (itr==game->pokemonTextureMap->textureMap.end()) { return;}
     OP_PKM_T = itr->second;
     //below render the player pokemon
     src.x = 0;
     src.y = 32;//since we need the back of the pokemon
     src.w = src.h = 32;
     dest.x = 0;
     dest.y = game->window_height * 1 / 5;
     dest.w = game->window_width / 2;
     dest.h = game->window_height * 11 / 20; // (1- (1/5) - (1/4));
     TextureManager::Draw(playerPKM_T,src,dest);
     //below render the op pokemon
     src.x = src.y = 0;
     src.w = src.h = 32;
     dest.x = game->window_width / 2;
     dest.y = 0;
     dest.w = game->window_width /2;
     dest.h = game->window_height * 11 / 20; //(1- (1/5) - (1/4));
     TextureManager::Draw(OP_PKM_T,src,dest);
}

void PokemonBattleUI::render_menu() {
    dest.x = game->window_width / 2;
    dest.y = game->window_height * 3 / 4;
    dest.w = game->window_width / 2;
    dest.h = game->window_height / 4;
    src.x = src.y = 0;
    src.w = src.h = 32;
    TextureManager::Draw(option,src,dest);
    string str0,str1,str2,str3;
    str3 = str2 =str1 = str0 = "empty now";
    if (isChoosingSkill) {
        PokemonSkill* pokemonSkill;
        pokemonSkill = playerPKM->getSkill(0);
        if (pokemonSkill) {
            str0 = pokemonSkill->getSkillName();
        }
        pokemonSkill = playerPKM->getSkill(1);
        if (pokemonSkill) {
            str1 = pokemonSkill->getSkillName();
        }
        pokemonSkill = playerPKM->getSkill(2);
        if (pokemonSkill) {
            str2 = pokemonSkill->getSkillName();
        }
        pokemonSkill = playerPKM->getSkill(3);
        if (pokemonSkill) {
            str3 = pokemonSkill->getSkillName();
        }
    } else {
        str0 = "Skill";
        str1 = "Pokemon";
        str2 = "Bag";
        str3 = "RunAway";
    }
    int texW;
    int texH;

    SDL_Texture* TextTexture = TextureManager::LoadTextTexture(str0);
    SDL_QueryTexture(TextTexture, nullptr, nullptr, &texW, &texH);
    dest.x = game->window_width / 2  +THICKNESS;
    dest.y = game->window_height * 3/4  + THICKNESS;
    dest.h = texH;
    dest.w = texW;
    TextureManager::Draw(TextTexture,dest);

    TextTexture = TextureManager::LoadTextTexture(str1);
    SDL_QueryTexture(TextTexture, nullptr, nullptr, &texW, &texH);
    dest.x = game->window_width*3/4  + THICKNESS;
    dest.y = game->window_height*3/4  + THICKNESS;
    dest.h = texH;
    dest.w = texW;
    TextureManager::Draw(TextTexture,dest);

    TextTexture = TextureManager::LoadTextTexture(str2);
    SDL_QueryTexture(TextTexture, nullptr, nullptr, &texW, &texH);
    dest.x = game->window_width / 2  + THICKNESS;
    dest.y = game->window_height*7/8  + THICKNESS;
    dest.h = texH;
    dest.w = texW;
    TextureManager::Draw(TextTexture,dest);

    TextTexture = TextureManager::LoadTextTexture(str3);
    SDL_QueryTexture(TextTexture, nullptr, nullptr, &texW, &texH);
    dest.x = game->window_width*3/4  + THICKNESS;
    dest.y = game->window_height*7/8  + THICKNESS;
    dest.h = texH;
    dest.w = texW;
    TextureManager::Draw(TextTexture,dest);
}

void PokemonBattleUI::render_hint() {
    dest.x = 0;
    dest.y = game->window_height * 3 / 4;
    dest.w = game->window_width / 2;
    dest.h = game->window_height / 4;
    src.x = src.y = 0;
    src.w = src.h = 32;
    TextureManager::Draw(hint_Text,src,dest);

    string hint = "";
    int texW = 0;
    int texH = 0;
    SDL_Texture *TextTexture;

    if (isChoosingSkill){
        PokemonSkill *pokemonSkill = playerPKM->getSkill(optionHighlight);
        if (pokemonSkill) {
            string name = pokemonSkill->getSkillName();
            string type,power;
            switch (pokemonSkill->getSkillType()) {
                case Fire: type = "TYPE: FIRE"; break;
                case Water: type = "TYPE: WATER"; break;
                case Grass: type = "TYPE: GRASS"; break;
                default: break;
            }
            power = "POWER: ";
            power += to_string(pokemonSkill->getPower());

            TextTexture = TextureManager::LoadTextTexture(name);
            SDL_QueryTexture(TextTexture, nullptr, nullptr, &texW, &texH);
            dest.x = 0  + THICKNESS;
            dest.y = game->window_height*3/4  +  THICKNESS;
            dest.h = texH;
            dest.w = texW;
            TextureManager::Draw(TextTexture,dest);

            dest.y += dest.h;
            TextTexture = TextureManager::LoadTextTexture(type);
            SDL_QueryTexture(TextTexture, nullptr, nullptr, &texW, &texH);
            dest.h = texH;
            dest.w = texW;
            TextureManager::Draw(TextTexture,dest);

            dest.y += dest.h;
            TextTexture = TextureManager::LoadTextTexture(power);
            SDL_QueryTexture(TextTexture, nullptr, nullptr, &texW, &texH);
            dest.h = texH;
            dest.w = texW;
            TextureManager::Draw(TextTexture,dest);
        }
    } else {
        hint = "GO!";
        TextTexture = TextureManager::LoadTextTexture(hint);
        SDL_QueryTexture(TextTexture, nullptr, nullptr, &texW, &texH);
        dest.x = 0  + 4*THICKNESS;
        dest.y = game->window_height*3/4  +  2*THICKNESS;
        dest.h = texH;
        dest.w = texW;
        TextureManager::Draw(TextTexture,dest);
    }
}

void PokemonBattleUI::render_option_highlight() {
    src.x = src.y = 0;
    src.w = src.h = 32;
    dest.w = (game->window_width / 4);
    dest.h = (game->window_height / 8);
    switch (optionHighlight) {
        case 0:
            dest.x = game->window_width * 1/2;
            dest.y = game->window_height * 3/4;
            break;
        case 1:
            dest.x = game->window_width * 3/4;
            dest.y = game->window_height * 3/4;
            break;
        case 2:
            dest.x = game->window_width * 1/2;
            dest.y = game->window_height * 7/8; //3/4 + 1/8;
            break;
        case 3:
            dest.x = game->window_width * 3/4;
            dest.y = game->window_height * 7/8; //(3/4 + 1/8);
            break;
        default:
            cout<< " op default" <<endl;
            dest.x = game->window_width * 1/2;
            dest.y = game->window_height * 3/4;
            break;
    }
    TextureManager::Draw(highlight,src,dest);
}

void PokemonBattleUI::render_BackGround() {
    src.x = src.y = 0;
    src.w = src.h = 32;
    dest.x = 0;
    dest.y = 0;
    dest.w = game->window_width;
    dest.h = game->window_height;
    TextureManager::Draw(BG,src,dest);
}

void PokemonBattleUI::battleUpdate() {
    switch (battleStage) {
        case 0:
            if (game->is_Pokemon_Battle) {
                opPkm->setCurrentHp(opPkm->getInitialHealth());//!!! This line used for test only
                battleStage = 1;
            }
            break;
        case 1:
            pokemonBattle->resetMissing();
            pokemonBattle->setPlayerPkMskill(nullptr);
            pokemonBattle->setCpPkMskill(nullptr);
            isChoosingSkill = false;
            optionHighlight = 0;
            battleStage = 2;
            break;
        case 2:
            if (pokemonBattle->getPlayerPkMskill()) {
                string str = playerPKM->getName();
                str += " used ";
                str += pokemonBattle->getPlayerPkMskill()->getSkillName();
                game->displayMessage(str);
                battleStage = 3;
            } else {
                if (!game->is_Pokemon_Battle) {
                    battleStage = 0;
                }
            }
            break;
        case 3:
            if (pokemonBattle->getPlayerPkMskill()) {
                pokemonBattle->playerPokemonAttack(pokemonBattle->getPlayerPkMskill());
                if (pokemonBattle->isMissing()) {
                    game->displayMessage("But it missed!");
                    pokemonBattle->resetMissing();
                }
                battleStage = 4;
            }
            break;
        case 4:
            if (!pokemonBattle->checkGameOver()) {
                PokemonSkill* skill = pokemonBattle->cpPokemonGetSkill();
                pokemonBattle->setCpPkMskill(skill);
                string str = pokemonBattle->getCpPokemon()->getName();
                str += " used ";
                str += skill->getSkillName();
                game->displayMessage(str);
                battleStage = 5;
            } else {
                game->displayMessage("Battle is over, you win!");
                game->is_Pokemon_Battle = false;
                battleStage = 0;
            }

            break;
        case 5:
            pokemonBattle->cpPokemonAttack(pokemonBattle->getCpPkMskill());
            if (pokemonBattle->isMissing()) {
                game->displayMessage("But it missed!");
                pokemonBattle->resetMissing();
            }
            battleStage = 6;
            break;
        case 6:
            if (pokemonBattle->checkGameOver()) {
                game->displayMessage("Battle is over, you lose!");
                game->is_Pokemon_Battle = false;
                battleStage = 0;
            } else {
                battleStage = 1;
            }
            break;


    }
}

void PokemonBattleUI::select() {
    if(isChoosingSkill) {
        pokemonBattle->setPlayerPkMskill(playerPKM->getSkill(optionHighlight));
        optionHighlight =0;
    } else {
        switch (optionHighlight) {
            case 0: isChoosingSkill = true; break;
            case 1: game->displayMessage("Switching pokemon is not available yet!"); break;
            case 2: game->displayMessage("using items is not available yet!"); break;
            case 3:
                game->displayMessage("you run away from the battle!");
                game->is_Pokemon_Battle = false;
                break;
        }
        optionHighlight = 0;
    }
}

void PokemonBattleUI::render_Battle() {
    render_BackGround();
    render_pokemons();
    render_hp_info();
    render_menu();
    render_hint();
    render_option_highlight();
}

void PokemonBattleUI::update(Game &game) {
   PokemonBattleUI::game = &game;
   updatePKMB();
   if (!game.isMessageDisplaying) {
       battleUpdate();
   }
}

void PokemonBattleUI::render_hp_info() {
    src.x = src.y = 0;
    src.w = src.h = 32;
    int hp1 = playerPKM->getCurrentHp();
    int hp2 = opPkm->getCurrentHp();
    int hp3 = playerPKM->getInitialHealth();
    int hp4 = opPkm->getInitialHealth();

    dest.x = 0;
    dest.y = 0;
    dest.w = game->window_width / 2;
    dest.h = game->window_height / 5;
    TextureManager::Draw(hpGr,src,dest);
    dest.w = game->window_width / 2 * hp1 / hp3;
    TextureManager::Draw(hpRed,src,dest);
    dest.w = game->window_width / 2;
    TextureManager::Draw(hpTube,src,dest);

    dest.x = game->window_width/2;
    dest.y = game->window_height*11/20;
    dest.h =dest.h = game->window_height / 5;
    dest.w = game->window_width / 2;
    TextureManager::Draw(hpGr,src,dest);
    dest.w = game->window_width / 2 * hp2 / hp4;
    TextureManager::Draw(hpRed,src,dest);
    dest.w = game->window_width / 2;
    TextureManager::Draw(hpTube,src,dest);
}
