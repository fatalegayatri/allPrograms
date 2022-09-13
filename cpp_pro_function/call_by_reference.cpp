#include <iostream>
using namespace std;
int swap(int *, int *);

int main()
{
    int num, num1;
    cout << "Enter two number\n ";
    cin >> num >> num1;
    cout << " no before swap a=" << num << " b=" << num << endl;
    swap(&num, &num1);
    cout << "after swapping a=" << num << "b=" << num1 << endl;

    return 0;
}
int swap(int *x, int *y)
{
    int res;

    res = (*x) + (*y);
    *x = res - (*x);
    *y = res - (*y);
    return 0;
}