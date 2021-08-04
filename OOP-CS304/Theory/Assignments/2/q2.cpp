/*
Q2: Start with the publication, book, and tape classes of Exercise 1. Add a base class sales that
holds an array of three floats so that it can record the dollar sales of a particular publication for
the last three months. Include a getdata() function to get three sales amounts from the user, and a
putdata() function to display the sales figures. Alter the book and tape classes so they are derived
from both publication and sales. An object of class book or tape should input and output sales
data along with its other data. Write a main() function to create a book object and a tape object
and exercise their input/output capabilities.
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