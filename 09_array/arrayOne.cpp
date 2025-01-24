#include <iostream>
using namespace std;

int main()
{
    int chaiTemp[5] = {85, 90, 95, 93, 45};
    cout << "Chai temperature: \n";

    for (int i = 0; i < 5; i++)
    {
        cout << chaiTemp[i] << " degree celcius\n";
    }
    return 0;
}