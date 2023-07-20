// You are using GCC

#include <iostream>
#include <string>
using namespace std;
class Account
{
protected:
    string accountHolderName;
    string accountNumber;
    string bankName;
    string branchName;

public:
    Account() {}
    Account(string accountHolderName, string accountNumber, string bankName, string branchName)
    {
        this->accountHolderName = accountHolderName;
        this->accountNumber = accountNumber;
        this->bankName = bankName;
        this->branchName = branchName;
    }
    void setAccountHolderName(string accountHolderName)
    {
        this->accountHolderName = accountHolderName;
    }
    void setAccountNumber(string accountNumber)
    {
        this->accountNumber = accountNumber;
    }
    void setBankName(string bankName)
    {
        this->bankName = bankName;
    }
    void setBranchName(string branchName)
    {
        this->branchName = branchName;
    }
    string getAccountHolderName()
    {
        return accountHolderName;
    }
    string getAccountNumber()
    {
        return accountNumber;
    }
    string getBankName()
    {
        return bankName;
    }
    string getBranchName()
    {
        return branchName;
    }
};
class CurrentAccount : public Account
{
private:
    double balance;

public:
    CurrentAccount() {}
    CurrentAccount(string accountHolderName, string accountNumber, string bankName, string branchName)
        : Account(accountHolderName, accountNumber, bankName, branchName) {}
    void setBalance(double balance)
    {
        this->balance = balance;
    }
    double getBalance() { return balance; }
};
class SavingsAccount : public Account
{
private:
    double minimumBalance;

public:
    SavingsAccount() {}
    SavingsAccount(string accountHolderName, string accountNumber, string bankName, string branchName) : Account(accountHolderName, accountNumber, bankName, branchName) {}
    void setMinimumBalance(double minimumBalance) { this->minimumBalance = minimumBalance; }
    double getMinimumBalance() { return minimumBalance; }
};
int main()
{
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        CurrentAccount ca;
        string name, number, bank, branch;
        cin >> name >> number >> bank >> branch;
        ca.setAccountHolderName(name);
        ca.setAccountNumber(number);
        ca.setBankName(bank);
        ca.setBranchName(branch);
        cout << ca.getAccountHolderName() << endl
             << ca.getAccountNumber() << endl
             << ca.getBankName() << endl
             << ca.getBranchName();
    }
    else if (choice == 2)
    {
        SavingsAccount sa;
        string name, number, bank, branch;
        cin >> name >> number >> bank >> branch;
        sa.setAccountHolderName(name);
        sa.setAccountNumber(number);
        sa.setBankName(bank);
        sa.setBranchName(branch);

        cout << sa.getAccountHolderName() << endl
             << sa.getAccountNumber() << endl
             << sa.getBankName() << endl
             << sa.getBranchName();
    }
    return 0;
}