// You are using GCC

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class VISACard
{
protected:
    string accountHolderName;
    string ccv;
    double amount;
    string purchaseType;

public:
    VISACard(string accountHolderName, string ccv, double amount, string purchaseType)
    {
        this->accountHolderName = accountHolderName;
        this->ccv = ccv;
        this->amount = amount;
        this->purchaseType = purchaseType;
    }
    virtual double computeRewardPoints()
    {
        return amount * 0.01;
    }
};
class HPVISACard : public VISACard
{
public:
    HPVISACard(string accountHolderName, string ccv, double amount, string purchaseType)
        : VISACard(accountHolderName, ccv, amount, purchaseType) {}
    double computeRewardPoints() override
    {
        if (purchaseType == "fuel")
        {
            return VISACard::computeRewardPoints() + 10;
        }
        else
        {
            return VISACard::computeRewardPoints();
        }
    }
};
int main()
{
    string accountHolderName, ccv, purchaseType;
    double amount;
    int choice;
    cin >> accountHolderName >> ccv >> amount >> purchaseType >> choice;
    if (choice == 1)
    {
        VISACard card(accountHolderName, ccv, amount, purchaseType);
        cout << fixed << setprecision(2) << card.computeRewardPoints();
    }
    else if (choice == 2)
    {
        HPVISACard card(accountHolderName, ccv, amount, purchaseType);
        cout << fixed << setprecision(2) << card.computeRewardPoints();
    }
    else
    {
        cout << "Invalid Choice";
    }
    return 0;
}