/*
    Date: 6-1-2021
    Purpose: Write a program to display right angle triangle.
             *
             * *
             *   *
             *     *
             *       *
             *         *
             *           *
             * * * * * * * *
*/
#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<=8;i++){
        for(int j=1; j<=8; j++){
            if(i<8)
                if(j==1||j==i)
                    cout << " *";
                else
                    cout << "  ";
            else
                if(j<=8 && j>=1)
                    cout << " *";
                else
                    cout << "  ";
        }
        cout << endl;
    }

    return 0;
}