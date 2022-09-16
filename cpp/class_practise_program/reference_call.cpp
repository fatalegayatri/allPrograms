#include <iostream>
using namespace std;
// i//nt reffence(int, int);
void reffence(int *x, int *y)
{
    int s = *x;
    *x = *y;
    *y = s;
    // cout << "value after swap is " << x << y;
    // return 0;
}
int main()
{
    int a, b;
    a = 7;
    b = 9;
    // int **p = ;
    // cout << "Enter the value of a and b" << &a;
    // cout << "Enter the value of a and b" << **p;
    // cin >> a >> b;

    // cout << "the value before swap " << a << b << endl;
    reffence(&a, &b);
    cout << "value after swap " << a << b;

    return 0;
}