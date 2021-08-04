/*
  Q1. Write a class Time that has three data member hour, minutes and seconds. The class has
  The following member functions
  A constructor to initialize the time.
  Show function to show the time.
  Overload ++ operator to increase the time by 1 minute.
  Overload --- operator to decrease the time by 1 minutes.
*/
#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

class Time{
  private:
    int hours;
    int minutes;
    int seconds;
  
  public:
     Time(){
       hours = 0;
       minutes = 0;
       seconds = 0;
      }
     Time(int hr, int min, int sec){
       hours = hr;
       minutes = min;
       seconds = sec;
      }

     void operator++(){
         minutes++;
     }

     void operator --(){
         minutes--;
     }
     void put(int hr, int min, int sec){
       hours = hr;
       minutes = min;
       seconds = sec;
     }
     void show(){
       system("cls");
       cout << hours << ":" << minutes << ":" << seconds << endl;
     }
};
int main(){

  Time t1;
  t1.put(3,15,21);
  for(int i=0; i<10;++i, ++t1){
    Sleep(90);
    t1.show();
  }
  Sleep(600);
  for(int i=0; i<2;++i, --t1){
    Sleep(90);
    t1.show();
  }
  return 0;
}