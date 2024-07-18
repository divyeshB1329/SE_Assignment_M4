// 8. Write a program to Mathematic operation like Addition, Subtraction,
// Multiplication, Division Of two number using different parameters and
// Function Overloading

#include<iostream>
using namespace std;

class cl1 {
    int a, b, c, d;
public:
    void mathematic(int x, int y, int z, int n) {
        a = x;
        b = y;
        c = z;
        d = n;
        cout << "\n Addition your two number : " << a + b + c + d;
    }
    void mathematic(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
        cout << "\n Subtraction your two number : " << a - b - c ;
    }
    void mathematic(int x) {
        a = x;
        cout << "\n Multiplication your two number : " << a * a;
    }
    void mathematic(int x, int y) {
        a = x;
        b = y;
        cout << "\n Division your two number : " << a / b;
    }

};

main() {
    cl1 obj;
    obj.mathematic(2, 3 , 6 ,9);
    obj.mathematic(205, 103 , 20);
    obj.mathematic(2);
    obj.mathematic(200, 20);
}