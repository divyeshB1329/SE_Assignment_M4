// 3. Write a C++ program to create a class called Car that has private
// member variables for company, model, and year. Implement member
// functions to get and set these variables.

#include<iostream>
using namespace std;

class car
{
private:
    string company;
    string model;
    int year;
public:
    car() {

    }
    car(string cop, string mod, int yer) {
        company = cop;
        model = mod;
        year = yer;
    }
    car(car& obj) {
        company = obj.company;
        model = obj.model;
        year = obj.year;
    }
    void print() {
        cout << "\n Company : " << company;
        cout << "\n Model : " << model;
        cout << "\n Year : " << year;
    }
};

main() {
    car cpy1("suzuki", "swift", 2001), cpy2;
    cpy1.print();
    cpy2 = cpy1;
    cpy2.print();

}