#include<iostream>
using namespace std;
int perfect(int a) {
    int rem,sum;
    sum=0;
    for(int i=1;i<a;i++) {
        rem=a%i;
        if(rem==0){
            sum=sum+i;
        }
    }
    return sum;
}
int main(){
    int n,result,b ;
    cout<<"enter number";
    cin>>n;
    b=n;
    result=perfect(n);
    if(result==b){
        cout<<"perfect number";
    }
    else{
        cout<<"not perfect number";
    }
    return 0;
}



