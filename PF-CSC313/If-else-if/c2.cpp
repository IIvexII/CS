/*
    Date: 11-12-2020
    Purpose: User enter 3 digits and it print all possible combinations(without using loop)
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;

    cout << "Enter 3 digits(Don't enter same number): ";
    cin >> n1 >> n2 >> n3;

    if(n1!=n2)
        if(n2!=n3)
            if(n3!=n1)
                cout<<n1<<n2<<n3<<endl<<n1<<n3<<n2<<endl<<n2<<n1<<n3<<endl<<n2<<n3<<n1<<endl<<n3<<n1<<n2<<endl<<n3<<n2<<n1<<endl;

    return 0;
}