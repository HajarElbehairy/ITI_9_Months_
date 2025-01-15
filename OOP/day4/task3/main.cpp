#include <iostream>

using namespace std;

class fraction{

int num;
int den;

public:
fraction(){
num=0;
den=1;
}
fraction(int _num){
num=_num;
den=1;
}
fraction(int _num,int _den){
num=_num;
den=_den;

}
int getNum(){
    return num;
}
int getDen(){
 return den;
}
void setNum(int _num){
    num= _num;

}
void setDen(int _den){

den= _den;
}
void print(){
    if (den == 0) {
            cout << "Error: Division by zero" << endl;
        } else {
         cout<<num<<"/"<<den<<endl;
}
}



  fraction operator+(const fraction &x) {
        fraction res;
        res.num = num * x.den + den * x.num;
        res.den = den * x.den;
        return res;
    }






};

int main()
{
fraction f1(2, 3);
fraction f2(2, 3);
   fraction f3;
   f3=f1+f2;
       cout << "f1: ";
    f1.print();
    cout << "f2: ";
    f2.print();
    cout << "f1 + f2 = f3: ";
    f3.print();
    return 0;
}
