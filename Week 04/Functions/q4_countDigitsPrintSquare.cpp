#include <iostream>
using namespace std;

int square(int x)
{
    int sq = x * x;
    return sq;
}

int countDigits(int x)
{
    int digits = 0;
    while (x > 0)
    {
        digits++;
        x /= 10;
    }
    return digits;
}
int main()
{
    cout << "n: ";
    int n;
    cin >> n;

    cout << "Number of Digits in " << n << " = " << countDigits(n) << endl;
    cout << "Square of " << n << " = " << square(n) << endl;

    return 0;
}
