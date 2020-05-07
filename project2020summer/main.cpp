#include <iostream>
#include "model/Pokemon.h"
#include "model/Trainer.h"
#include "persistence/TrainerReader.h"
#include "exception/NullTrainerException.h"
#include <string>
#include <list>

int main() {
    using namespace std;
    cout << "Hello, World!" << endl;

    Trainer derek = Trainer("derek");

    Pokemon p = Pokemon(001);

    Trainer jack = Trainer("jack");
    cout << "Hello, World!" << endl;



    return 0;
}
