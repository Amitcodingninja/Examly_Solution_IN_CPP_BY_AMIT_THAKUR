// You are using GCC

#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        count[x]++;
    }
    for (auto &[x, c] : count)
    {
        if (c % 2 == 1)
        {
            cout << x << endl;
            break;
        }
    }
    return 0;
}