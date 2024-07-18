// 8. Write a C++ program to implement a class called Student that has private
// member variables for name, class, roll number, and marks. Include
// member functions to calculate the grade based on the marks and display
// the student's information. Accept address from each student implement
// using of aggregation

#include<iostream>
using namespace std;

class address
{
private:
    string gli;
    string city;
    string state;
    string pin;
public:

    address(string a, string b, string c, string d)
    {
        gli = a;
        city = b;
        state = c;
        pin = d;
    }
    void display_address() {
        cout << "\n Address: " << gli << ", " << city << ", " << state << ", " << pin;
    }
};


class student
{
private:
    string name_;
    string class_;
    int roll_number_;
    int marks;
public:
    student(string nam, string clas, int roll, int tka) {
        name_ = nam;
        class_ = clas;
        roll_number_ = roll;
        marks = tka;
    }
    char calculate_grade() {
        if (marks <= 100 && marks >= 90)
        {
            return 'A';
        }else if(marks <= 89 && marks >= 80){
            return 'B';
        }else if(marks <= 79 && marks >= 70){
            return 'C';
        }else if(marks <= 69 && marks >= 60){
            return 'B';
        }else if(marks < 60){
            return 'F' ;
        }else{
            cout<<"Enter valid marks";
        }

    }
    void display_info() {
        cout<<"\n Name : " << name_;
        cout<<"\n class : " << class_;
        cout<<"\n Roll NO : " << roll_number_;
        cout<<"\n Marks : " << marks;
        cout<<"\n Grade : " << calculate_grade();
    }
};

main() {
    address s("123 Main St", "Springfield", "Ie", "62704");

    student a("divyesh", "9th", 23, 60);

    a.display_info();
    s.display_address();
}
