#include <iostream>
using namespace std;

int main()
{
    cout << "n: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    for (int i = n - 1; i > 0; i--)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "  ";
        }
        int x = n - i;
        for (int j = 1; j <= n - i; j++)
        {
            cout << x << " ";
            x--;
        }
        cout << endl;
    }
    return 0;
}
