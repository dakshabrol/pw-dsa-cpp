#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "n = ";
    int n;
    cin >> n;

    int a = 3;
    int r = 4;

    cout << "AP: ";
    for (int i = 1; i <= n; i++)
    {
        cout << a * pow(r, i - 1);
        if (i < n)
        {
            cout << ", ";
        }
    }

    return 0;
}
