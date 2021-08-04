/*
Question 3. Create a class called Date that includes three data members: a month (int), a day (int),
and a year (int). Your class should have a constructor with three parameters that uses the
parameters to initialize the three data members. For the purpose of this question, assume that the
values provided for the year and day are correct, but ensure that the month value in the range 1-
12; if it isn’t, set the month to 1.
Provide a set and a get function for each data member. Provide a member function displayDate
that displays the month, day and year separated by forward slashes (/).
Write a test program that demonstrates class Date’s capabilities.
*/
#include <iostream>
using namespace std;

class Date{
    private:
        int day,month,year;
    public:
        Date(int m, int d, int y){
            day=d;
            year = y;
            month = (m>=1 && m<=12)? m : 1;
        }
        // Set functions
        void setDay(int d){
            day = d;
        }
        void setYear(int y){
            year = y;
        }
        void setMonth(int m){
            month = (m>=1 && m<=12)? m : 1;
        }
        // Get functions
        int getDay(){
            return day;
        }
        int getMonth(){
            return month;
        }
        int getYear(){
            return year;
        }
        // Display Date
        void displayDate(){
            cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
        }
};

int main(){
    Date d1(3, 25, 2017),
         d2(12, 15, 2020),
         d3(15, 8, 2021);

    d1.displayDate();
    d2.displayDate();
    d3.displayDate();
    return 0;
}