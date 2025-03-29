#include<set>
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
typedef long long ll;

int x[] = {-1,1,1,-1};
int y[] = {-1,-1,1,1};   

int main(){
    int t; cin>>t;
    while(t--)
    {
        ll a,b; cin>>a>>b;
        ll x_k,y_k, x_q,y_q;
        cin>>x_k>>y_k;
        cin>>x_q>>y_q;

        set<pair<int,int>> king_hits, queen_hits;

        for(int i=0  ; i<4; i++)
        {
            king_hits.insert( {x_k + (a*x[i]),y_k + (b*y[i])} );

            king_hits.insert( {x_k + (b*x[i]),y_k + (a*y[i])} );
        

            queen_hits.insert( {x_q + (a*x[i]),y_q + (b*y[i])} );
            queen_hits.insert( {x_q + (b*x[i]),y_q + (a*y[i])} );

        }

        int ans = 0;

        for(auto i:king_hits){
            if(queen_hits.find(i)!=queen_hits.end()){ans++;}
        }

        cout<<ans<<endl;


    }
}
