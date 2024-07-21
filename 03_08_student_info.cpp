// 8. Write a C++ program to implement a class called Student that has private
// member variables for name, class, roll number, and marks. Include
// member functions to calculate the grade based on the marks and display
// the student's information. Accept address from each student implement
// using of aggregation

#include <iostream>
using namespace std;

class Address {
public:
    string gli;
    string city;
    string state;
    string pin;

    Address(string gli, string city, string state, string pin) {
        this->gli = gli;
        this->city = city;
        this->state = state;
        this->pin = pin;
    }
};

class Student {
    Address* adr;
public:
    string name_;
    string class_;
    int roll_number_;
    int marks;

    Student(string name, string class_, int roll_number_, int marks, Address* adr) {
        this->name_ = name;
        this->class_ = class_;
        this->roll_number_ = roll_number_;
        this->marks = marks;
        this->adr = adr;  // Assign the address pointer
    }

    char calculate_grade() {
        if (marks <= 100 && marks >= 90) {
            return 'A';
        } else if (marks <= 89 && marks >= 80) {
            return 'B';
        } else if (marks <= 79 && marks >= 70) {
            return 'C';
        } else if (marks <= 69 && marks >= 60) {
            return 'D';
        } else if (marks < 60) {
            return 'F';
        } else {
            cout << "Enter valid marks";
            return 'I';  // Indeterminate grade for invalid marks
        }
    }

    void display_info() {
        cout << "\nName: " << name_;
        cout << "\nClass: " << class_;
        cout << "\nRoll No: " << roll_number_;
        cout << "\nMarks: " << marks;
        cout << "\nGrade: " << calculate_grade();
        cout << "\nAddress: " << adr->gli << ", " << adr->city << ", " << adr->state << ", " << adr->pin << endl;
    }
};

int main() {
    Address s("123 Main St", "Springfield", "IE", "62704");
    Student a("Divyesh", "9th", 23, 60, &s);

    a.display_info();
    return 0;
}
