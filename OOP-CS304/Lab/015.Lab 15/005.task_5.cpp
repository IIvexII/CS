/*
Q5. Write a C++ Program to Count Words Lines and Total Size using File Handling.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream myFile("resources/Question5.txt");

    int words=1, lines=1;
    int size=2;                 // It is 2 because I have noticed that the
                                // file size is only 2 more bytes then the 
                                // actual characters in that file.
    char character, prevChar;

    while(myFile.get(character)){
        // Counting all characters as 1 byte.
        size++;

        // It is word, if there is a space as space seperate words
        // or if the previous character is new line and next character
        // is not new line.
        if(character==' ' || prevChar=='\n' && character!='\n')
            words++;
        else if(character=='\n')
            lines++;
        
        prevChar = character;
    }

    myFile.close();

    cout << "Size: " << size << " bytes" << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;
    return 0;
}