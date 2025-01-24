#include <iostream>
using namespace std;

int main()
{
    int chaiSales[3][7] = {
        {23, 424, 234, 53, 53, 53, 34},
        {23, 424, 234, 53, 53, 53, 34},
        {23, 424, 234, 53, 53, 53, 34}
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "At Shop: " << i + 1 << endl;
        for (int j = 0; j < 7; j++)
        {
            cout << chaiSales[i][j] << " cups ";
        }
        cout << endl; 
    }

    return 0;
}