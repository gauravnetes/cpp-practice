#include <iostream>
using namespace std; 

int main() {
    bool isStudent; 
    int cups; 
    cout << "Are you a Student? (Type 1 for YES, 0 for NO) "; 
    cin >> isStudent; 
    cout << "How many cup of tea would you like to purchase? "; 
    cin >> cups;

    if (isStudent || cups > 15) {
        cout << "Congrats You're eligible for a discount!!"; 
    } else {
        cout << "You've chance to get a discount by adding only " << 16 - cups << " cups more"; 
    }
    

    return 0;
}