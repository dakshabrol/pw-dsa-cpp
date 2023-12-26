#include <iostream>
using namespace std;

int main()
{
    cout << "n: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int k = i;
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k--;
        }
        cout << endl;
    }
    return 0;
}
