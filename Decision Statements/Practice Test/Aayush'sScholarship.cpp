
#include <iostream>
int main()
{
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    if (a == 5 || b == 5 || c == 5 || d == 5 || e == 5)
    {
        if (a <= 2 || b <= 2 || c <= 2 || d <= 2 || e <= 2)
            std::cout << "NO";
        else if ((a + b + c + d + e) / 5.0 >= 4.0)
            std::cout << "Yes";
        else
            std::cout << "No";
    }
    else
        std::cout << "No";
    return 0;
}