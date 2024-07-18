// 12. Write a program to swap the two numbers using friend function
// without using third variable

#include<iostream>
using namespace std;

class swa {
private:
    int a;
    int b;

public:
    // Get the values of a and b
    void get_value(int p, int q) {
        a = p;
        b = q;
    }

    // Declare friend function to swap values
    friend void opr(swa);
};

void opr(swa c) {
    // Swap the values without using a third variable
    c.a = c.a + c.b;
    c.b = c.a - c.b;
    c.a = c.a - c.b;

    // Display the swapped values
    cout << "\n a = " << c.a;
    cout << "\n b = " << c.b;
}

int main() {
    swa c;

    // Set initial values
    c.get_value(50, 60);

    // Swap the values
    opr(c);

    return 0;
}

