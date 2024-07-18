// 1. Write a programto find the multiplication values and the cubic values using
// inline function

#include <iostream>
using namespace std;

class Inl {
private:
    int a; // Private member variable

public:
    // Function to get the value for multiplication and cube
    void get_value() {
        cout << "\n\n\t Enter the value for multiplication and cube: ";
        cin >> a;
    }

    // Inline function to perform multiplication
    inline void mul() {
        cout << "\n\n\t Multiplication of " << a << " = " << a * a;
    }

    // Inline function to perform cube calculation
    inline void cub() {
        cout << "\n\n\t Cube of " << a << " = " << a * a * a;
    }
};

int main() {
    Inl s1; // Create an object of class Inl
    s1.get_value(); // Get the value from the user
    s1.mul();       // Perform multiplication
    s1.cub();       // Perform cube calculation

    return 0;
}
