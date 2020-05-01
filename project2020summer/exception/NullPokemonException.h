//
// Created by Derek Huang on 2020-05-01.
//

#ifndef PROJECT2020SUMMER_NULLPOKEMONEXCEPTION_H
#define PROJECT2020SUMMER_NULLPOKEMONEXCEPTION_H

#include <exception>

using namespace std;

struct NullPokemonException : public exception{

        const char * what () const throw () {
            return "Null Pokemon Exception";
        }
};


#endif //PROJECT2020SUMMER_NULLPOKEMONEXCEPTION_H
