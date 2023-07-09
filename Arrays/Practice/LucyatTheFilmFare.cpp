// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int lengths[n];
    int ratings[n];
    for (int i = 0; i < n; i++)
    {
        cin >> lengths[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ratings[i];
    }
    int max = -1;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int temp = lengths[i] * ratings[i];
        if (temp > max)
        {
            max = temp;
        }
    }
    int max_rating = -1;
    for (int i = 0; i < n; i++)
    {
        if (max == lengths[i] * ratings[i])
        {
            if (ratings[i] > max_rating)
            {
                max_rating = ratings[i];
                index = i;
            }
        }
    }
    if (index == -1)
    {
        for (int i = 0; i < n; i++)
        {
            if (max == lengths[i] * ratings[i])
            {
                index = i;
            }
        }
    }
    cout << index + 1 << endl;
    return 0;
}