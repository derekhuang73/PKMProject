//
// Created by Derek Huang on 2020-04-25.
//

#ifndef PROJECT2020SUMMER_TRAINERDATAREADER_H
#define PROJECT2020SUMMER_TRAINERDATAREADER_H

#include <xstring>

using namespace std;
class TrainerDataReader {
    string File = "../data/TrainerData.txt";

    //dummy constructor
    TrainerDataReader();
    //purpose: return the line contain the trainer information;
    string findTrainer(string name);

    //purpose: split trainer data into strings
    list<string> dataSpliter(string data);

};


#endif //PROJECT2020SUMMER_TRAINERDATAREADER_H
