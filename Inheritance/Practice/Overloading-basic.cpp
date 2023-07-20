// You are using GCC

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Stall
{
protected:
    string name;
    string detail;
    string ownerName;
    int costPerSqft;
    int noOfTV;

public:
    Stall(string name, string detail, string ownerName)
    {
        this->name = name;
        this->detail = detail;
        this->ownerName = ownerName;
    }
    void setCostPerSqft(int costPerSqft) { this->costPerSqft = costPerSqft; }
    void setNoOfTV(int noOfTV) { this->noOfTV = noOfTV; }
    float computeCost(string type, int size)
    {
        if (type == "Platinum")
        {
            setCostPerSqft(200);
        }
        else if (type == "Diamond")
        {
            setCostPerSqft(150);
        }
        else if (type == "Gold")
        {
            setCostPerSqft(100);
        }
        return size * costPerSqft;
    }
    float computeCost(string type, int size, int noOfTV)
    {
        setNoOfTV(noOfTV);
        return computeCost(type, size) + noOfTV * 10000;
    }
};
int main()
{
    string name, detail, ownerName, type;
    int size, noOfTV;
    cin >> name >> detail >> ownerName >> type >> size >> noOfTV;
    Stall st(name, detail, ownerName);
    cout << fixed << setprecision(2) << st.computeCost(type, size, noOfTV);
    return 0;
}