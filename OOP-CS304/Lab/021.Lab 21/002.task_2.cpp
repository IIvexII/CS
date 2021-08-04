/*
  Q2. Create a class which only works for absolute numbers, if it encounters any negative
occurrence, then it throw an exception to its handler and display errors.
*/
#include <iostream>

class Absolute{
  private:
    int number;
  public:
    Absolute(int n){
      try{
        if(n > 0)
          number = n;
        else
          throw n;
      }
      catch(int){
        std::cout << "You can't use a negative number in this class." << std::endl;
      }
    }
};
int main(){
  Absolute i(11);
}