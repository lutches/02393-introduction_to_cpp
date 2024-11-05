#include <string>
#include <iostream>

using namespace std;

struct Page
{
    string n;
    string m;
    string l;
    string p;
    string a;
    string h;
    string z;
    string r;
};

int main()
{
    Page x[50];

    string function, n, m, l, a, h, r, p, z;
    int page;

    while (true)
    {
        cin >> function;
        if (function == "add")
        {
            cin >> page;
            if (x[page].n == "")
            {
                cin >> x[page].n >> x[page].m >> x[page].l >>
                    x[page].p >> x[page].a >> x[page].h >> x[page].z >> x[page].r;
            }
        }
        else if (function == "qry")
        {
            cin >> page;
            if (x[page].n != "")
            {
                cout << x[page].n << "," << x[page].m << "," << x[page].l << "," << x[page].p << "," 
                << x[page].a << "," << x[page].h << "," << x[page].z << "," << x[page].r << endl;
            }
        }
        else if (function == "clr")
        {
            cin >> page;
            x[page] = Page();
        }
        else if (function == "quit"){
            break;
        }
    }

    return 0;
}