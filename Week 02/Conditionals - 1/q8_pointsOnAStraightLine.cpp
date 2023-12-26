#include <iostream>
using namespace std;

int main()
{
    cout << "Point 1 (x1,y1): ";
    float x1, y1;
    cin >> x1 >> y1;

    cout << "Point 2 (x2,y2): ";
    float x2, y2;
    cin >> x2 >> y2;

    cout << "Point 3 (x3,y3): ";
    float x3, y3;
    cin >> x3 >> y3;

    float s1 = (y2 - y1) / (x2 - x1);
    float s2 = (y3 - y2) / (x3 - x2);
    float s3 = (y3 - y1) / (x3 - x1);
    if (s1 == s2 && s2 == s3)
    {
        cout << "Points (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << "), (" << x3 << ", " << y3 << ") lies on straight line.";
    }

    else
    {
        cout << "Points (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << "), (" << x3 << ", " << y3 << ") does not lies on straight line.";
    }

    cout << endl;
    return 0;
}
