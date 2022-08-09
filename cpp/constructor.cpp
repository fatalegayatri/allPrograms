#include <iostream>
using namespace std;
class calculator
{
    int num1, num2;
    char symbol;

    /* data */
public:
    void add()
    {
        cout << "sum number" << num1 + num2;
    }
    void sub()
    {
        cout << "subtraction number" << num1 - num2;
    }
    void mul()
    {
        cout << "multiplication number" << num1 * num2;
    }
    void div()
    {
        cout << "division number" << num1 / num2;
    }

    calculator(int a, int b, char sym)
    {
        num1 = a;
        num2 = b;
        symbol = sym;
        switch (symbol)
        {
        case '+':
            add();
            /* code */
            break;
        case '-':
            sub();
            break;
        case '*':
            mul();
            break;
        case '/':
            div();
            break;

        default:
            cout << "wrong operator";
            break;
        }
    }
};
int main()

{
    int an, am;
    char syl;
    cout << "Enter two number and operation";
    cin >> an >> am >> syl;

    calculator cl(an, am, syl);
    return 0;
}