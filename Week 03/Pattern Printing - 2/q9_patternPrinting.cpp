#include <iostream>
using namespace std;

int main()
{
    cout << "n: ";
    int n;
    cin >> n;

    int nsp = n;
    int nst = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= nst; j++)
        {
            if ((j == 1) || (j == nst))
            {
                cout << "* ";
            }

            else if ((i == j) && (i <= n + 1))
            {
                cout << "* ";
            }
            else if ((i + j == 2 * n + 2) && (i > n + 1))
            {
                cout << "* ";
            }
            else if (i == n + 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        if (i <= n)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        cout << endl;
    }
}
