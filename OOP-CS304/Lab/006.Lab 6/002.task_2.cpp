/*
Q2). Suppose you have an account in HBL Bank with an initial amount of 10k and you have to
add some more amount to it. Create a class 'AddAmount' with a data member named 'amount' with
an initial value of 10k. Now make two constructors of this class as follows:

1. without any parameter - no amount will be added to the account.
2. having a parameter which is the amount that will be added to the account.
*/

#include <iostream>
using namespace std;
class AddAmount{
    private:
        double amount=10000;
    public:
        AddAmount(){
            cout << "Ammount: " << amount << endl;

        }
        AddAmount(double amount){
            AddAmount::amount += amount; 
            cout << "Ammount: " << AddAmount::amount << endl;
        }
};
int main(){
    AddAmount a1,a2(500);
}