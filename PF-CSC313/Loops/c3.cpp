/*
    Date: 9-12-2020
    Purpose: Print half pyramid using alphabets
    Author: Zafeer
*/
#include <iostream>

using namespace std;

int main(){
    // alphabet = 'A' which is starting point of Alphabet
    char last_alphabet, alphabet;

    /*  Last alphabet means, to which
        alphabet you  want  the  half 
        pyramid to be printed.*/
    cout << "Enter the last alphabet: ";
    cin >> last_alphabet;

    if(last_alphabet >= 'A' && last_alphabet <= 'Z')
        alphabet = 'A';
    else if(last_alphabet >= 'a' && last_alphabet <= 'z')
        alphabet = 'a';

    /*  e.g 
        last_alphabet = 'C'  --> 67
        alphabet = 'A' --> 65
        last_alphabet - alphabet +1 = 67 - 65 = 2
        It means that we can print 0 - 2 times only.*/
        
    for(int rows=0; rows<=(last_alphabet - alphabet); rows++){

        for(int column=0; column<=rows; column++){
            cout << char(column+alphabet) << " ";
        }
        cout << endl;
    }

    return 0;
}