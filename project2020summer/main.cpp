#include <iostream>
#include "model/Pokemon.h"
#include "model/Trainer.h"
#include "persistence/TrainerReader.h"
#include "exception/NullTrainerException.h"
#include <string>
#include <list>
string pokeType(PokemonType pt) {
    switch (pt) {
        case 1: return "Fire";
        case 2: return "Water";
        case 3: return "Grass";
        case 4: return "Normal";

    }
}
void pokedex(Pokemon * p) {
    cout << p -> getName()  <<endl;
    cout << "level: "<<p -> getPokemonLevel() << endl;
    cout << "type: " << pokeType(p -> getPokemonType()) <<endl;
}
int main() {
    using namespace std;
    cout << "Hello, World!" << endl;
    string inputStr;
    int trainerLevel;
    int inputInt;
    bool b;


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
            stillNeedToCatchPKM = false;
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
            int pokemonSerialNum = rand()%rang + 1;
            p = new Pokemon(pokemonSerialNum,pokemonLevel);
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







    return 0;
}
