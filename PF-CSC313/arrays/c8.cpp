/*
    Date: 19-12-2020
    Purpose: Take some elements from user and calculate sum of it.
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    
    int arr_size=10,
        arr[arr_size]={10,10,10},
        sum=0;

    for(int &element:arr){
        if(element==0){
            cout << "Enter element at " << &element << " :";
            cin >> element;
        }
    }
    for(int element:arr){
        sum+=element;
    }

    cout << "Sum is " << sum << endl;

    return 0;
}