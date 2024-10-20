#include "teacher.hpp"

Teacher::Teacher(const string& name, const unordered_map<string,int>& skills)
        :name(name), skills(skills) {}

string Teacher::getName() const {return name; }

int Teacher::getSkill(const string& skill) const {return skills[skill];}

unordered_map<string,int> getSkills() const {return skills};