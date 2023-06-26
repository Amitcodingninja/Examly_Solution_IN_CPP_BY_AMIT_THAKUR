// You are using GCC

#include <iostream>
#include <iomanip>
using namespace std;
double calculateGrossSalary(double basicSalary)
{
    double hra, da;
    if (basicSalary < 15000)
    {
        hra = 0.15 * basicSalary;
        da = 0.9 * basicSalary;
    }
    else
    {
        hra = 5000;
        da = 0.98 * basicSalary;
    }
    return basicSalary + hra + da;
}
int main()
{
    double basicSalary;
    cin >> basicSalary;
    double grossSalary = calculateGrossSalary(basicSalary);
    cout << fixed << setprecision(2) << grossSalary << endl;
    return 0;
}