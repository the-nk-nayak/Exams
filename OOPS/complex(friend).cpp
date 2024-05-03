#include<iostream>
using namespace std;

class complex
{
private:
    int data1, data2;
public:
    void Complex(int d1, int d2)
    {
        data1 = d1;
        data2 = d2;
    }

friend int arithmatic::sumrealcomplex(complex o1, complex o2);
};

class arithmatic
{
public:
 int add(int a , int b)
 {
    return a+b;
 }
 int sumrealcomplex (complex o1, complex o2)
 {
    return (o1.data1 + o2.data2);
 }
};