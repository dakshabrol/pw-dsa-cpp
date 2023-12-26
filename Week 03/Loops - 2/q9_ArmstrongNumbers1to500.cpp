#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 1; i < 500; i++)
    {
        int lastDigit = 0, sum = 0;
        int n = i;
        while (n > 0)
        {
            lastDigit = n % 10;
            sum += pow(lastDigit, 3);
            n /= 10;
        }

        if (sum == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}
