#include "Unit.h"

Unit::Unit(int level, int experience, int needExperience, int hp, int maxHp, int mp, int maxMp, int physicsDamages, int magicDamages, int criticalProbability, int criticalDamages, int physicsDefense, int magicDefense, int speed){
    this->level = level;
    this->experience = experience;
    this->needExperience = needExperience;
    this->hp = hp;
    this->maxHp = maxHp;
    this->mp = mp;
    this->maxMp = maxMp;
    this->physicsDamages = physicsDamages;
    this->magicDamages = magicDamages;
    this->criticalProbability = criticalProbability;
    this->criticalDamages = criticalDamages;
    this->physicsDefense = physicsDefense;
    this->magicDefense = magicDefense;
    this->speed = speed;
    srand((unsigned int)time(NULL));
}

int Unit::getLevel(){
    return this->level;
}
void Unit::setLevel(int level){
    this->level = level;
}
int Unit::getExperience(){
    return this->experience;
}
void Unit::setExperience(int experience){
    this->experience = experience;
}
int Unit::getNeedExperience(){
    return this->needExperience;
}
void Unit::setNeedExperience(int needExperience){
    this->needExperience = needExperience;
}
int Unit::getHp(){
    return this->hp;
}
void Unit::setHp(int hp){
    this->hp = hp;
}
int Unit::getMaxHp(){
    return this->maxHp;
}
void Unit::setMaxHp(int maxHp){
    this->maxHp = maxHp;
}
int Unit::getMp(){
    return this->mp;
}
void Unit::setMp(int mp){
    this->mp = mp;
}
int Unit::getMaxMp(){
    return this->maxMp;
}
void Unit::setMaxMp(int maxMp){
    this->maxMp = maxMp;
}
int Unit::getPhysicsDamages(){
    return this->physicsDamages;
}
void Unit::setPhysicsDamages(int physicsDamages){
    this->physicsDamages = physicsDamages;
}
int Unit::getMagicDamages(){
    return this->magicDamages;
}
void Unit::setMagicDamages(int magicDamages){
    this->magicDamages = magicDamages;
}
int Unit::getCriticalProbability(){
    return criticalProbability;
}
void Unit::setCriticalProbability(int criticalProbability){
    this->criticalProbability = criticalProbability;
}
int Unit::getCriticalDamages(){
    return this->criticalDamages;
}
void Unit::setCriticalDamages(int criticalDamages){
    this->criticalDamages = criticalDamages;
}
int Unit::getSpeed(){
    return this->speed;
}
void Unit::setSpeed(int speed){
    this->speed = speed;
}
int Unit::getPhysicsDefense(){
    return this->physicsDefense;
}
void Unit::setPhysicsDefense(int physicsDefense){
    this->physicsDefense = physicsDefense;
}
int Unit::getMagicDefense(){
    return this->magicDefense;
}
void Unit::setMagicDefense(int magicDefense){
    this->magicDefense = magicDefense;
}

/*
공격을 당하면 데미지에 따라 자신의 피가 까임
*/
void Unit::attacked(int damage){
    this->setHp(this->hp - damage);
}

/*
턴이 지나면 수정되는 것들
지금은 마나만 있음
*/
void Unit::nextTurn(){
    if(this->mp != this->maxMp){
        this->setMp(this->mp + 1);
    }
}

/*
공격할 데미지를 계산
기본 데미지에서 스킬이면 스킬 데미지 추가, 크확에 따라 크리티컬 데미지 추가
*/
// int Unit::attackDamage(int skill){
//     int damage = this->getDamages();
//     if(skill){
//         damage *= ((float)this->skillDamages/100);
//     }
//     int random = rand() % 100;
//     // cout << random << endl;
//     if(random < this->getCriticalProbability()){
//         damage *= (((float)this->criticalDamages+100)/100);
//     }

//     return damage;
// }