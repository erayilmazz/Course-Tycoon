#include "teacher.hpp"

Teacher::Teacher(const string& name)
        :name(name){}

string Teacher::getName() const {return name; }

void Teacher::setSkills(unordered_map<string, int> unsetSkills) {skills = unsetSkills;}

int Teacher::getSkill(const string& skill) const {return skills.at(skill);}

unordered_map<string,int> Teacher::getSkills() const {return skills;}
