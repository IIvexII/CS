/*
  Q.3 Write a program that add two integers. If the user enters a negative number,
   throw and handle an appropriate exception and prompt the user enter the positive numbers.
*/

#include <iostream>
using namespace std;

class Addition{
  private:
    int result, numb1, numb2;
  public:
    Addition(): numb1(0), numb2(0), result(0) {}
    int add(){
      bool error = 1;
      while(error){
        try{
          cout << "Enter Number 1: "; cin >> numb1;
          cout << "Enter Number 2: "; cin >> numb2;

          if(numb1 >= 0 && numb2 >= 0){
            result = numb1 + numb2;
            error=0;
          }
          else
            throw 1;
        }
        catch(int){
          cout << "You can't use a negative number." << endl;
          error = 1;
        }
      }
      return result;
    }

};
int main(){
  Addition a1;
  cout << a1.add();
}