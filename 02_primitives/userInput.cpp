#include <iostream>
#include <string>
using namespace std; 

int main() {
    string userTea; 
    int teaQuantity; 

    cout << "What would you like to order in tea? \n"; 
    getline(cin, userTea); 

    // ask for quantity
    cout << "how many cups of " << userTea <<  " would you like to order : "; 
    cin >> teaQuantity; 

    cout << teaQuantity << "\t"; 
    cout << userTea; 

    return 0; 
}