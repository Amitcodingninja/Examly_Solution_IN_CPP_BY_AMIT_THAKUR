// You are using GCC

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    string S;
    cin >> S;
    unordered_map<char, int> count;
    for (char c : S)
    {
        count[c]++;
    }
    int sum = 0, max_count = 0;
    for (auto it : count)
    {
        sum += it.second;
        max_count = max(max_count, it.second);
    }
    cout << S << ":";
    if (max_count == sum - max_count)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}