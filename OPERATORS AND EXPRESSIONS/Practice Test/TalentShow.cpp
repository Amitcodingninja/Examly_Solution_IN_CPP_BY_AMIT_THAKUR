#include <iostream>
using namespace std;
int main()
{
    int x, tot;
    double y, a;
    // std::cout << "Enter x: ";
    cin >> x;
    y = (1.0 / 3) * x + (3.0 / 6) * x;
    a = 1 - y;
    tot = x * 3;
    cout << tot << std::endl;
    return 0;
}