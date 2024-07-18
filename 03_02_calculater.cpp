// 2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;

class Calculator {
private:
    int a, b; // Private member variables for operands

public:
    // Constructor to initialize operands
    Calculator(int one, int two) {
        a = one;
        b = two;
    }

    // Function to perform addition
    void add() {
        cout << "\n\n\t Addition = " << a + b;
    }

    // Function to perform subtraction
    void subtract() {
        cout << "\n\n\t Subtraction = " << a - b;
    }

    // Function to perform division
    void divide() {
        if (b != 0) {
            cout << "\n\n\t Division = " << a / b;
        } else {
            cout << "\n\n\t Division = Undefined (division by zero)";
        }
    }

    // Function to perform multiplication
    void multiply() {
        cout << "\n\n\t Multiplication = " << a * b;
    }
};

int main() {
    int n1, n2;

    // Input values
    cout << "Enter value one: ";
    cin >> n1;
    cout << "Enter value two: ";
    cin >> n2;

    // Create Calculator object with the given values
    Calculator c(n1, n2);

    // Perform calculations
    c.add();
    c.subtract();
    c.divide();
    c.multiply();

    return 0;
}
