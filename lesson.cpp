#include "lesson.hpp"
#include "classroom.hpp"
Lesson::Lesson(const string& name)
        :name(name) {}

string Lesson::getName() const {return name;}


void Lesson::setSubject(string lessonSubject){subject = lessonSubject;}
void Lesson::setLecturer(Lecturer* lessonLecturer) {lecturer = lessonLecturer;}
void Lesson::setBook(Book* lessonBook) {book = lessonBook;}
void Lesson::setClassroom(Classroom* lessonClassroom) {classroom = lessonClassroom;}

string Lesson::getSubject() const {return subject;}
Lecturer* Lesson::getLecturer() const {return lecturer;}
Book* Lesson::getBook() const {return book;}
Classroom* Lesson::getClassroom() const {return classroom;}