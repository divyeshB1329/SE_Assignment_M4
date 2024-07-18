/*
3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/

#include<iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;
public:
    void get_det() {
        cout << "\n Enter name : ";
        cin >> name;
        cout << "\n Enter age : ";
        cin >> age;
    }
};
class student : public person
{
private:
    int percentage;
public:
    void set_perce(int c ) {
        percentage = c;
        cout<<"\n Enter student info.. ";
        cout<<"\n --------------------------";
        get_det();
    }
    void show_student(){
        cout<<"\n\n student details - ";
        cout<<"\n --------------------------";
        cout<<"\n Name : "<<name;
        cout<<"\n Age : "<<age;
        cout<<"\n percentage : "<<percentage<<"%";
    }
};

class teacher : public person
{
private:
    int salary;
public:
    void set_salr(int z){
        salary = z;
        cout<<"\n\n Enter teacher info.. ";
        cout<<"\n --------------------------";
        get_det();
    }
    void show_thecher(){
        cout<<"\n\n Teacher details - ";
        cout<<"\n --------------------------";
        cout<<"\n Name : "<<name;
        cout<<"\n Age : "<<age;
        cout<<"\n salary : "<<salary<<"Rs";
    }
};

main() {
student s;
s.set_perce(50);
teacher t;
t.set_salr(2000);

s.show_student();
t.show_thecher();
}
