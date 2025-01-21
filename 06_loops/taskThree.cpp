#include <iostream>
#include <string>
using namespace std; 

int main() {
    int teaCups = 5; 
    
    for (int i = 0; i < teaCups; i++) {
        cout << "Brewing cup " << i + 1 << " of Tea" << endl; 
    }

    return 0;    
}