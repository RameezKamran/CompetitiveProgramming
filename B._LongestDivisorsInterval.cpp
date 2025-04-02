#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--)
    {
        long long n; cin>>n;
        int size = 0;
        for(int i=1; i<=n ; i++)
        {
            if(n%i==0){size++;}
            else{break;}
        }

        cout<<size<<endl;
    }
}
