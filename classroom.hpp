#pragma once 
#include <string>
using std::string;

#include <vector>
using std::vector;

class Lesson;

class Classroom{
private:
    string name;
    vector<Lesson*> lessons;

public:
    Classroom(const string &name);
    string getClassroomName() const;

    void addLesson(Lesson* lesson);
    virtual ~Classroom();
};