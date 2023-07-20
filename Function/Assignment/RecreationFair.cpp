// You are using GCC

#include <iostream>
using namespace std;
class Cards
{
public:
    int findValue(int F1, int F2)
    {
        int maxStack = 1;
        for (int i = 1; i <= F1 && i <= F2; i++)
        {
            if (F1 % i == 0 && F2 % i == 0)
            {
                maxStack = i;
            }
        }
        return maxStack;
    }
};
int main()
{
    int F1, F2;
    cin >> F1 >> F2;
    Cards c;
    cout << c.findValue(F1, F2) << endl;
    return 0;
}