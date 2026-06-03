#include<iostream>
using namespace std;
int main() {
    int a,b,rem ;
    cout<<" enter number a:";
    cin>>a;
    cout<<"enter number b:";
    cin>>b;
    while(b!=0) {
        rem=a%b;
        a=b;
        b=rem;
    }
    cout<<a;
    return 0;
}


