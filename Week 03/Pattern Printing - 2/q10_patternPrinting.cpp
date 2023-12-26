#include <iostream>
using namespace std;

int main()
{
    cout << "n: ";
    int n;
    cin >> n;

    int nst = 1;
    int nsp = 2 * n - 3;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        cout << endl;
        nst++;
        nsp -= 2;
    }

    int x = 1;
    while (x <= 2)
    {
        for (int i = 1; i <= 2 * n - 1; i++)
        {
            cout << "* ";
        }
        cout << endl;
        x++;
    }

    nst = n - 1;
    nsp = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        cout << endl;
        nst--;
        nsp += 2;
    }
    return 0;
}
