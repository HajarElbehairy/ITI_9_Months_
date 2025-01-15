#include <iostream>

using namespace std;

class Int {
private:
    int value;

public:
    Int() {
      value=0;
    }
    Int(int _value) {
       value=_value;
    }

    void print()  {
        cout << value;
    }

    Int add(const Int& num){
        return Int(value + num.value);
    }
};

int main() {
    Int num3;
    Int num1(5);
    Int num2(10);
    num3 = num1.add(num2);
    cout << "The result of adding ";
    num1.print();
    cout << " and ";
    num2.print();
    cout << " is: ";
    num3.print();
    cout << endl;

    return 0;

}
