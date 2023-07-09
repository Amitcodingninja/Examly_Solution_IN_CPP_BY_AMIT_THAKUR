// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == "cookie" and a[i + 1] != "juice")
        {
            c++;
            break;
        }
    }
    if (c)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    return 0;
}