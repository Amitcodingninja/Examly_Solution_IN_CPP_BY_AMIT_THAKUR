// You are using GCC

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> board(n, vector<int>(n));
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
            if (board[i][j] != 20)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}