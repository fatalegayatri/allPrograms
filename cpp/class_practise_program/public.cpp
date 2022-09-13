#include <iostream>
void sum();
int sqre();
using namespace std;
class variable
{
private:
    /* data */
public:
    int num, num2, num3;
};

int main()
{
    sum();
    sqre();
    return 0;
}
void sum()
{
    variable obj;
    obj.num2 = 10;
    obj.num3 = 0;
    cout << "Sum of first 10 no is :" << endl;
    for (int i = 1; i <= 10; i++)
    {
        // obj.num3 =
        obj.num3 += i;
        /* code */
    }

    cout << obj.num3 << endl;
}
int sqre()
{
    variable obj1;
    obj1.num = 10;
    for (size_t i = 1; i <= obj1.num; i++)
    {
        cout << "The square of  " << i << " is " << i * i << endl;

        /* code */
    }
    return 0;
}
