// // // You are using GCC
// // 2nd Way Only 3 test case are cleared
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int side, tiles;
    cin >> side >> tiles;
    int max_square_side = side * floor(sqrt(tiles));
    int area = max_square_side * max_square_side;
    cout << "Area of the largest possible square is " << area << "sqcm" << endl;
    return 0;
}

// // 2nd Way Only 3 test case are cleared

// #include <iostream>
// int main()
// {
//     int l, n, i = 1, m = 0, a;
//     // std::cout << "Enter the side in cm of a square tile: ";
//     std::cin >> l;
//     // std::cout << "Enter the number of square tiles available: ";
//     std::cin >> n;
//     while (i * i <= n)
//     {
//         m = i * i;
//         i++;
//     }
//     a = m * (l * l);
//     std::cout << "Area of the largest possible square is " << a << "sqcm" << std::endl;
//     return 0;
// }
