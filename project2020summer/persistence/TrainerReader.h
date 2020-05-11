//
// Created by Derek Huang on 2020-05-04.
//

#ifndef PROJECT2020SUMMER_TRAINERREADER_H
#define PROJECT2020SUMMER_TRAINERREADER_H

#include <string>
#include <list>
#include "../exception/NullTrainerException.h"

using namespace std;
class TrainerReader {
    string File = "../data/TrainerData.txt";
public:
    //P:Read File, Find Trainer, return the line with given trainer name
    //  or throw Exception if not found
    list<string> findTrainerWithName(string trainerName)throw(NullTrainerException);

    //P: split the line that contain trainer information into pieces
    list<string> trainerStringSpliter(string trainerString);
};


#endif //PROJECT2020SUMMER_TRAINERREADER_H
