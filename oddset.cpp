#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int odd = 0, even = 0;
        for(int i=0 ; i<2*n;i++){
            int y; cin>>y;
            (y%2==0) ? even+=1 : odd+=1;
        }

        cout<<(even==odd ? "YES":"NO")<<endl;
    }
}
