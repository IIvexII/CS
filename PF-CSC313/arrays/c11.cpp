/*
    Date: 16-1-2021
    Purpose: Selection Sorting
*/
#include <iostream>
using namespace std;

// Prototype
void printArray(int arr[], int arr_size);
void swap(int *a, int *b);
void selectionSort(int arr[],int size);

int main(){
    int arr[]={31, 62, 34, 65, 32, 12, 32, 1 ,8};
    int size= sizeof(arr) / sizeof(arr[0]);
    // Unsorted
    printArray(arr, size);
    // Sorting
    selectionSort(arr,size);
    // Sorted
    printArray(arr, size);
    return 0;
}

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void printArray(int arr[], int size){
    cout << "{ ";
    for(int i=0; i<size; i++){
        cout << arr[i] <<", ";
    }
    cout << "\b\b }" << endl;
}

void selectionSort(int arr[],int size){
    for(int step = 0; step < (size - 1); step++){
        int minIndex=step;
        for(int i=step+1; i < size; i++){
            if(arr[i]<arr[minIndex])
                minIndex=i;
        }
        swap(&arr[minIndex], &arr[step]);

    }
}