#include "teacher.hpp"
#include "author.hpp"
#include "book.hpp"
#include "lecturer.hpp"
#include "lesson.hpp"
#include "classroom.hpp"
#include <vector>
using std::vector;

class CourseManager{
private:
    vector <Teacher*> teachers;
    vector <Author*> authors;
    vector <Book*> books;
    vector <Lecturer*> lecturers;
    vector <Lesson*> lessons;
    vector <Classroom*> classrooms;
public:
    void addTeacher(const Teacher* teacher);
    void addAuthor(const Author* author);
    void addBook(const Book* book);
    void addLecturer(const Lecturer* lecturer);
    void addLesson(const Lesson* lesson);
    void addClassroom(const Classroom* classroom);

};