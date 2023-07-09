// You are using GCC

#include <iostream>
using namespace std;
bool isReachable(int x1, int y1, int x2, int y2)
{
    if (x1 > x2 || y1 > y2)
    {
        return false;
    }
    if (x1 == x2 && y1 == y2)
    {
        return true;
    }
    return isReachable(x1 + y1, y1, x2, y2) || isReachable(x1, x1 + y1, x2, y2);
}
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << (isReachable(x1, y1, x2, y2) ? "True" : "False") << endl;
    return 0;
}