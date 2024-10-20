#include "author.hpp"

#include <iostream>
using std::cout;
using std::endl;

Author::Author(const string& name, unordered_map<string,int>& skills) : Teacher(name,skills) {}

void Author::addBook(const Book& book){books.push_back(book);}

void Author::displayBooks() const {
    if (books.empty()){
        cout << "empty" << endl;
    } else {
        cout << name << "'s books: "<< endl;
        for (size_t i = 0; i < books.size(); ++i){
            cout << i + 1 << ". " << books[i].getTitle() << endl;
        }
    }
}