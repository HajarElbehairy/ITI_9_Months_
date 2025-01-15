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

fraction simply(fraction f) {
    fraction res;
    res.den=f.den;
    res.num=f.num;

    for (int i = res.den; i > 1; i--) {
        if (res.den % i == 0 && res.num % i == 0) {
            res.den = res.den / i;
            res.num = res.num / i;
            break;
        }
    }
    return res;
}

  fraction operator+(const fraction &x) {
        fraction res;
        res.num = num * x.den + den * x.num;
        res.den = den * x.den;
        simply(res);

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
