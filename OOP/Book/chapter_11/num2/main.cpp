#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance(int f = 0, float i = 0.0) : feet(f), inches(i) {}


    void print()  {
        cout << feet << " feet, " << inches << " inches" << endl;
    }

    void normalize() {
        while (inches >= 12) {
            inches -= 12;
            feet += 1;
        }
    }

    friend Distance operator*(float scalar, const Distance& d);
    friend Distance operator*(const Distance& d1, const Distance& d2);
};

Distance operator*(float scalar, const Distance& d) {
    float totalInches = (d.feet * 12 + d.inches) * scalar;
    Distance result(0, totalInches);
    result.normalize();
    return result;
}

Distance operator*(const Distance& d1, const Distance& d2) {
    float totalInches1 = d1.feet * 12 + d1.inches;
    float totalInches2 = d2.feet * 12 + d2.inches;
    float productInches = totalInches1 * totalInches2;
    Distance result(0, productInches);
    result.normalize();
    return result;
}


int main() {
    Distance dist1(5, 14.0);
    Distance dist2(3, 8.0);

    cout << "Original Distances:\n";
    cout << "dist1: ";
    dist1.print();
    cout << "dist2: ";
    dist2.print();

    Distance Wdist1 = 7.5 * dist2;
    cout << "\nWdist1 (7.5 * dist2): ";
    Wdist1.print();

    Distance Wdist2 = dist1 * dist2;
    cout << "\nWdist2 (dist1 * dist2): ";
    Wdist2.print();

    return 0;
}
