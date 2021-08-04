/*
Q4. Write a program that copies the contents of one file to another file as a string.
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream inFile("resources/Question4.txt");
    string strLine, strFullText;

    while(getline(inFile, strLine)){
        strFullText += strLine;
    }
    inFile.close();

    ofstream outFile("resources/Question4Copy.txt");
    outFile << strFullText;

    outFile.close();
    return 0;
}