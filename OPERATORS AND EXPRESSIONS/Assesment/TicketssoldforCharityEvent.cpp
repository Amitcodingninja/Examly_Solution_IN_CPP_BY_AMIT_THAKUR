// You are using GCC

#include <iostream>
int main()
{
    int x, y;
    int b, a, s;
    // std::cout << "Enter the value of X: ";
    std::cin >> x;
    // std::cout << "Enter the value of Y: ";
    std::cin >> y;
    b = (y - (5 * x)) / 13;
    a = x + b;
    s = 2 * b;
    std::cout << "Number of children tickets sold : " << b << std::endl;
    std::cout << "Number of adult tickets sold : " << a << std::endl;
    std::cout << "Number of senior tickets sold : " << s << std::endl;
    return 0;
}