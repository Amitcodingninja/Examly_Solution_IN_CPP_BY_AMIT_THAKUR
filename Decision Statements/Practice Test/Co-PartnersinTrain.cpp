// You are using GCC

#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int d = n % 8;
    int o = (d < 4) ? n + 3 : n - 3;
    switch (d)
    {
    case 0:
        std::cout << n - 1 << "SL";
        break;
    case 1:
    case 4:
        std::cout << o << "LB";
        break;
    case 2:
    case 5:
        std::cout << o << "MB";
        break;
    case 3:
    case 6:
        std::cout << o << "UB";
        break;
    case 7:
        std::cout << n + 1 << "SU";
        break;
    }
    return 0;
}