/*
    Task: write down a program that reads an array and a number   
          and prints frequency of the number in that array.
*/
#include <iostream>
using namespace std;

// Prototype
void get_arr(int arr[], size_t size);
int find_freq(int arr[],size_t size, int num);

int main(){
    int arr_size=5;
    int arr[arr_size], key;
    // get array from 
    get_arr(arr, arr_size);

    // Get the Searching number from user
    cout << "Search: ";
    cin >> key;
    // find frequency
    cout << "Frequency: " << find_freq(arr,arr_size, key) << endl;

    return 0;
}
void get_arr(int arr[], size_t size){
    for(int index=0; index<size; index++){
        cout << "Enter Number " << index+1 << ": ";
        cin >> arr[index];
    }
}
int find_freq(int arr[],size_t size, int num){
    int frequency=0;

    for(int index=0; index<size; index++){
        if(arr[index]==num){
            frequency++;
        }
    }
    return frequency;
}