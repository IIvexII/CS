/*
Q3). Write a base class Computer that contains data members of wordsize(in bits), memorysize
(in megabytes), storagesize (in megabytes) and speed (in megahertz). Derive a Laptop class that is
a kind of computer but also specifies the object’s length, width, height, and weight. Member
functions for both classes should include a default constructor, a constructor to inialize all
components and a function to display data members.
*/
#include <iostream>
using namespace std;

class Computer{
    protected:
        int wordSize;
        int memorySize;
        int storageSize;
        int speed;
    public:
        // Constructors
        Computer(): wordSize(64), memorySize(2048), storageSize(10240), speed(24000) {}
        Computer(int wS, int mS, int sS, int sp): 
            wordSize(wS), memorySize(mS), storageSize(sS), speed(sp) {}

        void display(){
            cout << "Word Size: " << wordSize << " bits" << endl;
            cout << "Memory Size: " << memorySize << " MB" << endl;
            cout << "Storage Size: " << storageSize << " MB" << endl;
            cout << "Speed: " << speed << " Mhz" << endl;

        }
};
class Laptop: public Computer{
    private:
        int length, width, height;
        float weight;
    public:
        Laptop(): length(0), width(0), height(0), weight(0.0){};
        Laptop(int l, int wi, int h, int we ): length(l), width(wi), height(h), weight(we) {}
        
        void display(){
            cout << "Length: " << length << " inches" << endl;
            cout << "Width: " << width << " inches" << endl;
            cout << "Height: " << height << " inches" << endl;
            cout << "Weight: " << weight << " kilogram" << endl;
            Computer::display();
        }
};
int main(){
    Laptop l1(54,78,30, 0.544);
    l1.display();
    return 0;    
}