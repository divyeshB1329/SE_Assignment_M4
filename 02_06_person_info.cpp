/*
6. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.
*/
#include<iostream>
using namespace std;

class Person {
private:
    string name, country;
    int age;

public:
    // Set the information for the person
    void set_info() {
        cout << "\n Enter Your name : ";
        cin >> name;
        cout << "\n Enter Your Age : ";
        cin >> age;
        cout << "\n Enter Your country name : ";
        cin >> country;
    }

    // Get and display the information of the person
    void get_info() {
        cout << "\n Name : " << name;
        cout << "\n Age : " << age;
        cout << "\n Country : " << country;
    }
};

int main() {
    Person c;

    // Set the information of the person
    c.set_info();

    // Get and display the information of the person
    c.get_info();

    return 0;
}
