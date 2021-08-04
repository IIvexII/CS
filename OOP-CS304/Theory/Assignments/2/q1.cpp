/*
Q1: Imagine a publishing company that markets both book and audiocassette versions of its
works. Create a class publication that stores the title (a string) and price (type float) of a
publication. From this class derive two classes: book, which adds a page count (type int), and
tape, which adds a playing time in minutes (type float). Each of these three classes should have a
getdata() function to get its data from the user at the keyboard, and a putdata() function to display
its data.
*/
#include "header.h"

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