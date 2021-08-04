/*
  Write a class template that inputs the index of the array and displays the value in the specified
  index.
*/
#include <iostream>
using namespace std;

template<class T>

class A{
  public:
    T array[20];
    size_t size;
    int index;

    A(T* arr, size_t s){
      size = s;
      for(int i=0; i<size; i++){
        array[i]=arr[i];
      }
    }
    void display(int ind){
      cout << "VALUE: " << array[ind] << endl;
    }
};


int main(){
  int arr1[] = {2,5,1,5};
  float arr2[] = {2.9,5.8,1.1,5.7,0.1};

  A<int>a(arr1, 4);
  a.display(0);

  A<float>b(arr2, 5);
  b.display(2);
  return 0;
}
