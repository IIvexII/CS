/*
An airline is a company that provides air transport services for traveling passengers and freight
and an airline operates many flights simultaneously. You are required to develop an automatic
system for management of airline activities. The main conditions of system are given below.
i. Each airline has a unique ID (e.g. air-blue id= 101 and PIA id= 102) and It also has
departure airport and arrival airport ID. There are many type of pilots in an airline
(captain pilot, co-pilot, commercial pilot, general duty pilot and private pilot) and each
pilot has an experience level: 1 is minimum level and 5 is maximum level.
ii. Each flight has two pilot captain pilot and co-pilot and it uses a specific type of aircraft
with departure time and arrival time.
iii. Airline company owns two set of aircraft; first set is in working state and second set is
in repair state. A type of aircraft may require a particular number of pilots and there
must be at least one captain and one co-pilot, and a captain pilot must have a level 5.
*/
#include <iostream>
using namespace std;

class Pilot{
  protected:
    string name;
    int level;
    int arivalTime, departureTime;
};

class Airline: public Pilot{
  protected:
    int id;
    int airportId;
  public:
    Airline(int i );
};

int main(){
    Airline 
    return 0;
}