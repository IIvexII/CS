/*
Q2. Write a structure to store the name, account number and balance of customers (more
than 10) and store their information.
1 - Write a function to print the names of all the customers having balance less than 20k.
2 - Write a function to add 1000k in the balance of all the customers having more than 30k
in their balance and then print the incremented value of their balance.
*/
#include <iostream>
using namespace std;

struct Customer{
    string name;
    int account_no;
    long balance;
};
void customer_balance(Customer ct[], int size);
void add_cash(Customer ct[], int size);

int main(){
    Customer ct[11];
    ct[0] ={"Zafeer", 25554112, 50000};
    ct[1] ={"Mahad", 25554116, 65000};
    ct[2] ={"Armghan", 25554142, 50000};
    ct[3] ={"Zoya", 25554522, 1000};
    ct[4] ={"Nayab", 25554422, 300};
    ct[5] ={"Norain", 25557112, 50000};
    ct[6] ={"Bunti", 25552112, 600};
    ct[7] ={"Rohit", 25559112, 7};
    ct[8] ={"Sher Khan", 25554212, 5};
    ct[9] ={"Langor Khan", 25554712, 144500};
    ct[10] ={"Zaheer ul Deen", 25554112, 9000};
    customer_balance(ct,11);
    add_cash(ct,11);
    return 0;
}
void customer_balance(Customer ct[], int size){
    cout << "Name of Customers having balance < 20,000" << endl;
    for(int i=0; i<size; i++){
        if(ct[i].balance<20000)
            cout << ct[i].name << endl;
    }
}
void add_cash(Customer ct[], int size){
    cout << "Add 1000k" << endl;
    for(int i=0; i<size; i++){
        if(ct[i].balance<30000){
            cout << ct[i].balance << endl;
            ct[i].balance+=1000000;
            cout << ct[i].balance << endl;
        }
    }
}
