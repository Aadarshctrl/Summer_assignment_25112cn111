#include<iostream>
using namespace std;
int main() {
    int n , reverse =0, rem ,a;
    cout<<"enter number:";
    cin>>n;
    a=n;
    while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    if(a==reverse){
        cout<<"palindrome number";
    }
    else{
        cout<<"not palidrome number";
    }
    

    return 0;
}