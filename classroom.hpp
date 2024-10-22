#pragma once 
#include <string>
using std::string;

#include "lecturer.hpp"
#include "book.hpp"


class Classroom{
private:
    Lecturer classroomLecturer;
    Book classroomBook;

    
public:
    Classroom(const Lecturer& classroomLecturer, const Lecturer& classroomBook);
    string getClassroomLecturer() const;
    string getClassroomBook() const;
    
}