#include <iostream>
using namespace std; 

int main() {
    int teaBags; 
    cout << "Enter the number of Teabags you have: "; 
    cin >> teaBags; 

    if (teaBags < 10) {
        teaBags += 5; 
    }
    cout << "Your total bags are: " << teaBags; 
    return 0; 
}