#include <iostream>
using namespace std;

int square(int x)
{
    int sq = x * x;
    return sq;
}

void firstNSquares(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << "^2 = " << square(i) << endl;
    }
}
int main()
{
    cout << "n: ";
    int n;
    cin >> n;

    firstNSquares(n);
    return 0;
}
