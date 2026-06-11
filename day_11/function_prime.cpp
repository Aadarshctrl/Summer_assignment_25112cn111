#include<iostream>
using namespace std;
int prime(int a) {
    int rem;
    for(int i=2;i<=a/2;i++) {
        rem=a%i;
        if(rem==0) {
            cout<<"not prime number";
            break;
        }
            else {
                cout<<"prime number";
            } break;
        }
            return 0;
    }
    int main() {
        int n,result;
        cout<<"enter number";
        cin>>n;
        result=prime(n);
        cout<<result;
        return 0;
    }
        
        

        
