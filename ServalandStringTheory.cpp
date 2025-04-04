#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
#define all(v) v.begin(), v.end()


int main(){
    int t; cin>>t;
    while(t--)
    {
        int n;
        int k; cin>>n>>k;
        string s; cin>>s;
        string rev = s;
        reverse(all(rev));
        bool flag = 0;

        if(s<rev){cout<<"YES\n"; continue;}
        else
        {
            for(int i=1 ; i<n ; i++)
            {
                if(s[0]!=s[i] && k>0)
                {cout<<"YES\n"; flag = 1;
                break;}
            }

            if(!flag){cout<<"NO\n";}
        }
        }
        
    }  

