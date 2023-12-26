#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two integers: ";
    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << a << " is the greatest." << endl;
    else if (b > a)
        cout << b << " is the greatest." << endl;
    else
        cout << "Both integers are equal." << endl;

    return 0;
}
