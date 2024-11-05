#include <iostream>
#include <string> // Add this line to include the <string> header file
#include <vector> // Add this line to include the <vector> header file

void excercise1()
{
    std::cout << "Hello World!\n";
    return;
}

void excercise2()
{
    //std::cout << "say name " << "\n";
    std::string c;
    std::cin >> c;
    std::string str = "Hello ";
    str.append(c);
    str.append("!\n");

    std::cout << str;
    return;
}

void excercise3()
{
    int x, y, z;

    std::cin >> x;
    std::cin >> y;

    z = x - y;
    if (z == 0)
    {
        std::cout << x << " is equal to " << y << "\n";
    }
    else if (z > 0)
    {
        std::cout << x << " is bigger than " << y << "\n";
    }
    else
    {
        std::cout << x << " is smaller than " << y << "\n";
    }
}

void excercise4()
{
    double x, y, z, r;

    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    r = (x + y) - z;

    std::cout << r << "\n";
}

void excercise5()
{
    int n;
    std::cin >> n;
    double d, s = 0;
    for (n; n > 0;n--)
    {
        std::cin >> d;
        s += d;
    }
    std::cout << s << "\n";
}

int main()
{
    //excercise1();
    //excercise2();
    //excercise3();
    //excercise4();
    excercise5();
    return 0;
}
