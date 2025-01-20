#include <iostream>
#include <string>
using namespace std; 

int main () {
    double hour; 
    cout << "Enter the current hour: (00.00 - 23.59) ";
    cin >> hour; 

    if (hour >= 8.00 && hour <= 18.00) {
        cout << "Tea shop is Opened"; 
    } else {
        cout << "Tea shop is Closed"; 
    }
     
    return 0; 
}