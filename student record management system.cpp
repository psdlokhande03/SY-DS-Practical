#include <iostream>
using namespace std;

#define MAX 100

struct Student {
    int rollNo;
    string name;
    int age;
    float marks;
};

int main() {
    Student students[MAX];
    Student *ptr;

    int n;

    cout << "Enter number of students: ";
    cin >> n;

    ptr = students;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> (ptr + i)->rollNo;

        cout << "Name: ";
        cin >> (ptr + i)->name;

        cout << "Age: ";
        cin >> (ptr + i)->age;

        cout << "Marks: ";
        cin >> (ptr + i)->marks;
    }

    cout << "\n========== STUDENT RECORDS ==========\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << (ptr + i)->rollNo << endl;
        cout << "Name        : " << (ptr + i)->name << endl;
        cout << "Age         : " << (ptr + i)->age << endl;
        cout << "Marks       : " << (ptr + i)->marks << endl;
    }

    return 0;
}
