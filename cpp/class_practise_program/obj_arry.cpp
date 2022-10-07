#include <iostream>
using namespace std;
class arry
{
public:
    int id;
    string emp;

    void getdata();
    void putdata()
    {

        cout << "Id :" << id << endl;
        cout << "Name :" << emp << endl;
    }
};

void arry::getdata()
{
    cout << "Enter Id  ";
    cin >> id;
    cout << "Enter emplyee name ";
    cin >> emp;
}

int main()
{
    arry obj;
    const int size = 2;
    // obj.size;
    arry obj1[size];
    cout << "Enter your records" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "the  " << i + 1 << "  number\n";
        obj1[i].getdata();
        /* code */
        obj1[i].putdata();
    }
    // for (int j = 1; j <= obj.size; j++)
    // {
    //     /* code */
    // }

    return 0;
}