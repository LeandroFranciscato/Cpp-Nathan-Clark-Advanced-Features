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

    virtual void Display() = 0;
};

class Marks {
public:
    int marks1, marks2;

    void showSum() {
        cout << marks1 + marks2 << endl;
    }
};

class Student : public Person, public Marks {
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
    Student student(1, "any student");
    student.Display();
    student.marks1 = 1;
    student.marks2 = 2;
    student.showSum();
    return 0;
}

*/