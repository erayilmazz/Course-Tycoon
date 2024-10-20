#pragma once

#include <string>
using std::string;

#include "lecturer.hpp"

class Lesson{
private:
    string subject;
    Lecturer lecturer;

public:
    Lesson(const string& subject, const Lecturer& lecturer);
    string getSubjectName() const;
    string getLecturerName() const;
};