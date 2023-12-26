#include <iostream>
using namespace std;

void oddNumbers(int a, int b)
{
    if (a > b)
    {
        oddNumbers(b, a);
        return;
    }
    if (a % 2 != 0)
    {
        a += 2;
    }
    else
    {
        a++;
    }
    cout << "Odd Numbers: ";
    while (a < b)
    {
        cout << a;
        if (a < b - 2)
        {
            cout << ", ";
        }
        a += 2;
    }
}

int main()
{
    cout << "Number 1: ";
    int n1;
    cin >> n1;

    cout << "Number 2: ";
    int n2;
    cin >> n2;

    oddNumbers(n1, n2); // prints all odd numbers b/w n1 and n2
    return 0;
}
