#include<iostream>
using namespace std;
int main() {
    int a,b,sum,n ;
    a=0;
    b=1;
    cout<<"enter term upto";
    cin>>n;
    cout<<a;
    cout<<",";
    for(int i=1;i<n;i++) {
        sum = a+b;
        a=b;
        b=sum;
        cout<<a;
        cout<<",";
    }
    return 0;
}
    



