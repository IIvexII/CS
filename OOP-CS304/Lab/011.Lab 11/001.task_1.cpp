/*
    Q1). Imagine a publishing company that markets both book and audio-cassette versions of its
    works. Create a class publication that stores the title and price of a publication. From this class
    derive two public classes:
    1. book, which adds a page count and
    2. tape, which adds a playing time in minutes.
    3. each of these three classes should have getdata() function to get its data from the user at
    the keyboard and a putdata() function to display its data.
    Write a main() program to test the book and tape class by creating instances of them, asking the
    user to fill in their data with getdata() and then displaying the data with putdata().
*/
#include <iostream>
using namespace std;

class Publication{
    private:
        string title; 
        double price;
    public:
        void getData(){
            cout << "Enter Title: "; cin >> title;
            cout << "Enter Price: "; cin >> price;
        }
        void putData(){
            cout << "Title: " << title << endl;
            cout << "Price: " << price << endl;
        }
};
class Book: private Publication{
    private:
        int pageCount;
    public:
        void getData(){
            Publication::getData();
            cout << "Enter page count: "; cin >> pageCount;
        }
        void putData(){
            Publication::putData();
            cout << "Page Count: " << pageCount << endl;
        }

};
class Tape: private Publication{
    private:
        int time;
    public:
        void getData(){
            Publication::getData();
            cout << "Enter playing time: "; cin >> time;
        }
        void putData(){
            Publication::putData();
            cout << "Playing Time: " << time << endl;
        }
};


int main(){
    Book b1;
    Tape t1;
    // Get Data
    cout << "####### BOOK DATA #######" << endl;
    b1.getData();

    cout << "####### TAPE DATA #######" << endl;

    t1.getData();

    // Put Data
    cout << "####### PRINT BOOK DATA #######" << endl;
    b1.putData();

    cout << "####### PRINT TAPE DATA #######" << endl;
    t1.putData();

    return 0;
}