#include <iostream>
#include <string>
using namespace std;

class Publication {
public:
        string title;
        float price;

        void getData() {
           cout << "Enter name: ";
            fflush(stdin);
            getline(cin, title);
            cout << "Enter price: ";
            cin >> price;
       }
void putData() {
            cout << "name: " <<title << endl;
            cout << "Price: " << price << endl;
        }
};

class Book : public Publication {
    private:
        int pageCount;
    public:
        void getData() {
            Publication::getData();

            cout << "Enter page count: ";
            cin >> pageCount;
        }
        void putData()  {
            Publication::putData();
            cout << "Page count: " << pageCount << endl;
        }
};

class Tape : public Publication {
    private:
        float playingTime;
    public:
        void getData() {
        Publication::getData();

            cout << "Enter playing time (in minutes): ";
            cin >> playingTime;
        }
        void putData() {
            Publication::putData();
            cout << "Playing time: " << playingTime << " minutes" << endl;
        }
};

int main() {
    Book b;
    Tape t;

     cout << "Enter book information:" << endl;
    b.getData();

    cout << "Enter tape information:" << endl;
    t.getData();

    cout << endl << "Book details:" << endl;
    b.putData();

    cout << endl << "Tape details:" << endl;
    t.putData();

    return 0;
}
