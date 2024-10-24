#include "lesson.hpp"
#include "classroom.hpp"
Lesson::Lesson(const string& subject)
        :subject(subject) {}

string Lesson::getSubjectName() const {return subject;}



void Lesson::setLecturer(Lecturer* lessonLecturer) {lecturer = lessonLecturer;}
void Lesson::setBook(Book* lessonBook) {book = lessonBook;}
void Lesson::setClassroom(Classroom* lessonClassroom) {classroom = lessonClassroom;}


Lecturer* Lesson::getLecturer() const {return lecturer;}
Book* Lesson::getBook() const {return book;}
Classroom* Lesson::getClassroom() const {return classroom;}