// calculate the sum of given number using recursion in cpp
// date 29-8-22
// programmer : chinu

#include <iostream>
using namespace std;
int rec(int);

int main()
{
    int num;
    cout << "Enter the number";
    cin >> num;
    cout << "The sum of given no is :" << rec(num);
    return 0;
}
int rec(int x)
{
    if (x == 1)
    {
        return 1;
        /* code */
    }
    else
    {
        return x + rec(x - 1);
        /* code */
    }
}