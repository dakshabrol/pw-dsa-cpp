#include <iostream>
using namespace std;

int main()
{
    cout << "m: ";
    int m;
    cin >> m;

    cout << "n: ";
    int n;
    cin >> n;

    int nsp = m - 1;
    int nst = 1;
    for (int i = 1; i <= 2 * m - 1; i++)
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
            else
            {
                cout << "  ";
            }
        }
        if (i < m)
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
    return 0;
}
