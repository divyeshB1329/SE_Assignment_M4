// Write a C++ Program to illustrates the use of Constructors in multilevel
// inheritance

#include<iostream>
using namespace std;

class cla1
{
public:
  void fun1(){
    cout<<"\ncalled class 1 ";
  }
};

class cla2 :public cla1
{
public:
  void fun2(){
    cout<<"\ncalled class 2 ";
  }
};

class cla3 : public cla2
{
public:
  void fun3(){
    cout<<"\ncalled class 3 ";
  }

  void display_(){
    fun1();
    fun2();
    fun3();
  }
};

main()
{
    cout<<"\n Display all class ---";
    cla3 obj;
    obj.display_();
    
}
