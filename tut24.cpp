#include <iostream>
using namespace std;

class employee
{

    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id: ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is: " << id << " and this is employee number " << count;
        cout << endl;
    }

    static void getcount(void){
        // count id;//--> throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

 int employee::count = 1000; // Default value is 0

// count is the static data member of class employe
int main()
{

    employee ankit, ayush, sumit;
    // ankit.id = 1;
    //  ankit.count = 1; //cannot do t his as id and count are private

    ankit.setData();
    ankit.getData();
    employee::getcount();

    ayush.setData();
    ayush.getData();
    employee::getcount();

    sumit.setData();
    sumit.getData();
    employee::getcount();

    return 0;
}
