#include <iostream>
#include <vector>
#include <map>
#include <math.h>

void gaussianSum()
{
    int n, r = 0;

    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        r += i;
    }
    std::cout << r << "\n";
}

void primeFactorization()
{
    int input;

    std::cin >> input;
    std::vector<int> vec;

    for (int i = 2; i <= input; i++)
    {
        bool t = true;
        while (t)
        {
            int t = input % i;
            if (t == 0)
            {
                vec.push_back(i);
                input /= i;
            }
            else
            {
                break;
            }
        }
    }
    {
        int size = vec.size();
        for (int i = 0; i < size; i++)
        {
            std::cout << vec[i];
            if (not(i == size - 1))
            {
                std::cout << " * ";
            }
        }
        std::cout << "\n";
    }
}

void approximatingPi()
{
    double r = 0;
    int i;
    std::cin >> i;
    double sign = 1;
    for (int s = 0; s < i; s++)
    {
        r += sign / (1 + 2 * s);
        sign *= -1;
    }
    std::cout << 4 * r << "\n";
}

void remember()
{
    std::map<int, int> map;

    int i;
    while (true)
    {
        std::cin >> i;

        if (i != 0)
        {
            if (map.find(i) == map.end())
            {
                map[i];
            }
            else
            {
                map[i]++;
            }
            std::cout << map[i]<< "\n";
        }
        if (i == 0)
        {
            break;
        }
    }
}

int main()
{
    // gaussianSum();
    // primeFactorization();
    // approximatingPi();
    remember();
    return 0;
}