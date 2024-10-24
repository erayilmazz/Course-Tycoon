#include "classroom.hpp"

Classroom::Classroom(const string& name)
    :name(name) {}

string Classroom::getClassroomName() const{return name;}

void Classroom::addLesson(Lesson* lesson) {lessons.push_back(lesson);}

Classroom::~Classroom() {}