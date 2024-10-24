#include "classroom.hpp"

Classroom::Classroom(const string& name)
    :name(name) {}

string Classroom::getClassroomName() const{return name;}

void Classroom::setClassroomLecturer(Lecturer& classroomLecturer) {lecturer = classroomLecturer;}
void Classroom::setClassroomBook(Book& classroomBook) {book = classroomBook;}

string Classroom::getClassroomLecturer() const {return lecturer.getName();}
string Classroom::getClassroomBook() const {return book.getTitle();}

Classroom::~Classroom() {}