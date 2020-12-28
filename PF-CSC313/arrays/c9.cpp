/*
    Date: 28-12-2020
    Purpose: Write a program to store table in 2D array
             and display that table.
*/
#include <iostream>
using namespace std;

int main(){
    int table_number, 
        table[1][11]={{}};

    cout << "Table Number: ";
    cin >> table[0][0];

    // Calculating and Inserting values in 2D table.
    for(int x_index=0; x_index<1; x_index++)
        for(int y_index=1; y_index<11; y_index++)
            // table number is stored at zero index in 2nd dimension
            // So Iam multiplying it with y_index variable.
            table[x_index][y_index]= table[x_index][0]*(y_index);
    
    // Displaying values stored in table.
    for(int x_index=0; x_index<1; x_index++)
        for(int y_index=1; y_index<11; y_index++)
            cout << table[x_index][y_index] << " x " << y_index << " = " << table[x_index][y_index] << endl;

    return 0;
}