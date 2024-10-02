#include "Character.h"

Character::Character(){
    string line, s;
    fstream file;
    file.open("unit/캐릭터.csv");
    while(!file.eof()){
        getline(file, line);
        if(isdigit(line[0]) == 0) continue;
        cout << line << endl;
    //     istringstream ss (line);
    //     skill one;
    //     for(int i = 0 ; i < 7 ; i++){
    //         getline(ss, s, ',');
    //         if(i == 0){
    //             one.skillNumber = stoi(s);
    //         }
    //         else if(i == 1){
    //             one.skillName = s;
    //         }
    //         else if(i == 2){
    //             one.skillKind = s;
    //         }
    //         else if(i == 3){
    //             one.skillProbability.push_back(stoi(s));
    //         }
    //         else if(i == 4){
    //             one.skillProbability.push_back(stoi(s));
    //         }
    //         else if(i == 5){
    //             one.skillProperty = s;
    //         }
    //         else{
    //             one.skillDescription = s;
    //         }
    //     }
    //     skills.push_back(one);
    //     ss.clear();
    }
    file.close();
}