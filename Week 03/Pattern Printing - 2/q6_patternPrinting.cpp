#include <iostream>
using namespace std;

int main()
{
    cout << "n: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            if ((j == 1) || (j == (2 * n - 2 * i + 1)))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
