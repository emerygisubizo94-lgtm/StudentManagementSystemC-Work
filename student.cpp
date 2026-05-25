#include "student.h"

void addStudent(Student students[], int &count) {
    if (count >= MAX) {
        cout << "\nSystem is full!\n";
        return;
    }

    cout << "\n===== ADD NEW STUDENT =====\n";

    cout << "Enter Student ID: ";
    cin >> students[count].id;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, students[count].name);

    cout << "Enter Age: ";
    cin >> students[count].age;

    cin.ignore();

    cout << "Enter Course: ";
    getline(cin, students[count].course);

    count++;

    cout << "\nStudent added successfully!\n";
}

// Display Students
void displayStudents(Student students[], int count) {
    if (count == 0) {
        cout << "\nNo students available.\n";
        return;
    }

    cout << "\n========== STUDENT LIST ==========\n";

    for (int i = 0; i < count; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID     : " << students[i].id << endl;
        cout << "Name   : " << students[i].name << endl;
        cout << "Age    : " << students[i].age << endl;
        cout << "Course : " << students[i].course << endl;
    }
}

// Search Student
void searchStudent(Student students[], int count) {
    int id;
    bool found = false;

    cout << "\nEnter Student ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            cout << "\nStudent Found!\n";
            cout << "ID     : " << students[i].id << endl;
            cout << "Name   : " << students[i].name << endl;
            cout << "Age    : " << students[i].age << endl;
            cout << "Course : " << students[i].course << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nStudent not found.\n";
    }
}

// Update Student
void updateStudent(Student students[], int count) {
    int id;
    bool found = false;

    cout << "\nEnter Student ID to update: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {

            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, students[i].name);

            cout << "Enter New Age: ";
            cin >> students[i].age;

            cin.ignore();

            cout << "Enter New Course: ";
            getline(cin, students[i].course);

            cout << "\nStudent updated successfully!\n";

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nStudent not found.\n";
    }
}

// Delete Student
void deleteStudent(Student students[], int &count) {
    int id;
    bool found = false;

    cout << "\nEnter Student ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {

            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }

            count--;

            cout << "\nStudent deleted successfully!\n";

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nStudent not found.\n";
    }
}
