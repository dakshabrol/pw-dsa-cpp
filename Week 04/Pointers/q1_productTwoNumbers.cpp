#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    int *ptr1 = &a;
    int *ptr2 = &b;

    cout << *ptr1 << " x " << *ptr2 << " = " << (*ptr1) * (*ptr2) << endl;
    return 0;
}
