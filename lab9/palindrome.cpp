#include <iostream>
#include <vector>

using namespace std;

bool palin(vector<int> list, int i)
{
    if (i >= list.size()/ 2)
    {
        return true;
    }
    if (list[i] == list[list.size()-(1+i)])
    {
        palin(list, i+1);
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    vector<int> list;

    while(true)
    {
        int x;
        cin >> x;
        if (cin.fail() == true)
        {
            break;
        }
        list.push_back(x);
    }

    if (palin(list, 0))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}