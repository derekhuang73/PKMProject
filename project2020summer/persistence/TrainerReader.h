//
// Created by Derek Huang on 2020-05-04.
//

#ifndef PROJECT2020SUMMER_TRAINERREADER_H
#define PROJECT2020SUMMER_TRAINERREADER_H

#include <string>
#include <list>

using namespace std;
class TrainerReader {
    string File = "../data/TrainerData.txt";
public:
    list<string> findTrainerWithName(string trainerName);
    list<string> trainerStringSpliter(string trainerString);
};


#endif //PROJECT2020SUMMER_TRAINERREADER_H
