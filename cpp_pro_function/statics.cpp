#include <iostream>
using namespace std;
class abc
{
public:
    static int oc;
    abc(double l = 9.7, double b = 2.3, double h = 2.3)
    {
        cout << "constructor is called" << endl;

        length = l;
        breath = b;
        height = h;
        cout << "box area " << value();
        oc++;
    }
    double value()
    {
        return length * breath * height;
    }

private:
    double length, breath, height;
};
int abc::oc = 0;

int main()
{
    abc obj(3.5, 5.5, 6.3);
    abc obj2(6.3, 5.2, 4.2);
    cout << "Total objects " << abc::oc << endl;

    return 0;
}