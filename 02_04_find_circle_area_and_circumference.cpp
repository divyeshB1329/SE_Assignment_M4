/*
4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.
*/
#include<iostream>
using namespace std;
class circle
{
private:
    int radius;

public:
    void get_radius() {
        cout << "Enter value of circle radius : ";
        cin >> radius;
    };
    void circle_area() {
        float ans = 3.14 * radius * radius;
        cout<<"\n\#include<iostream>
using namespace std;

class circle {
private:
    int radius;

public:
    // Get the radius of the circle from the user
    void get_radius() {
        cout << "Enter value of circle radius : ";
        cin >> radius;
    }

    // Calculate and display the area of the circle
    void circle_area() {
        float ans = 3.14 * radius * radius;
        cout << "\n\n\t Area of the circle : " << ans;
    }

    // Calculate and display the circumference of the circle
    void circumference() {
        float ans2 = 2 * 3.14 * radius;
        cout << "\n\n\t Circumference of the circle : " << ans2;
    }
};

int main() {
    circle c1;

    // Get the radius of the circle
    c1.get_radius();

    // Calculate and display the area of the circle
    c1.circle_area();

    // Calculate and display the circumference of the circle
    c1.circumference();

    return 0;
}
n\t Area of the circle : "<<ans;
    };
    void circumference() {
        float ans2 = 2 * 3.14 * radius;
        cout<<"\n\n\t Circumference of the circle : " <<ans2;
    };
};

main() {
    circle c1;
    c1.get_radius();
    c1.circle_area();
    c1.circumference();
}
