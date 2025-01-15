#include <iostream>
using namespace std;

class SerialNumber {
private:
    int serial;
    static int counter;

public:
    SerialNumber() {
        counter++;
        serial = counter;
    }

    void report()  {
        cout << "I am object number " << serial << "." << endl;
    }
};

int SerialNumber::counter = 0;

int main() {
    SerialNumber obj1, obj2, obj3;
    obj1.report();
    obj2.report();
    obj3.report();

    return 0;
}
