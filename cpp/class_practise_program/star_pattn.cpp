#include <iostream>
using namespace std;
class patt
{
public:
    int c, r;
    void pattern()
    {
        c = 5;
        for (size_t i = 1; i <= c; i++)
        {
            for (size_t r = 1; r <= i; r++)

            {
                cout << "*";
                /* code */
            }
            cout << endl;
            /* code */
        }
    }
};
int main()
{
    patt obj;
    obj.pattern();

    return 0;
}