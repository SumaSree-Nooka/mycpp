#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ 
    int a;
    float b;
    cout << "Enter data" << endl;
    cin >> a;
    cin >> b;
    cout << "Entered data is : " << a << endl;
    cout << "Entered data is : " << fixed << setprecision(3) << b << endl;
    return 0;
}