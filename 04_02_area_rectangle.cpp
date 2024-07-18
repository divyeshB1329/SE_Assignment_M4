// 2. Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;

class get_value
{
protected:
    int length;
    int width;
public:
    void get_LW(){
        cout<<"\n Enter length value : ";
        cin>>length;
        cout<<"\n Enter width value : ";
        cin>>width;
    }
};
 
 class area_of_rectangle : public get_value{
    public :
    void show_ar(){
    cout<<"\n Area of Rectangle : " << length * width ;
    }
   
 };

 main(){
    area_of_rectangle c;
    c.get_LW();
    c.show_ar();
 }
