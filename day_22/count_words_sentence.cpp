#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int words = 0;

    cout << "Enter a sentence: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        // Count a word when a non-space character is followed by a space or end of string
        if (str[i] != ' ' && (i == str.length() - 1 || str[i + 1] == ' ')) {
            words++;
        }
    }

    cout << "Number of words = " << words;

    return 0;
}