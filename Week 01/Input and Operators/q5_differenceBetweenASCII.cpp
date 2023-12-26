#include <iostream>
using namespace std;

int main()
{
    cout << "Character 1: ";
    char ch1;
    cin >> ch1;

    cout << "Character 2: ";
    char ch2;
    cin >> ch2;

    int ascii_ch1 = (int)ch1;
    int ascii_ch2 = (int)ch2;

    cout << "Difference in ASCII values of two characters = " << ascii_ch1 - ascii_ch2 << endl;

    return 0;
}
