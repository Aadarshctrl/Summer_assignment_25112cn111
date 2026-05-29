#include<iostream>
using namespace std;
int main() {
    int n, sum = 0,rem;
    cout << "Enter a number: ";
    cin >> n;
    while (n>10) {
        rem = n%10;
        sum=sum+rem;
        n=n/10;
    }sum=sum+n;
    cout << "sum of digits :"<<sum;
    return 0;
}