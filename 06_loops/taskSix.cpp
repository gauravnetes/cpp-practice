#include <iostream>
#include <string>
using namespace std; 

int main() {
    string teaTypes[3] = {"green Tea", "Black Tea", "Lemon Tea"};

    for (int i = 0; i < 3; i++)
    {
        cout << "Brewing " << teaTypes[i] << "..." << endl; 
        for (int j = 0; j < 3; j++)
        {
            cout << "Brewing " << j + 1 << " cup of " << teaTypes[i] << endl; 
        }
        
    }
    
}