#include "Hero.h"

Hero::Hero(string name):Unit(200, 200, 0, 10, 500, 10, 25, 50, 0, 0, 0){
    this->name = name;
}

string Hero::getName(){
    return this->name;
}
void Hero::setName(int name){
    this->name = name;
}


void Hero::status(){
    cout << "이름 : " << this->name << endl;
    cout << "Hp : " << this->hp << "/" << this->maxHp << "\tMp : " << this->mp << "/" << this->maxMp << endl;
    cout << "공격력 : " << this->damages << "\t회피율 : " << this->avoidance << "\t스킬 데미지 : " << this->skillDamages << "%" << endl;
    cout << "치명타 확률 : " << this->criticalProbability << "%\t치명타 피해량 : " << this->criticalDamages << "%" << endl;
    cout << "방어력 : " << this->defense << "\t방어력 감소 : " << this->defensiveDecrease << endl;
}