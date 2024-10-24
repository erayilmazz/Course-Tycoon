#pragma once
#include <vector>
using std::vector;

#include "teacher.hpp"
#include "lesson.hpp"

class Lecturer : public Teacher{
private:
    vector<Lesson> lessons;
public:
    Lecturer(const string& name);
    void addLesson(const Lesson lesson);
    void displayLessons() const;
};

//const unordered_map<string,int>& skills
