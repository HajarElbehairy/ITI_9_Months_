#include <iostream>
#include <string>
using namespace std;

class Publication {
    string title;
    float price;

public:
    void setTitle(const string& t) {
        title=t;
    }

    string getTitle()  {
        return title;
    }

    void setPrice(float p) {
        price = p;
    }

    float getPrice() const {
        return price;
    }

    void getdata() {
        string temp_title;
        float temp_price;

        cout << "Enter the title of the publication: ";
        cin>>temp_title;
        setTitle(temp_title);

        cout << "Enter the price of the publication: ";
        cin >> temp_price;
        setPrice(temp_price);
    }

    void printdata()  {
        cout << "Title: " << getTitle() << endl;
        cout << "Price: $" << getPrice() << endl;
    }
};

class Book : public Publication {
    int page_count;

public:
    void setPageCount(int pc) {
        page_count = pc;
    }

    int getPageCount()  {
        return page_count;
    }
    void getdata() {
        Publication::getdata();
        int temp_page_count;

        cout << "Enter the page count of the book: ";
        cin >> temp_page_count;
        setPageCount(temp_page_count);
    }

    void printdata()  {
        Publication::printdata();
        cout << "Page Count: " << getPageCount() << endl;
    }
};

class Tape : public Publication {
private:
    float playing_time;

public:
    void setPlayingTime(float pt) {
        playing_time = pt;
    }

    float getPlayingTime()  {
        return playing_time;
    }

    void getdata() {
        Publication::getdata();
        float temp_playing_time;

        cout << "Enter the playing time of the tape (in minutes): ";
        cin >> temp_playing_time;
        setPlayingTime(temp_playing_time);
    }

    void printdata()  {
        Publication::printdata();
        cout << "Playing Time: " << getPlayingTime() << " minutes" << endl;
    }
};


int main() {
    cout << "Enter details for a book:" << endl;
    Book book;
    book.getdata();
    cout << "\nEnter details for a tape:" << endl;
    Tape tape;
    tape.getdata();
    cout << "\nDetails of the book:" << endl;
    book.printdata();
    cout << "\nDetails of the tape:" << endl;
    tape.printdata();

    return 0;
}
