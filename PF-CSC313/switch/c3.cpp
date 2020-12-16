#include <iostream>

using namespace std;

int main(){

    char alp;
    int type_alp;   // 0 for small and 1 for capital.

    cout << "Enter Alphabet: ";
    cin >> alp;
    
    if(alp>='a' && alp<='z'){
        type_alp = 0;
    }
    else if( alp>='A' && alp<='Z'){
        type_alp = 1;
    }

    switch(type_alp){
        case 0:
            alp = alp-32;
            cout << "Capital:" << alp << endl;
            break;
        case 1:
            alp = alp+32;
            cout << "Small:" << alp << endl;
            break;
    }
    return 0;
}