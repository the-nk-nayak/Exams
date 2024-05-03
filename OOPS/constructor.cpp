#include<iostream>
using namespace std;

class rectangle{
    public:
    int l;
    int b;
    //  friend class rectangle(int,int); //making the constructor as a friend function so that it can access the data members
 
    rectangle(){ //Default constructor
    l = 0;
    b = 0;
    }
    rectangle(int x, int y)
    {           //Parameterized Constructor
        l = x;
        b = y;
    }
    rectangle(rectangle &r)   //Copy Constructor
    {
        l = r.l;
        b = r.b;
    }
  
};
int main(){
    rectangle  r1;   //Calling the default constructor
    cout << "Length of rectangle: - "<<r1.l;
    cout << "\nBreadth of rectangle: - "<<r1.b;

    rectangle r2(2,7);// Calling parameterized constructor
    cout << "\n\nLength of rectangle: - "<<r2.l;
    cout << "\nBreadth of rectangle: - "<<r2.b;

    rectangle r3(r2);// Calling Copy Constructor to create a new object from existing object
    cout << "\n\nLength of rectangle: - "<<r3.l;
    cout << "\nBreadth of rectangle: - "<<r3.b;


}