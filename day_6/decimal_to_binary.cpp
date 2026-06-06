#include<iostream>
using namespace std;
int main() {
    int n,rem,binary,i ;
    cout<<"enter number";
    cin>>n;
   i=1;
   binary=0;
   while(n!=0) {
    rem=n%2;
    binary=binary+(rem*i);
    n=n/2;
    i=i*10;
   }
   cout<<binary<<" ";
   return 0;
} 
