#include <iostream>
using namespace std;

struct Tax{
    float income,taxRate, totalTax;
};

int main(){
    Tax taxArray[5];

    for(int index=0; index<5; index++){
        cout << "Income: ";
        cin >> taxArray[index].income;
        cout << "Tax Rate: ";
        cin >> taxArray[index].taxRate;
        taxArray[index].totalTax = taxArray[index].income * taxArray[index].taxRate/100;
    }

    for(int index=0; index<5; index++){
        cout << "Tax " << index+1 << ": " << taxArray[index].totalTax << endl;
    }

    return 0;
}