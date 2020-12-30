/*
    Date: 30-12-2020
    Purpose:  product of all odd numbers
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    int product=1,
        number;

    for(number=1; number<=10; number+=2)
        product*=number;

    cout << "Product: " << product << endl;
 
    return 0;
}