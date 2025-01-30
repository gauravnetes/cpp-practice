#include <iostream>
#include <string>
using namespace std; 

int main() {
    int teaPrice;
    cout << "Enter the Tea Price: "; 
    cin >> teaPrice; 

    float modifiedTeaPrice = teaPrice * 1.10; 
    cout << "Modified tea price is: " << modifiedTeaPrice; 
}