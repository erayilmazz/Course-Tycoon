#pragma once
#include <vector>
using std::vector;

#include "teacher.hpp"
#include "book.hpp"

class Author : public Teacher{
private:
    vector<Book*> books;

public:
    Author(const string& name);
    void addBook(Book* book);
    void displayBooks() const;

};

