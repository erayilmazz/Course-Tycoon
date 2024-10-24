#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "teacher.hpp"
#include "author.hpp"
#include "book.hpp"
#include "lecturer.hpp"
#include "lesson.hpp"
#include "classroom.hpp"

int main(){
    cout << "Hello World!" << endl;
    Teacher teacher1("Kemal");
    cout << teacher1.getName() << endl;
    //cout << teacher1.getSkill("Physics") << endl;

    Book book1("Math101","Math");
    cout << book1.getTopic() << ":" << book1.getTitle() << endl;

    Author author1("Luke");
    cout << author1.getName() << endl;
    //cout << author1.getSkill("Math") << endl;
    author1.addBook(&book1);
    author1.displayBooks();

    Classroom classroom1("11E");
    classroom1.getClassroomName();

    Lecturer lecturer1("Kane");
    Lesson lesson1("Math");
    cout << lesson1.getSubjectName() << endl;
    lesson1.setLecturer(&lecturer1);
    lesson1.setBook(&book1);
    lesson1.setClassroom(&classroom1);
    cout << lesson1.getLecturer()->getName() << lesson1.getBook()->getTitle() << lesson1.getClassroom()->getClassroomName() << endl;
    lecturer1.displayLessons();

    int choice;
    cin >> choice;
}
