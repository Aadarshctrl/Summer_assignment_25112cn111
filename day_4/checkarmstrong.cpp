#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n,count,a,rem ;
    double arm;
    cout<<"enter number:";
    cin>>n;
    a=n;
    arm=0;
    count=0;
    while(a!=0){
        a=a/10;
        count++;
    }
    a=n;
    while(a!=0){
       rem = a%10;
       arm = arm + pow(rem,count);
       a=a/10;
    }
    if(arm==n){
        cout<<"number is armstrong";
    }
    else{
        cout<<"not armstrong number";
    }
    return 0;
}


        
    