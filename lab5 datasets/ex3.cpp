#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> A;
    vector<int> B;

    while (true)
    {
        char c;
        int x;

        cin >> c;
        cin >> x;
        if (cin.fail())
        {
            break;
        }
        if (c == 'a')
        {
            A.push_back(x);
        }
        if (c == 'b')
        {
            B.push_back(x);
        }
    }
    int a,b,value = 0;
    for (int i = 0; i < A.size() && i < B.size(); i++)
    {
    
        if (i < A.size())
        {
            a = A[i];
        }
        if (i < B.size())
        {
            b = B[i];
        }
        value += a * b;
    }
    cout << value;
    return 0;
}
