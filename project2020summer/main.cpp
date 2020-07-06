#include <iostream>
#include "model/Pokemon.h"
#include "model/Trainer.h"
#include "persistence/TrainerReader.h"
#include "exception/NullTrainerException.h"
#include "model/TrainerBattle.h"
#include "persistence/PlayerReader.h"
#include <string>
string space = "              ";

string fillString(string str) {
    int length = str.length();
    for (int i = length; i < 50; ++i) {
        str += " ";
    }
    return str;
}
string pokeType(PokemonType pt) {
    switch (pt) {
        case Fire: return "Fire";
        case Water: return "Water";
        case Grass: return "Grass";
        case Normal: return "Normal";
        default: return "Normal";

    }
}

void pokedex(Pokemon * p) {
    cout << p -> getName()  <<endl;
    cout << "level: "<<p -> getPokemonLevel() << endl;
    cout << "type: " << pokeType(p -> getPokemonType()) <<endl;
    cout << "current HP" << p -> getCurrentHp() <<endl;
}

void printOutSkill(PokemonSkill* skill) {
    cout << skill -> getSkillName() <<endl;
    cout << "TYPE: " << pokeType(skill -> getSkillType()) << endl;
    cout << "POWER: " << skill -> getPower() << endl;
    cout <<  "HIT RATE: " << skill -> getHitRate() <<endl;
}

void printOutSwitchOption(Trainer * player) {
    for (int i = 0; i < player->availablePokemon(); ++i) {
        int a = player->availablePokemonIndex().at(i);
            cout << "Pokemon" << a << ": " << endl;
            pokedex(player -> getPokemonWithIndex(a));
            cout << "-------------------------------" << endl;
    }

    cout << "enter the pokemon num" << endl;
}

void printOutEncounter(Pokemon * playerPokemon, Pokemon * cpPokemon) {
    cout << "------------------------------BATTLE SYSTEM DISPLAY---------------------------" << endl;
    cout << fillString("Player:") <<"CP:" << endl;
    cout << fillString("| " + playerPokemon -> getName()) << cpPokemon -> getName() <<endl;
    cout    <<fillString("| Type: " + pokeType(playerPokemon -> getPokemonType()))
            <<"Type: " << pokeType(cpPokemon -> getPokemonType())<<endl;
    cout    << fillString("| HP: " + to_string(playerPokemon -> getCurrentHp()))
            <<"HP: " << cpPokemon->getCurrentHp()<<endl;
    cout    <<"-----------------------------------------------------------------------------" << endl;
}

void printOutSkillOption(Pokemon * playerPokemon) {
    for (int i = 0; i < 4; ++i) {
        PokemonSkill * skill = playerPokemon -> getSkill(i);
        if (skill != NULL) {
            cout << "skill " << i << endl;
            printOutSkill(skill);
            cout << "--------------------------------------" <<endl;
        } else {
            break;
        }
    }

    cout << "enter the skill num" << endl;
}

int main() {
    using namespace std;
    cout << "Hello, World!" << endl;
    PlayerReader *reader = new PlayerReader();
    //Player *test = reader->readPlayerData();

    string inputStr;
    int trainerLevel;
    int inputInt;
    bool b;//mostly used to detected if entered correct string
    Trainer * derek = new Trainer ("derek");

    cout <<  "Please enter your name" <<endl;
    getline(cin,inputStr);
    Trainer * player = new Trainer(inputStr);
    b = true;
    while (b){
        cout << "please enter your level (from 1 to 5)" <<endl;
        getline(cin,inputStr);
        inputInt = atoi(inputStr.c_str());
        if (inputInt <= 5 && inputInt >= 1) {
            trainerLevel = inputInt;
            b = false;
        } else {
            cout << "wrong level" << endl;
        }
    }
    cout<< "welcome to pokemon world" << endl;


    bool stillNeedToCatchPKM = true;
    while (stillNeedToCatchPKM) {
        if (player -> availablePokemon() >= 6) {
            cout << "you already have 6 pokemon! get ready to fight" << endl;
            break;
        }
        cout << "You have " << player -> availablePokemon() << " Pokemon, do you need to catch more?" <<endl;
        cout << "Enter NO if you do not want to catch pokemon anymore" << endl;
        cout << "Enter YES to find random pokemon" << endl;
        getline(cin,inputStr);
        if (inputStr == "NO") {
            stillNeedToCatchPKM = false;
            cout << "you have got pokemon you need, get ready to fight!" << endl;
        } else {
            Pokemon * p;
            int pokemonLevel = (rand() % 10) + trainerLevel*10 - 5;
            int rang = p->SerialNumRange;
            int pokemonSerialNum = (rand()%rang) + 1;
            p = new Pokemon(pokemonSerialNum,pokemonLevel);
            p -> randomGenerateSkills();
            cout << "You encountered a " << p -> getName()  << endl;
            cout << "Pokedex: " << endl;
            pokedex(p);
            cout << "Enter C to catch it, Enter anything else to let it go" <<endl;
            getline(cin,inputStr);
            if (inputStr == "C") {
                player->addPokemon(p);
                cout << "gotcha!!" <<endl;
            } else{
                cout << "it runs away" << endl;
            }}
    }
    TrainerBattle * trainerBattle = new TrainerBattle(player,derek);
    while (!trainerBattle -> checkBattleOver()) {
        Pokemon * playerPokemon = trainerBattle -> getPkmBattle() ->getPlayerPokemon();
        Pokemon * cpPokemon = trainerBattle -> getPkmBattle() ->getCpPokemon();
        PokemonBattle * pokemonBattle = trainerBattle -> getPkmBattle();
        printOutEncounter(playerPokemon,cpPokemon);
        cout    << "Enter 'Skill' to use skill, 'Switch' to switch Pokemon" << endl;
        b = true;
        while (b) {
            getline(cin, inputStr);
            if (inputStr == "Skill") {
                printOutSkillOption(playerPokemon);
                getline(cin,inputStr);
                inputInt = atoi(inputStr.c_str());
                printOutEncounter(playerPokemon,cpPokemon);
                cout << playerPokemon->getName() << " used skill"
                << playerPokemon -> getSkill(inputInt) -> getSkillName() << endl;
                pokemonBattle->playerPokemonAttack(playerPokemon -> getSkill(inputInt));
                if (pokemonBattle -> isMissing()) {
                    cout << "but it missed!" << endl;
                    pokemonBattle -> resetMissing();
                }
                printOutEncounter(playerPokemon,cpPokemon);
                b = false;
            } else if (inputStr == "Switch") {
                printOutSwitchOption(player);
                getline(cin,inputStr);
                inputInt = atoi(inputStr.c_str());
                playerPokemon = player -> getPokemonWithIndex(inputInt);
                trainerBattle->playerSwitchPkm(inputInt);
                cout << "I choose you " << playerPokemon -> getName() << endl;
                b = false;
            } else if (player->availablePokemon() <= 1) {
                cout << "You do not have switch option, please enter 'Skill' to fight" << endl;
            } else {
                cout << "invalid input, try again" << endl;
            }
        }

        if (cpPokemon -> getCurrentHp() <= 0 && !trainerBattle -> checkBattleOver()) {
            cout << cpPokemon -> getName() << " is defeated" <<endl;
            trainerBattle->cpSwitchPokemon();
            cpPokemon = trainerBattle -> getPkmBattle() -> getCpPokemon();
            cout << "derek: GO! " << cpPokemon->getName() << ", I choose you!" << endl;
        } else if (trainerBattle -> checkBattleOver()) {
            cout << "you win!" << endl;
        } else if(cpPokemon->getCurrentHp() > 0) {
            pokemonBattle -> cpPokemonAttack();
            cout << "derek's " << cpPokemon->getName() << " attacked!" << endl;
            if (pokemonBattle->isMissing()) {
                cout << "but it missed!" << endl;
                pokemonBattle -> resetMissing();
            }
        }

        if (playerPokemon -> getCurrentHp() <= 0) {
            printOutEncounter(playerPokemon,cpPokemon);
            cout << playerPokemon->getName() << "is defeated" << endl;
            if (player->availablePokemon() <= 0) {
                break;
            } else {
                cout << "please choose a pokemon to fight!" << endl;
                printOutSwitchOption(player);
                getline(cin, inputStr);
                inputInt = atoi(inputStr.c_str());
                playerPokemon = player->getPokemonWithIndex(inputInt);
                trainerBattle->playerSwitchPkm(inputInt);
                cout << "I choose you " << playerPokemon->getName() << endl;
            }
        }
    }
    cout << "game over, thank you for playing" <<endl;

    return 0;
}
