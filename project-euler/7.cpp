#include<bits/stdc++.h>
using namespace std;


#define ll 				long long
#define vi 				vector<ll>
#define pii				pair<ll,ll>
#define mod 			1000000007
#define inf 			1e18
#define ff 				first
#define ss 				second
#define pb				push_back
#define mpii 			map<ll,ll>
#define ps(x,y) 		fixed<<setprecision(y)<<x
#define w(t)			cin>>t; while(t--)

vector<bool>prime;
void sieve(ll n) {
	ll m = sqrt(n);
	prime.resize(n + 1, true);
	prime[0] = false;
	prime[1] = false;
	for (ll i = 2; i <= m; i++) {
		for (ll j = i * i; j <= n; j += i)
			prime[j] = false;
	}
}

int main() {
	sieve(105000);
	ll ans = 0;
	for (ll i = 0; i <= 105000; i++) {

		if (prime[i]) {
			ans++;
			if (ans == 10001) {
				cout << i;
				break;
			}
		}
	}
}