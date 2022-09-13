#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    // reference in cpp
    int &b = a;
    double c = 5.7;
    double &d = c;
    int *p = &b;
    cout << a << endl;
    cout << b << endl;
    cout << d << endl;
    cout << c << endl;
    cout << *p << endl;

    return 0;
}