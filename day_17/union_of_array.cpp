 #include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 6, 7};

    int n1 = 5, n2 = 5;

    set<int> s;

    // Insert elements of first array
    for (int i = 0; i < n1; i++) {
        s.insert(arr1[i]);
    }

    // Insert elements of second array
    for (int i = 0; i < n2; i++) {
        s.insert(arr2[i]);
    }

    // Print union
    cout << "Union of arrays: ";
    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}