// Khud se krlo

#include <iostream>
using namespace std;
int findType(int a);

int main()
{
    int num;
    cin >> num;
    if (findType(num) == 1)
    {
        cout << num << " is Nice";
    }
    else
        cout << num << " is not Nice";
    return 0;
}
int findType(int a)
{
    int i, j = 0;
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            j++;
        }
    }
    if (j == 2)
    {
        return 1;
    }
    else
        return 0;
}
