#include<iostream>
using namespace std;
int palindrome(int a) {
    int rem,rev;
    rev=0;
    while(a>0) {
        rem=a%10;
rev=rev*10+rem;
a=a/10;
    }  
            return rev;
    }
    int main() {
        int n,b,result;
        cout<<"enter number";
        cin>>n;
        b=n;
        result=palindrome(n);
        if(b==result){
            cout<<"palindrome number";
        }
        else{
            cout<<"not palindrome number";
        }
        return 0;
    }