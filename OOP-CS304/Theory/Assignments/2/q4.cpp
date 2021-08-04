/*Q4: Keep the safearay class the same as in that program, and, using inheritance, derive the
capability for the user to specify both the upper and lower bounds of the array in a constructor.
This is similar to Exercise 9 in Chapter 8, except that inheritance is used to derive a new class
(you can call it safehilo) instead of modifying the original class.*/

#include <iostream>
using namespace std;

#define LIMIT 10

class SafeAray {
    private:
        int arr[LIMIT];
    public:
        void putel(int n, int elvalue) //set value of element
        {
            if( n < 0 || n >= LIMIT ){
                cout << "\nIndex out of bounds";
                exit(1);
            }
            arr[n] = elvalue;
        }
        int getel(int n) const //get value of element
        {   
            if( n< 0 || n>=LIMIT ){
                cout << "\nIndex out of bounds";
                exit(1);
            }
            return arr[n];
        }
};

class AdvanceSafeArray: public SafeAray{
    private:
        int upperBound, lowerBound;
        int *arr;

    public:
        AdvanceSafeArray(int u, int l){
            upperBound = u;
            lowerBound = ((l>=0)?l:0); 
            arr = new int[upperBound];
        }
        void putel(int n, int elvalue) //set value of element
        {
            if( n < lowerBound || n >= upperBound ){
                cout << "\nIndex out of bounds";
                exit(1);
            }
            arr[n] = elvalue;
        }
        int getel(int n) const //get value of element
        {   
            if( n< lowerBound || n>=upperBound ){
                cout << "\nIndex out of bounds";
                exit(1);
            }
            return arr[n];
        }
        ~AdvanceSafeArray(){
            delete []arr;
        }
};

int main(){
    AdvanceSafeArray a1(3,0);
    a1.putel(0,5);
    a1.putel(1,3);
    a1.putel(9,9); // Out of bound
    cout << a1.getel(1) << endl;
    return 0;
}
