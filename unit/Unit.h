#ifndef UNIT_H_
#define UNIT_H_

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Unit{
    protected:
        int hp;
        int maxHp;
        int mp;
        int maxMp;
        int skillDamages;
        int damages;
        int criticalProbability;
        int criticalDamages;
        int avoidance;
        int defense;
        int defensiveDecrease;
    
    public:
        Unit(int hp, int maxHp, int mp, int maxMp, int skillDamages, int damages, int criticalProbability, int criticalDamages, int avoidance, int defense, int defensiveDecrease);
        int getHp();
        void setHp(int hp);
        int getMaxHp();
        void setMaxHp(int maxHp);
        int getMp();
        void setMp(int mp);
        int getMaxMp();
        void setMaxMp(int maxMp);
        int getSkillDamages();
        void setSkillDamages(int skillDamages);
        int getDamages();
        void setDamages(int damages);
        int getCriticalProbability();
        void setCriticalProbability(int criticalProbability);
        int getCriticalDamages();
        void setCriticalDamages(int criticalDamages);
        int getAvoidance();
        void setAvoidance(int avoidance);
        int getDefense();
        void setDefense(int defense);
        int getDefensiveDecrease();
        void setDefensiveDecrease(int defensiveDecrease);


        void attacked(int damage);
        void nextTurn();
        int attackDamage(int skill);
        int defenseDamage(int damage);

};

#endif