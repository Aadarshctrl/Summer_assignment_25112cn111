#include<iostream>
using namespace std;
int main() {
    int n,rem,largest ;
    cout<<"enter number";
    cin>>n;
    largest=1;
   for( int i=2;i<=n;i++) {
    rem=n%i;
    if(rem==0){
        bool prime=true;
        for(int j=2;j<=i/2;j++){
            if((i%j)==0){
                 prime=false;
                break;
            }
        }
        if(prime==true){
            largest=i;
        }
    }
}
cout<<largest<<" ";
return 0;
}

