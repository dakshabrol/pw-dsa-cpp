#include <iostream>
using namespace std;

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;

    int a = 1;
    int b = 1;
    int c = 0;

    if (n == 1)
    {
        cout << a << endl;
    }
    else if (n <= 0)
    {
        cout << "Invalid Input!" << endl;
    }
    else
    {
        cout << a << " " << b << " ";
        for (int i = 1; i <= n - 2; i++)
        {
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    }

    return 0;
}
