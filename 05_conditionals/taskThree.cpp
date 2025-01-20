#include <iostream>
#include <string>
using namespace std; 

int main () {
    int cups; 
    double pricePerCup = 2.5, totalPrice, discount; 
    cout << "Enter the No. of Tea Cups: ";
    cin >> cups; 
    totalPrice = cups * pricePerCup; 
    
    if (cups > 20){
        discount = 0.20; 
    } else if (cups >= 10 && cups <= 20) {
        discount = 0.10; 
    } else {
        discount = 0; 
    }
    
    totalPrice -= totalPrice * discount;
    cout << "Total Price after Discount is " << totalPrice << endl;  
    return 0; 
}