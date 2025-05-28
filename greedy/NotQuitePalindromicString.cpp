#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main() {
    int t=1;
    cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int z=0,on=0;

        for(char c:s){
            if(c=='0'){z++;}
            else{on++;}
        }

        int ans = z/2 + on/2;
        if(k%2 == ans%2 && k<=ans  && k>= (abs(on-z))/2){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
}
 
