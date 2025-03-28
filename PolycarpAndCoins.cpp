#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n%3==0){cout<<(n/3)<<" "<<(n/3)<<endl;}
        else{
           int c1 = n/3;
           int c2 = n/3 + 1;
           if(c1+(2*c2)!=n){cout<<c2<<" "<<c1<<endl;}
           else{cout<<c1<<" "<<c2<<endl;}
        }
    }
}
