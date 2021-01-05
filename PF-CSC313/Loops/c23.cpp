/*
    Date: 5-1-2021
    Purpose: Write a program that display the following shape using do-while loop. 
            4 4 4 4
            3 3 3
            2 2 
            1
*/
#include <iostream>
using namespace std;

int main(){
    int i=4,j=1;
    do{
        do{
            cout << i;
            j++;
        }while(j<=i);

        cout << endl;
        
        j=1;
        i--;
    }while(i>=1);
    return 0;
}