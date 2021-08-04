/*
Q2. Write a class array that contains an array of integer as data member. The class contains the
following data member functions:
A constructor or that initializes the array elements to -1.
Input function to input the values in the array.
Show function to display the values of the array.
Overload == operator to compare the values of two objects. The overloaded function return
1 if values of both objects are same and return 0 otherwise.
*/
#include <iostream>
using namespace std;

class Array{
  public:
    int array[7];
    const int arrSize = 7;    

    Array(){
      for(int index=0; index<arrSize; index++){
        array[index] = -1;
      }
    }
    void input(){
      for(int index=0; index<arrSize; index++){
        cout << index+1 << ": ";
        cin >> array[index];
      }
    }
    void print(){
      cout << "[";
      for(int index=0; index<arrSize; index++){
        cout << array[index] << ",";
      }
      cout << "\b]";
    }
    bool operator ==(Array &a){
      for(int i=0; i<arrSize; i++){
        if(array[i]!=a.array[i]){
          return 0;
        }
      }
      return 1;
    }
};
int main(){

  Array a1,a2;
  a1.input();
  a2.input();

  a1.print();
  cout << " is " << ((a1==a2)?"":"not") << " equal to ";
  a2.print();
  return 0;
}