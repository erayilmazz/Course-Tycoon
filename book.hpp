#pragma once
#include <string>
using std::string;

class Book{
    protected:
        string title;
        string topic;
    public:
        Book() = default;
        Book(const string& title, const string& topic);

        void setTitle(string titleName);
        string getTitle() const;
        void setTopic(string topicName);
        string getTopic() const;
};