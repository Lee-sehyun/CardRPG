#include <iostream>
#include <stdlib.h>
#include "unit/Hero.h"
#include "unit/Enemy.h"
#include "unit/skill/Skill.h"

using namespace std;

int main(){

    Skill skills;
    skills.getSkills();
    skills.printSkills();

    return 0;
}

// int main(){

//     /*
//     기본 능력치가 필요함.
//     hp : 200
//     mp (스킬을 쓸 때 필요한 포인트 공격 한번당 1 씩 차오름) : 10
//     스킬 데미지 : 500
//     공격력 : 10
//     공속 (이 공속을 어떻게 재야할까...) : ??? 일단 빼
//     치명타 확률 : 25%
//     치명타 피해량 : 50%
//     회피율 : 0
//     방어력? : 0
//     방어력 감소 : 0
    

//     스킬들이 필요함

//     스킬을 얻는 건 언제부터?
//     스킬은 뭐뭐가 필요할까?

//     상대가 필요함
//     1라운드
//     hp : 100
//     mp : 20
//     스킬 데미지 : 200
//     공격력 : 5
//     방어력 : 0
//     치명타 확률 : 25%
//     치명타 피해량 : 50%
//     회피율 : 0
//     방어력? : 0
//     방어력 감소 : 0
//     2라운드
//     .
//     .
//     .
//     N라운드
//     라운드당 hp 20퍼 증가, 공격력 10퍼 증가, (스킬을 1개 얻음)
    
//     생각해볼 사항
//     공속을 어떻게 잴 것인지
//     방어력을 어떻게 적용시킬 것인지
//     방어력 감소는 어떻게 적용시킬 것인지

//     */

//     int temp;
//     int round = 1, skill = 0;
//     string name;
//     cout << "당신의 이름을 입력해주세요. : ";
//     cin >> name;

//     Hero hero(name);
//     Enemy enemy;

//     while(hero.getHp() > 0){
//         system("clear");
//         hero.status();
//         cout << "\n라운드 " << round << endl;
//         enemy.status();

//         if(hero.getMp() == hero.getMaxMp()){
//             cout << "스킬(1)\t방어(2)\t그만하기(0)\t무엇을 할까요?";
//             skill = 1;
//         }
//         else {
//             cout << "공격(1)\t방어(2)\t그만하기(0)\t무엇을 할까요?";
//         }
//         cin >> temp;

//         if(temp == 1){
//             int totalDamage = hero.attackDamage(skill);
//             totalDamage =enemy.defenseDamage(totalDamage);
//             enemy.attacked(totalDamage);
//             skill = 0;
//             int enemyDamage = enemy.attackDamage(0);
//             enemyDamage = hero.defenseDamage(enemyDamage);
//             hero.attacked(enemyDamage);
//             // cout << totalDamage << endl;
//             hero.nextTurn();
//             enemy.nextTurn();
//         }
//         else{
//             break;
//         }
//         if(enemy.getHp() <= 0){
//             enemy.nextRound();
//             round++;
//         }
//     }

//     system("clear");   
//     cout << "죽었습니다." << endl;
//     cout << "최종 라운드 : " << round << endl;


//     return 0;
// }