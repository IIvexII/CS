/*
    Calculator
*/
#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
int mul(int a, int b){
    return a*b;
}
int sub(int a, int b){
    return a-b;
}
int divide(int a, int b){
    return a/b;
}
int mod(int a, int b){
    return a%b;
}
int pow(int a, int b){
    int ans=1;
    for(int i=1;i<=b;i++)
        ans*=a;        
    return ans;
}

int main(){
    char symb;
    int a , b;
    cout << "Operation: ";
    cin >> symb;

    switch(symb){
        case '+':
            cout << "Enter A: ";
            cin >> a;
            cout << "Enter B: ";
            cin >> b;
            cout << "Sum:" << add(a,b);
            break;
        case '-':
            cout << "Enter A: ";
            cin >> a;
            cout << "Enter B: ";
            cin >> b;
            cout << "Sub:" << sub(a,b);
            break;
        case '*':
            cout << "Enter A: ";
            cin >> a;
            cout << "Enter B: ";
            cin >> b;
            cout << "Mul:" << mul(a,b);
            break;
        case '/':
            cout << "Enter A: ";
            cin >> a;
            cout << "Enter B: ";
            cin >> b;
            cout << "Divide:" << divide(a,b);
            break;
        case '%':
            cout << "Enter A: ";
            cin >> a;
            cout << "Enter B: ";
            cin >> b;
            cout << "Mod:" << mod(a,b);
            break;
        case '^':
            cout << "Enter A: ";
            cin >> a;
            cout << "Enter B: ";
            cin >> b;
            cout << "Pow:" << pow(a,b);
            break;
    }
    return 0;
}