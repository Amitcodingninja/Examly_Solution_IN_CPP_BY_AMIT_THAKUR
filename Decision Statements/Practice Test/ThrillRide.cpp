#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a < 15 || a > 60)
        cout << "\nNot Allowed";
    else
        cout << "\nAllowed";
    return 0;
}