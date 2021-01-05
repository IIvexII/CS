#include <iostream>
using namespace std;

int main(){
    int num1 = 1,
        num2 = 1;

    for(int i=1; i<=8; i++ ){
        if(num2<=4){
            cout << num1 << "\t" << num2 << endl;
            num2++;
        }
        if(num2>4){
            num2=1;
            num1++;
        }
    }
}