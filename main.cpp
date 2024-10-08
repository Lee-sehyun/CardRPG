#include <iostream>
#include <stdlib.h>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "unit/Hero.h"
#include "unit/Enemy.h"
#include "unit/Character.h"
#include "unit/skill/Skill.h"

#include <codecvt>
#include <locale>

using namespace std;
using namespace sf;

vector<int> getHeroStatus();
wstring s2w(string);

int main(){

    int temp;
    int round = 1, skill = 0;
    string name;
    cout << "당신의 이름을 입력해주세요. : ";
    cin >> name;

    // vector<int>heroStatus = {1, 0, 500, 100, 100, 10, 10, 20, 20, 0, 100, 10, 10, 10};
    Hero hero(name, vector<int>(14));

    RenderWindow window(VideoMode(640, 480), "CARD_RPG");
    window.setFramerateLimit(60);  //프레임 비율 설정

    Music playMusic;
    // playMusic.openFromFile("resources/music.ogg");

    Font font;
    font.loadFromFile("resources/CookieRun Black.ttf");

    Text nameText;
    nameText.setFont(font);
    nameText.setString(s2w(hero.getName()));
    nameText.setCharacterSize(12);
    nameText.setFillColor(Color::Black);
    nameText.setPosition(80.f, 330.f);

    Text text1, text2, text3, text4, text5;
    text1.setFont(font);
    text1.setString(s2w("LV: " + to_string(hero.getLevel())));
    text1.setCharacterSize(12);
    text1.setFillColor(Color::Black);
    text1.setPosition(40.f, 380.f);

    text2.setFont(font);
    text2.setString(s2w("체력: " + to_string(hero.getHp()) + "/" + to_string(hero.getMaxHp()) + "    마나: " + to_string(hero.getMp()) + "/" + to_string(hero.getMaxMp())));
    text2.setCharacterSize(12);
    text2.setFillColor(Color::Black);
    text2.setPosition(40.f, 400.f);

    text3.setFont(font);
    text3.setString(s2w("공격력: " + to_string(hero.getPhysicsDamages()) + "    마력: " + to_string(hero.getMagicDamages())));
    text3.setCharacterSize(12);
    text3.setFillColor(Color::Black);
    text3.setPosition(40.f, 420.f);

    text4.setFont(font);
    text4.setString(s2w("방어력: " + to_string(hero.getPhysicsDefense()) + "    마방" + to_string(hero.getMagicDefense())));
    text4.setCharacterSize(12);
    text4.setFillColor(Color::Black);
    text4.setPosition(40.f, 440.f);

    text5.setFont(font);
    text5.setString(s2w("속도: " + to_string(hero.getSpeed())));
    text5.setCharacterSize(12);
    text5.setFillColor(Color::Black);
    text5.setPosition(40.f, 460.f);

    // playMusic.play();

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }




        window.clear(Color::White);
        window.draw(nameText);
        window.draw(text1);
        window.draw(text2);
        window.draw(text3);
        window.draw(text4);
        window.draw(text5);
        window.display();
    }





    // Enemy enemy;

    // while(hero.getHp() > 0){
    //     system("clear");
    //     hero.status();
    //     cout << "\n라운드 " << round << endl;
    //     enemy.status();

    //     if(hero.getMp() == hero.getMaxMp()){
    //         cout << "스킬(1)\t방어(2)\t그만하기(0)\t무엇을 할까요?";
    //         skill = 1;
    //     }
    //     else {
    //         cout << "공격(1)\t방어(2)\t그만하기(0)\t무엇을 할까요?";
    //     }
    //     cin >> temp;

    //     if(temp == 1){
    //         int totalDamage = hero.attackDamage(skill);
    //         totalDamage =enemy.defenseDamage(totalDamage);
    //         enemy.attacked(totalDamage);
    //         skill = 0;
    //         int enemyDamage = enemy.attackDamage(0);
    //         enemyDamage = hero.defenseDamage(enemyDamage);
    //         hero.attacked(enemyDamage);
    //         // cout << totalDamage << endl;
    //         hero.nextTurn();
    //         enemy.nextTurn();
    //     }
    //     else{
    //         break;
    //     }
    //     if(enemy.getHp() <= 0){
    //         enemy.nextRound();
    //         round++;
    //     }
    // }

    // system("clear");   
    // cout << "죽었습니다." << endl;
    // cout << "최종 라운드 : " << round << endl;


    return 0;
}

wstring s2w(string s){
    return wstring_convert<codecvt_utf8<wchar_t> >().from_bytes(s);
}

// vector<int> getHeroStatus(){
    
// }