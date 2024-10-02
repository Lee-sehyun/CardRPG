#include "Skill.h"

Skill::Skill(){

}

void Skill::getSkills(){
    string line, s;
    fstream file;
    file.open("unit/skill/skill.csv");
    while(!file.eof()){
        getline(file, line);
        if(isdigit(line[0]) == 0) continue;
        istringstream ss (line);
        skill one;
        for(int i = 0 ; i < 7 ; i++){
            getline(ss, s, ',');
            if(i == 0){
                one.skillNumber = stoi(s);
            }
            else if(i == 1){
                one.skillName = s;
            }
            else if(i == 2){
                one.skillKind = s;
            }
            else if(i == 3){
                one.skillProbability.push_back(stoi(s));
            }
            else if(i == 4){
                one.skillProbability.push_back(stoi(s));
            }
            else if(i == 5){
                one.skillProperty = s;
            }
            else{
                one.skillDescription = s;
            }
        }
        skills.push_back(one);
        ss.clear();
    }
    file.close();
}

void Skill::printSkills(){
    for(int i = 0 ; i < skills.size() ; i++){
        cout << skills[i].skillNumber << ", " << skills[i].skillName << ", " << skills[i].skillKind << ", " << skills[i].skillProperty << "속성, " << skills[i].skillDescription << endl;
    }
}