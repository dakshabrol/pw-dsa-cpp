#include <iostream>
using namespace std;

int main()
{
    cout << "Total Amount: ";
    int amount;
    cin >> amount;

    int n1, n2, n5, n10, n20, n50, n100, n200, n500, n2000;
    n1 = n2 = n5 = n10 = n20 = n50 = n100 = n200 = n500 = n2000 = 0;

    switch (amount >= 2000)
    {
    case 1:
        n2000 = amount / 2000;
        amount -= n2000 * 2000;
        break;
    }
    switch (amount >= 500)
    {
    case 1:
        n500 = amount / 500;
        amount -= n500 * 500;
        break;
    }
    switch (amount >= 200)
    {
    case 1:
        n200 = amount / 200;
        amount -= n200 * 200;
        break;
    }
    switch (amount >= 100)
    {
    case 1:
        n100 = amount / 100;
        amount -= n100 * 100;
        break;
    }
    switch (amount >= 50)
    {
    case 1:
        n50 = amount / 50;
        amount -= n50 * 50;
        break;
    }
    switch (amount >= 20)
    {
    case 1:
        n20 = amount / 20;
        amount -= n20 * 20;
        break;
    }
    switch (amount >= 10)
    {
    case 1:
        n10 = amount / 10;
        amount -= n10 * 10;
        break;
    }
    switch (amount >= 5)
    {
    case 1:
        n5 = amount / 5;
        amount -= n5 * 5;
        break;
    }
    switch (amount >= 2)
    {
    case 1:
        n2 = amount / 2;
        amount -= n2 * 2;
        break;
    }
    switch (amount >= 1)
    {
    case 1:
        n1 = amount / 1;
        amount -= n1 * 1;
        break;
    }

    if (n2000 > 0)
    {
        cout << "notes of \"2000\" = " << n2000;
    }
    if ((n2000 != 0) && n500 != 0)
    {
        cout << " and ";
    }
    if (n500 > 0)
    {
        cout << "notes of \"500\" = " << n500;
    }
    if ((n2000 != 0 || n500 != 0) && n200 != 0)
    {
        cout << " and ";
    }
    if (n200 > 0)
    {
        cout << "notes of \"200\" = " << n200;
    }
    if ((n2000 != 0 || n500 != 0 || n200 != 0) && n100 != 0)
    {
        cout << " and ";
    }
    if (n100 > 0)
    {
        cout << "notes of \"100\" = " << n100;
    }
    if ((n2000 != 0 || n500 != 0 || n200 != 0 || n100 != 0) && n50 != 0)
    {
        cout << " and ";
    }
    if (n50 > 0)
    {
        cout << "notes of \"50\" = " << n50;
    }
    if ((n2000 != 0 || n500 != 0 || n200 != 0 || n100 != 0 || n50 != 0) && n20 != 0)
    {
        cout << " and ";
    }
    if (n20 > 0)
    {
        cout << "notes of \"20\" = " << n20;
    }
    if ((n2000 != 0 || n500 != 0 || n200 != 0 || n100 != 0 || n50 != 0 || n20 != 0) && n10 != 0)
    {
        cout << " and ";
    }
    if (n10 > 0)
    {
        cout << "notes of \"10\" = " << n10;
    }
    if ((n2000 != 0 || n500 != 0 || n200 != 0 || n100 != 0 || n50 != 0 || n20 != 0 || n10 != 0) && n5 != 0)
    {
        cout << " and ";
    }
    if (n5 > 0)
    {
        cout << "notes of \"5\" = " << n5;
    }
    if ((n2000 != 0 || n500 != 0 || n200 != 0 || n100 != 0 || n50 != 0 || n20 != 0 || n10 != 0 || n5 != 0) && n2 != 0)
    {
        cout << " and ";
    }
    if (n2 > 0)
    {
        cout << "notes of \"2\" = " << n2;
    }
    if ((n2000 != 0 || n500 != 0 || n200 != 0 || n100 != 0 || n50 != 0 || n20 != 0 || n10 != 0 || n5 != 0 || n2 != 0) && n1 != 0)
    {
        cout << " and ";
    }
    if (n1 > 0)
    {
        cout << "notes of \"1\" = " << n1;
    }
    cout << endl;

    return 0;
}
