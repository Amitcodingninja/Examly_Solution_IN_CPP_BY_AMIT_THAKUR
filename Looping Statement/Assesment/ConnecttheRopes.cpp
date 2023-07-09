// You are using GCC

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> ropes;
    for (int i = 0; i < n; i++)
    {
        int ropeLength;
        cin >> ropeLength;
        ropes.push(ropeLength);
    }
    while (ropes.size() > 1)
    {
        int first = ropes.top();
        ropes.pop();
        int second = ropes.top();
        ropes.pop();
        int newRope = first + second - 2 * k;
        ropes.push(newRope);
    }
    cout << ropes.top() << endl;
    return 0;
}