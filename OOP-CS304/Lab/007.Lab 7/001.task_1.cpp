/*
Q1). Suppose you have an account in HBL Bank with an initial amount of 10k and you have to
add some more amount to it. Create a class 'AddAmount' with a data member named 'amount' with
an initial value of 10k. Now make two constructors of this class as follows:
1. Create a default constructor that uses a member initializer list that allows the user to
initialize initial value in account.
2. having a parameter which is the amount that will be added to the account.
Create an object of the 'AddAmount' class and display the final amount in the account.
*/

#include <iostream>
using namespace std;
class AddAmount{
    private:
        int initAmount=10000;
        double amount;
    public:
        AddAmount():amount(initAmount) {}
        AddAmount(double addAmount):amount(initAmount+addAmount) {

        }
        void printAmount(){
            cout << "Amount: " << amount << endl;
        }
};
int main(){
    AddAmount a1(500), a2;
    a1.printAmount();
    a2.printAmount();
}