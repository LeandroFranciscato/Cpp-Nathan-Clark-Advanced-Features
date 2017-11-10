#include <iostream>
using namespace std;

class Person {
protected:
    int id;
    string name;
public:

    Person() {

    }

    Person(int pId, string pName) {
        id = pId;
        name = pName;
    }

    void virtual Display() {
        cout << id << endl;
        cout << name << endl;
    }
};

class Student : public Person {
public:

    Student() :
    Person() {
    }

    Student(int pId, string pName) :
    Person(pId, pName) {
    }

    void Display() override {
        cout << "student id: " << id << endl;
        cout << "student name: " << name << endl;
    }
};
/*
int main(int argc, char** argv) {
    Person person(1, "leandro");
    person.Display();

    Student student(2, "leandro");
    student.Display();

    Student anotherStudent(1, "blabla");
    Person *anotherPerson;

    anotherStudent.Display();
    anotherPerson = &anotherStudent;

    //If Person::Display would "virtual",
    // it shows the Student::Display() member function
    //else, it show the Person::Display() member function
     
    anotherPerson->Display();

    return 0;
}
*/
