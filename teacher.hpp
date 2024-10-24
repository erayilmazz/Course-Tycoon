#pragma once
#include <string>
using std::string;

#include <unordered_map>
using std::unordered_map;

class Teacher{
protected:
    string name;
    unordered_map<string, int> skills; //dictionary for teacher's skills for each lessons.

public:
    Teacher() = default;
    Teacher(const string& name);
    virtual ~Teacher() = default;

    void setSkills(unordered_map<string, int> unsetSkills);
    
    string getName() const;
    int getSkill(const string& skill) const; //get specific skill.
    unordered_map<string,int> getSkills() const; //get all skills.
};

//unordered_map<string, int> skills
    