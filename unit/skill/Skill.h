#ifndef SKILL_H_
#define SKILL_H_

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

struct skill
{
    int skillNumber;
    string skillName;
    string skillKind;
    string skillProperty;
    vector<int> skillProbability;
    string skillDescription;
};


class Skill {
    private:
        vector<skill> skills;

    public:
        Skill();
        void getSkills();
        void printSkills();
};

#endif