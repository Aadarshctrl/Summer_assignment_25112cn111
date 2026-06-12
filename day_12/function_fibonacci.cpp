#include<iostream>
using namespace std;
int fibonacci(int a) {
    int b,c,sum ;
    sum=0;
    b=0;
    c=1;
for(int i=1;i<=a;i++){
    sum=b+c;
    b=c;
    c=sum;
}
            return b;
    }
    int main() {
        int n,result;
        cout<<"enter number";
        cin>>n;
        
        result=fibonacci(n);
       cout<<result;
       return 0;
    }