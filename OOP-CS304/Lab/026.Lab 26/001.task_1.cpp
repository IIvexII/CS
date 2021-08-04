#include <iostream>
using namespace std;

template<class T>

T min(T* arr, int size){
  T min=arr[0];

  for(int i=0; i<size; i++){
    if(arr[i]<min){
      min=arr[i];
    }
  }
  return min;
}
int main(){
  int arr1[] = {2,5,1,5};
  float arr2[] = {2.9,5.8,1.1,5.7,0.1};

  cout << "Int Array Minimum: " << min(arr1, 4) << endl;
  cout << "Float Array Minimum: " << min(arr2, 5) << endl;

  return 0;
}
