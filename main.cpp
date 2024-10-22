#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "teacher.hpp"
#include "author.hpp"
#include "book.hpp"
#include "lecturer.hpp"
//#include "lesson.cpp"

int main(){
    cout << "Hello World!" << endl;
    Teacher teacher1("Kemal",{{"Physics", 18},{"Chemistry", 5}});
    cout << teacher1.getName() << endl;
    cout << teacher1.getSkill("Physics") << endl;

    Book book1("Math101","Math");
    cout << book1.getTopic() << ":" << book1.getTitle() << endl;

    Author author1("Luke",{{"Math",13},{"Geometry",12}});
    cout << author1.getName() << endl;
    cout << author1.getSkill("Math") << endl;
    author1.addBook(book1);
    author1.displayBooks();

    Lecturer lecturer1("Kemal",{{"English",13},{"History",12}});

    



    int choice;
    cin >> choice;
}
