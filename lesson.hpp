#pragma once
#include "lecturer.hpp"
class Classroom;
#include "book.hpp"
#include <string>
using std::string;

class Lesson{
private:
    string subject;
    Lecturer* lecturer;
    Book* book;
    Classroom* classroom; 

public:
    Lesson(const string& subject);
    string getSubjectName() const;

    void setLecturer(Lecturer* lessonLecturer);
    void setBook(Book* lessonBook);
    void setClassroom(Classroom* lessonClassroom);

    Lecturer* getLecturer() const;
    Book* getBook() const;
    Classroom* getClassroom() const;
};