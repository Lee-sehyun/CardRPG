#ifndef HERO_H_
#define HERO_H_

#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include "Unit.h"

using namespace std;
using namespace sf;

class Hero : public Unit{
    private:
        string name;
    
    public:
        Hero(string name, vector<int> character = vector<int>(10));
        string getName();
        void setName(int name);


        void status();
        void levelUp();

};

#endif