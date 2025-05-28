#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main() {
    int t=1;
    // cin>>t;
    while(t--)
    {
        long long n; cin>>n;
        long long k = n/2;
        if(n%2==1)
        {
            cout<<( (k*(n+1))/2 - ((k+1)*(n+1))/2 )<<endl;
        }
        else{
            cout<<(n*(n+2))/4 - (n*n)/4<<endl;
        }
    }
}
 
