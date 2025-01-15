#include <iostream>
#include <conio.h>
using namespace std;

class TollBooth {
     int totalCars;
    double totalCash;

public:
    TollBooth() {
        totalCars=0;
        totalCash=0.0;
    }
    void payingCar() {
        totalCars++;
        totalCash += 0.50;
    }
    void nopayCar() {
        totalCars++;
    }
    void print()  {
        cout << "Total cars: " << totalCars << endl;
        cout << "Total cash collected: $" << totalCash << endl;
    }
};

int main() {
    TollBooth booth;
    char choice;

    cout << "TollBooth Simulation\n";
    cout << "Press 'P' for a paying car, 'N' for a non-paying car, or 'Esc' to exit.\n";

    while (true) {
        choice = _getch();

        if (choice == 27) {
            cout << "\nExiting...\n";
            booth.print();
            break;
        }

        if (choice == 'P' || choice == 'p') {
            booth.payingCar();
            cout << "Paying car recorded.\n";
        } else if (choice == 'N' || choice == 'n') {
            booth.nopayCar();
            cout << "Non-paying car recorded.\n";
        } else {
            cout << "Invalid input. Please press 'P', 'N', or 'Esc'.\n";
        }
    }

    return 0;
}
