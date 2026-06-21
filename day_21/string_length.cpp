#include <iostream>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        count++;
    }

    cout << "Length of the string = " << count;

    return 0;
}