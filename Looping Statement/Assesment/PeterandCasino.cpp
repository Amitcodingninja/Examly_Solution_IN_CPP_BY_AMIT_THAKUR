// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int rubles, m1, m2, m3;
    cin >> rubles >> m1 >> m2 >> m3;
    int plays = 0;
    while (rubles > 0)
    {
        plays++;
        rubles--;
        m1++;
        if (m1 == 25)
        {
            rubles += 20;
            m1 = 0;
        }
        if (rubles == 0)
            break;
        plays++;
        rubles--;
        m2++;
        if (m2 == 120)
        {
            rubles += 80;
            m2 = 0;
        }
        if (rubles == 0)
            break;
        plays++;
        rubles--;
        m3++;

        if (m3 == 12)
        {
            rubles += 8;
            m3 = 0;
        }
    }
    cout << plays << endl;
    return 0;
}
