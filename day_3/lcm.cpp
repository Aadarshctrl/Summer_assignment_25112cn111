#include<iostream>
using namespace std;
int main() {
    int a,b,rem,x,y,gcd,lcm ;
    cout<<"enter number a:";
    cin>>a;
    cout<<"enter number b";
    cin>>b;
    x=a;
    y=b;
    while(y!=0){
    rem=x%y;
    x=y;
    y=rem;
    }
gcd=x;
lcm=(a*b)/gcd;
cout<<lcm<<"";
return 0;
}
