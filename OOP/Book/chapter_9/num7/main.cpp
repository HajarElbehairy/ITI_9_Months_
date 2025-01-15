#include <iostream>
using namespace std;

class Count {
protected:
    int value;

public:
    Count() : value(0) {}


    Count& operator++() {
        ++value;
        return *this;
    }


    Count& operator--() {
        --value;
        return *this;
    }

    void print()  {
        cout << "Value: " << value << endl;
    }
};
class CountPostfix : public Count {
public:

    CountPostfix operator++(int) {
        CountPostfix temp = *this;
        ++value;
        return temp;
    }


    CountPostfix operator--(int) {
        CountPostfix temp = *this;
        --value;
        return temp;
    }
};
int main() {
    CountPostfix count;

    cout << "Initial State: ";
    count.print();
//    ++count;
    cout << "After Prefix Increment (++count): ";
    count.print();
    count++;
    cout << "After Postfix Increment (count++): ";
    count.print();
  //  --count;
    cout << "After Prefix Decrement (--count): ";
    count.print();
    count--;
    cout << "After Postfix Decrement (count--): ";
    count.print();

    return 0;
}


