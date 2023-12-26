#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    cout << "ASCII  Character" << endl;
    while (i < 26)
    {
        cout << (int)(i + 'A') << "     " << (char)(i + 'A') << endl;
        i++;
    }
    return 0;
}
