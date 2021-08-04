/*
Q3. Write a program that counts the number of blank and number of words in a text file
named Question3.txt.
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream myFile("resources/Question3.txt");
    char character;
    int words=1, blanks=0;

    while(myFile){
        myFile.get(character);
        if(character==' '){
            words++;
            blanks++;
        }
    }

    cout << "Words: " << words << endl;
    cout << "Blanks: " << blanks << endl;

    myFile.close();
    return 0;
}