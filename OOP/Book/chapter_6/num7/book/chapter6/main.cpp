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

int main() {
    Angle Ag(149, 34.8, 'W');
    cout << "Initial angle: ";
    Ag.print();

    Angle user_Ag;
    char choice;
    do {
        user_Ag.input();
        cout << "Entered angle: ";
        user_Ag.print();
        cout << "Do you want to enter another angle? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
