#include <iostream>
using namespace std;

int main(){
    int key[5]={1,2,6,45,4},
        user_answer[5];
    
    for(int i=0; i<5; i++){
        cout << "Enter Q" << i+1 << endl;
        cin >> user_answer[i];
    }

    for(int i=0; i<5; i++){
        if(user_answer[i]!=key[i])
            cout << "Answer Number " << i+1 << " is wrong." << endl;
    }


    return 0;
}