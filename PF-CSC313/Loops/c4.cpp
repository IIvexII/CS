/*
    Date: 9-12-2020
    Purpose: Program to print full pyramid using *
    Author: Zafeer
*/
#include <iostream>

using namespace std;

int main(){


    int input_rows, rows, columns, space;

    cout << "Enter rows: ";
    cin >> input_rows;

    for(rows=1; rows<=input_rows; rows++ ){
        space=1;
        for(columns=1; columns<=input_rows*2-1; columns++){
            
            if(columns>=(input_rows+1)-rows&&columns<=(input_rows-1)+rows&&space){
                cout << "*";
                space=0;
            }
            else{
                cout << " ";
                space=1;
            }
        }
        cout << endl;
    }
 

    return 0;
}