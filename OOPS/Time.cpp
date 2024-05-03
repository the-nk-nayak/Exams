#include<iostream>
using namespace std;
class Time
{
private:
    int hours, minutes, second;
public : 
Time() : hours(0), minutes(0), second(0){}                          //Default Constructor
Time(int h, int m, int s ) : hours(h), minutes(m), second(s){}      //Parameterised constructor

void gettime()
{
    cout<<"Enter the Hours";
    cin>>hours;
    cout<<"Enter the Minutes";
    cin>>minutes;
    cout<<"Enter the Second";
    cin>>second;
}

void display()
{
    cout << "The time is " <<endl <<hours <<"\t" <<minutes <<second ;
}

void main()
{
    gettime();
    display();
}
};
