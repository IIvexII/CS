/*
    Date: 10-12-2020
    Purpose: Print pyramid using numbers.
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){

    int input_rows, rows, columns, space,count=0;

    cout << "Enter rows: ";
    cin >> input_rows;

    for(rows=1; rows<=input_rows; rows++ ){
        space=1;
        for(columns=1; columns<=input_rows*2-1; columns++){
            
            if(columns>=(input_rows+1)-rows&&columns<=(input_rows-1)+rows&&space){
                if(count<9)
                    count++;
                else
                    count=1;
                cout << count;
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