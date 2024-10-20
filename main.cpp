#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "teacher.hpp"
#include "author.hpp"
#include "book.hpp"

int main(){
    cout << "Hello World!" << endl;
    Teacher teacher1("Vip Fizik",{{"Physics", 18},{"Chemistry", 5}});
    cout << teacher1.getName() << endl;
    cout << teacher1.getSkill("Physics") << endl;

    Book book1("Vip Fizik Defteri","Physics");
    cout << book1.getTopic() << ":" << book1.getTitle() << endl;


    int choice;
    cin >> choice;
}
