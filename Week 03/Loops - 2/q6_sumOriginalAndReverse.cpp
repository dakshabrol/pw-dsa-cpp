#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    int new1 = n;
    int lastDigit = 0;
    int reverse = 0;

    while (new1 > 0)
    {
        lastDigit = new1 % 10;
        reverse *= 10;
        reverse += lastDigit;
        new1 /= 10;
    }

    cout << "Sum of " << n << " and it's reverse " << reverse << " is " << n + reverse << endl;

    return 0;
}
