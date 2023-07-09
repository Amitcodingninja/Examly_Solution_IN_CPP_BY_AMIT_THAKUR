// You are using GCC

#include <iostream>
using namespace std;
class AdditionChallenge
{
public:
    int findSum(int N) { return (1 << (N + 1)) - 1; }
};
int main()
{
    int N;
    cin >> N;
    AdditionChallenge challenge;
    cout << challenge.findSum(N) << endl;
    return 0;
}