#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> list)
{   
    if (list.size() <= 0)
    {
        cout << endl;
    }
    else
    {
        cout << list[list.size()-1] << " ";
        list.pop_back();
        reverse(list);
    }
    return;
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

    reverse(list);

    return 0;
}