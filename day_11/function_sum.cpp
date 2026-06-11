#include<iostream>
using namespace std;
int sum(int x,int y) {
   int sum;
    sum=x+y;
    return sum;
}
int main() {
    int a,b,result;
    cout<<"enter number a";
    cin>>a;
     cout<<"enter number b";
    cin>>b;
   result = sum(a,b);
    cout<<result;
    return 0;
}   