#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

#include "courseManager.hpp"
CourseManager manager;

const string topics[] = {"English","History","Geography","Math","Physics","Chemistry","Biology"};

string chooseFromTopics(){
    while (true){
        string topicChoice;
        cin >> topicChoice;
        for (size_t i = 0; i < sizeof(topics); ++i ){
            if (topics[i] == topicChoice) return topicChoice;
        }
        cout << "There is no topic named " << topicChoice << endl;
    }
}

Lesson* chooseLesson(){
    manager.displayLessons();
    size_t choice;
    while (true){
        cout << "Choose between 1-9"; //add size
        cin >> choice;
        if (choice <= 9) return manager.getLesson(choice);
    }
}

Author* chooseAuthor(){
    manager.displayAuthors();
    size_t choice;
    while (true){
        cout << "Choose between 1-9: "; //add size
        cin >> choice;
        if (choice <= 9) return manager.getAuthor(choice);
    }
}

Lecturer* chooseLecturer(){
    manager.displayLecturers();
    size_t choice;
    while (true){
        cout << "Choose between 1-9: "; //add size
        cin >> choice;
        if (choice <= 9) return manager.getLecturer(choice);

    }
}

Book* chooseBook(){
    manager.displayBooks();
    size_t choice;
    while (true){
        cout << "Choose between 1-9"; //add size
        cin >> choice;
        if (choice <= 9) return manager.getBook(choice);
    }
}

Classroom* chooseClassroom(){
    manager.displayLessons();
    size_t choice;
    while(true){
        cout << "Choose between 1-9";
        cin >> choice;
        if (choice <= 9) return manager.getClassroom(choice);
    }
}

int action(){
    cout << "Please choose between 1-9" << endl
    << "1. Add a lecturer" << endl
    << "2. Add a author" << endl
    << "3. Create a book" << endl
    << "4. Create new lesson" << endl
    << "5. Create new classroom" << endl
    << "6. Edit lesson" << endl;
     // add view choices.
    int choice;
    cin >> choice; //  check is it between that numbers
    return choice; 
}

void addLecturer(){
    string name;
    cout << "Choose lecturer name: ";
    cin >> name;
    Lecturer* newLecturer = new Lecturer(name);
    manager.addLecturer(newLecturer);
    manager.addTeacher(newLecturer);
}

void addAuthor(){
    string name;
    cout << "Choose author name: ";
    cin >> name;
    Author* newAuthor = new Author(name);
    manager.addAuthor(newAuthor);
    manager.addAuthor(newAuthor);
}

void createBook(){
    string title, topic;
    cout << "Choose book's title name: ";
    cin >> title;
    cout << "Choose" << title << "'s topic: ";
    topic = chooseFromTopics();
    Book* newBook = new Book(title,topic);
    manager.addBook(newBook);
    Author* chosen_author = chooseAuthor();
    chosen_author->addBook(newBook);    
}
void editLesson(Lesson* lesson){
    int choice;
    cout << "Choose between 1-9" << endl //while true
    << "1.Set subject" << endl
    << "2.Set lecturer" << endl
    << "3.Set book" << endl
    << "4.Set classroom" << endl;
    cin >> choice;
    if (choice == 1){
        cout << "Choose subject: ";
        string chosenTopic = chooseFromTopics();
        lesson->setSubject(chosenTopic);
    }
    if (choice == 2){
        cout << "Choose lecturer: ";
        Lecturer* chosenLecturer = chooseLecturer();
        lesson->setLecturer(chosenLecturer);
        chosenLecturer->addLesson(lesson);
    }
    if (choice == 3){
        cout << "Choose book: ";
        Book* chosenBook = chooseBook();
        lesson->setBook(chosenBook);
    }
    if (choice == 4){
        cout << "Choose classroom: ";
        Classroom* chosenClassroom = chooseClassroom();
        lesson->setClassroom(chosenClassroom);
        chosenClassroom->addLesson(lesson);
    }
}

void createLesson(){
    string name;
    cout << "Choose lesson's name";
    cin >> name;
    Lesson* newLesson = new Lesson(name);
    manager.addLesson(newLesson);
    editLesson(newLesson);
}

void createClassroom(){
    string name;
    cout << "Choose classroom's name";
    cin >> name;
    Classroom* newClassroom = new Classroom(name);
    manager.addClassroom(newClassroom);
}


int main(){
    cout << "Hello World!" << endl; //Hello World!
    while (true){
        const int choice = action();
        if (choice == 0) return 0;
        else if (choice == 1) addLecturer();
        else if (choice == 2) addAuthor();
        else if (choice == 3) createBook();
        else if (choice == 4) createLesson();
        else if (choice == 5) createClassroom();
        else if (choice == 6){
            Lesson* choosenLesson = chooseLesson();
            editLesson(choosenLesson);
        }
    }
   
    int finito;
    cin >> finito;
}


//    while (true){
//        cout << "Please choose between 1-9"
//        << "0. Back to name"
//        << "1. Add lesson to " << name
//        << "2. Display " << name << "'s all lessons" << endl;
//        
//    }

/*
 Teacher teacher1("Kemal");
    cout << teacher1.getName() << endl; //Kemal
    teacher1.setSkills({ {"Physics", 17} });
    cout << teacher1.getSkill("Physics") << endl;//17

    Book book1("Math101","Math");
    cout << book1.getTopic() << ": " << book1.getTitle() << endl; //Math: Math101 

    Author author1("Luke");
    cout << author1.getName() << endl;//Luke
    author1.setSkills({ {"Math", 17} });
    cout << author1.getSkill("Math") << endl;//17
    author1.addBook(&book1);
    author1.displayBooks();//Luke's books: 1.Math101

    Classroom classroom1("11E");
    cout << classroom1.getClassroomName() << endl;//11E

    Lecturer lecturer1("Kane");
    Lesson lesson1("Math");
    cout << lesson1.getName() << endl; //Math
    lesson1.setLecturer(&lecturer1);
    lecturer1.addLesson(&lesson1);
    lesson1.setBook(&book1);
    lesson1.setClassroom(&classroom1);
    cout << lesson1.getLecturer()->getName() << lesson1.getBook()->getTitle() << lesson1.getClassroom()->getClassroomName() << endl; //KaneMAth10111E
    lecturer1.displayLessons();//Kane's lessons: 1.Kane

*/