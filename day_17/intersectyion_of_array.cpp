#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 5, 6, 7};

    int n1 = 5, n2 = 5;

    set<int> s1, intersection;

    // Store first array elements in set
    for (int i = 0; i < n1; i++) {
        s1.insert(arr1[i]);
    }

    // Check elements of second array
    for (int i = 0; i < n2; i++) {
        if (s1.find(arr2[i]) != s1.end()) {
            intersection.insert(arr2[i]);
        }
    }

    // Print intersection
    cout << "Intersection of arrays: ";
    for (int x : intersection) {
        cout << x << " ";
    }

    return 0;
}