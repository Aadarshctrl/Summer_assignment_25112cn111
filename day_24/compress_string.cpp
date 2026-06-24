#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, result = "";
    cin >> s;

    int count = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (i < s.length() - 1 && s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            result += s[i];
            result += to_string(count);
            count = 1;
        }
    }

    cout << "Compressed String: " << result;

    return 0;
}