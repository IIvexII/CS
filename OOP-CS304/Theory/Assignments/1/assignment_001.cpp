/*
    -> class dayType 
        - day of the week
        - store the day
    -> Operations
        + Set the day.
        + Print the day.
        + Return the day.
        + Return the next day.
        + Return the previous day.
        + Calculate and return 
            - day by adding certain days(int).
        + Add the appropriate constructors.
*/
#include <iostream>
#include <algorithm>
using namespace std;

class DayType {
    public: 
        // ########## Constructor ##########
        /*  These constructors are made to 
            construct the object. First one
            will inilitize the day variable
            to unknown when the  object  is
            not initialize while declaring. 
        */
        DayType(): day("Unknown") {}
        DayType(string d): day(toLower(d)) {}

        // ########### Set the Day ###########
        /*  This function  os  made to  assign
            a value to day  variable. It  uses
            the toLower() to avoid any hurdle
            while working with the days as all
            the list have lower case names of
            days.
        */
        void set(string);

        // ########## Print the day ##########
        /*  These functions will print the day
            stored in day  varialbe  in  short
            form  as  well  as  in  full form. 
            Simple print() will display day in 
            short form.
        */
        void print();
        void printFull();

        // ######### Return the day #########
        /*  This  function  will  return  the 
            value of day varialbel.
        */
        DayType get();

        // ######## Return Next day #########
        /*  This function  will  return  the
            next day from the the day stored
            in day variable.
        */
        DayType getNext();

        // ####### Return previous day #######
        /*  This function  will  return  the
            previous  day  from  the the day
            stored in day variable.
        */
        DayType getPrevious();

        // ####### Add day in current day #######
        /*  This function has the functionality
            to add some days to the current day
            stored  in  day  variable  and then
            return the day which will be at the
            day.(It will not change the actual
            value of day variable). 
        */
        DayType addToCurrent(int);

    private:
        // List of days in short and long form
        string daysShort[7]={"sun", "mon", "tue", "wed", "thu", "fri", "sat"};
        string daysFull[7]={"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
        string day;

        // ######## Day is valid ########
        /*  This funciton will check if 
            the <string>day given to it
            is valid or not.
        */
        bool isValid(string);
        
        // ########## Find Day ##########
        /*  This function will find the
            day in the list of days and 
            return  the  exact INDEX in 
            that list.
        */
        int find(string);

        // ##### Convert to lower, Upper and capitalize ####
        /*  These function will take a string and return a 
            string which is modified version of that string. 
            Names of these functions are self explanatory.
        */
        string toLower(string);
        string toUpper(string);
        string toCap(string);
};
int main(){
    // ######## Testing the capabilities of DayType class ########
    DayType day;

    cout << "Setting the Day -> MON."<< endl;
    day.set("MON");     // Any type of casing will work :)

    cout << "1. Print the day -> ";
    day.print();
   
    cout << "2. Print day in full form -> ";
    day.printFull();

    cout << "3. Return the day -> ";
    DayType temp(day.get());    // Storing it in temp variable as get() will
    temp.printFull();           // return a DayType object. we can simplly
                                // print it like this as well: day.get().print();
    cout << "4. Return the next day (current day is Monday) -> ";
    day.getNext().printFull();

    cout << "5. Return previous day (current day is Monday) -> ";
    day.getPrevious().printFull();

    cout << "6. Added 5 to current day -> ";
    day.addToCurrent(5).printFull();

    return 0;
}

// Set the Day
void DayType::set(string d) {
    day=toLower(d);
}

// Print the day
void DayType::print(){
    if(isValid(day)){
        cout << toCap(day) << endl;
    }
}
void DayType::printFull(){
    if(isValid(day)){
        string fullDay=daysFull[find(day)];

        cout << toCap(fullDay) << endl;
    }
}
// return the day
DayType DayType::get(){
    return day;
}

// return next day
DayType DayType::getNext(){
    DayType nextDay;
    int dayIndex=find(day);

    if(dayIndex!=-1 && dayIndex<7){
        nextDay.set(daysFull[dayIndex+1]);
    }
    else if(dayIndex==7){
        nextDay.set(daysFull[0]);
    }
    else{
        nextDay.set("Unknown");
    }
    return nextDay;
}

// return previous day
DayType DayType::getPrevious(){
    DayType previousDay;
    int dayIndex=find(day);

    if(dayIndex!=-1 && dayIndex>0){
        previousDay.set(daysFull[dayIndex-1]);
    }
    else if(dayIndex==0){
        previousDay.set(daysFull[6]);
    }
    else{
        previousDay.set("Unknown");
    }
    return previousDay;
}

DayType DayType::addToCurrent(int addDays){
    int dayIndex= find(day) + addDays;
    DayType calDay;
    while(dayIndex%7<0){
        dayIndex -= 7;
    }

    calDay.set(daysShort[dayIndex]);
    return  calDay;
}

// Day is valid?
bool DayType::isValid(string d){
    for(int i=0; i<7; i++){
        if(d==daysShort[i] || d==daysFull[i]){
            return 1;
        }
    }
    return 0;
}
// Find Day -> Gives index
int DayType::find(string d){
    if(isValid(day)){
        for(int index=0; index<7; index++){
            if(d==daysShort[index] || d==daysFull[index]){
                return index;
            }
        }
    }
    return -1;
}
// Convert to lower & Upper
string DayType::toLower(string str){
    // For making it easy to manage days given by user of our class.
    // (To Be Honest) 
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}
string DayType::toUpper(string str){ 
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}
string DayType::toCap(string str){ 
    str[0]-=32;
    return str;
}