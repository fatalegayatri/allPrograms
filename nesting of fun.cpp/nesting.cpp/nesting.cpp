#include <iostream>
#include <string.h>
using namespace std;

class number
{
    void chk(void);
    string b;

public:
    void binry(void);
    void ones_com(void);
    void read(void)
    {

        for (int i = 0; i < b.length(); i++)
        {

            cout << b.at(i);

            /* code */
        }
    }
};
void number::ones_com()
{
    chk();
    for (int i = 0; i < b.length(); i++)
    {
        if (b.at(i) = '1')
        {

            b.at(i) = '0';
        }
        else
        {
            b.at(i) = '1';
        }

        /* code */
    }
}

void number::chk()
{
    for (int i = 0; i < b.length(); i++)
        if (b.at(i) != '0' && b.at(i) != '1')
        {
            cout << "entered number is not a binary";
            break;
        }

    /* code */
}

void number::binry()
{

    cout << "Enter the binary number" << endl;
    cin >> b;
    cout << "the number is given below" << endl;

    for (int i = 0; i < b.length(); i++)
    {

        cout << b.at(i);

        /* code */
    }
    cout << endl;
}

int main()
{
    number no1;
    no1.binry();
    // no1.chk();
    no1.ones_com();
    no1.read();
    return 0;
}