// 13. Write a program to find the max number from given two numbers
// using friend function

#include<iostream>
using namespace std;

class op {
private:
    int v1;
    int v2;

public:
    // Constructor to initialize the values
    op(int a, int b) {
        v1 = a;
        v2 = b;
    }

    // Declare friend function to find the maximum number
    friend void Fmax(op);
};

void Fmax(op c) {
    // Find and display the maximum number
    if (c.v1 > c.v2) {
        cout << "Max number : " << c.v1;
    } else {
        cout << "Max number : " << c.v2;
    }
}

int main() {
    // Initialize object with values
    op n(550, 60);

    // Find and display the maximum number
    Fmax(n);

    return 0;
}

