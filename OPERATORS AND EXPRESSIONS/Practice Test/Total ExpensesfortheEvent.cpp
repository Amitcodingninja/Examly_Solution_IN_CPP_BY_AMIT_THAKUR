
#include <iostream>
using namespace std;
int main()
{
    int branding_expenses, travel_expenses, food_expenses, logistics_expenses;
    // cout << "Enter branding expenses" << endl;
    cin >> branding_expenses;
    // cout << "Enter travel expenses" << endl;
    cin >> travel_expenses;
    // cout << "Enter food expenses" << endl;
    cin >> food_expenses;
    // cout << "Enter logistics expenses" << endl;
    cin >> logistics_expenses;
    float total_expenses = branding_expenses + travel_expenses + food_expenses + logistics_expenses;
    float branding_expenses_percentage = (float)branding_expenses / total_expenses * 100;
    float travel_expenses_percentage = (float)travel_expenses / total_expenses * 100;
    float food_expenses_percentage = (float)food_expenses / total_expenses * 100;
    float logistics_expenses_percentage = (float)logistics_expenses / total_expenses * 100;
    printf("Total expenses : Rs.%.2f\n", total_expenses);
    printf("Branding expenses percentage : %.2f%%\n", branding_expenses_percentage);
    printf("Travel expenses percentage : %.2f%%\n", travel_expenses_percentage);
    printf("Food expenses percentage : %.2f%%\n", food_expenses_percentage);
    printf("Logistics expenses percentage : %.2f%%\n", logistics_expenses_percentage);
    return 0;
}