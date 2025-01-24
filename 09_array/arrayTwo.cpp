#include <iostream>
using namespace std; 

int totalChaiServed(int chai[], int size) {
    int total = 0; 
    for (int i = 0; i < size; i++) {
        total += chai[i]; 
    }
    return total; 
}

int main() {
    int chaiServed[7] = {50, 60, 55,  70, 45, 46, 456}; 
    int total = totalChaiServed(chaiServed, 7); 
    cout << total << endl;     

}