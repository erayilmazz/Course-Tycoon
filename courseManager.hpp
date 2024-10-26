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
    void addTeacher(Teacher* teacher);
    void addAuthor(Author* author);
    void addBook(Book* book);
    void addLecturer(Lecturer* lecturer);
    void addLesson(Lesson* lesson);
    void addClassroom(Classroom* classroom);
};