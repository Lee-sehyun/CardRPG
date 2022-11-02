#include "Enemy.h"

Enemy::Enemy():Unit(100, 100, 0, 20, 200, 5, 25, 50, 0, 0, 0){
}

void Enemy::status(){
    cout << "Hp : " << this->hp << "/" << this->maxHp << "\tMp : " << this->mp << "/" << this->maxMp << endl;
}

void Enemy::nextRound(){
    this->setMaxHp(this->getMaxHp()*(1.2));
    this->setHp(this->getMaxHp());
    this->setMp(0);
    this->setDamages(this->getDamages()*(1.1)+1);
}