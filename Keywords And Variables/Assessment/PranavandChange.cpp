#include <iostream>
using namespace std;
int main()
{
    int n, n1, n2, n3, n4, n5, n6;
    cin >> n;
    n1 = n / 100;
    n = n % 100;
    n2 = n / 50;
    n = n % 50;
    n3 = n / 10;
    n = n % 10;
    n4 = n / 5;
    n = n % 5;
    n5 = n / 2;
    n = n % 2;
    n6 = n;
    cout << n1 + n2 + n3 + n4 + n5 + n6;
    return 0;
}