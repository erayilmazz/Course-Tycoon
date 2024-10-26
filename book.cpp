#include "book.hpp"

Book::Book(const string& title, const string& topic)
    : title(title), topic(topic) {}

void Book::setAuthor(Author* bookAuthor) {author = bookAuthor;}
Author* Book::getAuthor() {return author;}
void Book::setTitle(string titleName) {title = titleName;}
string Book::getTitle() const {return title;}
void Book::setTopic(string topicName) {topic = topicName;}
string Book::getTopic() const {return topic;}



