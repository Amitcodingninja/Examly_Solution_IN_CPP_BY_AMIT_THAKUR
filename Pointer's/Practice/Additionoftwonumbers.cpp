// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int first, second, *p, *q, sum;

    cin >> first >> second;
    p = &first;
    q = &second;
    sum = *p + *q;
    cout << sum << endl;
    return 0;
}