#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double gainPercentage = ((c - a - b) * 1.0 / (a + b)) * 100;
    gainPercentage = round(gainPercentage * 100) / 100;
    cout << fixed << setprecision(2);

    cout << gainPercentage << endl;
    return 0;
}