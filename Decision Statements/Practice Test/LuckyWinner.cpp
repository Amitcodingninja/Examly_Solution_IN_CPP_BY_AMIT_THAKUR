// You are using GCC

#include <iostream>
int main()
{
    int ticketNumber;
    std::cin >> ticketNumber;
    int lastDigit = ticketNumber % 10;
    if (lastDigit == 3 || lastDigit == 8)
    {
        std::cout << "Lucky Winner";
    }
    else
    {
        std::cout << "Not a Lucky Winner";
    }
    return 0;
}
