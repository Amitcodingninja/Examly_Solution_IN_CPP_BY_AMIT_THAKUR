// You are using GCC

#include <iostream>
using namespace std;
void printNumbers(int n, int current)
{
    if (current > n)
    {
        return;
    }
    cout << current << " ";
    printNumbers(n, current + 1);
}
int main()
{
    int n;
    cin >> n;
    printNumbers(n, 1);
    return 0;
}