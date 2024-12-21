#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ab
{
    string a;
    string b;
};

int leven(ab list)
{
    if (list.a.length() == 0)
    {
        return list.b.length();
    }
    if (list.b.length() == 0)
    {
        return list.a.length();
    }
    if (list.a[0] == list.b[0])
    {
        return leven((ab){list.a.substr(1), list.b.substr(1)});
    }
    else
    {
        int x = leven((ab){list.a.substr(1), list.b.substr(1)}) + 1;
        int y = leven((ab){list.a.substr(1), list.b}) + 1;
        int z = leven((ab){list.a, list.b.substr(1)}) + 1;
        if (x < y)
        {
            if (x < z)
            {
                return x;
            }
            else
            {
                return z;
            }
        }
        else
        {
            if (y < z)
            {
                return y;
            }
            else
            {
                return z;
            }
        }
    }
}

int main()
{
    ab pair;

    string a, b;
    cin >> a >> b;

    pair.a = a;
    pair.b = b;

    cout << leven(pair) << endl;

    return 0;
}