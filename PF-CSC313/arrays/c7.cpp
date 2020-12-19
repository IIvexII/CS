/*
    Date: 19-12-2020
    Purpose: Count all positive and negative numbers in an array.
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    int arr[]={12,54,-8,4,-8,5,-54,47,8,-45,-48,4,-4},
        positive=0,
        negative=0;

    for(int element:arr)
        if(element<0)
            negative++;
        else
            positive++;
    
    cout << "Positive Numbers:" << positive << endl;
    cout << "Negative Numbers:" << negative << endl;

    return 0;
}