// You are using GCC

#include <iostream>
#include <string>
int main()
{
    std::string x;
    std::cin >> x;
    int a = 0;
    for (int i = 0; i < x.length() - 1; i++)
    {
        if (x[i] == 'C')
        {
            if (x[i + 1] == 'C' || x[i + 1] == 'S' || x[i + 1] == 'E')
                a += 1;
        }
        else if (x[i] == 'E')
        {
            if (x[i + 1] == 'E' || x[i + 1] == 'S')
                a += 1;
        }
        else if (x[i] == 'S')
        {
            if (x[i + 1] == 'S')
                a += 1;
        }
    }
    if (a == x.length() - 1)
        std::cout << "yes";
    else
        std::cout << "no";
    return 0;
}