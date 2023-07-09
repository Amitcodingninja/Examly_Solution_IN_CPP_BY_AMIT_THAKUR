// You are using GCC

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float distance(int *x1, int *y1, int *x2, int *y2)
{
    float dist = sqrt(pow(*x2 - *x1, 2) + pow(*y2 - *y1, 2));
    return dist;
}
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Distance between 2 points is " << fixed << setprecision(2) << distance(&x1, &y1, &x2, &y2);
    return 0;
}