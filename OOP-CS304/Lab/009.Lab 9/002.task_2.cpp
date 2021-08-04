/*
    Q2). Create two classes named Mammals and MarineAnimals. Create another class named
BlueWhale which inherits both the above classes. Now, create a function in each of these classes
which prints "I am mammal", "I am a marine animal" and "I belong to both the categories:
Mammals as well as Marine Animals" respectively. Now, create an object for each of the above
class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimals by the object of MarineAnimal
3 - function of BlueWhales by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale
*/
#include <iostream>
using namespace std;

class Mammals{
    public:
        void mammalShow(){
            cout << "I am mammal." << endl;
        }
};
class MarineAnimals{
    public:
        void marnineShow(){
            cout << "I am a marine animal" << endl;
        }
};
class BlueWhales: public Mammals, public MarineAnimals{
    public:
        void blueWhaleShow(){
            cout << "I belong to both the categories: \nMammals as well as Marine Animals" << endl;
        }
};

int main(){
    Mammals Mammal;
    Mammal.mammalShow();
    
    MarineAnimals MarineAnimal;
    MarineAnimal.marnineShow();

    BlueWhales BlueWhale;
    BlueWhale.blueWhaleShow();

    return 0;
}