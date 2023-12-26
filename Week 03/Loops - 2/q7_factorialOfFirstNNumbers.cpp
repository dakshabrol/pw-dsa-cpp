#include <iostream>
using namespace std;

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;

    int j = 1;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        while (j <= i)
        {
            factorial *= j;
            j++;
        }
        cout << i << "! = " << factorial << endl;
    }

    return 0;
}
