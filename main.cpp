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

int action(){
    cout << "Please choose between 1-9"
    << "1. Add a lecturer"
    << "2. Add a author"
    << "3. Create a book"
    << "4. Create new lesson"
    << "5. Create new classroom" << endl; // add view choices.
    int choice;
    cin >> choice; //  check is it between that numbers
    return choice; 
}

void addLecturer(){
    string name;
    cout << "Choose lecturer name: ";
    cin >> name;
    Lecturer name(name);
}

int main(){
    cout << "Hello World!" << endl; //Hello World!
    const int choice = action();
    if (choice == 1) addLecturer();

    Teacher teacher1("Kemal");
    cout << teacher1.getName() << endl; //Kemal
    teacher1.setSkills({ {"Physics", 17} });
    cout << teacher1.getSkill("Physics") << endl;//17

    Book book1("Math101","Math");
    cout << book1.getTopic() << ": " << book1.getTitle() << endl; //Math: Math101 

    Author author1("Luke");
    cout << author1.getName() << endl;//Luke
    author1.setSkills({ {"Math", 17} });
    cout << author1.getSkill("Math") << endl;//17
    author1.addBook(&book1);
    author1.displayBooks();//Luke's books: 1.Math101

    Classroom classroom1("11E");
    cout << classroom1.getClassroomName() << endl;//11E

    Lecturer lecturer1("Kane");
    Lesson lesson1("Math");
    cout << lesson1.getSubjectName() << endl; //Math
    lesson1.setLecturer(&lecturer1);
    lecturer1.addLesson(&lesson1);
    lesson1.setBook(&book1);
    lesson1.setClassroom(&classroom1);
    cout << lesson1.getLecturer()->getName() << lesson1.getBook()->getTitle() << lesson1.getClassroom()->getClassroomName() << endl; //KaneMAth10111E
    lecturer1.displayLessons();//Kane's lessons: 1.Kane
    int finito;
    cin >> finito;
}


//    while (true){
//        cout << "Please choose between 1-9"
//        << "0. Back to name"
//        << "1. Add lesson to " << name
//        << "2. Display " << name << "'s all lessons" << endl;
//        
//    }