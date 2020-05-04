//
// Created by Derek Huang on 2020-05-04.
//

#ifndef PROJECT2020SUMMER_NULLTRAINEREXCEPTION_H
#define PROJECT2020SUMMER_NULLTRAINEREXCEPTION_H

#include <exception>

using namespace std;
struct NullTrainerException : public exception{

    const char * what () const throw () {
        return "Null Trainer Exception";
    }
};


#endif //PROJECT2020SUMMER_NULLTRAINEREXCEPTION_H
