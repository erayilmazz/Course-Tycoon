#pragma once
#include <books>
using std::vector;

#include <teacher.hpp>

class Author : public Teacher{
private:
    vector<book> books;

public:
    Teacher(const string& name, unordered_map<string,int>& skills);
    void addBook(const string& book);
    void displayBooks() const;
    
};

