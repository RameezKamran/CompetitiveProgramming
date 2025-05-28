#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main() {
    int t=1;
    cin>>t;
    while(t--)
    {
        long long x,y; cin>>x>>y; 
        long long a,b; cin>>a>>b;
        long long cost = 0; long long ans = (x*a) + (y*a);

        if(x>0 && y>0 || (x<0 && y<0) )
        {
            int mn = min(abs(x),abs(y));
            cost += mn*b;
            cost += (max(abs(x),abs(y))-mn)*a;
        }

        else if(x == 0)
        {
            cost += abs(y)*a;
        }

        else if(y == 0)
        {
            cost += abs(x)*a;
        }

        else
        {
            cost += y*a;
            cost += x*a;
        }
        cout<<min(cost,ans)<<endl;
    }
}

 
