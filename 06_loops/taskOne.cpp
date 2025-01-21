#include <iostream>
using namespace std; 

int main() {
    int teaCups; 
    cout << "Enter no. of teacups to serve: "; 
    cin >> teaCups; 

    while (teaCups > 0) {
        teaCups--;  
        cout << "Serving cup of Tea \n" << teaCups << " remaining" << endl;
    }
    cout << "All teacups are served"; 
    return 0; 
}