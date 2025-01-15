#include <iostream>
#include <string>
using namespace std;

class Publication {
protected:
    string title;
    float price;
public:
    void getdata() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
    }
    void putdata() const {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};


class Sales {
protected:
    float sales[3];
public:
    void getdata() {
        cout << "Enter sales for the last three months:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Month " << i + 1 << ": ";
            cin >> sales[i];
        }
    }
    void putdata() const {
        cout << "Sales for the last three months: ";
        for (int i = 0; i < 3; i++) {
            cout << sales[i] << " ";
        }
        cout << endl;
    }
};


class Book : public Publication, public Sales {
private:
    int pageCount;
public:
    void getdata() {
        Publication::getdata();
        Sales::getdata();
        cout << "Enter page count: ";
        cin >> pageCount;
    }
    void putdata() const {
        Publication::putdata();
        Sales::putdata();
        cout << "Page Count: " << pageCount << endl;
    }
};

class Tape : public Publication, public Sales {
private:
    float playTime;
public:
    void getdata() {
        Publication::getdata();
        Sales::getdata();
        cout << "Enter playing time (in minutes): ";
        cin >> playTime;
    }
    void putdata() const {
        Publication::putdata();
        Sales::putdata();
        cout << "Playing Time: " << playTime << " minutes" << endl;
    }
};

class Disk : public Publication, public Sales {
private:
 enum DiskType { CD, DVD };
    DiskType diskType;
   /* char disktype;
    char CD[3]="CD";
    char DVD[5]="DVD";
*/
public:
    void getdata() {
        Publication::getdata();
        Sales::getdata();
        char type;
        cout << "Enter disk type (c for CD, d for DVD): ";
        cin >> type;
        diskType = (type == 'c' || type == 'C') ? CD : DVD;
    }
    void putdata()  {
        Publication::putdata();
        Sales::putdata();
        cout << "Disk Type: " << (diskType == CD ? "CD" : "DVD") << endl;
    }
};

int main() {
    Book myBook;
    Tape myTape;
    Disk myDisk;

    cout << "Enter details for book:\n";
    myBook.getdata();

    cout << "\nEnter details for tape:\n";
    myTape.getdata();

    cout << "\nEnter details for disk:\n";
    myDisk.getdata();

    cout << "\nBook details:\n";
    myBook.putdata();

    cout << "\nTape details:\n";
    myTape.putdata();

    cout << "\nDisk details:\n";
    myDisk.putdata();

    return 0;
}
