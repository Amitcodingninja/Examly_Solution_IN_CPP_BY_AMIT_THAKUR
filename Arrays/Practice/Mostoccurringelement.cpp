// You are using GCC

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            count1++;
        else if (x == 2)
            count2++;
        else
            count3++;
    }
    int maxCount = max({count1, count2, count3});
    if (maxCount == count1)
        cout << 1 << endl;
    else if (maxCount == count2)
        cout << 2 << endl;
    else
        cout << 3 << endl;
    return 0;
}