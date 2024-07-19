// 10.Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
using namespace std;

class concat
{
private:
    string str;
public:
    concat() {

    }
    concat(string n) {
        str = n;
    }
    void display() {
        cout<<"Your concat string : "<<str;
    }

    concat operator+(concat &obj)
    {
        concat ext;
        ext.str = str + obj.str;
        return ext;
    }
};

main()
{
    concat str1("jigu");
    concat str2("dvs");
    concat str3;
    str3 = str1 + str2;
    str3.display();
}

