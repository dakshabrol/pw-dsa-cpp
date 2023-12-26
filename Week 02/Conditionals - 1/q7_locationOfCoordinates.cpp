#include <iostream>
using namespace std;

int main()
{
    cout << "Enter coordinates of the point to be located (x,y): ";
    int x, y;
    cin >> x >> y;

    if (x != 0 && y == 0)
        cout << "Point lies on X axis.";
    else if (x == 0 && y != 0)
        cout << "Point lies on Y axis.";
    else if (x == 0 && y == 0)
        cout << "Point lies on origin.";
    else
        cout << "Point lies on the x-y plane";
    cout << endl;

    return 0;
}
