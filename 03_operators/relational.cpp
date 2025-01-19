#include <iostream>
using namespace std; 

int main() {
    int cups; 
    cout << "How many cup of tea you would like to buy: "; 
    cin >> cups; 

    if (cups > 20) {
        cout << "Congrats! You got our Gold Badge "; 
    } else if (cups <= 20 && cups >= 10) {
        int moreCups = 21 - cups; 
        if (moreCups > 1) {
            cout << "Congrats! You got our Silver badge! Would you like to upgrade to Gold Badge by just adding " << moreCups << " cups more"; 
        } else {
            cout << "Congrats! You got our Silver badge! Would you like to upgrade to Gold Badge by just adding " << moreCups << " cup more"; 
        } 
    } else {
        cout << "Here's your " << cups << " cups. You'll get a Silver badge if you add " << 10 - cups << " cups more"; 
    }
    

    return 0; 
}