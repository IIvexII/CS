/*
    Date: 6-1-2021
*/
#include <iostream>
using namespace std;

// Prototype
int sum(int a,int b);
int avg();
int main(){
    
    cout << avg();

    return 0;
}

int sum(int a,int b){
    int add;
    add=a+b;
    return add;
}
int avg(){

    return (sum(30,20)/2);
}