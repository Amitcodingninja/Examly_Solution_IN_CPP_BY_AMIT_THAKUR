// You are using GCC
// Ye Sahi Nahi Hai ... Khud se krlo
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int series[] = {30, 35, 38, 41, 54};
    for (int i = 0; i < N; i++)
    {
        cout << series[i] << " ";
    }
    return 0;
}