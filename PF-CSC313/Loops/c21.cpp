/*
    Date: 5-1-2021
    Purpose: Write a program that display the following:
            1 = 1
            1 + 2 = 3
            1 + 2 + 3 = 6
            1 + 2 + 3 + 4 = 10
            1 + 2 + 3 + 4 + 5 = 15
*/
#include <iostream>
using namespace std;

int main(){
    int sum;
    for(int i=1; i<=5; i++){
        sum=0;
        for (int j=1;j<=i; j++){
            sum+=j;
            cout << ((j>1)? " + " : "") << j;
        }
        cout << " = " << sum << endl;
    }

    return 0;
}