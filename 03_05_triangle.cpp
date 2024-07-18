// 5. Write a C++ program to create a class called Triangle that has private
// member variables for the lengths of its three sides. Implement member
// functions to determine if the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;

class Triangle {
private:
    int l1; // Length of side 1
    int l2; // Length of side 2
    int l3; // Length of side 3

public:
    // Constructor to initialize the lengths of the triangle's sides
    Triangle(int one, int two, int three) {
        l1 = one;
        l2 = two;
        l3 = three;
    }

    // Function to check the type of triangle
    void check() {
        if (l1 == l2 && l2 == l3) {
            cout << "Your triangle is Equilateral";
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            cout << "Your triangle is Isosceles";
        } else {
            cout << "Your triangle is Scalene";
        }
    }
};

int main() {
    int a1, a2, a3;

    // Input lengths of the triangle sides
    cout << "\n Enter length of side 1: ";
    cin >> a1;
    cout << "\n Enter length of side 2: ";
    cin >> a2;
    cout << "\n Enter length of side 3: ";
    cin >> a3;

    // Create a Triangle object with the given side lengths
    Triangle t(a1, a2, a3);

    // Check and display the type of the triangle
    t.check();

    return 0;
}
