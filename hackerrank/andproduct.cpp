#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll a, ll b) {
    ll dif=b-a+1,i=0,res=0;
    for(i=0;i<32;i++){
        if(dif>(1<<i))
            continue;
        else if(((1<<i) & a) and ((1<<i) & b))
            res+=(1<<i);
    }
    return res;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
    return 0;
}