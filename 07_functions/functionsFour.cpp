#include <iostream>
#include <string>
using namespace std; 

int main(){
    // lamda function
    auto preparedChai = [](int cups){
        cout << "Preparing " << cups << " of tea" << endl; 
    }; 

    preparedChai(4); 
    return 0; 
}