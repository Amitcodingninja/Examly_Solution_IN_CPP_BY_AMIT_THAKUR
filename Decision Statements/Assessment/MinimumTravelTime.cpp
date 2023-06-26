// You are using GCC

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, v1, v2;
    cin >> n >> v1 >> v2;
    double a = (double(n) / double(v2)) * 2;
    double b = (n * (sqrt(2)) / v1);
    if (a < b)
        cout << "Elevator" << endl;
    else
        cout << "Stairs" << endl;
    return 0;
}