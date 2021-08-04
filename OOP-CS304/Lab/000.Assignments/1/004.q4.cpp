/*
Question 4. Create a class called Distance that includes two pieces of information as data
members---feet (int), inches (int). Your class should have a constructor which initializes the two
data members.
Provide a set and a get function for each data member. Provide a member function
Display_Distance that displays the feet and inches in the form of 5’6’’.
Write a test program that demonstrates class Distance’s capabilities.
*/
#include <iostream>
using namespace std;

class Distance{
    private:
        int feet, inches;
    public:
        Distance(int f, int i){
            feet = f;
            inches = i;
        }
        // Set functions
        void setFeet(int f){
            feet = f;
        }
        void setInches(int i){
            inches = i;
        }
        // Get functions
        int getFeet(){
            return feet;
        }
        int getInches(){
            return inches;
        }
        // Display distance
        void displayDistance(){
            cout << getFeet() << "`" << getInches() << "``" << endl;
        }

};

int main(){
    Distance d1(2,6),
             d2(5,8);
    d1.displayDistance();
    d2.displayDistance();
    return 0;
}