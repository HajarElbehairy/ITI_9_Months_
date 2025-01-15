#include <iostream>
#include <iomanip>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction;

public:

    Angle(int deg = 0, float _minutes = 0.0, char dir = 'N'){
         degrees=deg;
          minutes=_minutes;
           direction=dir;
            }
    void input() {
        cout << "Enter degrees: ";
        cin >> degrees;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter direction (N, S, E, W): ";
        cin >> direction;
    }

    void print()  {
        cout << degrees << "\xF8" << setfill('0') << setw(2) << fixed << setprecision(1) << minutes << ":" << direction << endl;
    }
};

class Ship {
private:
    static int shipCount;
    int serialNumber;
    Angle latitude;
    Angle longitude;

public:
    Ship() {

    serialNumber= ++shipCount;
     }
    void setPosition() {
        cout << "Enter latitude details:\n";
        latitude.input();
        cout << "Enter longitude details:\n";
        longitude.input();
    }

    void report()  {
        cout << "Ship Number: " << serialNumber << endl;
        cout << "Latitude: ";
        latitude.print();
        cout << "\nLongitude: ";
        longitude.print();
        cout << endl;
    }
};


int Ship::shipCount = 0;

int main() {
    Ship ship1, ship2, ship3;
    cout << "Enter position for Ship 1:\n";
    ship1.setPosition();
    cout << "Enter position for Ship 2:\n";
    ship2.setPosition();
    cout << "Enter position for Ship 3:\n";
    ship3.setPosition();
    cout << "\nShip details:\n";
    ship1.report();
    ship2.report();
    ship3.report();

    return 0;
}
