/*
    Date: 17-12-2020
    Purpose: Find Maximum number in an array.
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    int arr[]={45,434,234,5,3,4,53,3,42,3,2323,34,6,65,45,3425,56,75,4,34,53};
    int max=0;

    for(int x:arr)
        // If element in array is greator then max then
        // max will be equal to that element.
        if(x>max)
            max=x;

    cout << "Maximum Number is: " << max << endl;

    return 0;
}