#include <iostream>
using namespace std;

int main()
{
    int size = 6;

    int arry[size] = {
        2,
        8,
        5,
        1,
        4,
        0};
    cout
        << "\nArray before sort\n\n";

    for (size_t i = 0; i < size; i++)
    {

        cout << "\n"
             << arry[i];
        /* code */
    }

    for (size_t i = 0; i < size; i++)
    {
        int temp = arry[i];
        int j = i - 1;
        while (arry[j] > temp && j >= 0)
        {

            arry[j + 1] = arry[j];
            j--;
            /* code */
        }
        arry[j + 1] = temp;

        /* code */
    }
    cout << "printing array after sorting\n";
    for (size_t i = 0; i < size; i++)
    {
        cout << arry[i] << endl;
        /* code */
    }

    return 0;
}