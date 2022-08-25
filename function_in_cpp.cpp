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

    return 0;
}
int display(int v, char sy, int w)
{

    char sy;
    switch (sy)
    {
    case '+':
        cout << v = v + w;

        /* code */
        break;
    case '-':
        cout << v = v - w;
        break;
    case '/':
        cout << v = v / w;
        break;
    case '*':
        cout << v = v * w;
        break;

    default:
        cout << "invalid operation";

        break;
    }
    return 0;
}
