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

    
    int choice;
    cin >> choice;
}
