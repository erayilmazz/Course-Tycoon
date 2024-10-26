#include "courseManager.hpp"

#include "courseManager.hpp"

void CourseManager::addTeacher(Teacher* teacher) {teachers.push_back(teacher);}
void CourseManager::addAuthor(Author* author) {authors.push_back(author);}
void CourseManager::addBook(Book* book) {books.push_back(book);}
void CourseManager::addLecturer(Lecturer* lecturer) {lecturers.push_back(lecturer);}
void CourseManager::addLesson(Lesson* lesson) {lessons.push_back(lesson);}
void CourseManager::addClassroom(Classroom* classroom) {classrooms.push_back(classroom);}

Teacher* CourseManager::getTeacher(int num) {
    if (teachers.empty()) {
        cout << "There is no teacher." << endl;
        return nullptr;
    }
    if (num > teachers.size()) {
        cout << "Entered a high number" << endl;
        return nullptr;
    }
    return teachers[num];
}

Author* CourseManager::getAuthor(int num) {
    if (authors.empty()) {
        cout << "There is no author." << endl;
        return nullptr;
    }
    if (num > authors.size()) {
        cout << "Entered a high number" << endl;
        return nullptr;
    }
    return authors[num];
}

Book* CourseManager::getBook(int num) {
    if (books.empty()) {
        cout << "There is no book." << endl;
        return nullptr;
    }
    if (num > books.size()) {
        cout << "Entered a high number" << endl;
        return nullptr;
    }
    return books[num];
}

Lecturer* CourseManager::getLecturer(int num) {
    if (lecturers.empty()) {
        cout << "There is no lecturer." << endl;
        return nullptr;
    }
    if (num > lecturers.size()) {
        cout << "Entered a high number" << endl;
        return nullptr;
    }
    return lecturers[num];
}

Lesson* CourseManager::getLesson(int num) {
    if (lessons.empty()) {
        cout << "There is no lesson." << endl;
        return nullptr;
    }
    if (num > lessons.size()) {
        cout << "Entered a high number" << endl;
        return nullptr;
    }
    return lessons[num];
}

Classroom* CourseManager::getClassroom(int num) {
    if (classrooms.empty()) {
        cout << "There is no classroom." << endl;
        return nullptr;
    }
    if (num > classrooms.size()) {
        cout << "Entered a high number" << endl;
        return nullptr;
    }
    return classrooms[num];
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