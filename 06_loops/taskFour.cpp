#include <iostream>
#include <string>
using namespace std;

int main()
{
    string response;
    while (true)
    {
        cout << "Do You want More Tea? (type \"stop\" to exit) ";
        cin >> response;
        if (response == "stop")
        {
            break;
        }
        cout << "Here's your another cup of tea ";
    }
    cout << "Okay Sir, No more tea will be served. Hope you enjoyed our service";

    return 0;
}