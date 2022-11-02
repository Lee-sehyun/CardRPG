#ifndef HERO_H_
#define HERO_H_

#include <iostream>
#include <string>
#include "Unit.h"

using namespace std;

class Hero : public Unit{
    private:
        string name;
    
    public:
        Hero(string name);
        string getName();
        void setName(int name);


        void status();

};

#endif