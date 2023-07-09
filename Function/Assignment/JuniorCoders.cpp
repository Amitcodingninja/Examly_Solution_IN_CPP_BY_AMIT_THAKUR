// You are using GCC

#include <iostream>
#include <string>
using namespace std;
class EvaluateCodes
{
public:
    int findValue(string A, string B)
    {
        if (A.size() < B.size())
            return 0;
        return A.substr(A.size() - B.size()) == B;
    }
};
int main()
{
    string A, B;
    cin >> A >> B;
    EvaluateCodes eval;
    if (eval.findValue(A, B))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}