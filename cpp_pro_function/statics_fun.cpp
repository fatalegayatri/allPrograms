#include <iostream>
using namespace std;
class gym
{
private:
    int res;

public:
    static int a, b;
    static int fun(int a, int b)
    {
        a;
        b;
        cout << "sum:" << a + b << endl;
        a++;
        cout << "after calling the function" << a++ << endl;
    }
};

int gym::a = 8;

int main()
{
    gym obj;

    obj.fun(8, 0);
    return 0;
}