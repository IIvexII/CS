/*
    Q1. Write a program C++ to read the file with name “Question1.txt” and display the
following text as output on console (output format should be same as given below).
*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream myFile("resources/Question1.txt");
    string str;

    if(!myFile){
        cout << "Not Sucessfull!" << endl;
    }
    else{
        while(getline(myFile,str)){
            cout << str << endl << endl;
        }
    }
    myFile.close();
    return 0;
}