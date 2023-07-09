// You are using GCC

#include <iostream>
#include <iomanip>
using namespace std;
void print(int x)
{
    cout << "value of x is " << x << endl;
}
void print(double x) { cout << "value of x is " << fixed << setprecision(2) << x << endl; }
void print(int x, int y) { cout << "value of x and y is " << x << "," << y << endl; }
int main()
{
    int a, c;
    double b;
    cin >> a >> b >> c;
    print(a);
    print(b);
    print(a, c);
}