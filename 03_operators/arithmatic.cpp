#include <iostream>
using namespace std; 

int main() {
    int cups; 
    double pricePercup, totalPrice, discountedPrice; 

    cout << "Enter no. of tea cups: "; 
    cin >> cups; 
    cout << "Enter the price per cup: ";
    cin >> pricePercup; 

    totalPrice = cups * pricePercup; 

    // apply 5% discount if total price is above 100
    if (totalPrice >= 100) {
        discountedPrice = totalPrice - (totalPrice * 0.05);  
        cout << "Discounted Price is: " << discountedPrice << endl; 
    } else {
        cout << "Total Price is: " << totalPrice << endl; 
    }
    

    // int rem = 5 % 2; // 1 
    return 0; 
}