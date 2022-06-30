#include<iostream>
using namespace std;
class another;
class cartesian
{
    int x,y;
public:
    cartesian(int a=2, int b=4)
    {
        x=a;
        y=b;
    }
   void add(cartesian A,another B);
   friend void sub(cartesian A,another B);
    friend void mult(cartesian A,another B);
    friend void divi(cartesian A,another B);

};
class another
{
    int x,y;
public:
    another(int a=3,int b=6)
    {
        x=a;
        y=b;

    }
    friend void cartesian:: add(cartesian A,another B);
   friend void sub(cartesian A,another B);
    friend void mult(cartesian A,another B);
    friend void divi(cartesian A,another B);

};
void cartesian::add(cartesian A,another B)
{
    int x=A.x+B.x;
    int y=A.y+B.y;
    cout<<"sum:"<<x<<","<<y<<""<<endl;
}
void sub(cartesian A,another B)
{
    int x=A.x-B.x;
    int y=A.y-B.y;
    cout<<"diff:"<<x<<","<<y<<""<<endl;
}
void mult(cartesian A,another B)
{
    int x=A.x*B.x;
    int y=A.y*B.y;
    cout<<"multi:"<<x<<","<<y<<""<<endl;
}void divi(cartesian A,another B)
{
    int x=A.x/B.x;
    int y=A.y/B.y;
    cout<<"divi:"<<x<<","<<y<<""<<endl;
}
int main()
{

cartesian C,sum;
another A;
sum.add(C,A);
sub(C,A);
mult(C,A);
divi(C,A);
return 0;

