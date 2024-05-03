#include<iostream>
using namespace std;
class data{
    public:
    int a;
    int b;

    void getdata(int x, int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<"\n"<<b;
    }
    operator int()
    {
        return a;
        return b;
    }
};
int main(){
    data g1;
    g1.getdata(23, 7)
    g1.display();
    return 0;
}
