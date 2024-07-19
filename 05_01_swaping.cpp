// 1. Write a program of to swap the two values using template

#include <iostream>
using namespace std;

template <class t>
class swapa
{
private:
    t a, b;
public:
    void swaping(t x, t y){
        a = x;
        b = y;
        cout<<"\n a : "<< a;
        cout<<"\n b : "<< b;
        a = a + b;
        b = a - b;
        a = a - b;
        cout<<"\n -----After swaping-----";
        cout<<"\n a : "<<a;
        cout<<"\n b : "<<b<<"\n";
   }
};

main(){
    swapa<int> v1;
    v1.swaping(3 , 5);

    swapa<float> v2;
    v2.swaping(1.4 , 2.4);
}
