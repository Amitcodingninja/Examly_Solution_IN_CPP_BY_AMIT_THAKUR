// You are using GCC
#include <iostream>
using namespace std;
void changeValue(int *a, int *b)
{
    int n = *a;
    int m = *b;
    *a = n + m;
    if (*a < 0)
    {
        *a *= -1;
    }
    *b = n - m;
    if (*b < 0)
    {
        *b *= -1;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    changeValue(&a, &b);
    cout << a << endl
         << b << endl;
    return 0;
}