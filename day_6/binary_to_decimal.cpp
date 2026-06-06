#include<iostream>
using namespace std;
int main() {
    int n,rem,decimal,i ;
    cout<<"enter number";
    cin>>n;
    i=1;
    decimal=0;
    while(n!=0) {
        rem=n%10;
        decimal=decimal+(rem*i);
        n=n/10;
        i=i*2;
    }
    cout<<decimal<<" ";
    return 0;
}
