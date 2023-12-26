#include <iostream>
using namespace std;

int main()
{
    cout << "n: ";
    int n;
    cin >> n;

    for (int x = 1; x <= 2 * n - 1; x++)
    {
        cout << (char)(x + 64) << " ";
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        int a = 0;
        for (int j = 1; j <= n - i; j++)
        {
            cout << (char)('A' + a) << " ";
            a++;
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "  ";
            a++;
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << (char)('A' + a) << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}
