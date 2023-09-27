#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is:  " << id << endl;
    }
};

int main()
{

    // employee ankit, ayush, sumit, ankita;
    // ankit.setId();
    // ankit.getId();

    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}