#include <iostream>
using namespace std;

int main()
{
    cout << "n = ";
    int n;
    cin >> n;

    int a = 4;
    int d = 3;

    cout << "AP: ";
    for (int i = 1; i <= n; i++)
    {
        cout << a + (i - 1) * d;
        if (i < n)
        {
            cout << ", ";
        }
    }

    return 0;
}
