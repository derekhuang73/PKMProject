//
// Created by Derek Huang on 2020-05-04.
//

#include <fstream>
#include <iostream>
#include <sstream>
#include "TrainerReader.h"
#include "../exception/NullTrainerException.h"
#include <list>


using namespace std;
list<string> TrainerReader::findTrainerWithName(string trainerName) throw (NullTrainerException){
    ifstream inFile;
    inFile.open(File);
    if (inFile.fail()) {
        cerr << "Trainer Data Missing" << endl;
        exit(1);
    }
    string trainerString;
    while (!inFile.eof()) {
        inFile >> trainerString;
        list<string> los = trainerStringSpliter(trainerString);
        std::list<std::string>::iterator it = los.begin();
        if ( *it == trainerName) {
            return los;
        }
    }
    throw NullTrainerException();
}

list<string> TrainerReader::trainerStringSpliter(string trainerString) {
    list<string> list;
    stringstream ss(trainerString);
    string data;
    while (std::getline(ss, data,'/')) {
        list.push_back(data);
    }
    return list;
}

