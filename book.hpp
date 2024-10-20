#pragma once
#include <string>
using std::string;

class Book{
    protected:
        string title;
        string topic;
    public:
        Book(const string& title, const string& topic);
        string getTitle() const;
        string getTopic() const;
};