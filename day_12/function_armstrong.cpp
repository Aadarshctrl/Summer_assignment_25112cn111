#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int a) {
    int rem,sum,count,c;
    sum=0;
    c=a;
    count=0;
    while(a>0) {
        a=a/10;
        count++;
    }
    while(c>0) {
        rem=c%10;
sum=sum+round(pow(rem,count));
c=c/10;
    }  
            return sum;
    }
    int main() {
        int n,b,result;
        cout<<"enter number";
        cin>>n;
        b=n;
        result=armstrong(n);
        cout<<result;
        if(b==result){
            cout<<"armstrong number";
        }
        else{
            cout<<"not armstrong number";
        }
        return 0;
    }