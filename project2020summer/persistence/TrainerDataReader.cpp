//
// Created by Derek Huang on 2020-04-25.
//

#include <fstream>
#include <iostream>
#include <list>
#include "TrainerDataReader.h"
using namespace std;

TrainerDataReader::TrainerDataReader() = default;

string TrainerDataReader::findTrainer(string name) {
    ifstream inFile;
    inFile.open(File);
    if (inFile.fail()) {
        cerr << "missing TrainerData file" << endl;
        exit(1);
    }
    string trainerData;
    while (!inFile.eof()) {
        inFile >> trainerData;
        list<string> datalist = dataSpliter(trainerData);
        std::list<std::string>::iterator it = datalist.begin();
        //*************not finished
    }
}

list<string> TrainerDataReader::dataSpliter(string data) {
    list<string> dataList;
    for (int i = 0, pos = 0; i < 7; ++i) {
        int newpos = data.find_first_of("/",pos);
        string s = data.substr(pos,newpos);
        dataList.push_back(s);
        pos = newpos;
    }
}
