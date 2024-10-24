#pragma once
#include <vector>
using std::vector;

#include "teacher.hpp"
#include "lesson.hpp"

class Lecturer : public Teacher{
private:
    vector<Lesson*> lessons;
public:
    Lecturer() = default;
    Lecturer(const string& name);
    void addLesson(Lesson* lesson);
    void displayLessons() const;
};

//const unordered_map<string,int>& skills
