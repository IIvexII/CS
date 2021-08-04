#include <iostream>
#include "002.header.h"

using namespace std;

int main(){
    ArithmeticOperations a1;
    a1.num1 =20;
    a1.num2=5;

    cout << "Addition: " << a1.addition() << endl;
    cout << "Subtraction: " << a1.subtraction() << endl;
    cout << "Multiplication: " << a1.multiplication() << endl;
    cout << "Division: " << a1.division() << endl;

    return 0;
}