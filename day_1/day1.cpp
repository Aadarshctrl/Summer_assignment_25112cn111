#include<iostream>
using namespace std;
int main() {
    int n ,rem , count=1;
    cout <<"enter number:";
    cin>>n;
   while(n>=10){
    rem=n/10;
    n=rem;
    count++;
   }
   cout<<count;
    return 0;
