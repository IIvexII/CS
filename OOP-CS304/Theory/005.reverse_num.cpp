#include <iostream>
using namespace std;
int main(){
    int num_array[5]; 
    int sum;
    int index;
    cout << "Enter five numbers: ";
    sum = 0;
    for (index = 0; index < 5; index++)
    {
        cin >> num_array[index];
        sum += num_array[index];
    }
    cout << endl;
    cout << "The sum of the numbers is: " << sum << endl;
    cout << "The numbers in reverse order are: ";

    for (index = 4; index >= 0; index--)
        cout << num_array[index] << " ";
    cout << endl;
    return 0;
}