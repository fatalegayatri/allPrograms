/*author:Chinu
date:16-09-22
*/

#include <iostream>
using namespace std;

class star
{
public:
    int i, j, k;
};
int main()
{
    star obj;
    obj.i;
    obj.k = 1;

    obj.j;
    for (size_t i = 5; i >= 1; i--)
    {
        for (size_t j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << "\t" << obj.k * obj.k;
                /* code */
            }
            else
            {

                cout << "\t" << obj.k;
            }

            obj.k++;
            /* code */
        }
        /* code */
        cout << endl;
    }

    return 0;
}