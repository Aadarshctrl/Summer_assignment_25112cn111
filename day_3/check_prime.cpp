#include<iostream>
using namespace std;
int main(){
    int n , rem ;
    cout<<"enter number";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        rem=n%i;
        if(rem==0){
            cout<<"number is not a prime";
            break;
        }
    
        else{
            cout<<"number is prime";
            break;
        }
    }
    

    return 0;
}

