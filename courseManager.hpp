#include "teacher.hpp"
#include "author.hpp"
#include "book.hpp"
#include "lecturer.hpp"
#include "lesson.hpp"
#include "classroom.hpp"

#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;

class CourseManager{
private:
    vector <Teacher*> teachers;
    vector <Author*> authors;
    vector <Book*> books;
    vector <Lecturer*> lecturers;
    vector <Lesson*> lessons;
    vector <Classroom*> classrooms;
public:
    void addTeacher(Teacher* teacher);
    void addAuthor(Author* author);
    void addBook(Book* book);
    void addLecturer(Lecturer* lecturer);
    void addLesson(Lesson* lesson);
    void addClassroom(Classroom* classroom);

    int teacherCount();
    int authorCount();
    int bookCount();
    int lecturerCount();
    int lessonCount();
    int classroomCount();

    Teacher* getTeacher(int num);
    Author* getAuthor(int num);
    Book* getBook(int num);
    Lecturer* getLecturer(int num);
    Lesson* getLesson(int num);
    Classroom* getClassroom(int num);

    void displayTeachers() const;
    void displayAuthors() const;
    void displayBooks() const;
    void displayLecturers() const;
    void displayLessons() const;
    void displayClassrooms() const;
};