// You are using GCC
#include <iostream>
std::string getDayOfWeek(int year)
{
    int q = 1;
    // Day of the month
    int m = 1;
    // Month (January)
    if (m == 1 || m == 2)
    {
        m += 12;
        year--;
    }
    int k = year % 100;
    // Year of the century
    int j = year / 100;
    // Zero-based century
    int h = (q + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    // Mapping the result to the corresponding day of the week
    std::string dayOfWeek;
    switch (h)
    {
    case 0:
        dayOfWeek = "Saturday";
        break;
    case 1:
        dayOfWeek = "Sunday";
        break;
    case 2:
        dayOfWeek = "Monday";
        break;
    case 3:
        dayOfWeek = "Tuesday";
        break;
    case 4:
        dayOfWeek = "Wednesday";
        break;
    case 5:
        dayOfWeek = "Thursday";
        break;
    case 6:
        dayOfWeek = "Friday";
        break;
    }
    return dayOfWeek;
}
int main()
{
    int year;
    std::cin >> year;
    std::string dayOfWeek = getDayOfWeek(year);
    std::cout << dayOfWeek;
    return 0;
}