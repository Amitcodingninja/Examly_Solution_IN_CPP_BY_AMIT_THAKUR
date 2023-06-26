// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d)
    {
        if (a != c && b != d)
            cout << "sad" << endl;
        else if (a > c)
            cout << "left" << endl;
        else if (a < c)
            cout << "right" << endl;
        else if (b > d)
            cout << "down" << endl;
        else if (b < d)
            cout << "up" << endl;
    }
    return 0;
}