/*
  Date: 17-12-2020
  Purpose: Access elements of array using for-each loop 
  Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    int A[]={5,6,74,5,4,3,34,5,6,542,56,65,3};
    float B[4] = {3.5f,4.6f};
    
    // x will contain each element of array.
    cout << "Int Array A[";
    for(int x:A)
        cout << x << ",";

    cout << "\b]" << endl;

    // This for-each loop will depend on
    // the size of array not the element it contain
    cout << "Float Array B[";
    for(auto y:B)
      cout << y << ",";

    cout << "\b]" << endl;
    
    return 0;
}