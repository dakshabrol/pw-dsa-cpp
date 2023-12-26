#include <iostream>
using namespace std;

int main()
{
    cout << "Enter sides of triangle: ";
    int a, b, c;
    cin >> a >> b >> c;

    cout << "Triangle is ";

    if (a == b && b == c)
    {
        cout << "an Equilateral Triangle.";
    }
    else if ((a == b && b != c) || (a == c && b != c) || (b == c && a != c))
    {
        cout << "an Isoceles Triangle.";
    }
    else
    {
        cout << "a Scalene Triangle.";
    }
    cout << endl;
    return 0;
}
