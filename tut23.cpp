#include <iostream>
using namespace std;

class shop
{

    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << ": ";
    cin >> itemid[counter];
    cout << "Enter Price of your item: ";
    cin >> itemprice[counter];
    counter++;
}

void shop::displayprice(void)
{
    cout << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemid[i] << " is " << itemprice[i] << endl
             << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    for(int i = 0; i< 3;i++){

    dukaan.setprice();
    }

    dukaan.displayprice();

    return 0;
}