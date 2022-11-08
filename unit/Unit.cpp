#include "Unit.h"

Unit::Unit(int hp, int maxHp, int mp, int maxMp, int skillDamages, int damages, int criticalProbability, int criticalDamages, int avoidance, int defense, int defensiveDecrease){
    this->hp = hp;
    this->maxHp = maxHp;
    this->mp = mp;
    this->maxMp = maxMp;
    this->skillDamages = skillDamages;
    this->damages = damages;
    this->criticalProbability = criticalProbability;
    this->criticalDamages = criticalDamages;
    this->avoidance = avoidance;
    this->defense = defense;
    this->defensiveDecrease = defensiveDecrease;
    srand((unsigned int)time(NULL));
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
int Unit::getSkillDamages(){
    return this->skillDamages;
}
void Unit::setSkillDamages(int skillDamages){
    this->skillDamages = skillDamages;
}
int Unit::getDamages(){
    return this->damages;
}
void Unit::setDamages(int damages){
    this->damages = damages;
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
int Unit::getAvoidance(){
    return this->avoidance;
}
void Unit::setAvoidance(int avoidance){
    this->avoidance = avoidance;
}
int Unit::getDefense(){
    return this->defense;
}
void Unit::setDefense(int defense){
    this->defense = defense;
}
int Unit::getDefensiveDecrease(){
    return this->defensiveDecrease;
}
void Unit::setDefensiveDecrease(int defensiveDecrease){
    this->defensiveDecrease = defensiveDecrease;
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
    if(this->mp == this->maxMp){
        this->setMp(0);
    }
    else{
        this->setMp(this->mp + 1);
    }
}

/*
공격할 데미지를 계산
기본 데미지에서 스킬이면 스킬 데미지 추가, 크확에 따라 크리티컬 데미지 추가
*/
int Unit::attackDamage(int skill){
    int damage = this->getDamages();
    if(skill){
        damage *= ((float)this->skillDamages/100);
    }
    int random = rand() % 100;
    // cout << random << endl;
    if(random < this->getCriticalProbability()){
        damage *= (((float)this->criticalDamages+100)/100);
    }

    return damage;
}

/*
방어율에 따라 받는 데미지 감소
(방어율 감소는 어떻게 계산해야하지?)
*/
int Unit::defenseDamage(int damage){
    damage *= (100.0-this->defense)/100;
    return damage;
}