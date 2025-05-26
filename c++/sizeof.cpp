#include <iostream>
using namespace std;
int main()
{
    size_t a,b,c,d;
    a = sizeof(int);
    b = sizeof(float);
    c = sizeof(char);
    d = sizeof(double);
    
    cout << "size of int is " << a << endl;
    cout << "size of float is " << b << endl;
    cout << "size of char is " << c << endl;
    cout << "size of double is " << d << endl;
    return 0;
}