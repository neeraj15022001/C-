//
// Created by Neeraj Gupta on 10/09/21.
//

#include <iostream>
using namespace std;

class StudentTwo {
//    int age;
//    int const rollNumber;
//    int &x;
//public:
//    char *name;
//    StudentTwo(int age, char *name, int rollNumber) : rollNumber(rollNumber), x(this->age) {
////        Shallow Copy
//        this->age = age;
////        this->name = name;
//
////        Deep Copy
//        this->name = new char[strlen(name) + 1];
//        strcpy(this->name, name);
//    }
//    StudentTwo(StudentTwo const &s): rollNumber(s.rollNumber), x(this->age) {
//        this->age = s.age;
////        Shallow Copy
////        this->name = s.name;
//
////        Deep Copy
//          this->name = new char(strlen(s.name) + 1);
//          strcpy(this->name, s.name);
//    }
//    void display() {
//        cout << age << " " << name << " " << rollNumber << " " << x << endl;
//    }
public:
    static int totalStudents;
};
int StudentTwo :: totalStudents = 0;