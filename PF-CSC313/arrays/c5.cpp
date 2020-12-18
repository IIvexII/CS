/*
    Date: 18-12-2020
    Purpose: Find an element using linear search.
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    int arr_size=10,
        arr[arr_size]={},
        search_key;
    
    // Take values from user and store them in an array.
    for(int index=0; index<arr_size; index++){
        cout << "Enter Value " << index << ": ";
        cin >> arr[index];
    }
    // Taking key to search
    cout << "Enter Key to search: ";
    cin >> search_key;

    // Linear search algorithm implementation
    for(int index=0; index<arr_size; index++){
        if(arr[index]==search_key){
            cout << "Key Found at" << endl;
            cout << "Index: " << index << endl;
            cout << "Search Key: " << search_key;
            return 0;
        }
    }

    cout << "Key not found!" << endl;
    return 0;
}