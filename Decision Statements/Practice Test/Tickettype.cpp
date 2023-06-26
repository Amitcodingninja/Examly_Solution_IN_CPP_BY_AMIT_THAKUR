// You are using GCC
#include <iostream>
int main()
{
    int age;
    std::cin >> age;
    if (age < 15)
    {
        std::cout << "Child ticket";
    }
    else
    {
        std::cout << "Adult ticket";
    }
    return 0;
}