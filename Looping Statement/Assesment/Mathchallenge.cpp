// You are using GCC

#include <iostream>
using namespace std;
int streak(int n)
{
    int k = 1;
    while ((n + k) % (k + 1) == 0)
    {
        k++;
    }
    return k;
}
int main()
{
    int s, N;
    cin >> s >> N;
    int count = 0;
    for (int n = 2; n < N; n++)
    {
        if (streak(n) == s)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}