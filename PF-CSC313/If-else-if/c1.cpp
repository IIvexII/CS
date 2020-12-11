/*
    Date: 11-12-2020
    Program: Input a character and display its type.
*/
#include <iostream>
using namespace std;

int main(){

    char character;

    cout << "Enter a character: ";
    cin >> character;

    if(character>=65 && character<=90)              // Capital alphabet: 65-90 ASCII
        cout << "It is capital alphabet." << endl;
    else if(character>=97 && character<=122)        // Small Alphabet:  97-122 ASCII
        cout << "It is small alphabet." << endl;
    else if(character>=48 && character<=57)         // Numbers: 48-57 ASCII
        cout << "It is a number." << endl;
    else
        cout << "It is a character/punctuation." << endl;
    
    return 0;
}