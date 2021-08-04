#include <iostream>
using namespace std;

class Publication{
    private:
        string title; 
        float price;
    public:
        void getData(){
            cout << "Enter Title: "; cin >> title;
            cout << "Enter Price: "; cin >> price;
        }
        void putData(){
            cout << "Title: " << title << endl;
            cout << "Price: " << price << endl;
        }
};

class Book: private Publication{
    private:
        int pageCount;
    public:
        void getData(){
            Publication::getData();
            cout << "Enter page count: "; cin >> pageCount;
        }
        void putData(){
            Publication::putData();
            cout << "Page Count: " << pageCount << endl;
        }

};

class Tape: private Publication{
    private:
        float time;
    public:
        void getData(){
            Publication::getData();
            cout << "Enter playing time: "; cin >> time;
        }
        void putData(){
            Publication::putData();
            cout << "Playing Time: " << time << endl;
        }
};

class Sales{
    private:
        float saleRecords[3];
    public:
        void getData(){
            for(int i=0; i<3; i++){
                cout << "Month " << i+1 << " Sale: "; cin >> saleRecords[i];
            }
        }
        void putData(){
            cout << "   :Sales Data:" << endl;
            for(int i=0; i<3; i++)
                cout << "Month "<< i+1 << " : " << saleRecords[i] << endl;
        }
};

class Disk: public Publication{
    private:
        char diskType;
    public:
        void getData(){
            cout << "Enter Disk Type(c/d): "; cin >> diskType;
        }
        void putData(){
            cout << "Disk Type: " << ((diskType=='c')?"CD":"DVD") << endl;
        }

};