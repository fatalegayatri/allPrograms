#include <iostream>
using namespace std;
class business
{

    int itemid[100];
    int element[100];
    int count = 1;

public:
    void getdata();
    void putdata();
    void counter()
    {
        count = 1;
    }
};
void business::getdata()
{

    cout << "Enter the id of number " << count << endl;
    cin >> itemid[count];

    cout << "Enter the element price of number " << count << endl;
    cin >> element[count];
    count++;
    /* code */
}

void business::putdata()
{
    for (size_t i = 0; i < count; i++)
    {
        cout << itemid[i] << endl;
        cout << element[i] << endl;
        /* code */
    }
}

int main()
{
    business shop;
    shop.getdata();
    shop.getdata();
    shop.getdata();
    shop.putdata();
    return 0;
}