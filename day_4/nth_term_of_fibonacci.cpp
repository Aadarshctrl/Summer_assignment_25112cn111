#include<iostream>
using namespace std;
int main() {
    int a,b,sum,n ;
    a=0;
    b=1;
cout<<"enter nth term";
cin>>n;
for(int i=1;i<n;i++) {
    sum = a+b;
    a=b;
    b=sum;
}
cout<<a;
return 0;
}