#include<iostream>
using namespace std;
int main() {
    int n,x,result ;
    cout<<"enter number";
    cin>>x;
    cout<<"enter number";
    cin>>n;
    result=1;
    for(int i=1;i<=n;i++) {
        result=result*x;
    }
    cout<<result<<" ";
    return 0;
}
