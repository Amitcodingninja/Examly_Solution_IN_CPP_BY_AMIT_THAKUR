// You are using GCC

#include <iostream>
int main()
{
    int x, y, z;
    // std::cout << "Enter the side of the square hall" << std::endl;
    std::cin >> x;
    // std::cout << "Enter the side of the square table placed for display" << std::endl;
    std::cin >> y;
    z = (x * x) - (y * y);
    std::cout << z << std::endl;
    return 0;
}