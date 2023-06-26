#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    if (A < B)
    {
        cout << B << " " << A + B;
    }
    else
    {
        cout << A << " " << A + B;
    }

    return 0;
}