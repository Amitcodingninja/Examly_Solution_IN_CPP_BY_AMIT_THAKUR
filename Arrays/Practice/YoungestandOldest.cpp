// You are using GCC

#include <iostream>

#include <algorithm>
#include <vector>
int main()
{
    // std::cout << "Hello World" << std::endl;
    // std::cout << "Enter the number of passengers in the aircraft: ";
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    // std::cout << "Enter the passenger counts: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    std::sort(arr.begin(), arr.end());
    // std::cout << "Output: " << std::endl;
    std::cout << arr[0] << " " << arr[n - 1];

    return 0;
}