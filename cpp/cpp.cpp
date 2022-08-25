#include <iostream>

using namespace std;
int main()

{

    int marks[10] = {5, 3, 5, 2, 34, 5, 6, 3, 9, 5};
    for (int i = 0; i < 10; i++)
    {
        cout << "marks index" << i << endl;
        cout << marks[i] << endl;
        // << marks[i] << endl;
        /* code */
    }
    int age[5];
    cout << "enter ages" << endl;

    for (size_t i = 0; i < 5; i++)
    {
        cin >> age[i];
        /* code */
    }
    cout << "your ages is" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << age[i] << endl;
        /* code */
    }
    // int ayy[2] = {1, 2};
    // int *p = ayy;
    // cout << *p;

    return 0;
}