#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student{
private:
    string name;
    int age;

public:
    Student(string n, int a);
    void setAge(int);
    void setName(string);
    string getName();
    int getAge();
    void printStudentinfo();
};

#endif // STUDENT_H
