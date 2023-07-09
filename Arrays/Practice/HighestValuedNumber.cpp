// You are using GCC

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> board(n, vector<int>(n));
    int max_num = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
            if (board[i][j] != 20)
            {
                max_num = max(max_num, board[i][j]);
            }
        }
    }
    cout << max_num << endl;
    return 0;
}