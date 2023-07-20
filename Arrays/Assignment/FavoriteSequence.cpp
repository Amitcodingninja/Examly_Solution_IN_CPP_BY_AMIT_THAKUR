// You are using GCC

#include <iostream>
#include <string>
int main()
{
    int x, y, i = 0, j = 0, count = 0;
    scanf("%d", &x);
    int a[x];
    for (i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &y);
    int b[y];
    for (i = 0; i < y; i++)
    {
        scanf("%d", &b[i]);
    }
    i = 0;
    while (j < y)
    {
        while (i < x)
        {
            if (a[i] == b[j])
            {
                count++;
                i++;
                break;
            }
            if (count > 0 && a[i] != b[j])
            {
                count = 0;
            }
            i++;
        }
        j++;
    }
    if (count == y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}