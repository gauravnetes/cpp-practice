#include <iostream>
#include <string>
using namespace std; 

int checkTemperature(int temperature) {
    return temperature; 
}

// function declaration
void serveChai(int cups); 

void makeChai(){
    cout << "Boiling water, adding tea leaves, strining... \n"; 
}

void serveChai(string teaType = "Masala Tea") {
    cout << "Serving " << teaType << endl; 
}

int main() {
    int temp = checkTemperature(50); 
    cout << temp;
    makeChai(); 
    serveChai(3); 
    serveChai("Lemon Tea"); 
    return 0; 
}

void serveChai(int cups) {
    cout << "Serving " << cups << " cups of chai\n"; 
}