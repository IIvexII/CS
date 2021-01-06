/*
    Date: 6-1-2021
    Purpose: Write a program to display a a box with the height and width of user's choice.
                Enter Height: 10
                Enter Width: 20
                ********************
                *                  *
                *                  *
                *                  *
                *                  *
                *                  *
                *                  *
                *                  *
                *                  *
                ********************
*/
#include <iostream>
using namespace std;

int main(){

    int width, height;
    cout << "Enter Height: ";
    cin >> height;
    cout << "Enter Width: ";
    cin >> width;

    for(int i=1; i<=height; i++){
        for(int j=1;j<=width; j++){
            if(i==1 || i==height)
                cout << ((j>=1 && j<=width)? "*":" ");
            else
                cout << ((j==1 || j==width)? "*" : " ");
        }
        cout << endl;
    }

    return 0;
}