#include "Hero.h"

Hero::Hero(string name, vector<int> charater):Unit(charater[0], charater[0], charater[0], charater[0], charater[0], charater[0], charater[0], charater[0], charater[0], charater[0], charater[0], charater[0], charater[0], charater[0]){
    this->name = name;
}

string Hero::getName(){
    return this->name;
}
void Hero::setName(int name){
    this->name = name;
}


// void Hero::status(){
//     cout << "이름 : " << this->name << endl;
//     cout << "Hp : " << this->hp << "/" << this->maxHp << "\tMp : " << this->mp << "/" << this->maxMp << endl;
//     cout << "공격력 : " << this->damages << "\t회피율 : " << this->avoidance << "\t스킬 데미지 : " << this->skillDamages << "%" << endl;
//     cout << "치명타 확률 : " << this->criticalProbability << "%\t치명타 피해량 : " << this->criticalDamages << "%" << endl;
//     cout << "방어력 : " << this->defense << "\t방어력 감소 : " << this->defensiveDecrease << endl;
// }

/*
level up에 따라 일어나는 일
랜덤 스텟 5 증가
랜덤 스킬 1개
    - 3개 혹은 5개의 랜덤한 스킬을 보여주고 하나 선택 (저장되는 스킬 나오는 확률 적음)
    - 전체에서 랜덤한 스킬 3개 부여
*/
void Hero::levelUp(){

}