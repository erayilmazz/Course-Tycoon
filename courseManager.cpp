#include "courseManager.hpp"

#include "courseManager.hpp"

void CourseManager::addTeacher(Teacher* teacher) {
    teachers.push_back(teacher);
}
void CourseManager::addAuthor(Author* author) {
    authors.push_back(author);
}
void CourseManager::addBook(Book* book) {
    books.push_back(book);
}
void CourseManager::addLecturer(Lecturer* lecturer) {
    lecturers.push_back(lecturer);
}
void CourseManager::addLesson(Lesson* lesson) {
    lessons.push_back(lesson);
}
void CourseManager::addClassroom(Classroom* classroom) {
    classrooms.push_back(classroom);
}

