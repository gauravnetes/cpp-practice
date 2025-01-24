#include <iostream>
using namespace std; 

int* prepareOrders(int cups) {
    int* orders = new int[cups]; // integer pointer. points at the location the array starts
    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i + 1) * 10; 
    }
    return orders; // returning memory reference
}

int main() {
    int cups = 5; 
    int* chaiOrder = prepareOrders(cups); // order is returning integer pointer so we've to deal with it with the datatype of integer pointer
    for (int i = 0; i < cups; i++) {
        cout << "cups: " << i + 1 << " has " << chaiOrder[i] << " ml of chai" << endl;
    }
    
    // clean up of dynamic memory alloc
    delete[] chaiOrder; 
    return 0; 
}