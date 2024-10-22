#include "lesson.hpp"
#include "lecturer.hpp"

Lesson::Lesson(const string& subject, const Lecturer& lecturer)
        :subject(subject), lecturer(lecturer) {}

string Lesson::getSubjectName() const {return subject;}
string Lesson::getLecturerName() const {return lecturer->getName();}



