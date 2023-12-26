#include <iostream>
using namespace std;

float areaCircle(int r)
{
    return 22 / 7.0 * r * r;
}

int main()
{
    cout << "radius: ";
    int r;
    cin >> r;

    cout << "Area of Circle = " << areaCircle(r) << endl;

    return 0;
}
