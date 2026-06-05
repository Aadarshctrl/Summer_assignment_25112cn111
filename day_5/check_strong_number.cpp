#include<iostream>
using namespace std;
int main() {
    int n,a,fact,rem,sum ;
    cout<<"enter number";
    cin>>n;
    a=n;
    sum=0;
    while(a!=0) {
        fact=1;
        rem=a%10;
        for( int i=1;i<=rem;i++) {
            fact=fact*i;
        }
        sum=sum+fact;
        a=a/10;
    }
    if(sum==n){
        cout<<n<<"is strong number";
    }
    else{
        cout<<n<<"is not a strong number";
    }
    return 0;
}
