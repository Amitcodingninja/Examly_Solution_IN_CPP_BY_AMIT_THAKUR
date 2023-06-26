// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    int sum;
    cin >> n1 >> n2 >> n3;
    sum = n1 + n2 + n3;
    if (sum == 180)
    {
        if (n1 == 90 || n2 == 90 || n3 == 90)
        {
            cout << "Prize 2" << endl;
        }
        else if (n1 == n2 && n2 == n3 && n3 == n1)
        {
            cout << "Prize 3" << endl;
        }
        else
        {
            cout << "Prize 1" << endl;
        }
    }
    else
    {
        cout << "No Prize" << endl;
    }
    return 0;
}