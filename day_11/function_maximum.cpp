#include<iostream>
using namespace std;
int max(int x,int y) {
    int max;
   if(x>y) {
    max=x;
   }
   else {
    max=y;
   }
   return max;
}
int main() {
    int a,b,result;
    cout<<"enter number a";
    cin>>a;
     cout<<"enter number b";
    cin>>b;
   result = max(a,b);
    cout<<result;
    return 0;
}   