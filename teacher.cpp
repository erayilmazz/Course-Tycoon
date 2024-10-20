#include "teacher.hpp"

Teacher::Teacher(const string& name, const unordered_map<string,int>& skills)
        :name(name), skills(skills) {}

string Teacher::get_name() const {return name; }

int Teacher::get_skill(const string& skill) const {return skills[skill];}

unordered_map<string,int> get_skills() const {return skills};