// You are using GCC

#include <iostream>
using namespace std;
int wrongsetsum(int n, int *a)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int correctsetsum(int n, int *a)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            sum += a[i];
        }
        else
        {
            sum -= a[i];
        }
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << correctsetsum(n, a) << endl;
    cout << wrongsetsum(n, a);
    return 0;
}