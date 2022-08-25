#include <iostream>
using namespace std;
int display(int, int);

int main()
{
    int num1, num2;
    // char sym;
    cout << "Enter two number and operator :";
    cin >> num2;
    cout << "Enter two number and operator :";
    cin >> num1;
    cout << display(num2, num1);
    // cout << "answer is " << display(int an);

    return 0;
}
int display(int v, int w)
{
    int c = v + w;
    return c;
}