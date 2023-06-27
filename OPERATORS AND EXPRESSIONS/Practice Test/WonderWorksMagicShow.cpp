#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n1, n2, n3;
    float r1, r2, r3;
    // std::cout << "Enter the number of people who watched show 1: ";
    cin >> n1;
    // std::cout << "Enter the average rating for show 1: ";
    cin >> r1;
    // std::cout << "Enter the number of people who watched show 2: ";
    cin >> n2;
    // std::cout << "Enter the average rating for show 2: ";
    cin >> r2;
    // std::cout << "Enter the number of people who watched show 3: ";
    cin >> n3;
    // std::cout << "Enter the average rating for show 3: ";
    cin >> r3;
    float overallAverage = (n1 * r1 + n2 * r2 + n3 * r3) / (n1 + n2 + n3);
    cout << std::fixed << std::setprecision(2) << overallAverage << std::endl;
    return 0;
}