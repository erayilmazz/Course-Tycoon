#pragma once
#include "lecturer.hpp"
#include "classroom.hpp"
#include "book.hpp"
#include <string>
using std::string;

class Lesson{
private:
    string name;
    string subject;
    Lecturer* lecturer;
    Book* book;
    Classroom* classroom; 

public:
    Lesson(const string& name);
    string getName() const;
    
    void setSubject(string lessonSubject);
    void setLecturer(Lecturer* lessonLecturer);
    void setBook(Book* lessonBook);
    void setClassroom(Classroom* lessonClassroom);

    string getSubject() const;
    Lecturer* getLecturer() const;
    Book* getBook() const;
    Classroom* getClassroom() const;
};