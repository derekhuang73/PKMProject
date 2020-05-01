//
// Created by Derek Huang on 2020-05-01.
//

#ifndef PROJECT2020SUMMER_NULLSKILLEXCEPTION_H
#define PROJECT2020SUMMER_NULLSKILLEXCEPTION_H

#include <exception>

using namespace std;
struct NullSkillException : public exception{

    const char * what () const throw () {
        return "Null Skill Exception";
    }
};


#endif //PROJECT2020SUMMER_NULLSKILLEXCEPTION_H
