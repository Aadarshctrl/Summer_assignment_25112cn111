#include<iostream>
using namespace std ;
int main(){
    int a , b , rem  ;
    cout<<"enter number a";
    cin>>a;
    cout<<"enter number b";
    cin>>b;
    for(int i=a;i<=b;i++){
        if(i<2)
        continue;
        bool prime= true;
    for(int j=2;j<=i/2;j++){
        rem=i%j;
        if(rem==0){
            prime=false;
            break;
        }
    }
    if(prime){
    cout<<i<<" \n";
     } 
    }
    return 0;
}
