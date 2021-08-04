#include <iostream>
using namespace std;

struct Player{
    float distance=0;
    float minutes=0, seconds=0;
};

int main(){
    Player p1,p2;
    cout << "####### Player1 ########" << endl;
    cout << "Enter Distance: ";
    cin >> p1.distance;
    cout << "Enter minutes: ";
    cin >> p1.minutes;
    cout << "Enter second: ";
    cin >> p1.seconds;
    float t1 = p1.minutes + p1.seconds/10;

    cout << "####### Player2 ########" << endl;
    cout << "Enter Distance: ";
    cin >> p2.distance;
    cout << "Enter minutes: ";
    cin >> p2.minutes;
    cout << "Enter second: ";
    cin >> p2.seconds;
    int t2 = p2.minutes + p2.seconds/10;

    if(p1.distance>=p2.distance && p1.minutes < p2.minutes ){
        cout << "Player 1 is winner!" << endl;
        cout << "Distance: " << p1.distance << endl;
        cout << "Time taken: " << t1;
    }
    else if(p1.distance==p2.distance && p1.minutes == p2.minutes){
        cout << "Draw!" << endl;
    }
    else{
        cout << "Player 2 is winner!" << endl;
        cout << "Distance: " << p1.distance << endl;
        cout << "Time taken: " << t2;

    }
    return 0;
}