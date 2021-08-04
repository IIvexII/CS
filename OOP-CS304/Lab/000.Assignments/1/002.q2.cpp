/*
Question 2. Create a class called MotorVehicle that represents a motor vehicle using: make
(string), fuelType (type string), yearOfManufacture (int), color (string), and engineCapacity (int).
Your class should have a constructor that initializes the three data members. Provide a set and a
get function for each data member. Add a member function called displayCardDetails that displays
the five data members in five separate lines in the form “member name: member value”.
Write a test program to demonstrate MotorVehicle’s capabilities.
*/
#include <iostream>
using namespace std;

class MotorVehicle{
    private:
        string name, fuelType, color;
        int yearOfManufacture, engineCapacity;
    public:
        MotorVehicle(string vechName,int engCapacity, int year, string vechColor="Red", string fType="Petrol"){
            name = vechName;
            fuelType = fType;
            color = vechColor;
            yearOfManufacture = year;
            engineCapacity = engCapacity;
        }
        // Set functions
        void setName(string vechName){
            name = vechName;
        }
        void setFuelType(string vechFuelType){
            fuelType = vechFuelType;
        }
        void setyear(int vechYear){
            yearOfManufacture = vechYear;
        }
        void setColor(string vechColor){
            color = vechColor;
        }
        void setEngCapacity(int vechEngCapacity){
            engineCapacity = vechEngCapacity;
        }
        // Get function
        string getName(){
            return name;
        }
        string getFuelType(){
            return fuelType;
        }
        string getColor(){
            return color;
        }
        int getyear(){
            return yearOfManufacture;
        }
        int getEngCapacity(){
            return engineCapacity;
        }
        void displayCardDetails(){
            cout << "#######################################" << endl;
            cout << "Name: " << getName() << endl;
            cout << "Fuel Type: " << getFuelType() << endl;
            cout << "Color: " << getColor() << endl;
            cout << "Year of Manufacture: " << getyear() << endl;
            cout << "Engine Capacity: " << getEngCapacity() << "cc" << endl;
            cout << "#######################################" << endl;
        }
};

int main(){
    MotorVehicle v1("Honda 125", 124, 2020),
                 v2("Honda 70", 72, 2017, "Black"),
                 v3("Civic", 1799, 2018, "White", "Unleaded Gasoline");
    v1.displayCardDetails();
    v2.displayCardDetails();
    v3.displayCardDetails();

    return 0;
}