#pragma once 
#include <string>
using std::string;

#include "lecturer.hpp"
#include "book.hpp"


class Classroom{
private:
    Lecturer lecturer;
    Book book;
    string name;

    
public:
    Classroom(const string &name);
    string getClassroomName() const;

    void setClassroomLecturer(Lecturer& classroomLecturer);
    void setClassroomBook(Book& classroomBook);

    string getClassroomLecturer() const;
    string getClassroomBook() const;

    virtual ~Classroom();
};