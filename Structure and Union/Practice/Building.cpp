// You are using GCC

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Building
{
    string name;
    double length;
    double width;
    double height;
    double ratePerSqFt;
};
int main()
{
    int n;
    cin >> n;
    Building buildings[n];
    for (int i = 0; i < n; i++)
    {
        cin >> buildings[i].name >> buildings[i].length >> buildings[i].width >> buildings[i].height >> buildings[i].ratePerSqFt;
    }
    for (int i = 0; i < n; i++)
    {
        double area = buildings[i].length * buildings[i].width;
        double value = area * buildings[i].ratePerSqFt;
        cout << fixed << setprecision(2) << buildings[i].name << " " << area << " " << value << endl;
    }
    return 0;
}