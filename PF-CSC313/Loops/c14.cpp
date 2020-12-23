#include <iostream>
using namespace std;

int main(){
    string user_inp;
    int iterator=0,
        word=1, 
        character=0;

    cout << "Enter a sentance: ";
    getline(cin,user_inp);

    while(iterator < user_inp.length()){
        if(user_inp[iterator]==' ' && user_inp[iterator-1]!=' ')
            word++;
        character++;
        iterator++;
    }

    cout << "Character: " << character << endl;
    cout << "Words: " << word << endl;
    return 0;
}