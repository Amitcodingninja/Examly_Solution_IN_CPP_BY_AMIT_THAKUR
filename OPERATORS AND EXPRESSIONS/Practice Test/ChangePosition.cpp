
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float x, y, l;
    cin >> x;
    cin >> y;
    cin >> l;
    x = x + (l / 2);
    y = y + (l / 2);
    cout << fixed << setprecision(2);
    cout << x << " " << y << endl;
    return 0;
}