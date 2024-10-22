#include "classroom.hpp";

Classroom::Classroom(const Lecturer& clasroomLecturer, const Book& classroomBook)
    :classroomLecturer(classroomLecturer), classroomBook(classroomBook){}

string Book::getClass