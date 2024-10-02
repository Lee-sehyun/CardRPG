#ifndef ENEMY_H_
#define ENEMY_H_

#include <iostream>
#include "Unit.h"

using namespace std;

class Enemy : public Unit{
    private:
        vector<int> enemyInfo;
        vector<int> bossInfo;
        vector<int> hiddenBossInfo;

    public:
        Enemy();
        void status();
        void nextRound();
        void randomEnemy();
        void randomBoss();
        void randomHiddenBoss();

};

#endif