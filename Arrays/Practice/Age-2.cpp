#include <iostream>
using namespace std;
int main()
{
    int r, c, x;
    cin >> r >> c;
    int ages[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> ages[i][j];
        }
    }
    cin >> x;
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += ages[i][j];
        }
        if (sum / c > x)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}