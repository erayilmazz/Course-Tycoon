#pragma once
#include <string>
using std::string;
class Author;

class Book{
    protected:
        string title;
        string topic;
        Author* author;
    public:
        Book() = default;
        Book(const string& title, const string& topic);

        void setAuthor(Author* bookAuthor);
        Author* getAuthor();
        void setTitle(string titleName);
        string getTitle() const;
        void setTopic(string topicName);
        string getTopic() const;
};