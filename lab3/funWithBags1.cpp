#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void loop()
{
    while (true)
    {
        
        string input;
        int i;
        cin >> input >> i;
        int x[2000];

        if (input == "add")
        {
            x[i] += 1;
        }
        else if (input == "del")
        {
            x[i] = 0;
        }
        else if (input == "qry")
        {
            if (x[i])
            {
                cout << "T";
            }
            else
            {
                cout << "F";
            }
        }
        else if (input == "quit")
        {
            break;
        }
    }
}
int main()
{
    loop();
    return 0;
}