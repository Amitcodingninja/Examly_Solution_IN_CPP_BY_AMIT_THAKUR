#include <iostream>
#include <iomanip>
using namespace std;
void printPlanDetails(int d, int e, int n);
void printPlanDetails(int d, int e, int n)
{
    float a = 0, b = 0;
    if (d > 100)
    {
        a = (d - 100) * 0.25;
    }
    if (d > 250)
    {
        b = (d - 250) * 0.45;
    }
    a = a + (e * 0.15) + (n * 0.2);
    b = b + (e * 0.35) + (n * 0.25);
    cout << fixed << setprecision(2) << "Plan A costs " << a << "\nPlan B costs " << b << "\n";
    if (a == b)
    {
        cout << "Plan A and B are the same price";
    }
    else
    {
        (a < b) ? cout << "Plan A is cheapest" : cout << "Plan B is cheapest";
    }
}
int main()
{
    int daytime, evening, night;
    cin >> daytime >> evening >> night;
    printPlanDetails(daytime, evening, night);
    return 0;
}
