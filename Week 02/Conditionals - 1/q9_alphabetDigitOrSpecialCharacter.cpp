#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a character: ";
    char ch;
    cin >> ch;

    int ascii = (int)ch;

    if ((ascii >= 65 && ascii <= 90) || ascii >= 97 && ascii <= 122)
    {
        cout << "Character '" << ch << "' is an alphabet.";
    }
    else if (ascii >= 48 && ascii <= 57)
    {
        cout << "Character '" << ch << "' is a digit.";
    }
    else
    {
        cout << "Character '" << ch << "' is a special character.";
    }
    cout << endl;
    return 0;
}
