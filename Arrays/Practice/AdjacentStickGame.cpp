// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int n, l[50], i, j, s = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> l[i];
    for (i = 0; i < n; i += 2)
    {
        if (l[i] > l[i + 1])
            s += l[i + 1];
        else
            s += l[i];
    }
    cout << s;
    return 0;
}