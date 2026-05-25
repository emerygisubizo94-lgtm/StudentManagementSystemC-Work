#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

// Maximum student
const int MAX = 100;

// Student structure
struct Student {
    int id;
    string name;
    int age;
    string course;
};

// Function declarations
void addStudent(Student students[], int &count);
void displayStudents(Student students[], int count);
void searchStudent(Student students[], int count);
void updateStudent(Student students[], int count);
void deleteStudent(Student students[], int &count);

#endif
