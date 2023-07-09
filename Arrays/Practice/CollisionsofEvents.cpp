// You are using GCC

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>> E(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> E[i][j];
        }
    }
    int collisions = 0;
    for (int j = 0; j < m; j++)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (E[i][j] == 1)
            {
                count++;
            }
        }
        collisions += count * (count - 1) / 2;
    }
    cout << collisions << endl;
    return 0;
}