#include <iostream>
using namespace std;

class shopitem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is " << id << endl;
        cout << " Price of the item is " << price << endl;
    }
};
        //   1 2  3
        //          ^           
        //          |
        //          |           
        //          ptr
        // ptrtemp

int main()
{
    int size = 3;
    // int * ptr = &size;
    // int *ptr = new int[34];
    // what is dynamic memory allocation

    // 1. general store item
    // 2. veggies item
    // 3. hardware item
    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << " : ";
        cin >> p >> q;
        ptrtemp->setdata(p, q);
        ptrtemp++;
    }
    ptrtemp = ptrtemp - size;

    for (int i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrtemp->getData();
        ptrtemp++;
    }

    return 0;
}