#include<set>
#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--)
    {
        int n; int k; cin>>n>>k;
        map<char,int>mp;
        for(int i=0 ; i<n; i++)
        {
            char ch; cin>>ch;
            mp[ch]++;
        }
        int x = 0;
        for(auto it:mp)
        {
            if(it.second%2==1){x++;}
        }
        cout<<(x<=k+1 ? "YES":"NO")<<endl;
    }
}
