#ifndef ENEMY_H_
#define ENEMY_H_

#include <iostream>
#include "Unit.h"

using namespace std;

class Enemy : public Unit{
    public:
        Enemy();
        void status();
        void nextRound();

};

#endif