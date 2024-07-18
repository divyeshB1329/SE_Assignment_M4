// Write a C++ Program to show access to Private Public and Protected using
// Inheritance

#include<iostream>
using namespace std;

class pri
{
private:
    void print_pri() {
        cout << "\n private ";
    }
public:
    void print_pri2() {
        print_pri();

    }
};

class prote
{
protected:
    void print_protected() {
        cout << "\n protected ";
    }
};

class publi : public prote, public pri
{
public:
    void print_publ() {

        cout << "\n public ";
    }
    void display_re(){
        print_pri2();
        print_protected();
        print_publ();

    }
};

main() {
    publi p1;
    p1.display_re();
}
