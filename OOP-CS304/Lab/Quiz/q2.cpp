/*
Write a class Book that contains the attributes BookID, book name and price. It also contains
member function to input and show its attributes. Write another class Writer that contains the
attributes writer name, address and number of books written by him. It contains an array of Book
objects as its member. The length of array should be 5 to store the data of five books. It also
contains member functions to input and display its attribute.
*/
#include <iostream>
using namespace std;

class Book{
    private:
        int id;
        string name;
        int price;
    public:
        void input(){
            cout << "Enter Book ID: "; cin >> id;
            cout << "Enter Book Name: "; cin >> name;
            cout << "Enter Book price: "; cin >> price;
        }
        void show(){
            cout << "Book ID: " << id;
            cout << "Book Name: " << name;
            cout << "Book price: " << price;
        }
};
class Writer: private Book {
    private:
        string name;
        string address;
        int numBooks;
        Book bookList[5];
    public:
        void input(){
            cout << "Enter Writer Name: "; cin >> name;
            cout << "Enter Writer Address: "; cin >> address;
            cout << "Enter Writer num: "; cin >> numBooks;
            cout << "Enter Books Written by writer:" << endl;
            for(int i=0; i<numBooks; i++){ 
                cout << "Book " << i+1 << ":" << endl;
                bookList[i].input();
            }
        }
        void display(){
            cout << "Writer Name: "<< name << endl;
            cout << "Writer Address: " << address << endl;
            cout << "Writer num: "<< numBooks << endl;
            cout << "Books Written by writer:" << endl;
            for(int i=0; i<numBooks; i++){ 
                cout << "Book " << i+1 << ":" << endl;
                bookList[i].show();
            }
        }
};


int main(){
    Writer w1;
    w1.input();
    w1.display();
    return 0;
}