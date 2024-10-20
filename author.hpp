#pragma once
#include <vector>
using std::vector;

#include <teacher.hpp>

class Author : public Teacher{
private:
    vector<book> books;

public:
    Author(const string& name, unordered_map<string,int>& skills);
    void addBook(const string& book);
    void displayBooks() const;

};

