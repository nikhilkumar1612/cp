//approach is to buy the costly flowers first, once each individual buys a flower he then buys the next costlier flower with the new increased price.
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,i,ans=0,flag=1,j=0;
    cin>>n>>k;
    vector<int> c(n);
    for(i=0;i<n;i++){
        cin>>c[i];
    }
    sort(c.begin(),c.end());
    for(i=n-1;i>=0;i--){
        ans+=c[i]*flag;
        j++;
        if(j==k){
            j=0;
            flag++;
        }
    }
    cout<<ans;
}
