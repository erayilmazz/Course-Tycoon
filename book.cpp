#include "book.hpp"

Book::Book(const string& title, const string& topic)
    :title(title), topic(topic){}

string Book::getTitle() const {return title;}
string Book::getTopic() const {return topic;}



