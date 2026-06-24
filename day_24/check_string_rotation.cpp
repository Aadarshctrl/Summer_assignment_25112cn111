 #include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1, string s2)
{
    // Length should be same
    if (s1.length() != s2.length())
        return false;

    // Concatenate s1 with itself
    string temp = s1 + s1;

    // Check if s2 is a substring of temp
    if (temp.find(s2) != string::npos)
        return true;

    return false;
}

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (isRotation(s1, s2))
        cout << "String is a rotation of first string.";
    else
        cout << "String is not a rotation of first string.";

    return 0;
}