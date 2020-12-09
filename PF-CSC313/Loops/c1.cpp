/*
    Date: 9-12-2020
    Purpose: Print half pyramid using *
    Author: Zafeer
*/
#include <iostream>

using namespace std;

int main(){
    int total_rows;

    cout << "Enter number of rows: ";
    cin >> total_rows;

    // This for loop will run untill the
    // rows are less or equal to the total rows.
    for(int rows=1; rows<=total_rows; rows++){
        // This will print star in a row
        // which are equal to the row we are in.
        // e.g for 2nd row, columns will be 2 as well.
        for(int column=1; column<=rows; column++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}