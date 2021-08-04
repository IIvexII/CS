#include <iostream>
#include <fstream>
using namespace std;

class Student{
    public:
      string name;
      int rollNo;
      string addr;

      void writeFile(){
        Student st;

        ofstream outFile("data.dat", ios::binary | ios::app);

        if(outFile){

          cout << "Enter Name: "; cin >> st.name;

          cout << "Enter Roll Number: "; cin >> st.rollNo;
          
          cout << "Enter Address: "; cin >> st.addr;

          outFile.write(reinterpret_cast<char*>(&st), sizeof(st));
          outFile.close();
        }
        else{
          cout << "Error: Unable to open file." << endl;
        }
      }
      void readFile(){
        Student st;
        
        ifstream inFile("data.dat", ios::binary | ios::in);

        if(inFile){
          while(inFile.read(reinterpret_cast<char*>(&st), sizeof(st))){
            st.display();
          }
          inFile.close();
        }
        else{
          cout << "Error: Unable to open file." << endl;
        }
      }
      void search(int r){
        Student st;
        int srh=0;
        ifstream inFile("data.dat", ios::binary | ios::in);

        if(inFile){
          while(inFile.read(reinterpret_cast<char*>(&st), sizeof(st))){
            if(r==st.rollNo){
              st.display();
              srh=1;
            }
          }
          if(srh==0){
            cout << "Not Found!" << endl;
          }
          inFile.close();
        }
        else{
          cout << "Error: Unable to open file." << endl;
        }
      }
      void display(){
        cout << name << "\t\t" << rollNo << "\t" << addr << endl;
      }
};
int main(){
  Student st;
  // char choice;
  // do{
  //   st.writeFile();
  //   cout << "want to add more? y/n: "; cin >> choice;
  // }while(choice!='n');
  // st.readFile();
  st.search(7);
  return 0;
}