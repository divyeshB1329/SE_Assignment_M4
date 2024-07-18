// 7. Write a C++ program to implement a class called Date that has private
// member variables for day, month, and year. Include member functions to
// set and get these variables, as well as to validate if the date is valid.

#include<iostream>
using namespace std;

class Data
{
private:
    int day;
    int month;
    int year;
public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    int valid_date() {
        int tf = 0;
        int tf2 = 0;
        int tf3 = 0;
        int ans ;

        if (day > 0 && day <= 31) {
            tf = 1;
        }
        else {
            tf = 0;
        };
        if (month > 0 && month <= 12)
        {
            tf2 = 1;
        }
        else {
            tf2 = 0;
        };
        if (!(year == 0))
        {
            tf3 = 1;
        }
        else {
            tf3 = 0;
        };

        if (tf== 1 && tf2 == 1 && tf3 == 1)
        {
            ans = 1;
        }else{
            cout<<"Your date "<<day<<"/"<<month<<"/"<<year<<" is not valid..";
        }
return ans;
    }

};

main()
{
    int date,month,year;
    cout<<"\n Enter date : ";
    cin>>date;
    cout<<"\n Enter month : ";
    cin>>month;
    cout<<"\n Enter year : ";
    cin>>year;
    Data d;
    d.setDate(date, month, year);
    int a = d.valid_date();
    if (a == 1)
    {
        cout<<"Your date "<<date<<"/"<<month<<"/"<<year<<" is valid! ";
    }
    
}