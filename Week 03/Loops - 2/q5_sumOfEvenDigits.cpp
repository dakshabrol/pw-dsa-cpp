#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    int new1 = n;
    int lastDigit = 0;
    int sumEven = 0;

    while (new1 > 0)
    {
        lastDigit = new1 % 10;
        if (lastDigit % 2 == 0)
        {
            sumEven += lastDigit;
        }
        new1 /= 10;
    }
    cout << "Sum of even digits of " << n << " is " << sumEven << endl;

    return 0;
}
