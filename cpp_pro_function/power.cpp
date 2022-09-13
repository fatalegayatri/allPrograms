// calculate the power of given function using cpp function
#include <iostream>
using namespace std;
int pow(int, int);

int pow(int a, int b)
{
    int res;
    for (size_t i = 1 i < b; i++)
    {
        res = a * a;

        /* code */
    }
    return res;
}
int main()
{
    int num, p;
    cout << "Enter number and pow of number";
    cin >> num >> p;
    cout << "the power of given no is :" << pow(num, p);
    return 0;
}