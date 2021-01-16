/*
    Date: 17-12-2020
    Purpose: Find Maximum number in an array.
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    int arr[10]={}, usr_inp;
    int min=INT_MAX,
        min=INT_MIN;

    for(int i=0; i<10; i++){
        cout << "Enter Value " << i+1 << ": ";
        cin >> usr_inp;
        arr[i]=usr_inp;
    }

    for(int x:arr){
        // If element in array is greator then max then
        // max will be equal to that element.
        if(x<min)
            min=x;
        if(x>max)
            max=x
    }
    cout << "Maximum Number is: " << max << endl;
    cout << "Minimum Number is: " << min << endl;

    return 0;
}