#include "Skill.h"

Skill::Skill(){

}

void Skill::getSkills(){
    string line, s;
    ifstream file("unit/skill/skill.txt");
    if(file.is_open()){
        while(getline(file, line)){
            if(isdigit(line[0]) == 0) continue;
            istringstream ss (line);
            skill one;
            for(int i = 0 ; i < 5 ; i++){
                getline(ss, s, '-');
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
                    one.skillProbability.push_back(stoi(s.substr(0, s.find(' '))));
                    one.skillProbability.push_back(stoi(s.substr(s.find(' '))));
                }
                else{
                    one.skillDescription = s;
                }
            }
            skills.push_back(one);
        }
        file.close();
    }
    else{
        cout << "파일 없음" << endl;
    }
}

void Skill::printSkills(){
    for(int i = 0 ; i < skills.size() ; i++){
        cout << skills[i] << " ";
    }
    cout << endl;
}