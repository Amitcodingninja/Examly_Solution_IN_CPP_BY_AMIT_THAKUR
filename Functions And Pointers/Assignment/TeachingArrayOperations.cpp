

// You are using GCC

#include <iostream>
#include <algorithm>
using namespace std;
int sum(int n, int *a)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += a[i];
    }
    return total;
}
float mean(int n, int *a) { return (float)sum(n, a) / n; }
int median(int n, int *a)
{
    sort(a, a + n);
    return a[n / 2];
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sum(n, arr) << endl;
    printf("%.2f\n", mean(n, arr));
    cout << median(n, arr);
    return 0;
}