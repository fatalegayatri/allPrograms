// factorial of given numnber using cpp function
#include <iostream>
using namespace std;
int factor(int);

int main()
{
    int num;
    cout << "Enter any number ";
    cin >> num;
    cout << "The factorial of given number :" << factor(num);
    return 0;
}
int factor(int a)
{
    int fact = 1;
    // int c;
    for (int i; a >= 1; a--)
    {
        fact = fact * a;

        /* code */
    }
    // cout << fact;
    return fact;
}