#include <iostream>
#include <string>
using namespace std;

// Structure to store student details
struct Student {
    string name;
    int id;
    string department;
};

// Global variables
Student students[100]; // Array to store up to 100 students
int studentCount = 0;  // Current number of students

// Function to add a new student
void addStudent() {
    if (studentCount >= 100) {
        cout << "Student list is full! Cannot add more students.\n";
        return;
    }

    Student newStudent;
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, newStudent.name);

    cout << "Enter Student ID: ";
    cin >> newStudent.id;

    cout << "Enter Student Department: ";
    cin.ignore();
    getline(cin, newStudent.department);

    students[studentCount] = newStudent; // Add student to the array
    studentCount++;                      // Increase the count
    cout << "Student added successfully!\n";
}

// Function to display all students
void displayStudents() {
    if (studentCount == 0) {
        cout << "No students to display.\n";
        return;
    }

    cout << "\nList of Students:\n";
    for (int i = 0; i < studentCount; i++) {
        cout << "Student " << i + 1 << ":\n";
        cout << "  Name: " << students[i].name << "\n";
        cout << "  ID: " << students[i].id << "\n";
        cout << "  Department: " << students[i].department << "\n";
    }
}

// Function to search for a student by ID
void searchStudent() {
    int searchID;
    cout << "Enter Student ID to search: ";
    cin >> searchID;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == searchID) {
            cout << "Student Found:\n";
            cout << "  Name: " << students[i].name << "\n";
            cout << "  Department: " << students[i].department << "\n";
            return;
        }
    }
    cout << "No student found with ID " << searchID << ".\n";
}

// Function to update a student's information
void updateStudent() {
    int updateID;
    cout << "Enter Student ID to update: ";
    cin >> updateID;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == updateID) {
            cout << "Student Found. Enter new details:\n";
            cout << "Enter Student Name: ";
            cin.ignore();
            getline(cin, students[i].name);

            cout << "Enter Student Department: ";
            getline(cin, students[i].department);

            cout << "Student information updated successfully!\n";
            return;
        }
    }
    cout << "No student found with ID " << updateID << ".\n";
}

// Function to delete a student by ID
void deleteStudent() {
    int deleteID;
    cout << "Enter Student ID to delete: ";
    cin >> deleteID;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == deleteID) {
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--; // Decrease the count
            cout << "Student deleted successfully!\n";
            return;
        }
    }
    cout << "No student found with ID " << deleteID << ".\n";
}

// Main function
int main() {
    int choice;

    do {
        // Display menu
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Update Student Information\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Perform actions based on user choice
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}