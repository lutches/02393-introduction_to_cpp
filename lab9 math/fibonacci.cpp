#include <iostream>
#include <vector>

using namespace std;

int fibo(int x)
{
    if ((x == 1) || (x == 0))
    {
        return 1;
    }
    else
    {
        return (fibo(x - 1) + fibo(x - 2));
    }
}

int main()
{
    vector<int> list;

    while (true)
    {
        int x;
        cin >> x;
        if (cin.fail() == true)
        {
            break;
        }
        list.push_back(x);
    }

    for (int i = 0; i < list.size(); i++)
    {
        list[i] = fibo(list[i]);
    }

    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;

    return 0;
}