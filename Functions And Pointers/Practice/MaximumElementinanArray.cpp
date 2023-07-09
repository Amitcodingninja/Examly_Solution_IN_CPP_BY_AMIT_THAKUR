// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (n < a)
        {
            n = a;
        }
    }
    cout << n << endl;
    return 0;
}