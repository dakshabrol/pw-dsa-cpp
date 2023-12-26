#include <iostream>
using namespace std;

int main()
{
    cout << "n: ";
    int n;
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "* ";
    }
    cout << endl;

    int nst = n - 1;
    int nsp = 1;
    for (int i = 1; i <= 2 * n - 3; i++)
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
        if (i < n - 1)
        {
            nsp += 2;
            nst--;
        }
        else
        {
            nsp -= 2;
            nst++;
        }
        cout << endl;
    }

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "* ";
    }
    cout << endl;

    return 0;
}
