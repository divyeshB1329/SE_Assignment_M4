/*
5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.
*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Get the width and length of the rectangle from the user
    void get_w_l() {
        cout << "\n\n\t Enter rectangle width : ";
        cin >> width;
        cout << "\n\n\t Enter rectangle length : ";
        cin >> length;
    }

    // Calculate and display the area of the rectangle
    void rectangle_area() {
        int ans = width * length;
        cout << "\n\n\t Area of Rectangle : " << ans;
    }

    // Calculate and display the perimeter of the rectangle
    void perimeter() {
        int ans2 = (length + width) * 2;
        cout << "\n\n\t Rectangle's perimeter : " << ans2;
    }
};

int main() {
    Rectangle rec;

    // Get the width and length of the rectangle
    rec.get_w_l();

    // Calculate and display the area of the rectangle
    rec.rectangle_area();

    // Calculate and display the perimeter of the rectangle
    rec.perimeter();

    return 0;
}

