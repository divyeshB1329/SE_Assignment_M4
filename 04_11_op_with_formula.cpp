// 11.Write a program to calculate the area of circle, rectangle and triangle
// using Function Overloading
// Rectangle: Area * breadth
// Triangle: ½ *Area* breadth
// Circle: Pi * Area *Area
#include<iostream>
using namespace std;

class op
{
    int Area, breadth;
    float pi = 3.14, ad;
public:
    void opration(int a, int b)
    {
        Area = a;
        breadth = b;
        cout << "\n Area of Rectangle : " << Area * breadth;
    }
    void opration(int a, int b, float half)
    {
        Area = a;
        breadth = b;
        ad = half;
        cout << "\n Area of Triangle : " << ad * Area * breadth;
    }
    void opration(int a)
    {
        Area = a;
        cout << "\n Area of Circle : " << pi * Area * Area;
    }

};

main() {
    float h = 0.5;
    op obj;
    obj.opration(45, 5);
    obj.opration(50, 60, h);
    obj.opration(50);
}