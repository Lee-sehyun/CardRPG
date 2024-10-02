#ifndef UNIT_H_
#define UNIT_H_

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Unit{
    protected:
        int level;
        int experience;
        int needExperience;
        int hp;
        int maxHp;
        int mp;
        int maxMp;
        int physicsDamages;
        int magicDamages;
        int criticalProbability;
        int criticalDamages;
        int speed;
        int physicsDefense;
        int magicDefense;
    
    public:
        Unit(int level, int ecperience, int needEcperience, int hp, int maxHp, int mp, int maxMp, int physicsDamages, int magicDamages, int criticalProbability, int criticalDamages, int physicsDefense, int magicDefense, int speed);
        int getLevel();
        void setLevel(int level);
        int getExperience();
        void setExperience(int experience);
        int getNeedExperience();
        void setNeedExperience(int needExperience);
        int getHp();
        void setHp(int hp);
        int getMaxHp();
        void setMaxHp(int maxHp);
        int getMp();
        void setMp(int mp);
        int getMaxMp();
        void setMaxMp(int maxMp);
        int getPhysicsDamages();
        void setPhysicsDamages(int physicsDamages);
        int getMagicDamages();
        void setMagicDamages(int magicDamages);
        int getCriticalProbability();
        void setCriticalProbability(int criticalProbability);
        int getCriticalDamages();
        void setCriticalDamages(int criticalDamages);
        int getSpeed();
        void setSpeed(int speed);
        int getPhysicsDefense();
        void setPhysicsDefense(int physicsDefense);
        int getMagicDefense();
        void setMagicDefense(int magicDefense);


        void attacked(int damage);
        void nextTurn();
        int attackDamage(int skill);

};

#endif