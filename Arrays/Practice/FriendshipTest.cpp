// You are using GCC

#include <iostream>
#include <unordered_set>
#include <vector>
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> l(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> l[i];
    }
    std::unordered_set<int> s;
    for (int i : l)
    {
        s.insert(i);
    }
    std::cout << s.size() << std::endl;
    return 0;
}