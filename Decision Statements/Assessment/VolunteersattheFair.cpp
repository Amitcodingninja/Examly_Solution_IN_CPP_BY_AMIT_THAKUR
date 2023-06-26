#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    int diff = abs(N - M);
    if (K >= diff)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << diff - K << endl;
    }
    return 0;
}