#include <iostream>
using namespace std;

int main()
{
    cout << "Marks scored by A: ";
    int a;
    cin >> a;

    cout << "Marks scored by B: ";
    int b;
    cin >> b;

    cout << "Marks scored by C: ";
    int c;
    cin >> c;

    if (a < b)
    {
        if (a < c)
        {
            cout << "A scored the least marks.";
        }
        else if (c < a)
        {
            cout << "C scored the least marks.";
        }
    }
    else if (b < c)
    {
        if (b < a)
        {
            cout << "B scored the least marks.";
        }
        else if (a < b)
        {
            cout << "A scored the least marks.";
        }
    }
    else if (c < a)
    {
        if (c < b)
        {
            cout << "C scored the least marks.";
        }
        else if (b < c)
        {
            cout << "B scored the least marks.";
        }
    }
    else
    {
        cout << "Error!";
    }
    cout << endl;
    return 0;
}
