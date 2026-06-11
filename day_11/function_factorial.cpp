#include<iostream>
using namespace std;
int factorial(int a) {
    int fact;
    fact=1;
    for(int i=1;i<=a;i++) {
        fact=fact*i;
    }
            return fact;
    }
    int main() {
        int n,result;
        cout<<"enter number";
        cin>>n;
        result=factorial(n);
        cout<<result;
        return 0;
    }
        
        

        
