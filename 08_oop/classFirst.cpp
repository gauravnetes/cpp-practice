#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Chai
{
public:
    // data members / attributes
    string teaName;             // tea name
    int servings;               // no. of servings
    vector<string> ingredients; // name of ingredients for the tea

    // member function
    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Tea Servings: " << servings << endl;
        cout << "Ingredients: ";
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main()
{
    Chai chaiOne; // Class object
    chaiOne.teaName = "lemon tea"; 
    chaiOne.servings = 2; 
    chaiOne.ingredients = {"water", "lemon", "honey", "ginger", "sugar"}; 
    chaiOne.displayChaiDetails(); 
    return 0;
}