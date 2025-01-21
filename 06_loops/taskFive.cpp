#include <iostream>
#include <string>
using namespace std; 

int main() {
    string teaTypes[3] = {"green Tea", "Black Tea", "Lemon Tea"};

    for (int i = 0; i < 3; i++) {
        if (teaTypes[i] == "green Tea") continue;
        
        cout << "Brewing " << teaTypes[i] << "..." << endl; 
    }
     
    return 0; 
}