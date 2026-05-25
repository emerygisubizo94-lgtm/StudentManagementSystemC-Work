#include "student.h"

int main() {

    Student students[MAX];
    int count = 0;
    int choice;

    do {

        cout << "\n====================================";
        cout << "\n   STUDENT MANAGEMENT SYSTEM";
        cout << "\n====================================";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\n====================================";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                addStudent(students, count);
                break;

            case 2:
                displayStudents(students, count);
                break;

            case 3:
                searchStudent(students, count);
                break;

            case 4:
                updateStudent(students, count);
                break;

            case 5:
                deleteStudent(students, count);
                break;

            case 6:
                cout << "\nThank you for using the system.\n";
                break;

            default:
                cout << "\nInvalid choice. Try again.\n";
        }

    } while(choice != 6);

    return 0;
}
