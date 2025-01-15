#include <iostream>
#include <string>

using namespace std;


class Publication {
protected:
    string title;
    float price;

public:
    virtual void getdata() {
        cout << "Enter title: ";
        cin>>title;
        cout << "Enter price: ";
        cin >> price;
    }

    virtual void putdata()  {
        cout << "Title: " << title << ", Price: " << price << endl;
    }

    virtual ~Publication() {}
};


class Book : public Publication {
private:
    int pageCount;

public:
    void getdata() override {
        Publication::getdata();
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void putdata()  {
        Publication::putdata();
        cout << "Page Count: " << pageCount << endl;
    }
};


class Tape : public Publication {
private:
    float playingTime;

public:
    void getdata()  {
        Publication::getdata();
        cout << "Enter playing time (in minutes): ";
        cin >> playingTime;
    }

    void putdata()  {
        Publication::putdata();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};


int main() {
    const int MAX_PUBLICATIONS = 100;
    Publication* pubarr[MAX_PUBLICATIONS];
    int count = 0;
    char choice;

    do {
        if (count >= MAX_PUBLICATIONS) {
            cout << "Array is full. Cannot add more publications." << endl;
            break;
        }

        cout << "\nEnter 'b' for Book, 't' for Tape, or 'q' to quit: ";
        cin >> choice;

        if (choice == 'b') {
            pubarr[count] = new Book();
            pubarr[count]->getdata();
            count++;
        } else if (choice == 't') {
            pubarr[count] = new Tape();
            pubarr[count]->getdata();
            count++;
        }
    } while (choice != 'q');

    cout << "\nDisplaying all publications:\n";
    for (int j = 0; j < count; ++j) {
        pubarr[j]->putdata();
        delete pubarr[j];
    }

    return 0;
}
