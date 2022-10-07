#include <iostream>
using namespace std;

class family
{
private:
    int age, salary;
    void display(int x, int y)
    {
        if (y < 30000)
        {
            cout << "Your salary is less !!!\n improve your work" << endl;
            /* code */
        }
        else
        {
            cout << "Good job your performence is nice" << endl;
        }
    }
    /* data */
public:
    void member(int a, int b);

    int getmem()
    {
        cout << "Enter your age" << endl;
        cin >> age;
        cout << "the value of your salary" << endl;
        cin >> salary;
        display(age, salary);

        return 0;
    }
};

void family::member(int a, int b)
{
    cout << "the values      " << a << b << endl;
}

int main()
{
    family mem1;
    mem1.member(6, 5);
    mem1.getmem();
    return 0;
}