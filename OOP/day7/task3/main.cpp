#include <iostream>

using namespace std;

class Complex_num {
    int realnum;
    int imgnum;
    static int counter;

public:
    int getRealnum() {
        return realnum;
    }
    int getImgnum() {
        return imgnum;
    }
    void setRealnum(int _realnum) {
        realnum = _realnum;
    }
    void setImgnum(int _imgnum) {
        imgnum = _imgnum;
    }
    static int getCounter() {
        return counter;
    }

    void print() {
        if (imgnum == 0) {
            cout << realnum << endl;
        } else if (imgnum < 0) {
            cout << realnum << imgnum << "i" << endl;
        } else {
            cout << realnum << "+" << imgnum << "i" << endl;
        }
    }
    void setcomplex(int _real, int _img) {
        realnum = _real;
        imgnum = _img;
    }

    Complex_num() : realnum(0), imgnum(0) {
        counter++;
    }
    Complex_num(int _real) : realnum(_real), imgnum(0) {
        counter++;
    }
    Complex_num(int _real, int _img) : realnum(_real), imgnum(_img) {
        counter++;
    }

    ~Complex_num() {
        cout << "destructor" << endl;
        counter--;
    }


friend ostream &operator<<(ostream &out, const Complex_num &c);
};
ostream &operator<<(ostream &out, const Complex_num &c) {
        if (c.imgnum == 0) {
            out << c.realnum;
        } else if (c.imgnum < 0) {
            out << c.realnum << c.imgnum << "i";
        } else {
            out << c.realnum << "+" << c.imgnum << "i";
        }
        return out;
    }

int Complex_num::counter = 0;

int main() {
    Complex_num c1(2, 3);
    Complex_num c2(3, 6);

    cout << "Complex number c1: " << c1 << endl;
    cout << "Complex number c2: " << c2 << endl;

    cout << "Number of complex objects: " << Complex_num::getCounter() << endl;

    return 0;
}
