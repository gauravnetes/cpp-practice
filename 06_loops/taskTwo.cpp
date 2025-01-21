#include <iostream>
#include <string>
using namespace std; 

int main() {
    string response; 

    do
    {
        cout << "Do You want more Tea? [y/n]"; 
        cin >> response; 
    } while (response == "y"); 
    

    return 0; 
}