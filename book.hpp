#pragma once
#include <string>
using std::string;

class Book{
    protected:
        string name;
        string subject;
    public:
        Book(const string& name, const string& subject);
        string getName() const;
        string getSubject() const;
};