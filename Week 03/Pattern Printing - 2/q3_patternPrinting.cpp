#include <iostream>
using namespace std;

int main()
{
    cout << "n: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int nsp = n - i;
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        int nch = i;
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << (char)(64 + nch) << " ";
            if (k < i)
            {
                nch--;
            }
            else
            {
                nch++;
            }
        }
        cout << endl;
    }
    return 0;
}
