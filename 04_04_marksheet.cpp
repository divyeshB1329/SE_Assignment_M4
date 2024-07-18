// 4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;

class name_roll
{
protected:
   string name;
   int roll_num;
public:
   void get_value(){
    cout<<"\n Enter student name : ";
    cin>>name;
    cout<<"\n Enter student Roll number : ";
    cin>>roll_num;
   }
};

class sub
{
protected:
   int Maths,Science,English;
public:
   void get_marks(){
    cout<<"\n Enter the Maths marks : ";
    cin>>Maths;
    cout<<"\n Enter the Science marks : ";
    cin>>Science;
    cout<<"\n Enter the English marks : ";
    cin>>English;
   }
};

class display : public name_roll , public sub
{
public:
   void display_sheet(){
    get_value();
    get_marks();
    cout<<"\n\n\t ------Student Mark Sheet----";
    cout<<"\n Name : "<<name;
    cout<<"\n Roll No : "<<roll_num;
    cout<<"\n Maths : "<<Maths;
    cout<<"\n Science : "<<Science;
    cout<<"\n English : "<<English;
   }
};

main(){
    display d;
    d.display_sheet();
}