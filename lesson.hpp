#pragma once
 //#include "lecturer.hpp"
#include <string>
using std::string;

class Lecturer;
class Lesson{
private:
    string subject;
    Lecturer lecturer;

public:
    Lesson(const string& subject, const Lecturer& lecturer);
    string getSubjectName() const;
    string getLecturerName() const;
};