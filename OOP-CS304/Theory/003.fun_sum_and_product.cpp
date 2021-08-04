/*
    Task: write down a function that accepts two numbers 
          and returns their sum as well as their product. 
          (Use two value parameters and two reference parameters)
    Instructor: Shazia Saqib 
*/
#include <iostream>
using namespace std;
//           value     value     ref.      ref.
void fun(int num1, int num2, int &sum, int &prod){
    sum = num1 + num2;
    prod = num1 * num2;
}

int main(){
    int sum, product;
    fun(2,4,sum,product);
    cout << "Sum is " << sum << " and Product is " << product << endl;
    return 0;
}
