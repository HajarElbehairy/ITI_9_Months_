#include <iostream>

using namespace std;
void Swap(int& num1,int& num2){ //ByReference
     int temp;
     temp=num1;
     num1=num2;
     num2=temp;

}
void Swap2(int* x,int* y){ //ByPointers

   int temp=*x;
   *x=*y;
   *y=temp;



}

void Swap3(int x, int y)
{
    int temp = x ;
    x = y ;
    y = temp ;
}
int main()
{   int a=10;
    int b=30;
    cout<<"REAL:"<<"a:"<<a<<"&"<<"b:"<<b<<endl;
    Swap(a,b);
    cout<<"a:"<<a<<"&"<<"b:"<<b<<endl;
    Swap2(&a,&b);
    cout<<"a:"<<a<<"&"<<"b:"<<b<<endl;
    Swap3(a,b);
    cout<<"a:"<<a<<"&"<<"b:"<<b<<endl;

    return 0;
}
