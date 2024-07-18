// 6. Write a C++ program to implement a class called Employee that has
// private member variables for name, employee ID, and salary. Include
// member functions to calculate and set salary based on employee
// performance. Using of constructor

#include <iostream>
using namespace std;

class Employee {
private:
    string name;        // Private member variable for employee name
    int employee_ID;    // Private member variable for employee ID
    int salary;         // Private member variable for employee salary

public:
    // Constructor to initialize employee details
    Employee(string nam, int id, int pgar) {
        name = nam;
        employee_ID = id;
        salary = pgar;
    }

    // Function to display employee details
    void show_details() {
        cout << "\n Employee Name: " << name;
        cout << "\n Employee ID: " << employee_ID;
        cout << "\n Employee Salary: " << salary << "\n";
    }

    // Function to adjust salary based on performance
    void performance(string perform);

    // Function to display employee details (used after performance evaluation)
    void display() {
        cout << "\n Employee Name: " << name;
        cout << "\n Employee ID: " << employee_ID;
        cout << "\n Employee Salary: " << salary << "\n";
    }
};

// Definition of the performance function outside the class
void Employee::performance(string perform) {
    if (perform == "a" || perform == "A") {
        salary += salary * 0.20; // Increase salary by 20%
    }
    else if (perform == "b" || perform == "B") {
        salary += salary * 0.10; // Increase salary by 10%
    }
    else if (perform == "c" || perform == "C") {
        salary += salary * 0.80; // Increase salary by 80%
    }
    else if (perform == "d" || perform == "D") {
        salary += salary * 0.20; // Increase salary by 20%
    }
}

int main() {
    // Creating an Employee object with initial details
    Employee e("divyesh", 1329, 2000);

    cout << "\n -----------------------------";
    cout << "\n Initial Employee Details:";
    cout << "\n -----------------------------";
    e.show_details(); // Display initial details

    // Adjust salary based on performance
    e.performance("e");

    cout << "\n -----------------------------";
    cout << "\n Employee Details after Performance";
    cout << "\n -----------------------------";
    e.display(); // Display updated details

    return 0;
}
