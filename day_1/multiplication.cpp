#include<iostream>
using namespace std;
int main() {
    int n,mul;
    cout << "enter number:";
    cin >>n;
    for(int i=1;i<=10;i++){
        mul=n*i;
        cout <<mul ;
        cout << endl;
    }
    return 0;
}