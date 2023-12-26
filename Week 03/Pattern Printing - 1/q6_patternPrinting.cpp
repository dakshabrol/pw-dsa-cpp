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

    for (int i = 1; i <= n; i++)
    {
        cout << "* ";
    }
    cout << endl;
    for (int i = 1; i <= m - 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((j == 1) || (j == n))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "* ";
    }
    cout << endl;

    return 0;
}
