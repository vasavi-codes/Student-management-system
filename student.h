#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    void addStudent();
    void displayStudent();
};

#endif
