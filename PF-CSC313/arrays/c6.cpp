/*
    Date: 18-12-2020
    Purpose: Find key using binary search
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5,6,7,8,9,12,16,26,45,57,89};
    int low_index=0,
        high_index=13,
        mid,
        search_key=5;

    // ##### Binary search Algorithm ##### 
    // Loop untill high value is greator then low value. 
    while(high_index > low_index){
        // Find mid point of low and high value (low+high/2) 
        mid=(low_index+high_index)/2;
        // assign mid value to high_index if value is on left side 
        if(arr[mid]>search_key){
            high_index = mid;
        }
        // assign mid value to low_index if value is on right side 
        else if(arr[mid]<search_key){
            low_index = mid;
        }
        // Print the index if search is sucessfull and end the program.
        else if(arr[mid]==search_key){
            cout << "Key Found at index" << mid << endl;
            return 0;
        }
    }
    // print it if search is not sucessful.
    cout << "Not found!" << endl;
    return 0;
}
