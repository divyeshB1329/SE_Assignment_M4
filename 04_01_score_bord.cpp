/* 
1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
 */

#include<iostream>
using namespace std;

class cricketer
{
private:
    string name;
    int age;
public:
   void get_name(){
    cout<<"\n Enter your name : ";
    cin>>name;
    cout<<"\n Enter your age : ";
    cin>>age;
   }
   void show_details(){
    cout<<"\n Name : "<<name;
    cout<<"\n Age : "<<age;
   }
};

class batsman : public cricketer
{
private:
 int Total_runs , Average_runs , best_perform;
public:
   void input_data(int run,int perform){
    Total_runs = run;
    best_perform = perform;
   }
   void calculate_avr(){
    Average_runs = (float)Total_runs / 20;
   }
   void display_data(){
    cout<<"\n Total Runs : "<<Total_runs;
    cout<<"\n Average Runs : "<<Average_runs;
    cout<<"\n Bets perform : "<<best_perform;
   }
};

main(){
    int run,per;

    batsman a;
    a.get_name();
    cout<<"\n Enter Run : ";
    cin>>run;
    cout<<"\n Enter performs : ";
    cin>>per;
    a.input_data(run , per);
    a.show_details();
    a.display_data();
}
