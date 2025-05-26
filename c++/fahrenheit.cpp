#include <iostream>
using namespace std;
int main()
{
    float F;
    cout << "Enter Fahrenheit : " << endl;
    cin >> F;
    F = (F-32)*5/9;
    cout << "Fahrenheit in celsius : " << F << endl;
}