#include "courseManager.hpp"

#include "courseManager.hpp"

void CourseManager::addTeacher(Teacher* teacher) {teachers.push_back(teacher);}
void CourseManager::addAuthor(Author* author) {authors.push_back(author);}
void CourseManager::addBook(Book* book) {books.push_back(book);}
void CourseManager::addLecturer(Lecturer* lecturer) {lecturers.push_back(lecturer);}
void CourseManager::addLesson(Lesson* lesson) {lessons.push_back(lesson);}
void CourseManager::addClassroom(Classroom* classroom) {classrooms.push_back(classroom);}

Teacher* CourseManager::getTeacher(string name){
    if (teachers.empty()) {
        cout << "There is no teacher." << endl;
        return nullptr;
    }
    for (size_t i = 0; i < teachers.size(); ++i){
        if (teachers[i]->getName() == name) return teachers[i];
    }
    cout << "There is no teacher  that name." << endl;
    return nullptr;
}

Author* CourseManager::getAuthor(string name) {
    if (authors.empty()) {
        cout << "There is no author." << endl;
        return nullptr;
    }
    for (size_t i = 0; i < authors.size(); ++i) {
        if (authors[i]->getName() == name) return authors[i];
    }
    cout << "There is no author with that name." << endl;
    return nullptr;
}

Book* CourseManager::getBook(string title) {
    if (books.empty()) {
        cout << "There is no book." << endl;
        return nullptr;
    }
    for (size_t i = 0; i < books.size(); ++i) {
        if (books[i]->getTitle() == title) return books[i];
    }
    cout << "There is no book with that title." << endl;
    return nullptr;
}

Lecturer* CourseManager::getLecturer(string name) {
    if (lecturers.empty()) {
        cout << "There is no lecturer." << endl;
        return nullptr;
    }
    for (size_t i = 0; i < lecturers.size(); ++i) {
        if (lecturers[i]->getName() == name) return lecturers[i];
    }
    cout << "There is no lecturer with that name." << endl;
    return nullptr;
}

Lesson* CourseManager::getLesson(string subjectName) {
    if (lessons.empty()) {
        cout << "There is no lesson." << endl;
        return nullptr;
    }
    for (size_t i = 0; i < lessons.size(); ++i) {
        if (lessons[i]->getSubjectName() == subjectName) return lessons[i];
    }
    cout << "There is no lesson with that subject name." << endl;
    return nullptr;
}

Classroom* CourseManager::getClassroom(string classroomName) {
    if (classrooms.empty()) {
        cout << "There is no classroom." << endl;
        return nullptr;
    }
    for (size_t i = 0; i < classrooms.size(); ++i) {
        if (classrooms[i]->getClassroomName() == classroomName) return classrooms[i];
    }
    cout << "There is no classroom with that name." << endl;
    return nullptr;
}


void CourseManager::displayTeachers() const{
    if (teachers.empty()) {
        cout << "There is no teacher." << endl;
        return;
    }
    cout << "Teachers: " << endl;
    for (size_t i = 0; i < teachers.size(); ++i){
        cout << i + 1 << ". " << teachers[i]->getName() << endl; 
    }
}

void CourseManager::displayAuthors() const{
    if (authors.empty()) {
        cout << "There is no author." << endl;
        return;
    }
    cout << "Authors: " << endl;
    for (size_t i = 0; i < authors.size(); ++i) {
        cout << i + 1 << ". " << authors[i]->getName() << endl;
    }
}

void CourseManager::displayBooks() const{
    if (books.empty()) {
        cout << "There is no book." << endl;
        return;
    }
    cout << "Books: " << endl;
    for (size_t i = 0; i < books.size(); ++i) {
        cout << i + 1 << ". " << books[i]->getTitle() << endl;
    }
}

void CourseManager::displayLecturers() const{
    if (lecturers.empty()) {
        cout << "There is no lecturer." << endl;
        return;
    }
    cout << "Lecturers: " << endl;
    for (size_t i = 0; i < lecturers.size(); ++i) {
        cout << i + 1 << ". " << lecturers[i]->getName() << endl;
    }
}

void CourseManager::displayLessons() const{
    if (lessons.empty()) {
        cout << "There is no lesson." << endl;
        return;
    }
    cout << "Lessons: " << endl;
    for (size_t i = 0; i < lessons.size(); ++i){
        cout << i + 1 << ". " << lessons[i]->getSubjectName() << endl;
    }
}

void CourseManager::displayClassrooms() const{
    if (classrooms.empty()) {
        cout << "There is no classroom." << endl;
        return;
    }
    cout << "Classrooms: " << endl;
    for (size_t i = 0; i < classrooms.size(); ++i){
        cout << i + 1 << ". " << classrooms[i]->getClassroomName() << endl;
    }
}