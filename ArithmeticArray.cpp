#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int sum = 0;

        for(int i=0 ; i<n;i++){
            int y; cin>>y;
            sum+= y;
        }
            if(sum<n){cout<<(1)<<endl;}
            else{cout<<sum-n<<endl;}
        }
    }
