#include "student.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

Student::Student(string n, int a)
{
    name = n;
    age = a;
}

void Student::setAge(int)
{
    cout << "ika on: "<< age << endl;
}

void Student::setName(string)
{
      cout << "nimi on: "<< name << endl;
}

string Student::getName()
{
    return name;
}

int Student::getAge()
{
    return age;
}

void Student::printStudentinfo()
{
    cout << " " << name << ", " << age << endl;
}
