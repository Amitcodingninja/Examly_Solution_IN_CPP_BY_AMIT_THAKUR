// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int k = 0, c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            k++;
        else
            c++;
    }
    if (k > c)
        cout << "Win" << endl;
    else
        cout << "Lose" << endl;
    return 0;
}