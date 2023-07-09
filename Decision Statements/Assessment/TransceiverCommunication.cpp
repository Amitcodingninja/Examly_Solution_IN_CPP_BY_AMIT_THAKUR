

// #include <iostream>
// #include <cmath>
// using namespace std;
// double calculateDistance(int x1, int y1, int x2, int y2)
// {
//     return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
// }
// string canCommunicate(int R, int x1, int y1, int x2, int y2, int x3, int y3)
// {
//     double dist1 = calculateDistance(x1, y1, x2, y2);
//     double dist2 = calculateDistance(x1, y1, x3, y3);
//     double dist3 = calculateDistance(x2, y2, x3, y3);
//     if (dist1 <= R || dist2 <= R || dist3 <= R)
//         return "Yes";
//     else
//         return "No";
// }
// int main()
// {
//     int R;
//     cin >> R;
//     int x1, y1, x2, y2, x3, y3;
//     cin >> x1 >> y1;
//     cin >> x2 >> y2;
//     cin >> x3 >> y3;
//     string result = canCommunicate(R, x1, y1, x2, y2, x3, y3);
//     cout << result << endl;
//     return 0;
// }



// Ye Sahi Wala Hai 

#include <iostream>
#include <cmath>
using namespace std;
int main() {    
    int R;  
    cin >> R; 
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3; 
    double d12 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double d13 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)); 
    double d23 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    if ((d12 <= R && d13 <= R) || (d12 <= R && d23 <= R) || (d13 <= R && d23 <= R)) {  
        cout << "Yes" << endl;  
        } 
        else { 
            cout << "No" << endl;
            }    
            return 0;
    
}

    