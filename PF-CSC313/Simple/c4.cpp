/*
    Mixture
*/
#include <iostream>
using namespace std;

int func();

// Global Variable
int var_1 = 10;

int main(){
    // Local Variable
    int var_1 = 30;
    int var_2=20;

    cout << "var_1 = " << var_1 << " (Local)" << endl;
    cout << "var_2 = " << var_2 << " (Local)" << endl << endl;
    cout << "var_1 = " << ::var_1 << " (global)" << endl << endl;
    cout << "var_1 = " << func() << " (global using function)";
    return 0;
}

int func(){
    return var_1;
}