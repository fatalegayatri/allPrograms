#include <iostream>
using namespace std;
int display(int, char, int);

int main()
{
    int num1, num2;
    char sym;
    cout << "Enter two number and operator :";
    cin >> num2;
    cout << "Enter two number and operator :";
    cin >> shym >> num1;
    cout << display(int num2, char sym, int num1);
    // cout << "answer is " << display(int an);
    int sum(int a, char sy, int b)
    {
        return a + b;
    }
    int sub(int a, char sy, int b)
    {
        return a - b;
    }
    int mul(int a, char sy, int b)
    {
        return a * b;
    }
    int div(int a, char sy, int b)
    {
        return a / b;
    }
    return 0;
}
int display(int v, char sy, int w)
{

    char sy;
    switch (sy)
    {
    case '+':
        sum();

        /* code */
        break;
    case '-':
        sub();
        break;
    case '/':
        div();
        break;
    case '*':
        mul();
        break;

    default:
        cout << "invalid operation";

        break;
    }
    return 0;
}
