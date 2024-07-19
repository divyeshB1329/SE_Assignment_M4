// 9. Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class matrix
{
    int a;
public:
    matrix() {

    }
    matrix(int x) {
        a = x;
    }
    void display() {
        cout << "value: "<<a;
    }

    matrix operator+(matrix& obj) {
        matrix u;
        u.a = a + (obj.a);
        return u;
    }
};

main() {
    matrix mo(5);
    matrix mt(6);
    matrix mth;
    mth = mo + mt;
    mth.display();
}