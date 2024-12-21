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
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    A.insert(A.end(), B.begin(), B.end());

    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i];
        if (not (i == A.size()-1)){
            cout << " ";
        }
    }

    return 0;
}
