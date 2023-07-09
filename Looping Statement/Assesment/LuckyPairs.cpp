// You are using GCC

#include <iostream>
int main()
{
    int A, B, N;
    std::cin >> A >> B >> N;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
            A = A * 2;
        else
            B = B * 2;
    }
    int G = A + B;
    std::cout << G << std::endl;
    return 0;
}