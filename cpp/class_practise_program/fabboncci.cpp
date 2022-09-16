// name : chinu
//  date : 16-09-22
#include <iostream>
using namespace std;
class fabo
{
public:
    fabo(int a)
    {
        int k = 0;
        if (a <= 1)
        {
            cout << 1;
        }
        else
        {

            // k = (a - 2) + (a - 1);
            for (size_t i = 1; i <= a; i++)
            {
                for (size_t j = 1; j <= i; j++)
                {

                    k = i + j;
                    /* code */
                }

                /* code */
            }
            cout << k;
        }
    };

    int main()
    {

        int g;
        fabo fabo(5);
        // cout<<"the value"<<fabo fabo(9);
        return 0;
    }
