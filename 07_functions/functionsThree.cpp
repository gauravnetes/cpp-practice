#include <iostream>
#include <string>
using namespace std; 

void pourChai(int &cups) { // call by reference
    cups += 5; 
    cout << "Poured Cups: " <<  cups << endl; 

}

int main() {
    int chaiCups = 2; 
    pourChai(chaiCups); 
    cout << "Total Cups: " << chaiCups << endl;  
    return 0; 
}