#include <iostream>
using namespace std;

int main()
{
    cout << "Length: ";
    int l;
    cin >> l;

    cout << "Breadth: ";
    int b;
    cin >> b;

    if (l * b > 2 * (l + b))
    {
        cout << "Area of Rectangle > Perimeter of Rectangle" << endl;
    }
    else
    {
        cout << "Area of Rectangle is less than or equal to Perimeter of Rectangle." << endl;
    }

    return 0;
}
