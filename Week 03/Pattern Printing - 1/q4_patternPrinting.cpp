#include <iostream>
using namespace std;

int main()
{
    cout << "n: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << (char)(64 + j) << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
