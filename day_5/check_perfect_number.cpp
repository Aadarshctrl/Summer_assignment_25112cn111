#include<iostream>
using namespace std;
int main() {
    int n,rem,sum ;
    cout<<"enter number";
    cin>>n;
    sum=0;
    for(int i=1;i<n;i++) {
        rem=n%i;
        if(rem==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<n<<"is perfect number";
    }
        else{
            cout<<n<<"is not a perfect number";
        }
        return 0;
    }

