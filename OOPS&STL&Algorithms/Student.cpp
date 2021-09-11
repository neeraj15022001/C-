//
// Created by Neeraj Gupta on 10/09/21.
//
#include <iostream>

using namespace std;

class Student {
public:
    int rollNumber;
private:
    int age;
public:
//    Default and Parametrized Constructor
    Student() {
        cout << "Constructor 1 called" << endl;
        age = 0;
        rollNumber = 0;
    }

    Student(int age) {
        cout << "Constructor 2 called" << endl;
        this->age = age;
        rollNumber = 0;
    }

    Student(int age, int rollNumber) {
        cout << "Constructor 3 called" << endl;
        this->age = age;
        this->rollNumber = rollNumber;
    }

//    Copy Constructor
//    Destructor
    ~Student() {
        cout << "Destructor Called" << endl;
    }

    void display() {
        cout << age << " " << rollNumber << endl;
    }

    int getAge() {
        return age;
    }

    void setAge(int newAge) {
        age = newAge;
    }
};