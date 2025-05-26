#include <iostream>
using namespace std;
float multiply(float num1, float num2);
    int main()
    {
    float num1,num2,mul;
    cout << "enter num1 and num2 : " << endl;
    cin >> num1;
    cin >> num2;
    mul = multiply(num1,num2);
    cout << "multiplication of two numbers is : " << mul << endl;
    }

float multiply(float num1,float num2)
{
    float mul;
    mul = num1*num2;
    return mul;
}