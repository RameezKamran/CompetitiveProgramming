#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1; cin>>t;
    while(t--)
    {
       int a,b,n;
       cin>>a>>b>>n;
       long long second = b;
       vector<int>arr(n,0);
       for(int i=0  ; i<n ; i++){
        cin>>arr[i];
        arr[i] = min(arr[i],a-1); 
    }
    for(int i:arr)
    {
        second+=i;
    }
    cout<<second<<endl;

    }

}
