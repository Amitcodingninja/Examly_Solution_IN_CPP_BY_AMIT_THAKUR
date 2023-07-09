// You are using GCC

#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
vector<int> generateSeries(int N)
{
    vector<int> series;
    int num = 2;
    while (series.size() < N)
    {
        if (isPrime(num))
        {
            series.push_back(num);
        }
        num++;
    }
    return series;
}
int main()
{
    int N;
    // cout << "Enter the value of N: ";
    cin >> N;
    vector<int> series = generateSeries(N);
    for (int i = 0; i < series.size(); i++)
    {
        cout << series[i];
        if (i != series.size() - 1)
        {
            cout << " ";
        }
    }
    return 0;
}