#include <iostream>
#include <string>
using namespace std; 

int main() {
    string teaOrder; 

    cout << "Enter your tea order: "; 
    getline(cin, teaOrder); 

    if (teaOrder == "Green Tea") {
        cout << "You've ordered Green Tea";                  
    }
    return 0; 
}