/*
    Q.2 Write a C++ program that inputs up to 10 integer values from data file named
    “Question2.text” and displays them on the screen. If there are not 10 numbers in file, the
    message “The file is finished” should be displayed after last number.
*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int num, counter=1;

    ifstream myFile("resources/Question2.txt");
    
    if(!myFile){
        cout << "Unable to open." << endl;
    }
    else{
        while(myFile >> num){
            cout << counter << ". " << num << endl;
            counter++;
        }
        cout << "The file is finished." << endl;

    }
    myFile.close();
    return 0;
}