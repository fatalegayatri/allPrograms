#include <iostream>
using namespace std;
class person
{
public:
    string name;
    int id;
    void getdetails()
    {
        cout << " name:"
             << name << endl;
        cout << "Id:" << id << endl;
    }
};
int main()
{
    person p1;
    p1.name = "'gfayads'";
    p1.id = 24;
    p1.getdetails();
    return 0;
}
