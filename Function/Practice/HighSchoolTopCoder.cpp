#include <iostream>
using namespace std;
int fiboLastDigit(int a);

int main()
{
    int n;
    cin >> n;
    cout << fiboLastDigit(n);
    return 0;
}

int fiboLastDigit(int a)
{
    long long int x = 0, y = 0, z = 1, i;
    int s;
    for (i = 0; i < a; i++)
    {
        z = y + z;
        x = z;
        z = y;
        y = x;
    }
    x = x % 10;
    s = x;
    return s;
}
