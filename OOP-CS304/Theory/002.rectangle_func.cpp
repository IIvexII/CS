#include <iostream>
using namespace std;

void rectangle(int x, int y, char character);

int main(){
    rectangle(5,4,'@');
    return 
}

void rectangle(int x, int y, char character){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=y; j++){
            cout << character;
        }
        cout << endl;
    }
}