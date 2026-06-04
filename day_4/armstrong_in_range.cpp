 #include<iostream>
 #include<cmath>
 using namespace std;
 int main() {
    int a,b,count,rem,c ;
    double arm;
    cout<<"enter number a:";
    cin>>a;
    cout<<"enter number b:";
    cin>>b;
    
    
    
    for(int i=a;i<b;i++){
        count=0;
        arm=0;
        c=i;
        while(c!=0){
            c=c/10;
            count++;
        }
        c=i;
        while(c!=0){
            rem = c%10;
        arm = arm + pow(rem,count);
        c=c/10;
        }
        if(arm==i){
            cout<<arm;
            cout<<"\n";
    }
}
    return 0;

}
