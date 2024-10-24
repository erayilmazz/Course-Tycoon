#include "lecturer.hpp"

#include <iostream>
using std::cout;
using std::endl;

Lecturer::Lecturer(const string& name)
        : Teacher(name) {}

void Lecturer::addLesson(Lesson* lesson) {lessons.push_back(lesson);}

void Lecturer::displayLessons() const{
    if (lessons.empty()){
        cout << "empty" << endl;
    } else {
        cout << name <<"'s lessons: "<< endl;
        for (size_t i = 0; i < lessons.size(); ++i){
            cout << i + 1 << ". " << lessons[i]->getLecturerName() << endl;
        }
    }
}