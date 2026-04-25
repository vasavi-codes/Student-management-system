#include <iostream>
#include "student.h"
using namespace std;

void Student::addStudent() {
    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter Student Name: ";
    cin >> name;
}

void Student::displayStudent() {
    cout << "\nStudent Details:\n";
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
}
