#include <iostream>

using namespace std;

int main(){

    int n=1, sum=0;

    while(n<=5){
        sum += n;
        n++; 
    }
    cout << "Sum = " << sum << endl;
    return 0;
}