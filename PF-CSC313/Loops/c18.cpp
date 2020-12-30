/*
    Date: 30-12-2020
    Purpose:  take table number and length from user and display table. 
*/
#include <iostream>
using namespace std;

int main(){
    int len_table,
        number;

    cout << "Enter length of table: ";
    cin >> len_table;

    cout << "Enter Number: ";
    cin >> number;

    for(int i=1; i<=len_table; i++)
        cout << number << " x " << i << " = " << i*number << endl;

 
    return 0;
}